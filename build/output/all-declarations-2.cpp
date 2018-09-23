#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-2.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@outletBindingModelList' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_outletBindingModelList::cCollectionElement_outletBindingModelList (const GALGAS_propertyKind & in_mKind,
                                                                                      const GALGAS_location & in_mErrorLocation
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mKind, in_mErrorLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_outletBindingModelList::cCollectionElement_outletBindingModelList (const GALGAS_outletBindingModelList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mKind, inElement.mProperty_mErrorLocation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_outletBindingModelList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_outletBindingModelList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_outletBindingModelList (mObject.mProperty_mKind, mObject.mProperty_mErrorLocation COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_outletBindingModelList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_outletBindingModelList * operand = (cCollectionElement_outletBindingModelList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_outletBindingModelList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingModelList::GALGAS_outletBindingModelList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingModelList::GALGAS_outletBindingModelList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingModelList GALGAS_outletBindingModelList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletBindingModelList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingModelList GALGAS_outletBindingModelList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_outletBindingModelList result = GALGAS_outletBindingModelList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingModelList GALGAS_outletBindingModelList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_outletBindingModelList result = GALGAS_outletBindingModelList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingModelList GALGAS_outletBindingModelList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_outletBindingModelList result = GALGAS_outletBindingModelList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingModelList::plusAssign_operation (const GALGAS_outletBindingModelList inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_outletBindingModelList::cEnumerator_outletBindingModelList (const GALGAS_outletBindingModelList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingModelList_2D_element cEnumerator_outletBindingModelList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingModelList * p = (const cCollectionElement_outletBindingModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind cEnumerator_outletBindingModelList::current_mKind (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingModelList * p = (const cCollectionElement_outletBindingModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
  return p->mObject.mProperty_mKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_location cEnumerator_outletBindingModelList::current_mErrorLocation (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingModelList * p = (const cCollectionElement_outletBindingModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
  return p->mObject.mProperty_mErrorLocation ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @outletBindingModelList type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingModelList ("outletBindingModelList",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletBindingModelList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingModelList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletBindingModelList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingModelList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_propertyKind_property::cEnumAssociatedValues_propertyKind_property (const GALGAS_typeKind & inAssociatedValue0,
                                                                                          const GALGAS_propertyAccessibility & inAssociatedValue1
                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_propertyKind_property::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_propertyKind_toMany::cEnumAssociatedValues_propertyKind_toMany (const GALGAS_lstring & inAssociatedValue0,
                                                                                      const GALGAS_propertyAccessibility & inAssociatedValue1,
                                                                                      const GALGAS_bool & inAssociatedValue2,
                                                                                      const GALGAS_bool & inAssociatedValue3
                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_propertyKind_toMany::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_propertyKind_toOne::cEnumAssociatedValues_propertyKind_toOne (const GALGAS_lstring & inAssociatedValue0,
                                                                                    const GALGAS_propertyAccessibility & inAssociatedValue1,
                                                                                    const GALGAS_bool & inAssociatedValue2
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_propertyKind_toOne::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_propertyKind_arrayController::cEnumAssociatedValues_propertyKind_arrayController (const GALGAS_lstring & inAssociatedValue0,
                                                                                                        const GALGAS_bool & inAssociatedValue1,
                                                                                                        const GALGAS_bool & inAssociatedValue2
                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_propertyKind_arrayController::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  if (result == kOperandEqual) {
    result = mAssociatedValue2.objectCompare (ptr->mAssociatedValue2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_propertyKind_selectionController::cEnumAssociatedValues_propertyKind_selectionController (const GALGAS_string & inAssociatedValue0
                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_propertyKind_selectionController::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_propertyKind_selectionController::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_propertyKind_selectionController * ptr = dynamic_cast<const cEnumAssociatedValues_propertyKind_selectionController *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind::GALGAS_propertyKind (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_propertyKind::constructor_toMany (const GALGAS_lstring & inAssociatedValue0,
                                                             const GALGAS_propertyAccessibility & inAssociatedValue1,
                                                             const GALGAS_bool & inAssociatedValue2,
                                                             const GALGAS_bool & inAssociatedValue3
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_propertyKind::constructor_toOne (const GALGAS_lstring & inAssociatedValue0,
                                                            const GALGAS_propertyAccessibility & inAssociatedValue1,
                                                            const GALGAS_bool & inAssociatedValue2
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_propertyKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_toOne ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyKind_toOne (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_propertyKind::constructor_arrayController (const GALGAS_lstring & inAssociatedValue0,
                                                                      const GALGAS_bool & inAssociatedValue1,
                                                                      const GALGAS_bool & inAssociatedValue2
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_propertyKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_arrayController ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyKind_arrayController (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyKind::method_toMany (GALGAS_lstring & outAssociatedValue0,
                                         GALGAS_propertyAccessibility & outAssociatedValue1,
                                         GALGAS_bool & outAssociatedValue2,
                                         GALGAS_bool & outAssociatedValue3,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyKind::method_toOne (GALGAS_lstring & outAssociatedValue0,
                                        GALGAS_propertyAccessibility & outAssociatedValue1,
                                        GALGAS_bool & outAssociatedValue2,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_toOne) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @propertyKind toOne invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyKind_toOne * ptr = (const cEnumAssociatedValues_propertyKind_toOne *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyKind::method_arrayController (GALGAS_lstring & outAssociatedValue0,
                                                  GALGAS_bool & outAssociatedValue1,
                                                  GALGAS_bool & outAssociatedValue2,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_arrayController) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @propertyKind arrayController invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyKind_arrayController * ptr = (const cEnumAssociatedValues_propertyKind_arrayController *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_propertyKind [6] = {
  "(not built)",
  "property",
  "toMany",
  "toOne",
  "arrayController",
  "selectionController"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_propertyKind::getter_isProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_property == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_propertyKind::getter_isToMany (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_toMany == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_propertyKind::getter_isToOne (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_toOne == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_propertyKind::getter_isArrayController (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_arrayController == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_propertyKind::getter_isSelectionController (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selectionController == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyKind::description (C_String & ioString,
                                       const int32_t inIndentation) const {
  ioString << "<enum @propertyKind: " << gEnumNameArrayFor_propertyKind [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @propertyKind type                                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyKind ("propertyKind",
                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyKind::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyKind (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    Class for element of '@boundObjectList' list                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_boundObjectList::cCollectionElement_boundObjectList (const GALGAS_string & in_mBoundObjectString,
                                                                        const GALGAS_propertyKind & in_mKind
                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBoundObjectString, in_mKind) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_boundObjectList::cCollectionElement_boundObjectList (const GALGAS_boundObjectList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mBoundObjectString, inElement.mProperty_mKind) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_boundObjectList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_boundObjectList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_boundObjectList (mObject.mProperty_mBoundObjectString, mObject.mProperty_mKind COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_boundObjectList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_boundObjectList * operand = (cCollectionElement_boundObjectList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_boundObjectList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boundObjectList::GALGAS_boundObjectList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boundObjectList::GALGAS_boundObjectList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boundObjectList GALGAS_boundObjectList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_boundObjectList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boundObjectList GALGAS_boundObjectList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_boundObjectList result = GALGAS_boundObjectList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boundObjectList GALGAS_boundObjectList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_boundObjectList result = GALGAS_boundObjectList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boundObjectList GALGAS_boundObjectList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_boundObjectList result = GALGAS_boundObjectList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_boundObjectList::plusAssign_operation (const GALGAS_boundObjectList inOperand,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_boundObjectList::cEnumerator_boundObjectList (const GALGAS_boundObjectList & inEnumeratedObject,
                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boundObjectList_2D_element cEnumerator_boundObjectList::current (LOCATION_ARGS) const {
  const cCollectionElement_boundObjectList * p = (const cCollectionElement_boundObjectList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_boundObjectList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_boundObjectList::current_mBoundObjectString (LOCATION_ARGS) const {
  const cCollectionElement_boundObjectList * p = (const cCollectionElement_boundObjectList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_boundObjectList) ;
  return p->mObject.mProperty_mBoundObjectString ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind cEnumerator_boundObjectList::current_mKind (LOCATION_ARGS) const {
  const cCollectionElement_boundObjectList * p = (const cCollectionElement_boundObjectList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_boundObjectList) ;
  return p->mObject.mProperty_mKind ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @boundObjectList type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boundObjectList ("boundObjectList",
                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_boundObjectList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boundObjectList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_boundObjectList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boundObjectList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_observablePropertyAST_rootProperty::cEnumAssociatedValues_observablePropertyAST_rootProperty (const GALGAS_lstring & inAssociatedValue0
                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_observablePropertyAST_rootProperty::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_rootProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_rootProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_rootProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption::cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                        const GALGAS_lstring & inAssociatedValue1
                                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption::description (C_String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship::cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                            const GALGAS_lstring & inAssociatedValue1
                                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship::description (C_String & ioString,
                                                                                        const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_observablePropertyAST_rootPropertyNone::cEnumAssociatedValues_observablePropertyAST_rootPropertyNone (const GALGAS_lstring & inAssociatedValue0
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_observablePropertyAST_rootPropertyNone::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_rootPropertyNone::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_observablePropertyAST_selfProperty::cEnumAssociatedValues_observablePropertyAST_selfProperty (const GALGAS_lstring & inAssociatedValue0
                                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_observablePropertyAST_selfProperty::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_selfProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_selfProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_selfProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption::cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                        const GALGAS_lstring & inAssociatedValue1
                                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption::description (C_String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_observablePropertyAST_selfPropertyArray::cEnumAssociatedValues_observablePropertyAST_selfPropertyArray (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                              const GALGAS_lstring & inAssociatedValue1
                                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_observablePropertyAST_selfPropertyArray::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_observablePropertyAST_selfPropertyObject::cEnumAssociatedValues_observablePropertyAST_selfPropertyObject (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                const GALGAS_lstring & inAssociatedValue1
                                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_observablePropertyAST_selfPropertyObject::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_observablePropertyAST_selfPropertyNone::cEnumAssociatedValues_observablePropertyAST_selfPropertyNone (const GALGAS_lstring & inAssociatedValue0
                                                                                                                            COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_observablePropertyAST_selfPropertyNone::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_selfPropertyNone::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_observablePropertyAST_prefsProperty::cEnumAssociatedValues_observablePropertyAST_prefsProperty (const GALGAS_lstring & inAssociatedValue0
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_observablePropertyAST_prefsProperty::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_prefsProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_prefsProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_prefsProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption::cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                          const GALGAS_lstring & inAssociatedValue1
                                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption::description (C_String & ioString,
                                                                                       const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_observablePropertyAST_selfControllerProperty::cEnumAssociatedValues_observablePropertyAST_selfControllerProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                        const GALGAS_lstring & inAssociatedValue1
                                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_observablePropertyAST_selfControllerProperty::description (C_String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty::cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                                                          const GALGAS_lstring & inAssociatedValue1,
                                                                                                                                                          const GALGAS_lstring & inAssociatedValue2
                                                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty::description (C_String & ioString,
                                                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_observablePropertyAST_signatureProperty::cEnumAssociatedValues_observablePropertyAST_signatureProperty (const GALGAS_location & inAssociatedValue0
                                                                                                                              COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_observablePropertyAST_signatureProperty::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_signatureProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_signatureProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_signatureProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_observablePropertyAST_versionProperty::cEnumAssociatedValues_observablePropertyAST_versionProperty (const GALGAS_location & inAssociatedValue0
                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_observablePropertyAST_versionProperty::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_versionProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_versionProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_versionProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty::cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty (const GALGAS_location & inAssociatedValue0
                                                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty::description (C_String & ioString,
                                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyAST::GALGAS_observablePropertyAST (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_observablePropertyAST [17] = {
  "(not built)",
  "rootProperty",
  "rootPropertyWithOption",
  "rootPropertyRelationship",
  "rootPropertyNone",
  "selfProperty",
  "selfPropertyWithOption",
  "selfPropertyArray",
  "selfPropertyObject",
  "selfPropertyNone",
  "prefsProperty",
  "prefsPropertyWithOption",
  "selfControllerProperty",
  "selfControllerSecondaryProperty",
  "signatureProperty",
  "versionProperty",
  "versionShouldChangeProperty"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_observablePropertyAST::getter_isRootProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rootProperty == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_observablePropertyAST::getter_isRootPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rootPropertyWithOption == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_observablePropertyAST::getter_isRootPropertyRelationship (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rootPropertyRelationship == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_observablePropertyAST::getter_isRootPropertyNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rootPropertyNone == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_observablePropertyAST::getter_isSelfProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfProperty == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_observablePropertyAST::getter_isSelfPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfPropertyWithOption == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_observablePropertyAST::getter_isSelfPropertyArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfPropertyArray == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_observablePropertyAST::getter_isSelfPropertyObject (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfPropertyObject == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_observablePropertyAST::getter_isSelfPropertyNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfPropertyNone == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_observablePropertyAST::getter_isPrefsProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_prefsProperty == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_observablePropertyAST::getter_isPrefsPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_prefsPropertyWithOption == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_observablePropertyAST::getter_isSelfControllerProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfControllerProperty == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_observablePropertyAST::getter_isSelfControllerSecondaryProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfControllerSecondaryProperty == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_observablePropertyAST::getter_isSignatureProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_signatureProperty == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_observablePropertyAST::getter_isVersionProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_versionProperty == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_observablePropertyAST::getter_isVersionShouldChangeProperty (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_versionShouldChangeProperty == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyAST::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<enum @observablePropertyAST: " << gEnumNameArrayFor_observablePropertyAST [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @observablePropertyAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyAST ("observablePropertyAST",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_observablePropertyAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_observablePropertyAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@observablePropertyList' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_observablePropertyList::cCollectionElement_observablePropertyList (const GALGAS_observablePropertyAST & in_mObservableProperty
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mObservableProperty) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_observablePropertyList::cCollectionElement_observablePropertyList (const GALGAS_observablePropertyList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mObservableProperty) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_observablePropertyList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_observablePropertyList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_observablePropertyList (mObject.mProperty_mObservableProperty COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_observablePropertyList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObservableProperty" ":" ;
  mObject.mProperty_mObservableProperty.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_observablePropertyList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_observablePropertyList * operand = (cCollectionElement_observablePropertyList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_observablePropertyList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList::GALGAS_observablePropertyList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList::GALGAS_observablePropertyList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList GALGAS_observablePropertyList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_observablePropertyList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_observablePropertyAST & in_mObservableProperty
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_observablePropertyList * p = NULL ;
  macroMyNew (p, cCollectionElement_observablePropertyList (in_mObservableProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList GALGAS_observablePropertyList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_observablePropertyList result = GALGAS_observablePropertyList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList GALGAS_observablePropertyList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_observablePropertyList result = GALGAS_observablePropertyList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList GALGAS_observablePropertyList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_observablePropertyList result = GALGAS_observablePropertyList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyList::plusAssign_operation (const GALGAS_observablePropertyList inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_observablePropertyList::cEnumerator_observablePropertyList (const GALGAS_observablePropertyList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList_2D_element cEnumerator_observablePropertyList::current (LOCATION_ARGS) const {
  const cCollectionElement_observablePropertyList * p = (const cCollectionElement_observablePropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_observablePropertyList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyAST cEnumerator_observablePropertyList::current_mObservableProperty (LOCATION_ARGS) const {
  const cCollectionElement_observablePropertyList * p = (const cCollectionElement_observablePropertyList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_observablePropertyList) ;
  return p->mObject.mProperty_mObservableProperty ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @observablePropertyList type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyList ("observablePropertyList",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_observablePropertyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_observablePropertyList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension Getter '@observablePropertyAST modelStringForSelf'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_5361 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_5361->mAssociatedValue0 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string (".rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 137)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 137)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 137)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_5480 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_5480->mAssociatedValue0 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string (".rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 139)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 139)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 139)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_5658 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_5658->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_5658->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string (".rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 141)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 141)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 141)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 141)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("observable-property.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 141)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 141)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_5795 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_5795->mAssociatedValue0 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string (".rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 143)).add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("observable-property.galgas", 143)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 143)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 143)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_5899 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_5899->mAssociatedValue0 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 145)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 145)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 145)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_6066 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_6066->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_6066->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 147)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 147)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 147)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 147)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("observable-property.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 147)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 147)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_6211 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_6211->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_6211->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 149)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 149)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 149)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_6394 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_6394->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_6394->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 151)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 151)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 151)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 151)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 151)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_6502 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_6502->mAssociatedValue0 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 153)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 153)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 153)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_6627 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_6627->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 155)).add_operation (GALGAS_string ("!."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 155)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 155)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 155)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_6815 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_6815->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_6815->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 157)).add_operation (GALGAS_string ("!."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 157)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 157)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 157)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 157)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("observable-property.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 157)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 157)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_6976 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_6976->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_6976->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 159)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("observable-property.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 159)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 159)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 159)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 159)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_7221 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_7221->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_7221->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_7221->mAssociatedValue2 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 161)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("observable-property.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 161)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 161)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 161)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 161)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 161)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 161)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 161)) ;
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
  }
//---
  return result_outResult ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Extension Getter '@observablePropertyAST modelStringFunctionArgument'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_7793 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_7793->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("root_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 176)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_7893 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_7893->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("root_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 178)).add_operation (GALGAS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 178)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_8027 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8027->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_8027->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("root_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 180)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 180)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("observable-property.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 180)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_8189 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_8189->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_8189->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("root_").add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("observable-property.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 182)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 182)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 182)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_8274 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8274->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 184)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 184)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_8408 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8408->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_8408->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 186)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 186)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("observable-property.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 186)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_8555 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8555->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_8555->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 188)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 188)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 188)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_8703 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8703->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_8703->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 190)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 190)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 190)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_8802 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8802->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 192)).add_operation (GALGAS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 192)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_8889 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8889->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("prefs_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 194)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_9025 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9025->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_9025->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("prefs_").add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 196)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 196)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("observable-property.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 196)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_9167 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_9167->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9167->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("observable-property.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 198)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 198)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 198)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_9379 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_9379->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9379->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_9379->mAssociatedValue2 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("observable-property.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 200)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 200)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 200)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 200)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 200)) ;
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
  }
//---
  return result_outResult ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension Getter '@observablePropertyAST needs_unwSelf'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool extensionGetter_needs_5F_unwSelf (const GALGAS_observablePropertyAST & inObject,
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
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      result_outResult = GALGAS_bool (true) ;
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
  }
//---
  return result_outResult ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension Getter '@observablePropertyAST isPropertyDefined'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool extensionGetter_isPropertyDefined (const GALGAS_observablePropertyAST & inObject,
                                               const GALGAS_semanticContextEX & constinArgument_inSemanticContext,
                                               const GALGAS_observablePropertyMap & constinArgument_inRootObservableProperties,
                                               const GALGAS_observablePropertyMap & constinArgument_inObservableProperties,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_11201 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_11201->mAssociatedValue0 ;
      result_outResult = constinArgument_inRootObservableProperties.getter_hasKey (extractedValue_propertyName.getter_string (HERE) COMMA_SOURCE_FILE ("observable-property.galgas", 259)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_11324 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_11324->mAssociatedValue0 ;
      result_outResult = constinArgument_inRootObservableProperties.getter_hasKey (extractedValue_propertyName.getter_string (HERE) COMMA_SOURCE_FILE ("observable-property.galgas", 261)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_11480 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_11480->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_11480->mAssociatedValue1 ;
      result_outResult = constinArgument_inRootObservableProperties.getter_hasKey (extractedValue_propertyName.getter_string (HERE) COMMA_SOURCE_FILE ("observable-property.galgas", 263)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_11621 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_11621->mAssociatedValue0 ;
      result_outResult = constinArgument_inRootObservableProperties.getter_hasKey (extractedValue_relationshipName.getter_string (HERE) COMMA_SOURCE_FILE ("observable-property.galgas", 265)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_11736 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_11736->mAssociatedValue0 ;
      result_outResult = constinArgument_inObservableProperties.getter_hasKey (extractedValue_propertyName.getter_string (HERE) COMMA_SOURCE_FILE ("observable-property.galgas", 267)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_11888 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_11888->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_11888->mAssociatedValue1 ;
      result_outResult = constinArgument_inObservableProperties.getter_hasKey (extractedValue_propertyName.getter_string (HERE) COMMA_SOURCE_FILE ("observable-property.galgas", 269)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_12044 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_12044->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_12044->mAssociatedValue1 ;
      result_outResult = constinArgument_inObservableProperties.getter_hasKey (extractedValue_propertyName.getter_string (HERE) COMMA_SOURCE_FILE ("observable-property.galgas", 271)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_12201 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_12201->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_12201->mAssociatedValue1 ;
      result_outResult = constinArgument_inObservableProperties.getter_hasKey (extractedValue_propertyName.getter_string (HERE) COMMA_SOURCE_FILE ("observable-property.galgas", 273)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_12320 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_12320->mAssociatedValue0 ;
      result_outResult = constinArgument_inObservableProperties.getter_hasKey (extractedValue_propertyName.getter_string (HERE) COMMA_SOURCE_FILE ("observable-property.galgas", 275)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_12465 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_12465->mAssociatedValue0 ;
      result_outResult = constinArgument_inSemanticContext.getter_mPreferencesObservablePropertyMap (HERE).getter_hasKey (extractedValue_propertyName.getter_string (HERE) COMMA_SOURCE_FILE ("observable-property.galgas", 277)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_12647 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_12647->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_12647->mAssociatedValue1 ;
      result_outResult = constinArgument_inSemanticContext.getter_mPreferencesObservablePropertyMap (HERE).getter_hasKey (extractedValue_propertyName.getter_string (HERE) COMMA_SOURCE_FILE ("observable-property.galgas", 279)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_12805 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_12805->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_12805->mAssociatedValue1 ;
      result_outResult = constinArgument_inObservableProperties.getter_hasKey (extractedValue_controllerName.getter_string (HERE) COMMA_SOURCE_FILE ("observable-property.galgas", 281)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_13010 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_13010->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_13010->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_13010->mAssociatedValue2 ;
      result_outResult = constinArgument_inObservableProperties.getter_hasKey (extractedValue_controllerName.getter_string (HERE) COMMA_SOURCE_FILE ("observable-property.galgas", 283)) ;
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
  }
//---
  return result_outResult ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Extension Getter '@observablePropertyAST location'                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_13469 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_13469->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_13557 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_13557->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_13649 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_13649->mAssociatedValue1 ;
      result_outResult = extractedValue_optionName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_13747 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_13747->mAssociatedValue1 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_13831 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_13831->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_13927 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_13927->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_14018 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_14018->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_14110 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_14110->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_14198 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_14198->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_14283 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_14283->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_14380 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_14380->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_14476 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_14476->mAssociatedValue1 ;
      result_outResult = extractedValue_propertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_14601 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_14601->mAssociatedValue2 ;
      result_outResult = extractedValue_secondaryPropertyName.getter_location (HERE) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_signatureProperty * extractPtr_14674 = (const cEnumAssociatedValues_observablePropertyAST_signatureProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_location = extractPtr_14674->mAssociatedValue0 ;
      result_outResult = extractedValue_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_versionProperty * extractPtr_14745 = (const cEnumAssociatedValues_observablePropertyAST_versionProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_location = extractPtr_14745->mAssociatedValue0 ;
      result_outResult = extractedValue_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty * extractPtr_14828 = (const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_location = extractPtr_14828->mAssociatedValue0 ;
      result_outResult = extractedValue_location ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Extension method '@observablePropertyAST analyzeObservablePropertyEX'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_analyzeObservablePropertyEX (const GALGAS_observablePropertyAST inObject,
                                                  const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                  const GALGAS_semanticContextEX constinArgument_inSemanticContext,
                                                  const GALGAS_observablePropertyMap constinArgument_inObservablePropertyMap,
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
      GALGAS_typeKind var_type_15492 = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 345)) ;
      outArgument_outKind = GALGAS_propertyKind::constructor_property (var_type_15492, GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 346))  COMMA_SOURCE_FILE ("observable-property.galgas", 346)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (var_type_15492, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 347)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      GALGAS_typeKind var_type_15694 = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 349)) ;
      outArgument_outKind = GALGAS_propertyKind::constructor_property (var_type_15694, GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 350))  COMMA_SOURCE_FILE ("observable-property.galgas", 350)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (var_type_15694, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 351)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      GALGAS_typeKind var_type_15901 = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 353)) ;
      outArgument_outKind = GALGAS_propertyKind::constructor_property (var_type_15901, GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 354))  COMMA_SOURCE_FILE ("observable-property.galgas", 354)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (var_type_15901, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 355)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_16281 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_16281->mAssociatedValue0 ;
      GALGAS_string joker_16196_3 ; // Joker input parameter
      GALGAS_actionMap joker_16196_2 ; // Joker input parameter
      GALGAS_bool joker_16196_1 ; // Joker input parameter
      constinArgument_inRootObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outKind, joker_16196_3, joker_16196_2, joker_16196_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 357)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 362)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_17053 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_17053->mAssociatedValue0 ;
      GALGAS_propertyKind var_kind_16410 ;
      GALGAS_string joker_16418_3 ; // Joker input parameter
      GALGAS_actionMap joker_16418_2 ; // Joker input parameter
      GALGAS_bool joker_16418_1 ; // Joker input parameter
      constinArgument_inRootObservablePropertyMap.method_searchKey (extractedValue_propertyName, var_kind_16410, joker_16418_3, joker_16418_2, joker_16418_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 364)) ;
      switch (var_kind_16410.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 371)), GALGAS_string ("a property cannot accept 'none'"), fixItArray1  COMMA_SOURCE_FILE ("observable-property.galgas", 371)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 373)), GALGAS_string ("an array property cannot accept 'none'"), fixItArray2  COMMA_SOURCE_FILE ("observable-property.galgas", 373)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 375)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 375))  COMMA_SOURCE_FILE ("observable-property.galgas", 375)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 377)), GALGAS_string ("an array controller cannot accept 'none'"), fixItArray3  COMMA_SOURCE_FILE ("observable-property.galgas", 377)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 379)), GALGAS_string ("a selection controller cannot accept 'none'"), fixItArray4  COMMA_SOURCE_FILE ("observable-property.galgas", 379)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 381)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_18266 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_18266->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_18266->mAssociatedValue1 ;
      GALGAS_propertyKind var_kind_17208 ;
      GALGAS_string joker_17216_3 ; // Joker input parameter
      GALGAS_actionMap joker_17216_2 ; // Joker input parameter
      GALGAS_bool joker_17216_1 ; // Joker input parameter
      constinArgument_inRootObservablePropertyMap.method_searchKey (extractedValue_propertyName, var_kind_17208, joker_17216_3, joker_17216_2, joker_17216_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 383)) ;
      switch (var_kind_17208.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 390)), GALGAS_string ("a property cannot accept any option"), fixItArray5  COMMA_SOURCE_FILE ("observable-property.galgas", 390)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 393)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 393))  COMMA_SOURCE_FILE ("observable-property.galgas", 393)) ;
          }else if (kBoolFalse == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_optionName.getter_location (SOURCE_FILE ("observable-property.galgas", 395)), GALGAS_string ("unknown option (accepted : 'count')"), fixItArray7  COMMA_SOURCE_FILE ("observable-property.galgas", 395)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 398)), GALGAS_string ("a toOne property cannot accept any option"), fixItArray8  COMMA_SOURCE_FILE ("observable-property.galgas", 398)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
          if (kBoolTrue == test_9) {
            outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 401)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 401))  COMMA_SOURCE_FILE ("observable-property.galgas", 401)) ;
          }else if (kBoolFalse == test_9) {
            const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("empty"))).boolEnum () ;
            if (kBoolTrue == test_10) {
              outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 403)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 403))  COMMA_SOURCE_FILE ("observable-property.galgas", 403)) ;
            }else if (kBoolFalse == test_10) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (extractedValue_optionName.getter_location (SOURCE_FILE ("observable-property.galgas", 405)), GALGAS_string ("unknown option (accepted : 'count', 'empty')"), fixItArray11  COMMA_SOURCE_FILE ("observable-property.galgas", 405)) ;
              outArgument_outKind.drop () ; // Release error dropped variable
            }
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 408)), GALGAS_string ("a selection controller cannot accept any option"), fixItArray12  COMMA_SOURCE_FILE ("observable-property.galgas", 408)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 410)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_19339 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_19339->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_19339->mAssociatedValue1 ;
      GALGAS_propertyKind var_kind_18452 ;
      GALGAS_string joker_18460_3 ; // Joker input parameter
      GALGAS_actionMap joker_18460_2 ; // Joker input parameter
      GALGAS_bool joker_18460_1 ; // Joker input parameter
      constinArgument_inRootObservablePropertyMap.method_searchKey (extractedValue_relationshipName, var_kind_18452, joker_18460_3, joker_18460_2, joker_18460_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 412)) ;
      switch (var_kind_18452.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (extractedValue_relationshipName.getter_location (SOURCE_FILE ("observable-property.galgas", 419)), GALGAS_string ("a property cannot accept 'all'"), fixItArray13  COMMA_SOURCE_FILE ("observable-property.galgas", 419)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          const cEnumAssociatedValues_propertyKind_toMany * extractPtr_18889 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_kind_18452.unsafePointer ()) ;
          const GALGAS_lstring extractedValue_typeName = extractPtr_18889->mAssociatedValue0 ;
          GALGAS_observablePropertyMap var_observablePropertyMap_18772 ;
          GALGAS_objectKind joker_18782 ; // Joker input parameter
          constinArgument_inSemanticContext.getter_mEntityObservablePropertyMap (HERE).method_searchKey (GALGAS_lstring::constructor_new (extractedValue_typeName.getter_string (SOURCE_FILE ("observable-property.galgas", 422)), extractedValue_relationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("observable-property.galgas", 422)), var_observablePropertyMap_18772, joker_18782, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 421)) ;
          GALGAS_string joker_18879_3 ; // Joker input parameter
          GALGAS_actionMap joker_18879_2 ; // Joker input parameter
          GALGAS_bool joker_18879_1 ; // Joker input parameter
          var_observablePropertyMap_18772.method_searchKey (extractedValue_propertyName, outArgument_outKind, joker_18879_3, joker_18879_2, joker_18879_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 426)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_relationshipName.getter_location (SOURCE_FILE ("observable-property.galgas", 432)), GALGAS_string ("a toOne property cannot accept 'all'"), fixItArray14  COMMA_SOURCE_FILE ("observable-property.galgas", 432)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (extractedValue_relationshipName.getter_location (SOURCE_FILE ("observable-property.galgas", 434)), GALGAS_string ("an array controller cannot accept 'all'"), fixItArray15  COMMA_SOURCE_FILE ("observable-property.galgas", 434)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (extractedValue_relationshipName.getter_location (SOURCE_FILE ("observable-property.galgas", 436)), GALGAS_string ("an array controller cannot accept 'all'"), fixItArray16  COMMA_SOURCE_FILE ("observable-property.galgas", 436)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GALGAS_string ("[").add_operation (extensionGetter_swiftTypeName (var_kind_18452, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 438)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 438)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 438)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 438)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 438)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_20198 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_20198->mAssociatedValue0 ;
      GALGAS_string joker_19467_3 ; // Joker input parameter
      GALGAS_actionMap joker_19467_2 ; // Joker input parameter
      GALGAS_bool joker_19467_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outKind, joker_19467_3, joker_19467_2, joker_19467_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 440)) ;
      switch (outArgument_outKind.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 447)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 449)), GALGAS_string ("a toMany property cannot accept be observed"), fixItArray17  COMMA_SOURCE_FILE ("observable-property.galgas", 449)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 451)), GALGAS_string ("a toOne property cannot accept be observed"), fixItArray18  COMMA_SOURCE_FILE ("observable-property.galgas", 451)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 453)), GALGAS_string ("an array controller cannot be observed"), fixItArray19  COMMA_SOURCE_FILE ("observable-property.galgas", 453)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 455)), GALGAS_string ("a selection controller cannot be observed"), fixItArray20  COMMA_SOURCE_FILE ("observable-property.galgas", 455)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_21394 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_21394->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_21394->mAssociatedValue1 ;
      GALGAS_propertyKind var_kind_20349 ;
      GALGAS_string joker_20357_3 ; // Joker input parameter
      GALGAS_actionMap joker_20357_2 ; // Joker input parameter
      GALGAS_bool joker_20357_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_propertyName, var_kind_20349, joker_20357_3, joker_20357_2, joker_20357_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 458)) ;
      switch (var_kind_20349.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 465)), GALGAS_string ("an atomic property accepts no option"), fixItArray21  COMMA_SOURCE_FILE ("observable-property.galgas", 465)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          const enumGalgasBool test_22 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
          if (kBoolTrue == test_22) {
            outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 468)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 468))  COMMA_SOURCE_FILE ("observable-property.galgas", 468)) ;
          }else if (kBoolFalse == test_22) {
            TC_Array <C_FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (extractedValue_optionName.getter_location (SOURCE_FILE ("observable-property.galgas", 470)), GALGAS_string ("unknown option (accepted : 'count')"), fixItArray23  COMMA_SOURCE_FILE ("observable-property.galgas", 470)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray24 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 473)), GALGAS_string ("a toOne property accepts no option"), fixItArray24  COMMA_SOURCE_FILE ("observable-property.galgas", 473)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          const enumGalgasBool test_25 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
          if (kBoolTrue == test_25) {
            outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 476)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 476))  COMMA_SOURCE_FILE ("observable-property.galgas", 476)) ;
          }else if (kBoolFalse == test_25) {
            const enumGalgasBool test_26 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("empty"))).boolEnum () ;
            if (kBoolTrue == test_26) {
              outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 478)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 478))  COMMA_SOURCE_FILE ("observable-property.galgas", 478)) ;
            }else if (kBoolFalse == test_26) {
              TC_Array <C_FixItDescription> fixItArray27 ;
              inCompiler->emitSemanticError (extractedValue_optionName.getter_location (SOURCE_FILE ("observable-property.galgas", 480)), GALGAS_string ("unknown option (accepted : 'count', 'empty')"), fixItArray27  COMMA_SOURCE_FILE ("observable-property.galgas", 480)) ;
              outArgument_outKind.drop () ; // Release error dropped variable
            }
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray28 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 483)), GALGAS_string ("a selection controller accepts no option"), fixItArray28  COMMA_SOURCE_FILE ("observable-property.galgas", 483)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 485)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_22457 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_22457->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_22457->mAssociatedValue1 ;
      GALGAS_propertyKind var_kind_21568 ;
      GALGAS_string joker_21576_3 ; // Joker input parameter
      GALGAS_actionMap joker_21576_2 ; // Joker input parameter
      GALGAS_bool joker_21576_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_propertyName, var_kind_21568, joker_21576_3, joker_21576_2, joker_21576_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 487)) ;
      switch (var_kind_21568.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 494)), GALGAS_string ("an atomic property accepts no option"), fixItArray29  COMMA_SOURCE_FILE ("observable-property.galgas", 494)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          const cEnumAssociatedValues_propertyKind_toMany * extractPtr_22008 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_kind_21568.unsafePointer ()) ;
          const GALGAS_lstring extractedValue_typeName = extractPtr_22008->mAssociatedValue0 ;
          GALGAS_observablePropertyMap var_entityObservablePropertyMap_21878 ;
          GALGAS_objectKind joker_21888 ; // Joker input parameter
          constinArgument_inSemanticContext.getter_mEntityObservablePropertyMap (HERE).method_searchKey (extractedValue_typeName, var_entityObservablePropertyMap_21878, joker_21888, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 496)) ;
          GALGAS_string joker_21998_3 ; // Joker input parameter
          GALGAS_actionMap joker_21998_2 ; // Joker input parameter
          GALGAS_bool joker_21998_1 ; // Joker input parameter
          var_entityObservablePropertyMap_21878.method_searchKey (extractedValue_elementPropertyName, outArgument_outKind, joker_21998_3, joker_21998_2, joker_21998_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 501)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray30 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 507)), GALGAS_string ("a toOne property accepts no option"), fixItArray30  COMMA_SOURCE_FILE ("observable-property.galgas", 507)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray31 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 509)), GALGAS_string ("an array controller accepts no option"), fixItArray31  COMMA_SOURCE_FILE ("observable-property.galgas", 509)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray32 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 511)), GALGAS_string ("a selection controller accepts no option"), fixItArray32  COMMA_SOURCE_FILE ("observable-property.galgas", 511)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GALGAS_string ("[").add_operation (extensionGetter_swiftTypeName (var_kind_21568, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 513)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 513)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 514)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 514)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_23499 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_23499->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_23499->mAssociatedValue1 ;
      GALGAS_propertyKind var_kind_22632 ;
      GALGAS_string joker_22640_3 ; // Joker input parameter
      GALGAS_actionMap joker_22640_2 ; // Joker input parameter
      GALGAS_bool joker_22640_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_propertyName, var_kind_22632, joker_22640_3, joker_22640_2, joker_22640_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 516)) ;
      switch (var_kind_22632.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray33 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 523)), GALGAS_string ("an atomic property does not accept 'one'"), fixItArray33  COMMA_SOURCE_FILE ("observable-property.galgas", 523)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray34 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 525)), GALGAS_string ("a toOne property does not accept 'one'"), fixItArray34  COMMA_SOURCE_FILE ("observable-property.galgas", 525)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          const cEnumAssociatedValues_propertyKind_toOne * extractPtr_23176 = (const cEnumAssociatedValues_propertyKind_toOne *) (var_kind_22632.unsafePointer ()) ;
          const GALGAS_lstring extractedValue_typeName = extractPtr_23176->mAssociatedValue0 ;
          GALGAS_observablePropertyMap var_entityObservablePropertyMap_23046 ;
          GALGAS_objectKind joker_23056 ; // Joker input parameter
          constinArgument_inSemanticContext.getter_mEntityObservablePropertyMap (HERE).method_searchKey (extractedValue_typeName, var_entityObservablePropertyMap_23046, joker_23056, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 527)) ;
          GALGAS_string joker_23166_3 ; // Joker input parameter
          GALGAS_actionMap joker_23166_2 ; // Joker input parameter
          GALGAS_bool joker_23166_1 ; // Joker input parameter
          var_entityObservablePropertyMap_23046.method_searchKey (extractedValue_elementPropertyName, outArgument_outKind, joker_23166_3, joker_23166_2, joker_23166_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 532)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray35 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 538)), GALGAS_string ("an array controller does not accept 'one'"), fixItArray35  COMMA_SOURCE_FILE ("observable-property.galgas", 538)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray36 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 540)), GALGAS_string ("a selection controller does not accept 'one'"), fixItArray36  COMMA_SOURCE_FILE ("observable-property.galgas", 540)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 542)).add_operation (GALGAS_string ("\?"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 542)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_24293 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_24293->mAssociatedValue0 ;
      GALGAS_propertyKind var_kind_23640 ;
      GALGAS_string joker_23648_3 ; // Joker input parameter
      GALGAS_actionMap joker_23648_2 ; // Joker input parameter
      GALGAS_bool joker_23648_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_propertyName, var_kind_23640, joker_23648_3, joker_23648_2, joker_23648_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 544)) ;
      switch (var_kind_23640.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray37 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 551)), GALGAS_string ("an atomic property does not accept 'none'"), fixItArray37  COMMA_SOURCE_FILE ("observable-property.galgas", 551)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray38 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 553)), GALGAS_string ("a toOne property does not accept 'none'"), fixItArray38  COMMA_SOURCE_FILE ("observable-property.galgas", 553)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 555)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 555))  COMMA_SOURCE_FILE ("observable-property.galgas", 555)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray39 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 557)), GALGAS_string ("an array controller does not accept 'none'"), fixItArray39  COMMA_SOURCE_FILE ("observable-property.galgas", 557)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray40 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 559)), GALGAS_string ("a selection controller does not accept 'none'"), fixItArray40  COMMA_SOURCE_FILE ("observable-property.galgas", 559)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 561)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_24535 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_24535->mAssociatedValue0 ;
      GALGAS_string joker_24450_3 ; // Joker input parameter
      GALGAS_actionMap joker_24450_2 ; // Joker input parameter
      GALGAS_bool joker_24450_1 ; // Joker input parameter
      constinArgument_inSemanticContext.getter_mPreferencesObservablePropertyMap (HERE).method_searchKey (extractedValue_propertyName, outArgument_outKind, joker_24450_3, joker_24450_2, joker_24450_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 563)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 568)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_25639 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_25639->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_25639->mAssociatedValue1 ;
      GALGAS_propertyKind var_kind_24715 ;
      GALGAS_string joker_24723_3 ; // Joker input parameter
      GALGAS_actionMap joker_24723_2 ; // Joker input parameter
      GALGAS_bool joker_24723_1 ; // Joker input parameter
      constinArgument_inSemanticContext.getter_mPreferencesObservablePropertyMap (HERE).method_searchKey (extractedValue_propertyName, var_kind_24715, joker_24723_3, joker_24723_2, joker_24723_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 570)) ;
      switch (var_kind_24715.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray41 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 577)), GALGAS_string ("a property cannot accept any option"), fixItArray41  COMMA_SOURCE_FILE ("observable-property.galgas", 577)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray42 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 579)), GALGAS_string ("a toMany property cannot accept any option"), fixItArray42  COMMA_SOURCE_FILE ("observable-property.galgas", 579)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray43 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 581)), GALGAS_string ("a toOne property cannot accept any option"), fixItArray43  COMMA_SOURCE_FILE ("observable-property.galgas", 581)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
          if (kBoolTrue == test_44) {
            outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 584)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 584))  COMMA_SOURCE_FILE ("observable-property.galgas", 584)) ;
          }else if (kBoolFalse == test_44) {
            const enumGalgasBool test_45 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("empty"))).boolEnum () ;
            if (kBoolTrue == test_45) {
              outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 586)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 586))  COMMA_SOURCE_FILE ("observable-property.galgas", 586)) ;
            }else if (kBoolFalse == test_45) {
              TC_Array <C_FixItDescription> fixItArray46 ;
              inCompiler->emitSemanticError (extractedValue_optionName.getter_location (SOURCE_FILE ("observable-property.galgas", 588)), GALGAS_string ("unknown option (accepted : 'count', 'empty')"), fixItArray46  COMMA_SOURCE_FILE ("observable-property.galgas", 588)) ;
              outArgument_outKind.drop () ; // Release error dropped variable
            }
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray47 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 591)), GALGAS_string ("a selection controller cannot accept any option"), fixItArray47  COMMA_SOURCE_FILE ("observable-property.galgas", 591)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 593)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_26991 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_26991->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_26991->mAssociatedValue1 ;
      GALGAS_propertyKind var_propertyKind_25818 ;
      GALGAS_string joker_25826_3 ; // Joker input parameter
      GALGAS_actionMap joker_25826_2 ; // Joker input parameter
      GALGAS_bool joker_25826_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_controllerName, var_propertyKind_25818, joker_25826_3, joker_25826_2, joker_25826_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 595)) ;
      switch (var_propertyKind_25818.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray48 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 602)), GALGAS_string ("a property cannot accept any option"), fixItArray48  COMMA_SOURCE_FILE ("observable-property.galgas", 602)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray49 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 604)), GALGAS_string ("a toMany property cannot accept any option"), fixItArray49  COMMA_SOURCE_FILE ("observable-property.galgas", 604)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray50 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 606)), GALGAS_string ("a toOne property cannot accept any option"), fixItArray50  COMMA_SOURCE_FILE ("observable-property.galgas", 606)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_26624 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_propertyKind_25818.unsafePointer ()) ;
          const GALGAS_lstring extractedValue_typeName = extractPtr_26624->mAssociatedValue0 ;
          const GALGAS_bool extractedValue_graphic = extractPtr_26624->mAssociatedValue1 ;
          const GALGAS_bool extractedValue_isEntity = extractPtr_26624->mAssociatedValue2 ;
          GALGAS_bool test_51 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string ("sortedArray"))) ;
          if (kBoolTrue != test_51.boolEnum ()) {
            test_51 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string ("selectedArray"))) ;
          }
          const enumGalgasBool test_52 = test_51.boolEnum () ;
          if (kBoolTrue == test_52) {
            outArgument_outKind = GALGAS_propertyKind::constructor_toMany (extractedValue_typeName, GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 611)), extractedValue_graphic, extractedValue_isEntity  COMMA_SOURCE_FILE ("observable-property.galgas", 609)) ;
          }else if (kBoolFalse == test_52) {
            TC_Array <C_FixItDescription> fixItArray53 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 616)), GALGAS_string ("unknown option (accepted : 'sortedArray' or 'selectedArray')"), fixItArray53  COMMA_SOURCE_FILE ("observable-property.galgas", 616)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          const cEnumAssociatedValues_propertyKind_selectionController * extractPtr_26906 = (const cEnumAssociatedValues_propertyKind_selectionController *) (var_propertyKind_25818.unsafePointer ()) ;
          const GALGAS_string extractedValue_entityName = extractPtr_26906->mAssociatedValue0 ;
          GALGAS_observablePropertyMap var_observablePropertyMap_26820 ;
          GALGAS_objectKind joker_26830 ; // Joker input parameter
          constinArgument_inSemanticContext.getter_mEntityObservablePropertyMap (HERE).method_searchKey (GALGAS_lstring::constructor_new (extractedValue_entityName, extractedValue_controllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("observable-property.galgas", 622)), var_observablePropertyMap_26820, joker_26830, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 621)) ;
          GALGAS_string joker_26903_3 ; // Joker input parameter
          GALGAS_actionMap joker_26903_2 ; // Joker input parameter
          GALGAS_bool joker_26903_1 ; // Joker input parameter
          var_observablePropertyMap_26820.method_searchKey (extractedValue_propertyName, outArgument_outKind, joker_26903_3, joker_26903_2, joker_26903_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 626)) ;
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 628)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_27666 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_27666->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_27666->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_27666->mAssociatedValue2 ;
      GALGAS_propertyKind joker_27168_4 ; // Joker input parameter
      GALGAS_string joker_27168_3 ; // Joker input parameter
      GALGAS_actionMap joker_27168_2 ; // Joker input parameter
      GALGAS_bool joker_27168_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_controllerName, joker_27168_4, joker_27168_3, joker_27168_2, joker_27168_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 630)) ;
      GALGAS_bool test_54 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string ("sortedArray"))) ;
      if (kBoolTrue == test_54.boolEnum ()) {
        test_54 = GALGAS_bool (kIsEqual, extractedValue_secondaryPropertyName.getter_string (HERE).objectCompare (GALGAS_string ("count"))) ;
      }
      const enumGalgasBool test_55 = test_54.boolEnum () ;
      if (kBoolTrue == test_55) {
        outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 632)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 632))  COMMA_SOURCE_FILE ("observable-property.galgas", 632)) ;
      }else if (kBoolFalse == test_55) {
        GALGAS_bool test_56 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string ("selectedArray"))) ;
        if (kBoolTrue == test_56.boolEnum ()) {
          test_56 = GALGAS_bool (kIsEqual, extractedValue_secondaryPropertyName.getter_string (HERE).objectCompare (GALGAS_string ("count"))) ;
        }
        const enumGalgasBool test_57 = test_56.boolEnum () ;
        if (kBoolTrue == test_57) {
          outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 634)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 634))  COMMA_SOURCE_FILE ("observable-property.galgas", 634)) ;
        }else if (kBoolFalse == test_57) {
          TC_Array <C_FixItDescription> fixItArray58 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 636)), GALGAS_string ("unknown option"), fixItArray58  COMMA_SOURCE_FILE ("observable-property.galgas", 636)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 638)) ;
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Extension method '@observablePropertyAST analyzeObservableProperty'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
      GALGAS_typeKind var_type_28132 = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 653)) ;
      outArgument_outKind = GALGAS_propertyKind::constructor_property (var_type_28132, GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 654))  COMMA_SOURCE_FILE ("observable-property.galgas", 654)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (var_type_28132, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 655)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      GALGAS_typeKind var_type_28334 = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 657)) ;
      outArgument_outKind = GALGAS_propertyKind::constructor_property (var_type_28334, GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 658))  COMMA_SOURCE_FILE ("observable-property.galgas", 658)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (var_type_28334, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 659)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      GALGAS_typeKind var_type_28541 = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 661)) ;
      outArgument_outKind = GALGAS_propertyKind::constructor_property (var_type_28541, GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 662))  COMMA_SOURCE_FILE ("observable-property.galgas", 662)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (var_type_28541, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 663)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_28910 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_28910->mAssociatedValue0 ;
      GALGAS_actionMap joker_28826 ; // Joker input parameter
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outKind, joker_28826, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 665)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 670)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_29671 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_29671->mAssociatedValue0 ;
      GALGAS_propertyKind var_kind_29029 ;
      GALGAS_actionMap joker_29037 ; // Joker input parameter
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_propertyName, var_kind_29029, joker_29037, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 672)) ;
      switch (var_kind_29029.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 679)), GALGAS_string ("a property cannot accept 'none'"), fixItArray1  COMMA_SOURCE_FILE ("observable-property.galgas", 679)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 681)), GALGAS_string ("an array property cannot accept 'none'"), fixItArray2  COMMA_SOURCE_FILE ("observable-property.galgas", 681)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 683)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 683))  COMMA_SOURCE_FILE ("observable-property.galgas", 683)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 685)), GALGAS_string ("an array controller cannot accept 'none'"), fixItArray3  COMMA_SOURCE_FILE ("observable-property.galgas", 685)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 687)), GALGAS_string ("a selection controller cannot accept 'none'"), fixItArray4  COMMA_SOURCE_FILE ("observable-property.galgas", 687)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 689)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_30873 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_30873->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_30873->mAssociatedValue1 ;
      GALGAS_propertyKind var_kind_29816 ;
      GALGAS_actionMap joker_29824 ; // Joker input parameter
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_propertyName, var_kind_29816, joker_29824, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 691)) ;
      switch (var_kind_29816.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 698)), GALGAS_string ("a property cannot accept any option"), fixItArray5  COMMA_SOURCE_FILE ("observable-property.galgas", 698)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 701)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 701))  COMMA_SOURCE_FILE ("observable-property.galgas", 701)) ;
          }else if (kBoolFalse == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_optionName.getter_location (SOURCE_FILE ("observable-property.galgas", 703)), GALGAS_string ("unknown option (accepted : 'count')"), fixItArray7  COMMA_SOURCE_FILE ("observable-property.galgas", 703)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 706)), GALGAS_string ("a toOne property cannot accept any option"), fixItArray8  COMMA_SOURCE_FILE ("observable-property.galgas", 706)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
          if (kBoolTrue == test_9) {
            outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 709)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 709))  COMMA_SOURCE_FILE ("observable-property.galgas", 709)) ;
          }else if (kBoolFalse == test_9) {
            const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("empty"))).boolEnum () ;
            if (kBoolTrue == test_10) {
              outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 711)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 711))  COMMA_SOURCE_FILE ("observable-property.galgas", 711)) ;
            }else if (kBoolFalse == test_10) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (extractedValue_optionName.getter_location (SOURCE_FILE ("observable-property.galgas", 713)), GALGAS_string ("unknown option (accepted : 'count', 'empty')"), fixItArray11  COMMA_SOURCE_FILE ("observable-property.galgas", 713)) ;
              outArgument_outKind.drop () ; // Release error dropped variable
            }
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 716)), GALGAS_string ("a selection controller cannot accept any option"), fixItArray12  COMMA_SOURCE_FILE ("observable-property.galgas", 716)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 718)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_32064 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_32064->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_32064->mAssociatedValue1 ;
      GALGAS_propertyKind var_kind_31049 ;
      GALGAS_actionMap joker_31057 ; // Joker input parameter
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_relationshipName, var_kind_31049, joker_31057, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 720)) ;
      switch (var_kind_31049.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (extractedValue_relationshipName.getter_location (SOURCE_FILE ("observable-property.galgas", 727)), GALGAS_string ("a property cannot accept 'all'"), fixItArray13  COMMA_SOURCE_FILE ("observable-property.galgas", 727)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          const cEnumAssociatedValues_propertyKind_toMany * extractPtr_31614 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_kind_31049.unsafePointer ()) ;
          const GALGAS_lstring extractedValue_typeName = extractPtr_31614->mAssociatedValue0 ;
          GALGAS_propertyMap var_observablePropertyMap_31336 ;
          GALGAS_classKind joker_31308 ; // Joker input parameter
          GALGAS_actionMap joker_31338_2 ; // Joker input parameter
          GALGAS_propertyGenerationList joker_31338_1 ; // Joker input parameter
          constinArgument_inSemanticContext.getter_mClassMap (HERE).method_searchKey (GALGAS_lstring::constructor_new (extractedValue_typeName.getter_string (SOURCE_FILE ("observable-property.galgas", 729)), extractedValue_relationshipName.getter_location (HERE)  COMMA_SOURCE_FILE ("observable-property.galgas", 729)), joker_31308, var_observablePropertyMap_31336, joker_31338_2, joker_31338_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 729)) ;
          GALGAS_actionMap joker_31605 ; // Joker input parameter
          var_observablePropertyMap_31336.method_searchKey (extractedValue_propertyName, outArgument_outKind, joker_31605, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 735)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_relationshipName.getter_location (SOURCE_FILE ("observable-property.galgas", 741)), GALGAS_string ("a toOne property cannot accept 'all'"), fixItArray14  COMMA_SOURCE_FILE ("observable-property.galgas", 741)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (extractedValue_relationshipName.getter_location (SOURCE_FILE ("observable-property.galgas", 743)), GALGAS_string ("an array controller cannot accept 'all'"), fixItArray15  COMMA_SOURCE_FILE ("observable-property.galgas", 743)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (extractedValue_relationshipName.getter_location (SOURCE_FILE ("observable-property.galgas", 745)), GALGAS_string ("an array controller cannot accept 'all'"), fixItArray16  COMMA_SOURCE_FILE ("observable-property.galgas", 745)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GALGAS_string ("[").add_operation (extensionGetter_swiftTypeName (var_kind_31049, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 747)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 747)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 747)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 747)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 747)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 747)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_32922 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_32922->mAssociatedValue0 ;
      GALGAS_actionMap joker_32192 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outKind, joker_32192, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 749)) ;
      switch (outArgument_outKind.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 756)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 758)), GALGAS_string ("a toMany property cannot accept be observed"), fixItArray17  COMMA_SOURCE_FILE ("observable-property.galgas", 758)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 760)), GALGAS_string ("a toOne property cannot accept be observed"), fixItArray18  COMMA_SOURCE_FILE ("observable-property.galgas", 760)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 762)), GALGAS_string ("an array controller cannot be observed"), fixItArray19  COMMA_SOURCE_FILE ("observable-property.galgas", 762)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 764)), GALGAS_string ("a selection controller cannot be observed"), fixItArray20  COMMA_SOURCE_FILE ("observable-property.galgas", 764)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_34117 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_34117->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_34117->mAssociatedValue1 ;
      GALGAS_propertyKind var_kind_33073 ;
      GALGAS_actionMap joker_33081 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_propertyName, var_kind_33073, joker_33081, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 767)) ;
      switch (var_kind_33073.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 774)), GALGAS_string ("an atomic property accepts no option"), fixItArray21  COMMA_SOURCE_FILE ("observable-property.galgas", 774)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          const enumGalgasBool test_22 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
          if (kBoolTrue == test_22) {
            outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 777)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 777))  COMMA_SOURCE_FILE ("observable-property.galgas", 777)) ;
          }else if (kBoolFalse == test_22) {
            TC_Array <C_FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (extractedValue_optionName.getter_location (SOURCE_FILE ("observable-property.galgas", 779)), GALGAS_string ("unknown option (accepted : 'count')"), fixItArray23  COMMA_SOURCE_FILE ("observable-property.galgas", 779)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray24 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 782)), GALGAS_string ("a toOne property accepts no option"), fixItArray24  COMMA_SOURCE_FILE ("observable-property.galgas", 782)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          const enumGalgasBool test_25 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
          if (kBoolTrue == test_25) {
            outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 785)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 785))  COMMA_SOURCE_FILE ("observable-property.galgas", 785)) ;
          }else if (kBoolFalse == test_25) {
            const enumGalgasBool test_26 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("empty"))).boolEnum () ;
            if (kBoolTrue == test_26) {
              outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 787)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 787))  COMMA_SOURCE_FILE ("observable-property.galgas", 787)) ;
            }else if (kBoolFalse == test_26) {
              TC_Array <C_FixItDescription> fixItArray27 ;
              inCompiler->emitSemanticError (extractedValue_optionName.getter_location (SOURCE_FILE ("observable-property.galgas", 789)), GALGAS_string ("unknown option (accepted : 'count', 'empty')"), fixItArray27  COMMA_SOURCE_FILE ("observable-property.galgas", 789)) ;
              outArgument_outKind.drop () ; // Release error dropped variable
            }
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray28 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 792)), GALGAS_string ("a selection controller accepts no option"), fixItArray28  COMMA_SOURCE_FILE ("observable-property.galgas", 792)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 794)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_35267 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_35267->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_35267->mAssociatedValue1 ;
      GALGAS_propertyKind var_kind_34291 ;
      GALGAS_actionMap joker_34299 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_propertyName, var_kind_34291, joker_34299, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 796)) ;
      switch (var_kind_34291.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 803)), GALGAS_string ("an atomic property accepts no option"), fixItArray29  COMMA_SOURCE_FILE ("observable-property.galgas", 803)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          const cEnumAssociatedValues_propertyKind_toMany * extractPtr_34818 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_kind_34291.unsafePointer ()) ;
          const GALGAS_lstring extractedValue_typeName = extractPtr_34818->mAssociatedValue0 ;
          GALGAS_propertyMap var_observablePropertyMap_34540 ;
          GALGAS_classKind joker_34512 ; // Joker input parameter
          GALGAS_actionMap joker_34542_2 ; // Joker input parameter
          GALGAS_propertyGenerationList joker_34542_1 ; // Joker input parameter
          constinArgument_inSemanticContext.getter_mClassMap (HERE).method_searchKey (extractedValue_typeName, joker_34512, var_observablePropertyMap_34540, joker_34542_2, joker_34542_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 805)) ;
          GALGAS_actionMap joker_34809 ; // Joker input parameter
          var_observablePropertyMap_34540.method_searchKey (extractedValue_elementPropertyName, outArgument_outKind, joker_34809, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 811)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray30 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 817)), GALGAS_string ("a toOne property accepts no option"), fixItArray30  COMMA_SOURCE_FILE ("observable-property.galgas", 817)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray31 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 819)), GALGAS_string ("an array controller accepts no option"), fixItArray31  COMMA_SOURCE_FILE ("observable-property.galgas", 819)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray32 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 821)), GALGAS_string ("a selection controller accepts no option"), fixItArray32  COMMA_SOURCE_FILE ("observable-property.galgas", 821)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GALGAS_string ("[").add_operation (extensionGetter_swiftTypeName (var_kind_34291, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 823)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 823)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 823)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 824)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 824)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 824)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_36396 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_36396->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_36396->mAssociatedValue1 ;
      GALGAS_propertyKind var_kind_35442 ;
      GALGAS_actionMap joker_35450 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_propertyName, var_kind_35442, joker_35450, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 826)) ;
      switch (var_kind_35442.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray33 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 833)), GALGAS_string ("an atomic property does not accept 'one'"), fixItArray33  COMMA_SOURCE_FILE ("observable-property.galgas", 833)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray34 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 835)), GALGAS_string ("a toOne property does not accept 'one'"), fixItArray34  COMMA_SOURCE_FILE ("observable-property.galgas", 835)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          const cEnumAssociatedValues_propertyKind_toOne * extractPtr_36073 = (const cEnumAssociatedValues_propertyKind_toOne *) (var_kind_35442.unsafePointer ()) ;
          const GALGAS_lstring extractedValue_typeName = extractPtr_36073->mAssociatedValue0 ;
          GALGAS_propertyMap var_observablePropertyMap_35795 ;
          GALGAS_classKind joker_35767 ; // Joker input parameter
          GALGAS_actionMap joker_35797_2 ; // Joker input parameter
          GALGAS_propertyGenerationList joker_35797_1 ; // Joker input parameter
          constinArgument_inSemanticContext.getter_mClassMap (HERE).method_searchKey (extractedValue_typeName, joker_35767, var_observablePropertyMap_35795, joker_35797_2, joker_35797_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 837)) ;
          GALGAS_actionMap joker_36064 ; // Joker input parameter
          var_observablePropertyMap_35795.method_searchKey (extractedValue_elementPropertyName, outArgument_outKind, joker_36064, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 843)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray35 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 849)), GALGAS_string ("an array controller does not accept 'one'"), fixItArray35  COMMA_SOURCE_FILE ("observable-property.galgas", 849)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray36 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 851)), GALGAS_string ("a selection controller does not accept 'one'"), fixItArray36  COMMA_SOURCE_FILE ("observable-property.galgas", 851)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 853)).add_operation (GALGAS_string ("\?"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 853)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_37189 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_37189->mAssociatedValue0 ;
      GALGAS_propertyKind var_kind_36537 ;
      GALGAS_actionMap joker_36545 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_propertyName, var_kind_36537, joker_36545, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 855)) ;
      switch (var_kind_36537.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray37 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 862)), GALGAS_string ("an atomic property does not accept 'none'"), fixItArray37  COMMA_SOURCE_FILE ("observable-property.galgas", 862)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray38 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 864)), GALGAS_string ("a toOne property does not accept 'none'"), fixItArray38  COMMA_SOURCE_FILE ("observable-property.galgas", 864)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 866)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 866))  COMMA_SOURCE_FILE ("observable-property.galgas", 866)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray39 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 868)), GALGAS_string ("an array controller does not accept 'none'"), fixItArray39  COMMA_SOURCE_FILE ("observable-property.galgas", 868)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray40 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 870)), GALGAS_string ("a selection controller does not accept 'none'"), fixItArray40  COMMA_SOURCE_FILE ("observable-property.galgas", 870)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 872)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_37639 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_37639->mAssociatedValue0 ;
      GALGAS_propertyMap var_observablePropertyMap_37347 ;
      GALGAS_classKind joker_37319 ; // Joker input parameter
      GALGAS_actionMap joker_37349_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_37349_1 ; // Joker input parameter
      constinArgument_inSemanticContext.getter_mClassMap (HERE).method_searchKey (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 874)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("observable-property.galgas", 874))  COMMA_SOURCE_FILE ("observable-property.galgas", 874)), joker_37319, var_observablePropertyMap_37347, joker_37349_2, joker_37349_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 874)) ;
      GALGAS_actionMap joker_37432 ; // Joker input parameter
      var_observablePropertyMap_37347.method_searchKey (extractedValue_propertyName, outArgument_outKind, joker_37432, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 875)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 885)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_38952 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_38952->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_38952->mAssociatedValue1 ;
      GALGAS_propertyMap var_observablePropertyMap_37827 ;
      GALGAS_classKind joker_37799 ; // Joker input parameter
      GALGAS_actionMap joker_37829_2 ; // Joker input parameter
      GALGAS_propertyGenerationList joker_37829_1 ; // Joker input parameter
      constinArgument_inSemanticContext.getter_mClassMap (HERE).method_searchKey (GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 887)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("observable-property.galgas", 887))  COMMA_SOURCE_FILE ("observable-property.galgas", 887)), joker_37799, var_observablePropertyMap_37827, joker_37829_2, joker_37829_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 887)) ;
      GALGAS_propertyKind var_kind_37905 ;
      GALGAS_actionMap joker_37913 ; // Joker input parameter
      var_observablePropertyMap_37827.method_searchKey (extractedValue_propertyName, var_kind_37905, joker_37913, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 888)) ;
      switch (var_kind_37905.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray41 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 900)), GALGAS_string ("a property cannot accept any option"), fixItArray41  COMMA_SOURCE_FILE ("observable-property.galgas", 900)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray42 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 902)), GALGAS_string ("a toMany property cannot accept any option"), fixItArray42  COMMA_SOURCE_FILE ("observable-property.galgas", 902)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray43 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 904)), GALGAS_string ("a toOne property cannot accept any option"), fixItArray43  COMMA_SOURCE_FILE ("observable-property.galgas", 904)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
          if (kBoolTrue == test_44) {
            outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 907)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 907))  COMMA_SOURCE_FILE ("observable-property.galgas", 907)) ;
          }else if (kBoolFalse == test_44) {
            const enumGalgasBool test_45 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("empty"))).boolEnum () ;
            if (kBoolTrue == test_45) {
              outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 909)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 909))  COMMA_SOURCE_FILE ("observable-property.galgas", 909)) ;
            }else if (kBoolFalse == test_45) {
              TC_Array <C_FixItDescription> fixItArray46 ;
              inCompiler->emitSemanticError (extractedValue_optionName.getter_location (SOURCE_FILE ("observable-property.galgas", 911)), GALGAS_string ("unknown option (accepted : 'count', 'empty')"), fixItArray46  COMMA_SOURCE_FILE ("observable-property.galgas", 911)) ;
              outArgument_outKind.drop () ; // Release error dropped variable
            }
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray47 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 914)), GALGAS_string ("a selection controller cannot accept any option"), fixItArray47  COMMA_SOURCE_FILE ("observable-property.galgas", 914)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 916)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_40432 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_40432->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_40432->mAssociatedValue1 ;
      GALGAS_propertyKind var_propertyKind_39131 ;
      GALGAS_actionMap joker_39139 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_controllerName, var_propertyKind_39131, joker_39139, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 918)) ;
      switch (var_propertyKind_39131.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray48 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 925)), GALGAS_string ("a property cannot accept any option"), fixItArray48  COMMA_SOURCE_FILE ("observable-property.galgas", 925)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          TC_Array <C_FixItDescription> fixItArray49 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 927)), GALGAS_string ("a toMany property cannot accept any option"), fixItArray49  COMMA_SOURCE_FILE ("observable-property.galgas", 927)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          TC_Array <C_FixItDescription> fixItArray50 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 929)), GALGAS_string ("a toOne property cannot accept any option"), fixItArray50  COMMA_SOURCE_FILE ("observable-property.galgas", 929)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          const cEnumAssociatedValues_propertyKind_arrayController * extractPtr_39936 = (const cEnumAssociatedValues_propertyKind_arrayController *) (var_propertyKind_39131.unsafePointer ()) ;
          const GALGAS_lstring extractedValue_typeName = extractPtr_39936->mAssociatedValue0 ;
          const GALGAS_bool extractedValue_graphic = extractPtr_39936->mAssociatedValue1 ;
          const GALGAS_bool extractedValue_isEntity = extractPtr_39936->mAssociatedValue2 ;
          GALGAS_bool test_51 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string ("sortedArray"))) ;
          if (kBoolTrue != test_51.boolEnum ()) {
            test_51 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string ("selectedArray"))) ;
          }
          const enumGalgasBool test_52 = test_51.boolEnum () ;
          if (kBoolTrue == test_52) {
            outArgument_outKind = GALGAS_propertyKind::constructor_toMany (extractedValue_typeName, GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 934)), extractedValue_graphic, extractedValue_isEntity  COMMA_SOURCE_FILE ("observable-property.galgas", 932)) ;
          }else if (kBoolFalse == test_52) {
            TC_Array <C_FixItDescription> fixItArray53 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 939)), GALGAS_string ("unknown option (accepted : 'sortedArray' or 'selectedArray')"), fixItArray53  COMMA_SOURCE_FILE ("observable-property.galgas", 939)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          const cEnumAssociatedValues_propertyKind_selectionController * extractPtr_40347 = (const cEnumAssociatedValues_propertyKind_selectionController *) (var_propertyKind_39131.unsafePointer ()) ;
          const GALGAS_string extractedValue_entityName = extractPtr_40347->mAssociatedValue0 ;
          GALGAS_propertyMap var_observablePropertyMap_40100 ;
          GALGAS_classKind joker_40072 ; // Joker input parameter
          GALGAS_actionMap joker_40102_2 ; // Joker input parameter
          GALGAS_propertyGenerationList joker_40102_1 ; // Joker input parameter
          constinArgument_inSemanticContext.getter_mClassMap (HERE).method_searchKey (GALGAS_lstring::constructor_new (extractedValue_entityName, extractedValue_controllerName.getter_location (HERE)  COMMA_SOURCE_FILE ("observable-property.galgas", 944)), joker_40072, var_observablePropertyMap_40100, joker_40102_2, joker_40102_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 944)) ;
          GALGAS_actionMap joker_40345 ; // Joker input parameter
          var_observablePropertyMap_40100.method_searchKey (extractedValue_propertyName, outArgument_outKind, joker_40345, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 950)) ;
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 952)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_41107 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_41107->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_41107->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_41107->mAssociatedValue2 ;
      GALGAS_propertyKind joker_40609_2 ; // Joker input parameter
      GALGAS_actionMap joker_40609_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_controllerName, joker_40609_2, joker_40609_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 954)) ;
      GALGAS_bool test_54 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string ("sortedArray"))) ;
      if (kBoolTrue == test_54.boolEnum ()) {
        test_54 = GALGAS_bool (kIsEqual, extractedValue_secondaryPropertyName.getter_string (HERE).objectCompare (GALGAS_string ("count"))) ;
      }
      const enumGalgasBool test_55 = test_54.boolEnum () ;
      if (kBoolTrue == test_55) {
        outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 956)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 956))  COMMA_SOURCE_FILE ("observable-property.galgas", 956)) ;
      }else if (kBoolFalse == test_55) {
        GALGAS_bool test_56 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string ("selectedArray"))) ;
        if (kBoolTrue == test_56.boolEnum ()) {
          test_56 = GALGAS_bool (kIsEqual, extractedValue_secondaryPropertyName.getter_string (HERE).objectCompare (GALGAS_string ("count"))) ;
        }
        const enumGalgasBool test_57 = test_56.boolEnum () ;
        if (kBoolTrue == test_57) {
          outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 958)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 958))  COMMA_SOURCE_FILE ("observable-property.galgas", 958)) ;
        }else if (kBoolFalse == test_57) {
          TC_Array <C_FixItDescription> fixItArray58 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 960)), GALGAS_string ("unknown option"), fixItArray58  COMMA_SOURCE_FILE ("observable-property.galgas", 960)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 962)) ;
    }
    break ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGeneration::GALGAS_propertyGeneration (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGeneration::GALGAS_propertyGeneration (const cPtr_propertyGeneration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_propertyGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_propertyGeneration::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_propertyGeneration * p = (const cPtr_propertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_propertyGeneration) ;
    result = p->mProperty_mPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_propertyGeneration::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @propertyGeneration class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_propertyGeneration::cPtr_propertyGeneration (const GALGAS_string & in_mPropertyName
                                                  COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mPropertyName (in_mPropertyName) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @propertyGeneration type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyGeneration ("propertyGeneration",
                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Class for element of '@transientDependencyListForGeneration' list                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_transientDependencyListForGeneration::cCollectionElement_transientDependencyListForGeneration (const GALGAS_observablePropertyAST & in_mDependency,
                                                                                                                  const GALGAS_string & in_mFunctionArgumentName,
                                                                                                                  const GALGAS_string & in_mFunctionArgumentTypeString
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mDependency, in_mFunctionArgumentName, in_mFunctionArgumentTypeString) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_transientDependencyListForGeneration::cCollectionElement_transientDependencyListForGeneration (const GALGAS_transientDependencyListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mDependency, inElement.mProperty_mFunctionArgumentName, inElement.mProperty_mFunctionArgumentTypeString) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_transientDependencyListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_transientDependencyListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_transientDependencyListForGeneration (mObject.mProperty_mDependency, mObject.mProperty_mFunctionArgumentName, mObject.mProperty_mFunctionArgumentTypeString COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_transientDependencyListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_transientDependencyListForGeneration * operand = (cCollectionElement_transientDependencyListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_transientDependencyListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration::GALGAS_transientDependencyListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration::GALGAS_transientDependencyListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration GALGAS_transientDependencyListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_transientDependencyListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration GALGAS_transientDependencyListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_transientDependencyListForGeneration result = GALGAS_transientDependencyListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration GALGAS_transientDependencyListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_transientDependencyListForGeneration result = GALGAS_transientDependencyListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration GALGAS_transientDependencyListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_transientDependencyListForGeneration result = GALGAS_transientDependencyListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDependencyListForGeneration::plusAssign_operation (const GALGAS_transientDependencyListForGeneration inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_transientDependencyListForGeneration::cEnumerator_transientDependencyListForGeneration (const GALGAS_transientDependencyListForGeneration & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration_2D_element cEnumerator_transientDependencyListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_transientDependencyListForGeneration * p = (const cCollectionElement_transientDependencyListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyAST cEnumerator_transientDependencyListForGeneration::current_mDependency (LOCATION_ARGS) const {
  const cCollectionElement_transientDependencyListForGeneration * p = (const cCollectionElement_transientDependencyListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
  return p->mObject.mProperty_mDependency ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_transientDependencyListForGeneration::current_mFunctionArgumentName (LOCATION_ARGS) const {
  const cCollectionElement_transientDependencyListForGeneration * p = (const cCollectionElement_transientDependencyListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
  return p->mObject.mProperty_mFunctionArgumentName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_transientDependencyListForGeneration::current_mFunctionArgumentTypeString (LOCATION_ARGS) const {
  const cCollectionElement_transientDependencyListForGeneration * p = (const cCollectionElement_transientDependencyListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientDependencyListForGeneration) ;
  return p->mObject.mProperty_mFunctionArgumentTypeString ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @transientDependencyListForGeneration type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientDependencyListForGeneration ("transientDependencyListForGeneration",
                                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transientDependencyListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDependencyListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transientDependencyListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientDependencyListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Extension Getter '@transientDependencyListForGeneration transientComputeFunctionCall'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string extensionGetter_transientComputeFunctionCall (const GALGAS_transientDependencyListForGeneration & inObject,
                                                            const GALGAS_string & constinArgument_inOwnerName,
                                                            const GALGAS_string & constinArgument_inTransientName,
                                                            const GALGAS_string & constinArgument_inExternFunctionName,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  GALGAS_string var_ident_17221 = GALGAS_string ("        ") ;
  result_outResult = GALGAS_string::makeEmptyString () ;
  const GALGAS_transientDependencyListForGeneration temp_0 = inObject ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, temp_0.getter_length (SOURCE_FILE ("transient-property.galgas", 445)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_observablePropertyAST var_first_17330 ;
    const GALGAS_transientDependencyListForGeneration temp_2 = inObject ;
    GALGAS_string joker_17332_2 ; // Joker input parameter
    GALGAS_string joker_17332_1 ; // Joker input parameter
    temp_2.method_first (var_first_17330, joker_17332_2, joker_17332_1, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 446)) ;
    result_outResult.plusAssign_operation(var_ident_17221.add_operation (GALGAS_string ("let kind = "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 447)).add_operation (extensionGetter_modelStringForSelf (var_first_17330, GALGAS_string ("unwSelf"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 447)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 447)).add_operation (GALGAS_string ("_selection.kind ()\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 447)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 447)) ;
  }else if (kBoolFalse == test_1) {
    const GALGAS_transientDependencyListForGeneration temp_3 = inObject ;
    GALGAS_transientDependencyListForGeneration var_dependencies_17467 = temp_3 ;
    GALGAS_observablePropertyAST var_first_17537 ;
    {
    GALGAS_string joker_17539 ; // Joker input parameter
    GALGAS_string joker_17542 ; // Joker input parameter
    var_dependencies_17467.setter_popFirst (var_first_17537, joker_17539, joker_17542, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 450)) ;
    }
    result_outResult.plusAssign_operation(var_ident_17221.add_operation (GALGAS_string ("var kind = "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 451)).add_operation (extensionGetter_modelStringForSelf (var_first_17537, GALGAS_string ("unwSelf"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 451)).add_operation (GALGAS_string ("_selection.kind ()\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 451)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 451)) ;
    cEnumerator_transientDependencyListForGeneration enumerator_17675 (var_dependencies_17467, kENUMERATION_UP) ;
    while (enumerator_17675.hasCurrentObject ()) {
      result_outResult.plusAssign_operation(var_ident_17221.add_operation (GALGAS_string ("kind &= "), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 453)).add_operation (extensionGetter_modelStringForSelf (enumerator_17675.current_mDependency (HERE), GALGAS_string ("unwSelf"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 453)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 453)).add_operation (GALGAS_string ("_selection.kind ()\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 453)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 453)) ;
      enumerator_17675.gotoNextObject () ;
    }
  }
  result_outResult.plusAssign_operation(var_ident_17221.add_operation (GALGAS_string ("switch kind {\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 456)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 456)) ;
  result_outResult.plusAssign_operation(var_ident_17221.add_operation (GALGAS_string ("case .noSelectionKind :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 457)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 457)) ;
  result_outResult.plusAssign_operation(var_ident_17221.add_operation (GALGAS_string ("  return .empty\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 458)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 458)) ;
  result_outResult.plusAssign_operation(var_ident_17221.add_operation (GALGAS_string ("case .multipleSelectionKind :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 459)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 459)) ;
  result_outResult.plusAssign_operation(var_ident_17221.add_operation (GALGAS_string ("  return .multiple\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 460)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 460)) ;
  result_outResult.plusAssign_operation(var_ident_17221.add_operation (GALGAS_string ("case .singleSelectionKind :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 461)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 461)) ;
  result_outResult.plusAssign_operation(var_ident_17221.add_operation (GALGAS_string ("  switch ("), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 462)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 462)) ;
  const GALGAS_transientDependencyListForGeneration temp_4 = inObject ;
  cEnumerator_transientDependencyListForGeneration enumerator_18147 (temp_4, kENUMERATION_UP) ;
  while (enumerator_18147.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(extensionGetter_modelStringForSelf (enumerator_18147.current_mDependency (HERE), GALGAS_string ("unwSelf"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 464)).add_operation (GALGAS_string ("_selection"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 464)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 464)) ;
    if (enumerator_18147.hasNextObject ()) {
      result_outResult.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 465)) ;
    }
    enumerator_18147.gotoNextObject () ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 467)) ;
  result_outResult.plusAssign_operation(var_ident_17221.add_operation (GALGAS_string ("  case ("), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 468)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 468)) ;
  const GALGAS_transientDependencyListForGeneration temp_5 = inObject ;
  cEnumerator_transientDependencyListForGeneration enumerator_18332 (temp_5, kENUMERATION_UP) ;
  GALGAS_uint index_18321 ((uint32_t) 0) ;
  while (enumerator_18332.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string (".single (let v").add_operation (index_18321.getter_string (SOURCE_FILE ("transient-property.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 470)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 470)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 470)) ;
    if (enumerator_18332.hasNextObject ()) {
      result_outResult.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 471)) ;
    }
    enumerator_18332.gotoNextObject () ;
    index_18321.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 469)) ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (") :\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 473)) ;
  result_outResult.plusAssign_operation(var_ident_17221.add_operation (GALGAS_string ("    return .single ("), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 474)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, constinArgument_inExternFunctionName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    result_outResult.plusAssign_operation(GALGAS_string ("transient_").add_operation (constinArgument_inOwnerName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 476)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 476)).add_operation (constinArgument_inTransientName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 476)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 476)) ;
  }else if (kBoolFalse == test_6) {
    result_outResult.plusAssign_operation(GALGAS_string ("transient_").add_operation (constinArgument_inExternFunctionName, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 478)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 478)) ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (" ("), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 480)) ;
  const GALGAS_transientDependencyListForGeneration temp_7 = inObject ;
  cEnumerator_transientDependencyListForGeneration enumerator_18696 (temp_7, kENUMERATION_UP) ;
  GALGAS_uint index_18685 ((uint32_t) 0) ;
  while (enumerator_18696.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string ("v").add_operation (index_18685.getter_string (SOURCE_FILE ("transient-property.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 482)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 482)) ;
    if (enumerator_18696.hasNextObject ()) {
      result_outResult.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 483)) ;
    }
    enumerator_18696.gotoNextObject () ;
    index_18685.increment_operation (inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 481)) ;
  }
  result_outResult.plusAssign_operation(GALGAS_string ("))\n"), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 485)) ;
  result_outResult.plusAssign_operation(var_ident_17221.add_operation (GALGAS_string ("  default :\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 486)) ;
  result_outResult.plusAssign_operation(var_ident_17221.add_operation (GALGAS_string ("    return .empty\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 487)) ;
  result_outResult.plusAssign_operation(var_ident_17221.add_operation (GALGAS_string ("  }\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 488)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 488)) ;
  result_outResult.plusAssign_operation(var_ident_17221.add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("transient-property.galgas", 489)) ;
//---
  return result_outResult ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Extension Getter '@transientDependencyListForGeneration needs_unwSelf'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool extensionGetter_needs_5F_unwSelf (const GALGAS_transientDependencyListForGeneration & inObject,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
  const GALGAS_transientDependencyListForGeneration temp_0 = inObject ;
  cEnumerator_transientDependencyListForGeneration enumerator_19180 (temp_0, kENUMERATION_UP) ;
  bool bool_1 = result_outResult.operator_not (SOURCE_FILE ("transient-property.galgas", 498)).isValidAndTrue () ;
  if (enumerator_19180.hasCurrentObject () && bool_1) {
    while (enumerator_19180.hasCurrentObject () && bool_1) {
      result_outResult = extensionGetter_needs_5F_unwSelf (enumerator_19180.current_mDependency (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 499)) ;
      enumerator_19180.gotoNextObject () ;
      if (enumerator_19180.hasCurrentObject ()) {
        bool_1 = result_outResult.operator_not (SOURCE_FILE ("transient-property.galgas", 498)).isValidAndTrue () ;
      }
    }
  }
//---
  return result_outResult ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Extension Getter '@observablePropertyAST generateAddObserverCall'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string extensionGetter_generateAddObserverCall (const GALGAS_observablePropertyAST & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_19803 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_19803->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_19803->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_controllerName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 510)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 510)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 510)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 510)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 510)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_20060 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_20060->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_20060->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_20060->mAssociatedValue2 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_controllerName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 512)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 512)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 512)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 512)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 512)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 512)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_20176 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_20176->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 514)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 514)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_20304 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_20304->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 516)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 516)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_20479 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_20479->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_20479->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 518)).add_operation (GALGAS_string ("_property.addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 518)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 518)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_20655 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_20655->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_20655->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 520)).add_operation (GALGAS_string ("_property.addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 520)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 520)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_20775 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_20775->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 522)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 522)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_20915 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_20915->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 524)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 524)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 524)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 524)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_21067 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_21067->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 526)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 526)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 526)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 526)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_21187 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_21187->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 528)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 528)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 528)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_21311 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_21311->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 530)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 530)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_21489 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_21489->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_21489->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 532)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 532)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 532)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("transient-property.galgas", 532)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 532)).add_operation (GALGAS_string ("_property.addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 532)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_21673 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_21673->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_21673->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("transient-property.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 534)).add_operation (GALGAS_string ("_property.addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 534)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 534)) ;
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
  }
//---
  return result_outResult ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Extension Getter '@observablePropertyAST generateRemoveObserverCall'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
      const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_22282 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_22282->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_22282->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_controllerName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 549)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 549)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 549)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 549)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_22542 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_22542->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_22542->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_22542->mAssociatedValue2 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_controllerName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 551)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 551)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 551)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 551)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 551)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 551)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 551)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 551)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_22661 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_22661->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 553)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 553)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_22792 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_22792->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 555)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 555)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_22970 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_22970->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_22970->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 557)).add_operation (GALGAS_string ("_property.removeEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 557)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 557)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_23149 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_23149->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_23149->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 559)).add_operation (GALGAS_string ("_property.removeEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 559)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 559)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_23272 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_23272->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_masterName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 561)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 561)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_23415 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_23415->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 563)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 563)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 563)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 563)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 563)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 563)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_23570 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_23570->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 565)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 565)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 565)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 565)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 565)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_23693 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_23693->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 567)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 567)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 567)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_23874 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_23874->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_23874->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 569)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 569)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("transient-property.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 569)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 569)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_24001 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_24001->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 571)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 571)).add_operation (GALGAS_string ("_property.removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 571)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_24188 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_24188->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_24188->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("transient-property.galgas", 573)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 573)).add_operation (GALGAS_string ("_property.removeEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 573)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 573)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 573)) ;
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
  }
//---
  return result_outResult ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_ptransientRoutineGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_ptransientRoutineGeneration * p = (const cPtr_ptransientRoutineGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_ptransientRoutineGeneration) ;
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
  if (kOperandEqual == result) {
    result = mProperty_mExternFunctionName.objectCompare (p->mProperty_mExternFunctionName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_ptransientRoutineGeneration::objectCompare (const GALGAS_ptransientRoutineGeneration & inOperand) const {
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

GALGAS_ptransientRoutineGeneration::GALGAS_ptransientRoutineGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ptransientRoutineGeneration::GALGAS_ptransientRoutineGeneration (const cPtr_ptransientRoutineGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_ptransientRoutineGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ptransientRoutineGeneration GALGAS_ptransientRoutineGeneration::constructor_new (const GALGAS_string & inAttribute_mOwnerName,
                                                                                        const GALGAS_string & inAttribute_mTransientName,
                                                                                        const GALGAS_typeKind & inAttribute_mTransientType,
                                                                                        const GALGAS_transientDependencyListForGeneration & inAttribute_mDependencyList,
                                                                                        const GALGAS_string & inAttribute_mExternFunctionName
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ptransientRoutineGeneration result ;
  if (inAttribute_mOwnerName.isValid () && inAttribute_mTransientName.isValid () && inAttribute_mTransientType.isValid () && inAttribute_mDependencyList.isValid () && inAttribute_mExternFunctionName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_ptransientRoutineGeneration (inAttribute_mOwnerName, inAttribute_mTransientName, inAttribute_mTransientType, inAttribute_mDependencyList, inAttribute_mExternFunctionName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_ptransientRoutineGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_ptransientRoutineGeneration * p = (const cPtr_ptransientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ptransientRoutineGeneration) ;
    result = p->mProperty_mOwnerName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_ptransientRoutineGeneration::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_ptransientRoutineGeneration::getter_mTransientName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_ptransientRoutineGeneration * p = (const cPtr_ptransientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ptransientRoutineGeneration) ;
    result = p->mProperty_mTransientName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_ptransientRoutineGeneration::getter_mTransientName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_ptransientRoutineGeneration::getter_mTransientType (UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_ptransientRoutineGeneration * p = (const cPtr_ptransientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ptransientRoutineGeneration) ;
    result = p->mProperty_mTransientType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cPtr_ptransientRoutineGeneration::getter_mTransientType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration GALGAS_ptransientRoutineGeneration::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_transientDependencyListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_ptransientRoutineGeneration * p = (const cPtr_ptransientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ptransientRoutineGeneration) ;
    result = p->mProperty_mDependencyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration cPtr_ptransientRoutineGeneration::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependencyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_ptransientRoutineGeneration::getter_mExternFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_ptransientRoutineGeneration * p = (const cPtr_ptransientRoutineGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_ptransientRoutineGeneration) ;
    result = p->mProperty_mExternFunctionName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_ptransientRoutineGeneration::getter_mExternFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternFunctionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @ptransientRoutineGeneration class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_ptransientRoutineGeneration::cPtr_ptransientRoutineGeneration (const GALGAS_string & in_mOwnerName,
                                                                    const GALGAS_string & in_mTransientName,
                                                                    const GALGAS_typeKind & in_mTransientType,
                                                                    const GALGAS_transientDependencyListForGeneration & in_mDependencyList,
                                                                    const GALGAS_string & in_mExternFunctionName
                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mOwnerName (in_mOwnerName),
mProperty_mTransientName (in_mTransientName),
mProperty_mTransientType (in_mTransientType),
mProperty_mDependencyList (in_mDependencyList),
mProperty_mExternFunctionName (in_mExternFunctionName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_ptransientRoutineGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ptransientRoutineGeneration ;
}

void cPtr_ptransientRoutineGeneration::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@ptransientRoutineGeneration:" ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTransientName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTransientType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternFunctionName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_ptransientRoutineGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_ptransientRoutineGeneration (mProperty_mOwnerName, mProperty_mTransientName, mProperty_mTransientType, mProperty_mDependencyList, mProperty_mExternFunctionName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @ptransientRoutineGeneration type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ptransientRoutineGeneration ("ptransientRoutineGeneration",
                                                    & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_ptransientRoutineGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ptransientRoutineGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_ptransientRoutineGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ptransientRoutineGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ptransientRoutineGeneration GALGAS_ptransientRoutineGeneration::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_ptransientRoutineGeneration result ;
  const GALGAS_ptransientRoutineGeneration * p = (const GALGAS_ptransientRoutineGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ptransientRoutineGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ptransientRoutineGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@simpleStoredPropertyList typeInventory'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_typeInventory (const GALGAS_simpleStoredPropertyList inObject,
                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                    C_Compiler * /* inCompiler */
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_simpleStoredPropertyList temp_0 = inObject ;
  cEnumerator_simpleStoredPropertyList enumerator_8713 (temp_0, kENUMERATION_UP) ;
  while (enumerator_8713.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_8811 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_8713.current_mPropertyTypeName (HERE), joker_8811 COMMA_SOURCE_FILE ("simple-stored-property.galgas", 222)) ;
    }
    enumerator_8713.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Extension method '@simpleStoredPropertyList buildObservablePropertyMap'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_buildObservablePropertyMap (const GALGAS_simpleStoredPropertyList inObject,
                                                 const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                 GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_simpleStoredPropertyList temp_0 = inObject ;
  cEnumerator_simpleStoredPropertyList enumerator_9282 (temp_0, kENUMERATION_UP) ;
  while (enumerator_9282.hasCurrentObject ()) {
    GALGAS_typeKind var_type_9367 ;
    GALGAS_actionMap var_actionMap_9382 ;
    constinArgument_inUnifiedTypeMap.method_searchKey (enumerator_9282.current_mPropertyTypeName (HERE), var_type_9367, var_actionMap_9382, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 240)) ;
    GALGAS_typeKindList var_typeList_9428 ;
    switch (var_type_9367.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
    case GALGAS_typeKind::kEnum_fontType:
    case GALGAS_typeKind::kEnum_colorType:
      {
        GALGAS_typeKindList temp_1 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 245)) ;
        temp_1.addAssign_operation (var_type_9367  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 245)) ;
        var_typeList_9428 = temp_1 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        GALGAS_typeKindList temp_2 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 247)) ;
        temp_2.addAssign_operation (var_type_9367  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 247)) ;
        var_typeList_9428 = temp_2 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_classType:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_9282.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("simple-stored-property.galgas", 249)), GALGAS_string ("a class cannot be used as simple property type"), fixItArray3  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 249)) ;
        var_typeList_9428.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_transientPropertyExternType:
      {
        GALGAS_typeKindList temp_4 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 251)) ;
        temp_4.addAssign_operation (var_type_9367  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 251)) ;
        var_typeList_9428 = temp_4 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_9282.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("simple-stored-property.galgas", 253)), GALGAS_string ("an entity cannot be used as simple property type"), fixItArray5  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 253)) ;
        var_typeList_9428.drop () ; // Release error dropped variable
      }
      break ;
    }
    {
    ioArgument_ioObservableProperties.setter_insertKey (enumerator_9282.current_mPropertyName (HERE), GALGAS_propertyKind::constructor_property (var_type_9367, GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("simple-stored-property.galgas", 258))  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 258)), GALGAS_string::makeEmptyString (), var_actionMap_9382, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 256)) ;
    }
    enumerator_9282.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Extension method '@simpleStoredPropertyList simpleStoredPropertySemanticAnalysis'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_simpleStoredPropertySemanticAnalysis (const GALGAS_simpleStoredPropertyList inObject,
                                                           const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                           GALGAS_simpleStoredPropertyListForGenerationEX & outArgument_outSimpleStoredPropertyListForGeneration,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSimpleStoredPropertyListForGeneration.drop () ; // Release 'out' argument
  outArgument_outSimpleStoredPropertyListForGeneration = GALGAS_simpleStoredPropertyListForGenerationEX::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 272)) ;
  const GALGAS_simpleStoredPropertyList temp_0 = inObject ;
  cEnumerator_simpleStoredPropertyList enumerator_10506 (temp_0, kENUMERATION_UP) ;
  while (enumerator_10506.hasCurrentObject ()) {
    GALGAS_typeKind var_type_10591 ;
    GALGAS_actionMap joker_10593 ; // Joker input parameter
    constinArgument_inUnifiedTypeMap.method_searchKey (enumerator_10506.current_mPropertyTypeName (HERE), var_type_10591, joker_10593, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 275)) ;
    GALGAS_typeKindList var_typeList_10640 ;
    switch (var_type_10591.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
    case GALGAS_typeKind::kEnum_fontType:
    case GALGAS_typeKind::kEnum_colorType:
      {
        GALGAS_typeKindList temp_1 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 280)) ;
        temp_1.addAssign_operation (var_type_10591  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 280)) ;
        var_typeList_10640 = temp_1 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        GALGAS_typeKindList temp_2 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("simple-stored-property.galgas", 282)) ;
        temp_2.addAssign_operation (var_type_10591  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 282)) ;
        var_typeList_10640 = temp_2 ;
      }
      break ;
    case GALGAS_typeKind::kEnum_classType:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_10506.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("simple-stored-property.galgas", 284)), GALGAS_string ("a class cannot be used as simple property type"), fixItArray3  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 284)) ;
        var_typeList_10640.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_transientPropertyExternType:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_10506.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("simple-stored-property.galgas", 286)), GALGAS_string ("a transient property class cannot be used as simple property type"), fixItArray4  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 286)) ;
        var_typeList_10640.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_10506.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("simple-stored-property.galgas", 288)), GALGAS_string ("an entity cannot be used as simple property type"), fixItArray5  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 288)) ;
        var_typeList_10640.drop () ; // Release error dropped variable
      }
      break ;
    }
    GALGAS_string var_swiftDefaultValueAsString_11336 ;
    callExtensionMethod_analyzeDefaultValueType ((const cPtr_abstractDefaultValue *) enumerator_10506.current_mDefaultValue (HERE).ptr (), var_typeList_10640, var_swiftDefaultValueAsString_11336, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas", 291)) ;
    outArgument_outSimpleStoredPropertyListForGeneration.addAssign_operation (var_type_10591, enumerator_10506.current_mPropertyName (HERE).getter_string (HERE), GALGAS_bool (false), var_swiftDefaultValueAsString_11336, enumerator_10506.current_mNeedsValidation (HERE)  COMMA_SOURCE_FILE ("simple-stored-property.galgas", 293)) ;
    enumerator_10506.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity::GALGAS_propertyMultiplicity (void) :
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_propertyMultiplicity::constructor_single (UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMultiplicity result ;
  result.mEnum = kEnum_single ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_propertyMultiplicity::constructor_collection (UNUSED_LOCATION_ARGS) {
  GALGAS_propertyMultiplicity result ;
  result.mEnum = kEnum_collection ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_propertyMultiplicity [3] = {
  "(not built)",
  "single",
  "collection"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_propertyMultiplicity::getter_isSingle (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_single == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_propertyMultiplicity::getter_isCollection (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_collection == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_propertyMultiplicity::description (C_String & ioString,
                                               const int32_t /* inIndentation */) const {
  ioString << "<enum @propertyMultiplicity: " << gEnumNameArrayFor_propertyMultiplicity [mEnum] ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_propertyMultiplicity::objectCompare (const GALGAS_propertyMultiplicity & inOperand) const {
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
//                                             @propertyMultiplicity type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyMultiplicity ("propertyMultiplicity",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyMultiplicity::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMultiplicity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyMultiplicity::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyMultiplicity (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_propertyMultiplicity::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_propertyMultiplicity result ;
  const GALGAS_propertyMultiplicity * p = (const GALGAS_propertyMultiplicity *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyMultiplicity *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMultiplicity", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Extension method '@toOneRelationshipListEX typeInventory'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_typeInventory (const GALGAS_toOneRelationshipListEX inObject,
                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                    C_Compiler * /* inCompiler */
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toOneRelationshipListEX temp_0 = inObject ;
  cEnumerator_toOneRelationshipListEX enumerator_5443 (temp_0, kENUMERATION_UP) ;
  while (enumerator_5443.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_5546 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_5443.current_mDestinationEntityName (HERE), joker_5546 COMMA_SOURCE_FILE ("to-one-relationship.galgas", 151)) ;
    }
    enumerator_5443.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Extension method '@toOneRelationshipListEX buildObservablePropertyMap'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_buildObservablePropertyMap (const GALGAS_toOneRelationshipListEX inObject,
                                                 const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                 GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toOneRelationshipListEX temp_0 = inObject ;
  cEnumerator_toOneRelationshipListEX enumerator_6016 (temp_0, kENUMERATION_UP) ;
  while (enumerator_6016.hasCurrentObject ()) {
    GALGAS_typeKind var_type_6106 ;
    GALGAS_actionMap var_actionMap_6121 ;
    constinArgument_inUnifiedTypeMap.method_searchKey (enumerator_6016.current_mDestinationEntityName (HERE), var_type_6106, var_actionMap_6121, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 169)) ;
    GALGAS_bool var_graphic_6158 ;
    switch (var_type_6106.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
    case GALGAS_typeKind::kEnum_fontType:
    case GALGAS_typeKind::kEnum_colorType:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_6016.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 174)), GALGAS_string ("a simple type cannot be used as entitytype"), fixItArray1  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 174)) ;
        var_graphic_6158.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_6016.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 176)), GALGAS_string ("an enumeration type cannot be used as entitytype"), fixItArray2  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 176)) ;
        var_graphic_6158.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_classType:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_6016.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 178)), GALGAS_string ("a class type cannot be used as entitytype"), fixItArray3  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 178)) ;
        var_graphic_6158.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_transientPropertyExternType:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_6016.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 180)), GALGAS_string ("the opposite type cannot be used as entity type"), fixItArray4  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 180)) ;
        var_graphic_6158.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        const cEnumAssociatedValues_typeKind_entityType * extractPtr_6799 = (const cEnumAssociatedValues_typeKind_entityType *) (var_type_6106.unsafePointer ()) ;
        const GALGAS_bool extractedValue_isGraphic = extractPtr_6799->mAssociatedValue1 ;
        var_graphic_6158 = extractedValue_isGraphic ;
      }
      break ;
    }
    {
    ioArgument_ioObservableProperties.setter_insertKey (enumerator_6016.current_mToOneRelationshipName (HERE), GALGAS_propertyKind::constructor_toOne (enumerator_6016.current_mDestinationEntityName (HERE), GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("to-one-relationship.galgas", 187)), var_graphic_6158  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 187)), enumerator_6016.current_mInverseRelationshipName (HERE).getter_string (HERE), var_actionMap_6121, enumerator_6016.current_mCascading (HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 185)) ;
    }
    enumerator_6016.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension method '@toOneRelationshipListEX semanticAnalysis'                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_semanticAnalysis (const GALGAS_toOneRelationshipListEX inObject,
                                       const GALGAS_semanticContextEX constinArgument_inSemanticContext,
                                       GALGAS_toOneEntityRelationshipListForGeneration & outArgument_outToOneEntityRelationshipListForGeneration,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outToOneEntityRelationshipListForGeneration.drop () ; // Release 'out' argument
  outArgument_outToOneEntityRelationshipListForGeneration = GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (SOURCE_FILE ("to-one-relationship.galgas", 203)) ;
  const GALGAS_toOneRelationshipListEX temp_0 = inObject ;
  cEnumerator_toOneRelationshipListEX enumerator_7625 (temp_0, kENUMERATION_UP) ;
  while (enumerator_7625.hasCurrentObject ()) {
    GALGAS_typeKind var_type_7711 ;
    GALGAS_actionMap joker_7713 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mUnifiedTypeMap (HERE).method_searchKey (enumerator_7625.current_mDestinationEntityName (HERE), var_type_7711, joker_7713, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 205)) ;
    GALGAS_observablePropertyMap var_destinationEntityObservablePropertyMap_7876 ;
    GALGAS_objectKind joker_7884 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mEntityObservablePropertyMap (HERE).method_searchKey (enumerator_7625.current_mDestinationEntityName (HERE), var_destinationEntityObservablePropertyMap_7876, joker_7884, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 206)) ;
    outArgument_outToOneEntityRelationshipListForGeneration.addAssign_operation (enumerator_7625.current_mToOneRelationshipName (HERE).getter_string (HERE), var_type_7711, enumerator_7625.current_mInverseRelationshipName (HERE).getter_string (HERE), enumerator_7625.current_mInverseRelationMultiplicity (HERE), var_destinationEntityObservablePropertyMap_7876, enumerator_7625.current_mCascading (HERE)  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 211)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_7625.current_mInverseRelationshipName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_propertyKind var_oppositeKind_8365 ;
      GALGAS_string var_oppositeOfOpposite_8406 ;
      GALGAS_actionMap joker_8417_2 ; // Joker input parameter
      GALGAS_bool joker_8417_1 ; // Joker input parameter
      var_destinationEntityObservablePropertyMap_7876.method_searchForInverseRelationship (enumerator_7625.current_mInverseRelationshipName (HERE), var_oppositeKind_8365, var_oppositeOfOpposite_8406, joker_8417_2, joker_8417_1, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 220)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_swiftTypeName (var_oppositeKind_8365, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 227)).objectCompare (enumerator_7625.current_mCurrentEntityName (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_7625.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 228)), GALGAS_string ("the type of the opposite property '").add_operation (enumerator_7625.current_mInverseRelationshipName (HERE).getter_string (SOURCE_FILE ("to-one-relationship.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 229)).add_operation (GALGAS_string ("' should be '"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 229)).add_operation (enumerator_7625.current_mCurrentEntityName (HERE).getter_string (SOURCE_FILE ("to-one-relationship.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 230)).add_operation (GALGAS_string ("' (found '"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 230)).add_operation (extensionGetter_swiftTypeName (var_oppositeKind_8365, inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 230)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 230)), fixItArray3  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 228)) ;
      }
      switch (var_oppositeKind_8365.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_7625.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 234)), GALGAS_string ("a property cannot be an opposite of a relationship"), fixItArray4  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 234)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          const cEnumAssociatedValues_propertyKind_toMany * extractPtr_9271 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_oppositeKind_8365.unsafePointer ()) ;
          const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_9271->mAssociatedValue1 ;
          const enumGalgasBool test_5 = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("to-one-relationship.galgas", 236)).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (enumerator_7625.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 237)), GALGAS_string ("this relationship is transient, should be stored"), fixItArray6  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 237)) ;
          }
          const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_7625.current_mInverseRelationMultiplicity (HERE).objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("to-one-relationship.galgas", 239)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_7625.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 240)), GALGAS_string ("inverse relationship multiplicity error (toMany <-> toOne)"), fixItArray8  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 240)) ;
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          const cEnumAssociatedValues_propertyKind_toOne * extractPtr_9632 = (const cEnumAssociatedValues_propertyKind_toOne *) (var_oppositeKind_8365.unsafePointer ()) ;
          const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_9632->mAssociatedValue1 ;
          const enumGalgasBool test_9 = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("to-one-relationship.galgas", 243)).boolEnum () ;
          if (kBoolTrue == test_9) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_7625.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 244)), GALGAS_string ("this relationship is transient, should be stored"), fixItArray10  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 244)) ;
          }
          const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, enumerator_7625.current_mInverseRelationMultiplicity (HERE).objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("to-one-relationship.galgas", 246)))).boolEnum () ;
          if (kBoolTrue == test_11) {
            TC_Array <C_FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (enumerator_7625.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 247)), GALGAS_string ("inverse relationship multiplicity error (toMany <-> toOne)"), fixItArray12  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 247)) ;
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_7625.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 250)), GALGAS_string ("an array controller cannot be an opposite of a relationship"), fixItArray13  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 250)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_7625.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 252)), GALGAS_string ("a selection controller cannot be an opposite of a relationship"), fixItArray14  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 252)) ;
        }
        break ;
      }
      const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, var_oppositeOfOpposite_8406.objectCompare (enumerator_7625.current_mToOneRelationshipName (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_15) {
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_7625.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("to-one-relationship.galgas", 255)), GALGAS_string ("inverse relationship does not name '").add_operation (enumerator_7625.current_mToOneRelationshipName (HERE).getter_string (SOURCE_FILE ("to-one-relationship.galgas", 255)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 255)).add_operation (GALGAS_string ("' as opposite"), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas", 256)), fixItArray16  COMMA_SOURCE_FILE ("to-one-relationship.galgas", 255)) ;
      }
    }
    enumerator_7625.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@toManyRelationshipListEX typeInventory'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_typeInventory (const GALGAS_toManyRelationshipListEX inObject,
                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                    C_Compiler * /* inCompiler */
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toManyRelationshipListEX temp_0 = inObject ;
  cEnumerator_toManyRelationshipListEX enumerator_5376 (temp_0, kENUMERATION_UP) ;
  while (enumerator_5376.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_5479 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_5376.current_mDestinationEntityName (HERE), joker_5479 COMMA_SOURCE_FILE ("to-many-relationship.galgas", 153)) ;
    }
    enumerator_5376.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Extension method '@toManyRelationshipListEX buildObservablePropertyMap'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_buildObservablePropertyMap (const GALGAS_toManyRelationshipListEX inObject,
                                                 const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                 GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_toManyRelationshipListEX temp_0 = inObject ;
  cEnumerator_toManyRelationshipListEX enumerator_5950 (temp_0, kENUMERATION_UP) ;
  while (enumerator_5950.hasCurrentObject ()) {
    GALGAS_typeKind var_type_6040 ;
    GALGAS_actionMap var_actionMap_6055 ;
    constinArgument_inUnifiedTypeMap.method_searchKey (enumerator_5950.current_mDestinationEntityName (HERE), var_type_6040, var_actionMap_6055, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 171)) ;
    GALGAS_bool var_graphic_6092 ;
    switch (var_type_6040.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
    case GALGAS_typeKind::kEnum_fontType:
    case GALGAS_typeKind::kEnum_colorType:
      {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_5950.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 176)), GALGAS_string ("a simple type cannot be used as entitytype"), fixItArray1  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 176)) ;
        var_graphic_6092.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5950.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 178)), GALGAS_string ("an enumeration type cannot be used as entitytype"), fixItArray2  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 178)) ;
        var_graphic_6092.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_classType:
      {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_5950.current_mDestinationEntityName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 180)), GALGAS_string ("a class type cannot be used as entitytype"), fixItArray3  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 180)) ;
        var_graphic_6092.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_transientPropertyExternType:
      {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_5950.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 182)), GALGAS_string ("the opposite type cannot be used as entity type"), fixItArray4  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 182)) ;
        var_graphic_6092.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        const cEnumAssociatedValues_typeKind_entityType * extractPtr_6733 = (const cEnumAssociatedValues_typeKind_entityType *) (var_type_6040.unsafePointer ()) ;
        const GALGAS_bool extractedValue_isGraphic = extractPtr_6733->mAssociatedValue1 ;
        var_graphic_6092 = extractedValue_isGraphic ;
      }
      break ;
    }
    {
    ioArgument_ioObservableProperties.setter_insertKey (enumerator_5950.current_mToManyRelationshipName (HERE), GALGAS_propertyKind::constructor_toMany (enumerator_5950.current_mDestinationEntityName (HERE), GALGAS_propertyAccessibility::constructor_stored (SOURCE_FILE ("to-many-relationship.galgas", 189)), var_graphic_6092, GALGAS_bool (true)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 189)), enumerator_5950.current_mInverseRelationshipName (HERE).getter_string (HERE), var_actionMap_6055, enumerator_5950.current_mCascading (HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 187)) ;
    }
    enumerator_5950.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension method '@toManyRelationshipListEX semanticAnalysis'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_semanticAnalysis (const GALGAS_toManyRelationshipListEX inObject,
                                       const GALGAS_semanticContextEX constinArgument_inSemanticContext,
                                       GALGAS_toManyEntityRelationshipListForGeneration & outArgument_outToManyEntityRelationshipListForGeneration,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outToManyEntityRelationshipListForGeneration.drop () ; // Release 'out' argument
  outArgument_outToManyEntityRelationshipListForGeneration = GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (SOURCE_FILE ("to-many-relationship.galgas", 205)) ;
  const GALGAS_toManyRelationshipListEX temp_0 = inObject ;
  cEnumerator_toManyRelationshipListEX enumerator_7581 (temp_0, kENUMERATION_UP) ;
  while (enumerator_7581.hasCurrentObject ()) {
    GALGAS_typeKind var_type_7667 ;
    GALGAS_actionMap joker_7669 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mUnifiedTypeMap (HERE).method_searchKey (enumerator_7581.current_mDestinationEntityName (HERE), var_type_7667, joker_7669, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 207)) ;
    GALGAS_observablePropertyMap var_destinationEntityObservablePropertyMap_7832 ;
    GALGAS_objectKind joker_7840 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mEntityObservablePropertyMap (HERE).method_searchKey (enumerator_7581.current_mDestinationEntityName (HERE), var_destinationEntityObservablePropertyMap_7832, joker_7840, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 208)) ;
    outArgument_outToManyEntityRelationshipListForGeneration.addAssign_operation (enumerator_7581.current_mToManyRelationshipName (HERE).getter_string (HERE), var_type_7667, enumerator_7581.current_mInverseRelationshipName (HERE).getter_string (HERE), var_destinationEntityObservablePropertyMap_7832, enumerator_7581.current_mCascading (HERE)  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 213)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_7581.current_mInverseRelationshipName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_propertyKind var_oppositeKind_8287 ;
      GALGAS_string var_oppositeOfOpposite_8328 ;
      GALGAS_actionMap joker_8339_2 ; // Joker input parameter
      GALGAS_bool joker_8339_1 ; // Joker input parameter
      var_destinationEntityObservablePropertyMap_7832.method_searchForInverseRelationship (enumerator_7581.current_mInverseRelationshipName (HERE), var_oppositeKind_8287, var_oppositeOfOpposite_8328, joker_8339_2, joker_8339_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 221)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extensionGetter_swiftTypeName (var_oppositeKind_8287, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 227)).objectCompare (enumerator_7581.current_mCurrentEntityName (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_7581.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 228)), GALGAS_string ("the type of the opposite property '").add_operation (enumerator_7581.current_mInverseRelationshipName (HERE).getter_string (SOURCE_FILE ("to-many-relationship.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 229)).add_operation (GALGAS_string ("' should be '"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 229)).add_operation (enumerator_7581.current_mCurrentEntityName (HERE).getter_string (SOURCE_FILE ("to-many-relationship.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 230)).add_operation (GALGAS_string ("' (found '"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 230)).add_operation (extensionGetter_swiftTypeName (var_oppositeKind_8287, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 230)).add_operation (GALGAS_string ("')"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 230)), fixItArray3  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 228)) ;
      }
      switch (var_oppositeKind_8287.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_property:
        {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_7581.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 234)), GALGAS_string ("a property cannot be an opposite of a relationship"), fixItArray4  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 234)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_toMany:
        {
          const cEnumAssociatedValues_propertyKind_toMany * extractPtr_8986 = (const cEnumAssociatedValues_propertyKind_toMany *) (var_oppositeKind_8287.unsafePointer ()) ;
          const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_8986->mAssociatedValue1 ;
          const enumGalgasBool test_5 = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("to-many-relationship.galgas", 236)).boolEnum () ;
          if (kBoolTrue == test_5) {
            TC_Array <C_FixItDescription> fixItArray6 ;
            inCompiler->emitSemanticError (enumerator_7581.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 237)), GALGAS_string ("this relationship is transient, should be stored"), fixItArray6  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 237)) ;
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_toOne:
        {
          const cEnumAssociatedValues_propertyKind_toOne * extractPtr_9175 = (const cEnumAssociatedValues_propertyKind_toOne *) (var_oppositeKind_8287.unsafePointer ()) ;
          const GALGAS_propertyAccessibility extractedValue_accessibility = extractPtr_9175->mAssociatedValue1 ;
          const enumGalgasBool test_7 = extractedValue_accessibility.getter_isTransient (SOURCE_FILE ("to-many-relationship.galgas", 240)).boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_7581.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 241)), GALGAS_string ("this relationship is transient, should be stored"), fixItArray8  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 241)) ;
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (enumerator_7581.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 244)), GALGAS_string ("an array controller cannot be an opposite of a relationship"), fixItArray9  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 244)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_7581.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 246)), GALGAS_string ("a selection controller cannot be an opposite of a relationship"), fixItArray10  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 246)) ;
        }
        break ;
      }
      const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, var_oppositeOfOpposite_8328.objectCompare (enumerator_7581.current_mToManyRelationshipName (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_7581.current_mInverseRelationshipName (HERE).getter_location (SOURCE_FILE ("to-many-relationship.galgas", 249)), GALGAS_string ("inverse relationship does not name '").add_operation (enumerator_7581.current_mToManyRelationshipName (HERE).getter_string (SOURCE_FILE ("to-many-relationship.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 249)).add_operation (GALGAS_string ("' as opposite"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas", 250)), fixItArray12  COMMA_SOURCE_FILE ("to-many-relationship.galgas", 249)) ;
      }
    }
    enumerator_7581.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_atomicArrayGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_atomicArrayGeneration * p = (const cPtr_atomicArrayGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_atomicArrayGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mElementTypeName.objectCompare (p->mProperty_mElementTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_atomicArrayGeneration::objectCompare (const GALGAS_atomicArrayGeneration & inOperand) const {
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

GALGAS_atomicArrayGeneration::GALGAS_atomicArrayGeneration (void) :
GALGAS_propertyGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicArrayGeneration GALGAS_atomicArrayGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_atomicArrayGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                        GALGAS_string::constructor_default (HERE)
                                                        COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicArrayGeneration::GALGAS_atomicArrayGeneration (const cPtr_atomicArrayGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicArrayGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicArrayGeneration GALGAS_atomicArrayGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                            const GALGAS_string & inAttribute_mElementTypeName
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_atomicArrayGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mElementTypeName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_atomicArrayGeneration (inAttribute_mPropertyName, inAttribute_mElementTypeName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_atomicArrayGeneration::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicArrayGeneration * p = (const cPtr_atomicArrayGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicArrayGeneration) ;
    result = p->mProperty_mElementTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_atomicArrayGeneration::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @atomicArrayGeneration class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_atomicArrayGeneration::cPtr_atomicArrayGeneration (const GALGAS_string & in_mPropertyName,
                                                        const GALGAS_string & in_mElementTypeName
                                                        COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mElementTypeName (in_mElementTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_atomicArrayGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicArrayGeneration ;
}

void cPtr_atomicArrayGeneration::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@atomicArrayGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_atomicArrayGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_atomicArrayGeneration (mProperty_mPropertyName, mProperty_mElementTypeName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @atomicArrayGeneration type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicArrayGeneration ("atomicArrayGeneration",
                                              & kTypeDescriptor_GALGAS_propertyGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_atomicArrayGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicArrayGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_atomicArrayGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicArrayGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicArrayGeneration GALGAS_atomicArrayGeneration::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_atomicArrayGeneration result ;
  const GALGAS_atomicArrayGeneration * p = (const GALGAS_atomicArrayGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicArrayGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicArrayGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Class for element of '@validationStubRoutineListForGeneration' list                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_validationStubRoutineListForGeneration : public cCollectionElement {
  public : GALGAS_validationStubRoutineListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_validationStubRoutineListForGeneration (const GALGAS_string & in_mObjectTypeName,
                                                                      const GALGAS_string & in_mModelName,
                                                                      const GALGAS_string & in_mModelTypeName
                                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_validationStubRoutineListForGeneration (const GALGAS_validationStubRoutineListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_validationStubRoutineListForGeneration::cCollectionElement_validationStubRoutineListForGeneration (const GALGAS_string & in_mObjectTypeName,
                                                                                                                      const GALGAS_string & in_mModelName,
                                                                                                                      const GALGAS_string & in_mModelTypeName
                                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mObjectTypeName, in_mModelName, in_mModelTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_validationStubRoutineListForGeneration::cCollectionElement_validationStubRoutineListForGeneration (const GALGAS_validationStubRoutineListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mObjectTypeName, inElement.mProperty_mModelName, inElement.mProperty_mModelTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_validationStubRoutineListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_validationStubRoutineListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_validationStubRoutineListForGeneration (mObject.mProperty_mObjectTypeName, mObject.mProperty_mModelName, mObject.mProperty_mModelTypeName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_validationStubRoutineListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_validationStubRoutineListForGeneration * operand = (cCollectionElement_validationStubRoutineListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_validationStubRoutineListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration::GALGAS_validationStubRoutineListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration::GALGAS_validationStubRoutineListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_validationStubRoutineListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_validationStubRoutineListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                         const GALGAS_string & inOperand1,
                                                                         const GALGAS_string & inOperand2
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_validationStubRoutineListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_validationStubRoutineListForGeneration::setter_append (GALGAS_validationStubRoutineListForGeneration_2D_element inElement,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_validationStubRoutineListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_validationStubRoutineListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                          const GALGAS_string inOperand1,
                                                                          const GALGAS_string inOperand2,
                                                                          const GALGAS_uint inInsertionIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_validationStubRoutineListForGeneration (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_validationStubRoutineListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                          GALGAS_string & outOperand1,
                                                                          GALGAS_string & outOperand2,
                                                                          const GALGAS_uint inRemoveIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
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
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_validationStubRoutineListForGeneration result = GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_validationStubRoutineListForGeneration result = GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration GALGAS_validationStubRoutineListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_validationStubRoutineListForGeneration result = GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_validationStubRoutineListForGeneration::plusAssign_operation (const GALGAS_validationStubRoutineListForGeneration inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_validationStubRoutineListForGeneration::cEnumerator_validationStubRoutineListForGeneration (const GALGAS_validationStubRoutineListForGeneration & inEnumeratedObject,
                                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_validationStubRoutineListForGeneration_2D_element cEnumerator_validationStubRoutineListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_validationStubRoutineListForGeneration * p = (const cCollectionElement_validationStubRoutineListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_validationStubRoutineListForGeneration::current_mObjectTypeName (LOCATION_ARGS) const {
  const cCollectionElement_validationStubRoutineListForGeneration * p = (const cCollectionElement_validationStubRoutineListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
  return p->mObject.mProperty_mObjectTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_validationStubRoutineListForGeneration::current_mModelName (LOCATION_ARGS) const {
  const cCollectionElement_validationStubRoutineListForGeneration * p = (const cCollectionElement_validationStubRoutineListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
  return p->mObject.mProperty_mModelName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_validationStubRoutineListForGeneration::current_mModelTypeName (LOCATION_ARGS) const {
  const cCollectionElement_validationStubRoutineListForGeneration * p = (const cCollectionElement_validationStubRoutineListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_validationStubRoutineListForGeneration) ;
  return p->mObject.mProperty_mModelTypeName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @validationStubRoutineListForGeneration type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration ("validationStubRoutineListForGeneration",
                                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_validationStubRoutineListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_validationStubRoutineListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_validationStubRoutineListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_actionMap::cMapElement_actionMap (const GALGAS_lstring & inKey
                                              COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_actionMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_actionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_actionMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_actionMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_actionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_actionMap * operand = (cMapElement_actionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap::GALGAS_actionMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap::GALGAS_actionMap (const GALGAS_actionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap & GALGAS_actionMap::operator = (const GALGAS_actionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap GALGAS_actionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_actionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap GALGAS_actionMap::constructor_mapWithMapToOverride (const GALGAS_actionMap & inMapToOverride
                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_actionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap GALGAS_actionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GALGAS_actionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_actionMap_searchKey = "the '%K' action is not defined" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_actionMap * GALGAS_actionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                             const GALGAS_string & inKey
                                                                             COMMA_LOCATION_ARGS) {
  cMapElement_actionMap * result = (cMapElement_actionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_actionMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_actionMap::cEnumerator_actionMap (const GALGAS_actionMap & inEnumeratedObject,
                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap_2D_element cEnumerator_actionMap::current (LOCATION_ARGS) const {
  const cMapElement_actionMap * p = (const cMapElement_actionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_actionMap) ;
  return GALGAS_actionMap_2D_element (p->mProperty_lkey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_actionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                   @actionMap type                                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionMap ("actionMap",
                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_actionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_actionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Class for element of '@actionListForGeneration' list                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_actionListForGeneration : public cCollectionElement {
  public : GALGAS_actionListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_actionListForGeneration (const GALGAS_string & in_mClassName,
                                                       const GALGAS_string & in_mActionName
                                                       COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_actionListForGeneration (const GALGAS_actionListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_actionListForGeneration::cCollectionElement_actionListForGeneration (const GALGAS_string & in_mClassName,
                                                                                        const GALGAS_string & in_mActionName
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mClassName, in_mActionName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_actionListForGeneration::cCollectionElement_actionListForGeneration (const GALGAS_actionListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mClassName, inElement.mProperty_mActionName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_actionListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_actionListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_actionListForGeneration (mObject.mProperty_mClassName, mObject.mProperty_mActionName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_actionListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mClassName" ":" ;
  mObject.mProperty_mClassName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionName" ":" ;
  mObject.mProperty_mActionName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_actionListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_actionListForGeneration * operand = (cCollectionElement_actionListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_actionListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionListForGeneration::GALGAS_actionListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionListForGeneration::GALGAS_actionListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionListForGeneration GALGAS_actionListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_actionListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionListForGeneration GALGAS_actionListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                          const GALGAS_string & inOperand1
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_actionListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_actionListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_actionListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                const GALGAS_string & in_mClassName,
                                                                const GALGAS_string & in_mActionName
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_actionListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_actionListForGeneration (in_mClassName,
                                                             in_mActionName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                          const GALGAS_string & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_actionListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionListForGeneration::setter_append (GALGAS_actionListForGeneration_2D_element inElement,
                                                    C_Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_actionListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                           const GALGAS_string inOperand1,
                                                           const GALGAS_uint inInsertionIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_actionListForGeneration (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                           GALGAS_string & outOperand1,
                                                           const GALGAS_uint inRemoveIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_actionListForGeneration * p = (cCollectionElement_actionListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_actionListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mClassName ;
      outOperand1 = p->mObject.mProperty_mActionName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                      GALGAS_string & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actionListForGeneration * p = (cCollectionElement_actionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mClassName ;
    outOperand1 = p->mObject.mProperty_mActionName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                     GALGAS_string & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actionListForGeneration * p = (cCollectionElement_actionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mClassName ;
    outOperand1 = p->mObject.mProperty_mActionName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionListForGeneration::method_first (GALGAS_string & outOperand0,
                                                   GALGAS_string & outOperand1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actionListForGeneration * p = (cCollectionElement_actionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mClassName ;
    outOperand1 = p->mObject.mProperty_mActionName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionListForGeneration::method_last (GALGAS_string & outOperand0,
                                                  GALGAS_string & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actionListForGeneration * p = (cCollectionElement_actionListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actionListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mClassName ;
    outOperand1 = p->mObject.mProperty_mActionName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionListForGeneration GALGAS_actionListForGeneration::add_operation (const GALGAS_actionListForGeneration & inOperand,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_actionListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionListForGeneration GALGAS_actionListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_actionListForGeneration result = GALGAS_actionListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionListForGeneration GALGAS_actionListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_actionListForGeneration result = GALGAS_actionListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionListForGeneration GALGAS_actionListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_actionListForGeneration result = GALGAS_actionListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionListForGeneration::plusAssign_operation (const GALGAS_actionListForGeneration inOperand,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_actionListForGeneration::getter_mClassNameAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actionListForGeneration * p = (cCollectionElement_actionListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actionListForGeneration) ;
    result = p->mObject.mProperty_mClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_actionListForGeneration::getter_mActionNameAtIndex (const GALGAS_uint & inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actionListForGeneration * p = (cCollectionElement_actionListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actionListForGeneration) ;
    result = p->mObject.mProperty_mActionName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_actionListForGeneration::cEnumerator_actionListForGeneration (const GALGAS_actionListForGeneration & inEnumeratedObject,
                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionListForGeneration_2D_element cEnumerator_actionListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_actionListForGeneration * p = (const cCollectionElement_actionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_actionListForGeneration::current_mClassName (LOCATION_ARGS) const {
  const cCollectionElement_actionListForGeneration * p = (const cCollectionElement_actionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionListForGeneration) ;
  return p->mObject.mProperty_mClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_actionListForGeneration::current_mActionName (LOCATION_ARGS) const {
  const cCollectionElement_actionListForGeneration * p = (const cCollectionElement_actionListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionListForGeneration) ;
  return p->mObject.mProperty_mActionName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @actionListForGeneration type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionListForGeneration ("actionListForGeneration",
                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_actionListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_actionListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionListForGeneration GALGAS_actionListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_actionListForGeneration result ;
  const GALGAS_actionListForGeneration * p = (const GALGAS_actionListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actionListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingComparisonAST::GALGAS_multipleBindingComparisonAST (void) :
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_equal (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_equal ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_notEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_notEqual ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_lower (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_lower ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_lowerOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_lowerOrEqual ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_greater (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_greater ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingComparisonAST GALGAS_multipleBindingComparisonAST::constructor_greaterOrEqual (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingComparisonAST result ;
  result.mEnum = kEnum_greaterOrEqual ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_multipleBindingComparisonAST [7] = {
  "(not built)",
  "equal",
  "notEqual",
  "lower",
  "lowerOrEqual",
  "greater",
  "greaterOrEqual"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_equal == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isNotEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_notEqual == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isLower (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lower == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isLowerOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_lowerOrEqual == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isGreater (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greater == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_multipleBindingComparisonAST::getter_isGreaterOrEqual (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_greaterOrEqual == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingComparisonAST::description (C_String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString << "<enum @multipleBindingComparisonAST: " << gEnumNameArrayFor_multipleBindingComparisonAST [mEnum] ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @multipleBindingComparisonAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleBindingComparisonAST ("multipleBindingComparisonAST",
                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_multipleBindingComparisonAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingComparisonAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_multipleBindingComparisonAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingComparisonAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_abstractBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inOperand) const {
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

GALGAS_abstractBooleanMultipleBindingExpressionAST::GALGAS_abstractBooleanMultipleBindingExpressionAST (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST::GALGAS_abstractBooleanMultipleBindingExpressionAST (const cPtr_abstractBooleanMultipleBindingExpressionAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractBooleanMultipleBindingExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                        Pointer class for @abstractBooleanMultipleBindingExpressionAST class                         *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_abstractBooleanMultipleBindingExpressionAST::cPtr_abstractBooleanMultipleBindingExpressionAST (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @abstractBooleanMultipleBindingExpressionAST type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST ("abstractBooleanMultipleBindingExpressionAST",
                                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_abstractBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_abstractBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_negateBooleanMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_negateBooleanMultipleBindingExpressionAST * p = (const cPtr_negateBooleanMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mBinding.objectCompare (p->mProperty_mBinding) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_negateBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_negateBooleanMultipleBindingExpressionAST & inOperand) const {
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

GALGAS_negateBooleanMultipleBindingExpressionAST::GALGAS_negateBooleanMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_negateBooleanMultipleBindingExpressionAST::GALGAS_negateBooleanMultipleBindingExpressionAST (const cPtr_negateBooleanMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_negateBooleanMultipleBindingExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_negateBooleanMultipleBindingExpressionAST GALGAS_negateBooleanMultipleBindingExpressionAST::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mBinding
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionAST result ;
  if (inAttribute_mBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_negateBooleanMultipleBindingExpressionAST (inAttribute_mBinding COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_negateBooleanMultipleBindingExpressionAST::getter_mBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_negateBooleanMultipleBindingExpressionAST * p = (const cPtr_negateBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionAST) ;
    result = p->mProperty_mBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_negateBooleanMultipleBindingExpressionAST::getter_mBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                         Pointer class for @negateBooleanMultipleBindingExpressionAST class                          *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_negateBooleanMultipleBindingExpressionAST::cPtr_negateBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mBinding
                                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mBinding (in_mBinding) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_negateBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;
}

void cPtr_negateBooleanMultipleBindingExpressionAST::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "[@negateBooleanMultipleBindingExpressionAST:" ;
  mProperty_mBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_negateBooleanMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_negateBooleanMultipleBindingExpressionAST (mProperty_mBinding COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @negateBooleanMultipleBindingExpressionAST type                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ("negateBooleanMultipleBindingExpressionAST",
                                                                  & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_negateBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_negateBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_negateBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_comparisonMultipleBindingExpressionAST::objectCompare (const GALGAS_comparisonMultipleBindingExpressionAST & inOperand) const {
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

GALGAS_comparisonMultipleBindingExpressionAST::GALGAS_comparisonMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_comparisonMultipleBindingExpressionAST::GALGAS_comparisonMultipleBindingExpressionAST (const cPtr_comparisonMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonMultipleBindingExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionAST * p = (const cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_comparisonMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingComparisonAST GALGAS_comparisonMultipleBindingExpressionAST::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_multipleBindingComparisonAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionAST * p = (const cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    result = p->mProperty_mOperator ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingComparisonAST cPtr_comparisonMultipleBindingExpressionAST::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperator ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_comparisonMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionAST * p = (const cPtr_comparisonMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionAST) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_comparisonMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Pointer class for @comparisonMultipleBindingExpressionAST class                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_comparisonMultipleBindingExpressionAST::cPtr_comparisonMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                          const GALGAS_multipleBindingComparisonAST & in_mOperator,
                                                                                          const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mOperator (in_mOperator),
mProperty_mRightBinding (in_mRightBinding) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_comparisonMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_comparisonMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mOperator, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @comparisonMultipleBindingExpressionAST type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ("comparisonMultipleBindingExpressionAST",
                                                               & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_comparisonMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_comparisonMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_andBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_andBooleanMultipleBindingExpressionAST & inOperand) const {
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

GALGAS_andBooleanMultipleBindingExpressionAST::GALGAS_andBooleanMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_andBooleanMultipleBindingExpressionAST::GALGAS_andBooleanMultipleBindingExpressionAST (const cPtr_andBooleanMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andBooleanMultipleBindingExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_andBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mLeftBinding,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionAST result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andBooleanMultipleBindingExpressionAST (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_andBooleanMultipleBindingExpressionAST * p = (const cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_andBooleanMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_andBooleanMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_andBooleanMultipleBindingExpressionAST * p = (const cPtr_andBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionAST) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_andBooleanMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Pointer class for @andBooleanMultipleBindingExpressionAST class                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_andBooleanMultipleBindingExpressionAST::cPtr_andBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                          const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_andBooleanMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_andBooleanMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @andBooleanMultipleBindingExpressionAST type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ("andBooleanMultipleBindingExpressionAST",
                                                               & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_andBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_andBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_orBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_orBooleanMultipleBindingExpressionAST & inOperand) const {
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

GALGAS_orBooleanMultipleBindingExpressionAST::GALGAS_orBooleanMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orBooleanMultipleBindingExpressionAST::GALGAS_orBooleanMultipleBindingExpressionAST (const cPtr_orBooleanMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orBooleanMultipleBindingExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mLeftBinding,
                                                                                                            const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mRightBinding
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionAST result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orBooleanMultipleBindingExpressionAST (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_orBooleanMultipleBindingExpressionAST * p = (const cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_orBooleanMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_orBooleanMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_orBooleanMultipleBindingExpressionAST * p = (const cPtr_orBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionAST) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_orBooleanMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Pointer class for @orBooleanMultipleBindingExpressionAST class                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_orBooleanMultipleBindingExpressionAST::cPtr_orBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                        const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_orBooleanMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_orBooleanMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @orBooleanMultipleBindingExpressionAST type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ("orBooleanMultipleBindingExpressionAST",
                                                              & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_orBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_orBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_xorBooleanMultipleBindingExpressionAST::objectCompare (const GALGAS_xorBooleanMultipleBindingExpressionAST & inOperand) const {
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

GALGAS_xorBooleanMultipleBindingExpressionAST::GALGAS_xorBooleanMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_xorBooleanMultipleBindingExpressionAST::GALGAS_xorBooleanMultipleBindingExpressionAST (const cPtr_xorBooleanMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorBooleanMultipleBindingExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_xorBooleanMultipleBindingExpressionAST GALGAS_xorBooleanMultipleBindingExpressionAST::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mLeftBinding,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAttribute_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionAST result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_xorBooleanMultipleBindingExpressionAST (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_xorBooleanMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorBooleanMultipleBindingExpressionAST * p = (const cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_xorBooleanMultipleBindingExpressionAST::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST GALGAS_xorBooleanMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorBooleanMultipleBindingExpressionAST * p = (const cPtr_xorBooleanMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionAST) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionAST cPtr_xorBooleanMultipleBindingExpressionAST::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                           Pointer class for @xorBooleanMultipleBindingExpressionAST class                           *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_xorBooleanMultipleBindingExpressionAST::cPtr_xorBooleanMultipleBindingExpressionAST (const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mLeftBinding,
                                                                                          const GALGAS_abstractBooleanMultipleBindingExpressionAST & in_mRightBinding
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_xorBooleanMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_xorBooleanMultipleBindingExpressionAST (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                    @xorBooleanMultipleBindingExpressionAST type                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ("xorBooleanMultipleBindingExpressionAST",
                                                               & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_xorBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_xorBooleanMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorBooleanMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_observablePropertyInMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_observablePropertyInMultipleBindingExpressionAST * p = (const cPtr_observablePropertyInMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mProperty.objectCompare (p->mProperty_mProperty) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_observablePropertyInMultipleBindingExpressionAST::objectCompare (const GALGAS_observablePropertyInMultipleBindingExpressionAST & inOperand) const {
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

GALGAS_observablePropertyInMultipleBindingExpressionAST::GALGAS_observablePropertyInMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyInMultipleBindingExpressionAST::GALGAS_observablePropertyInMultipleBindingExpressionAST (const cPtr_observablePropertyInMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyInMultipleBindingExpressionAST GALGAS_observablePropertyInMultipleBindingExpressionAST::constructor_new (const GALGAS_observablePropertyAST & inAttribute_mProperty
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyInMultipleBindingExpressionAST result ;
  if (inAttribute_mProperty.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_observablePropertyInMultipleBindingExpressionAST (inAttribute_mProperty COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyAST GALGAS_observablePropertyInMultipleBindingExpressionAST::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  GALGAS_observablePropertyAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_observablePropertyInMultipleBindingExpressionAST * p = (const cPtr_observablePropertyInMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
    result = p->mProperty_mProperty ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyAST cPtr_observablePropertyInMultipleBindingExpressionAST::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                      Pointer class for @observablePropertyInMultipleBindingExpressionAST class                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_observablePropertyInMultipleBindingExpressionAST::cPtr_observablePropertyInMultipleBindingExpressionAST (const GALGAS_observablePropertyAST & in_mProperty
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mProperty (in_mProperty) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_observablePropertyInMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;
}

void cPtr_observablePropertyInMultipleBindingExpressionAST::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "[@observablePropertyInMultipleBindingExpressionAST:" ;
  mProperty_mProperty.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_observablePropertyInMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_observablePropertyInMultipleBindingExpressionAST (mProperty_mProperty COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               @observablePropertyInMultipleBindingExpressionAST type                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ("observablePropertyInMultipleBindingExpressionAST",
                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_observablePropertyInMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_observablePropertyInMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyInMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_abstractBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration::GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration::GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractBooleanMultipleBindingExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                   Pointer class for @abstractBooleanMultipleBindingExpressionForGeneration class                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_abstractBooleanMultipleBindingExpressionForGeneration::cPtr_abstractBooleanMultipleBindingExpressionForGeneration (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             @abstractBooleanMultipleBindingExpressionForGeneration type                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration ("abstractBooleanMultipleBindingExpressionForGeneration",
                                                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_abstractBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_abstractBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_abstractBooleanMultipleBindingExpressionForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration * p = (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mObservedModel.objectCompare (p->mProperty_mObservedModel) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (GALGAS_string::constructor_default (HERE)
                                                                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_string & inAttribute_mObservedModel
                                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mObservedModel.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (inAttribute_mObservedModel COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::getter_mObservedModel (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mObservedModel ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::getter_mObservedModel (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservedModel ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//             Pointer class for @observablePropertyAsBooleanMultipleBindingExpressionForGeneration class              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (const GALGAS_string & in_mObservedModel
                                                                                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mObservedModel (in_mObservedModel) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                                          const int32_t inIndentation) const {
  ioString << "[@observablePropertyAsBooleanMultipleBindingExpressionForGeneration:" ;
  mProperty_mObservedModel.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (mProperty_mObservedModel COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       @observablePropertyAsBooleanMultipleBindingExpressionForGeneration type                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration",
                                                                                          & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_negateBooleanMultipleBindingExpressionForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_negateBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mBinding.objectCompare (p->mProperty_mBinding) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_negateBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_negateBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

GALGAS_negateBooleanMultipleBindingExpressionForGeneration::GALGAS_negateBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_negateBooleanMultipleBindingExpressionForGeneration::GALGAS_negateBooleanMultipleBindingExpressionForGeneration (const cPtr_negateBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_negateBooleanMultipleBindingExpressionForGeneration GALGAS_negateBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mBinding
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_negateBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_negateBooleanMultipleBindingExpressionForGeneration (inAttribute_mBinding COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_negateBooleanMultipleBindingExpressionForGeneration::getter_mBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_negateBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_negateBooleanMultipleBindingExpressionForGeneration::getter_mBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                    Pointer class for @negateBooleanMultipleBindingExpressionForGeneration class                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_negateBooleanMultipleBindingExpressionForGeneration::cPtr_negateBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBinding
                                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mBinding (in_mBinding) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_negateBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_negateBooleanMultipleBindingExpressionForGeneration::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "[@negateBooleanMultipleBindingExpressionForGeneration:" ;
  mProperty_mBinding.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_negateBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_negateBooleanMultipleBindingExpressionForGeneration (mProperty_mBinding COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              @negateBooleanMultipleBindingExpressionForGeneration type                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ("negateBooleanMultipleBindingExpressionForGeneration",
                                                                            & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_negateBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_negateBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_negateBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_orBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_orBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

GALGAS_orBooleanMultipleBindingExpressionForGeneration::GALGAS_orBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orBooleanMultipleBindingExpressionForGeneration::GALGAS_orBooleanMultipleBindingExpressionForGeneration (const cPtr_orBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_orBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mLeftBinding,
                                                                                                                                const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mRightBinding
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_orBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_orBooleanMultipleBindingExpressionForGeneration (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_orBooleanMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_orBooleanMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_orBooleanMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                      Pointer class for @orBooleanMultipleBindingExpressionForGeneration class                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_orBooleanMultipleBindingExpressionForGeneration::cPtr_orBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                            const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_orBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_orBooleanMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                @orBooleanMultipleBindingExpressionForGeneration type                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ("orBooleanMultipleBindingExpressionForGeneration",
                                                                        & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_orBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_orBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_orBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_xorBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_xorBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

GALGAS_xorBooleanMultipleBindingExpressionForGeneration::GALGAS_xorBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_xorBooleanMultipleBindingExpressionForGeneration::GALGAS_xorBooleanMultipleBindingExpressionForGeneration (const cPtr_xorBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_xorBooleanMultipleBindingExpressionForGeneration GALGAS_xorBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mLeftBinding,
                                                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mRightBinding
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_xorBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_xorBooleanMultipleBindingExpressionForGeneration (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_xorBooleanMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_xorBooleanMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_xorBooleanMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_xorBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_xorBooleanMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                      Pointer class for @xorBooleanMultipleBindingExpressionForGeneration class                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_xorBooleanMultipleBindingExpressionForGeneration::cPtr_xorBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_xorBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_xorBooleanMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               @xorBooleanMultipleBindingExpressionForGeneration type                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ("xorBooleanMultipleBindingExpressionForGeneration",
                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_xorBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_xorBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_xorBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_andBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_andBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

GALGAS_andBooleanMultipleBindingExpressionForGeneration::GALGAS_andBooleanMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_andBooleanMultipleBindingExpressionForGeneration::GALGAS_andBooleanMultipleBindingExpressionForGeneration (const cPtr_andBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_andBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration::constructor_new (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mLeftBinding,
                                                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAttribute_mRightBinding
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_andBooleanMultipleBindingExpressionForGeneration result ;
  if (inAttribute_mLeftBinding.isValid () && inAttribute_mRightBinding.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_andBooleanMultipleBindingExpressionForGeneration (inAttribute_mLeftBinding, inAttribute_mRightBinding COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_andBooleanMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_andBooleanMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_andBooleanMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                      Pointer class for @andBooleanMultipleBindingExpressionForGeneration class                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_andBooleanMultipleBindingExpressionForGeneration::cPtr_andBooleanMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mRightBinding (in_mRightBinding) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_andBooleanMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_andBooleanMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               @andBooleanMultipleBindingExpressionForGeneration type                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ("andBooleanMultipleBindingExpressionForGeneration",
                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_andBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_andBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_andBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_comparisonMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_comparisonMultipleBindingExpressionForGeneration & inOperand) const {
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

GALGAS_comparisonMultipleBindingExpressionForGeneration::GALGAS_comparisonMultipleBindingExpressionForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_comparisonMultipleBindingExpressionForGeneration::GALGAS_comparisonMultipleBindingExpressionForGeneration (const cPtr_comparisonMultipleBindingExpressionForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionForGeneration * p = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mLeftBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_comparisonMultipleBindingExpressionForGeneration::getter_mLeftBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLeftBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingComparisonAST GALGAS_comparisonMultipleBindingExpressionForGeneration::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  GALGAS_multipleBindingComparisonAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionForGeneration * p = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mOperator ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingComparisonAST cPtr_comparisonMultipleBindingExpressionForGeneration::getter_mOperator (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOperator ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_comparisonMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_comparisonMultipleBindingExpressionForGeneration * p = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
    result = p->mProperty_mRightBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cPtr_comparisonMultipleBindingExpressionForGeneration::getter_mRightBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRightBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                      Pointer class for @comparisonMultipleBindingExpressionForGeneration class                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_comparisonMultipleBindingExpressionForGeneration::cPtr_comparisonMultipleBindingExpressionForGeneration (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mLeftBinding,
                                                                                                              const GALGAS_multipleBindingComparisonAST & in_mOperator,
                                                                                                              const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mRightBinding
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mLeftBinding (in_mLeftBinding),
mProperty_mOperator (in_mOperator),
mProperty_mRightBinding (in_mRightBinding) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_comparisonMultipleBindingExpressionForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_comparisonMultipleBindingExpressionForGeneration (mProperty_mLeftBinding, mProperty_mOperator, mProperty_mRightBinding COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               @comparisonMultipleBindingExpressionForGeneration type                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ("comparisonMultipleBindingExpressionForGeneration",
                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_comparisonMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_comparisonMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_comparisonMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//   Abstract extension method '@abstractBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBindingEX'    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX> gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyzeExpressionForMultipleBindingEX (const int32_t inClassIndex,
                                                                 extensionMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX inMethod) {
  gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (void) {
  gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (NULL,
                                                                                                              freeExtensionMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyzeExpressionForMultipleBindingEX (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                const GALGAS_observablePropertyMap constin_inRootObservablePropertyMap,
                                                                const GALGAS_semanticContextEX constin_inSemanticContext,
                                                                const GALGAS_observablePropertyMap constin_inCurrentObservablePropertyMap,
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
    extensionMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX.count ()) {
      f = gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX.count ()) {
          f = gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBindingEX.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inRootObservablePropertyMap, constin_inSemanticContext, constin_inCurrentObservablePropertyMap, out_outEnableExpression, out_outType, out_outErrorLocation, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//    Abstract extension method '@abstractBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding> gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_analyzeExpressionForMultipleBinding (const int32_t inClassIndex,
                                                               extensionMethodSignature_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding inMethod) {
  gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  gExtensionMethodTable_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (NULL,
                                                                                                            freeExtensionMethod_abstractBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
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
      f (inObject, constin_inRootObservablePropertyMap, constin_inSemanticContext, constin_inCurrentObservablePropertyMap, out_outEnableExpression, out_outType, out_outErrorLocation, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Abstract extension getter '@abstractBooleanMultipleBindingExpressionForGeneration observedModelSet'         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet> gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_observedModelSet (const int32_t inClassIndex,
                                            enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet inGetter) {
  gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet (NULL,
                                                                                                   freeExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset callExtensionGetter_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_stringset result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractBooleanMultipleBindingExpressionForGeneration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet.count ()) {
      f = gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet.count ()) {
           f = gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_observedModelSet.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//         Abstract extension getter '@abstractBooleanMultipleBindingExpressionForGeneration expressionString'         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString> gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_expressionString (const int32_t inClassIndex,
                                            enterExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString inGetter) {
  gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  gExtensionGetterTable_abstractBooleanMultipleBindingExpressionForGeneration_expressionString.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString (NULL,
                                                                                                   freeExtensionGetter_abstractBooleanMultipleBindingExpressionForGeneration_expressionString) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Class for element of '@arrayControllerBoundColumnListAST' list                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_arrayControllerBoundColumnListAST : public cCollectionElement {
  public : GALGAS_arrayControllerBoundColumnListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_arrayControllerBoundColumnListAST (const GALGAS_lstring & in_mColumnName,
                                                                 const GALGAS_lstring & in_mColumnOutletTypeName,
                                                                 const GALGAS_columnBindingAST & in_mColumnBindingAST,
                                                                 const GALGAS_lstring & in_mSortPropertyName
                                                                 COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_arrayControllerBoundColumnListAST (const GALGAS_arrayControllerBoundColumnListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_arrayControllerBoundColumnListAST::cCollectionElement_arrayControllerBoundColumnListAST (const GALGAS_lstring & in_mColumnName,
                                                                                                            const GALGAS_lstring & in_mColumnOutletTypeName,
                                                                                                            const GALGAS_columnBindingAST & in_mColumnBindingAST,
                                                                                                            const GALGAS_lstring & in_mSortPropertyName
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mColumnName, in_mColumnOutletTypeName, in_mColumnBindingAST, in_mSortPropertyName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_arrayControllerBoundColumnListAST::cCollectionElement_arrayControllerBoundColumnListAST (const GALGAS_arrayControllerBoundColumnListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mColumnName, inElement.mProperty_mColumnOutletTypeName, inElement.mProperty_mColumnBindingAST, inElement.mProperty_mSortPropertyName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_arrayControllerBoundColumnListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_arrayControllerBoundColumnListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arrayControllerBoundColumnListAST (mObject.mProperty_mColumnName, mObject.mProperty_mColumnOutletTypeName, mObject.mProperty_mColumnBindingAST, mObject.mProperty_mSortPropertyName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_arrayControllerBoundColumnListAST::description (C_String & ioString, const int32_t inIndentation) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_arrayControllerBoundColumnListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arrayControllerBoundColumnListAST * operand = (cCollectionElement_arrayControllerBoundColumnListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arrayControllerBoundColumnListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST::GALGAS_arrayControllerBoundColumnListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST::GALGAS_arrayControllerBoundColumnListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerBoundColumnListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_arrayControllerBoundColumnListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerBoundColumnListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                              const GALGAS_columnBindingAST & inOperand2,
                                                                                                              const GALGAS_lstring & inOperand3
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_arrayControllerBoundColumnListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_arrayControllerBoundColumnListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_lstring & in_mColumnName,
                                                                          const GALGAS_lstring & in_mColumnOutletTypeName,
                                                                          const GALGAS_columnBindingAST & in_mColumnBindingAST,
                                                                          const GALGAS_lstring & in_mSortPropertyName
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerBoundColumnListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListAST (in_mColumnName,
                                                                       in_mColumnOutletTypeName,
                                                                       in_mColumnBindingAST,
                                                                       in_mSortPropertyName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstring & inOperand1,
                                                                    const GALGAS_columnBindingAST & inOperand2,
                                                                    const GALGAS_lstring & inOperand3
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListAST::setter_append (GALGAS_arrayControllerBoundColumnListAST_2D_element inElement,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                     const GALGAS_lstring inOperand1,
                                                                     const GALGAS_columnBindingAST inOperand2,
                                                                     const GALGAS_lstring inOperand3,
                                                                     const GALGAS_uint inInsertionIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerBoundColumnListAST (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                     GALGAS_lstring & outOperand1,
                                                                     GALGAS_columnBindingAST & outOperand2,
                                                                     GALGAS_lstring & outOperand3,
                                                                     const GALGAS_uint inRemoveIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
      outOperand0 = p->mObject.mProperty_mColumnName ;
      outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
      outOperand2 = p->mObject.mProperty_mColumnBindingAST ;
      outOperand3 = p->mObject.mProperty_mSortPropertyName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                GALGAS_columnBindingAST & outOperand2,
                                                                GALGAS_lstring & outOperand3,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mColumnBindingAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               GALGAS_columnBindingAST & outOperand2,
                                                               GALGAS_lstring & outOperand3,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mColumnBindingAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListAST::method_first (GALGAS_lstring & outOperand0,
                                                             GALGAS_lstring & outOperand1,
                                                             GALGAS_columnBindingAST & outOperand2,
                                                             GALGAS_lstring & outOperand3,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mColumnBindingAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListAST::method_last (GALGAS_lstring & outOperand0,
                                                            GALGAS_lstring & outOperand1,
                                                            GALGAS_columnBindingAST & outOperand2,
                                                            GALGAS_lstring & outOperand3,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    outOperand0 = p->mObject.mProperty_mColumnName ;
    outOperand1 = p->mObject.mProperty_mColumnOutletTypeName ;
    outOperand2 = p->mObject.mProperty_mColumnBindingAST ;
    outOperand3 = p->mObject.mProperty_mSortPropertyName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerBoundColumnListAST::add_operation (const GALGAS_arrayControllerBoundColumnListAST & inOperand,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerBoundColumnListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListAST result = GALGAS_arrayControllerBoundColumnListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerBoundColumnListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListAST result = GALGAS_arrayControllerBoundColumnListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerBoundColumnListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListAST result = GALGAS_arrayControllerBoundColumnListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerBoundColumnListAST::plusAssign_operation (const GALGAS_arrayControllerBoundColumnListAST inOperand,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayControllerBoundColumnListAST::getter_mColumnNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mColumnName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayControllerBoundColumnListAST::getter_mColumnOutletTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mColumnOutletTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_columnBindingAST GALGAS_arrayControllerBoundColumnListAST::getter_mColumnBindingASTAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_columnBindingAST result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mColumnBindingAST ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_arrayControllerBoundColumnListAST::getter_mSortPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBoundColumnListAST * p = (cCollectionElement_arrayControllerBoundColumnListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
    result = p->mObject.mProperty_mSortPropertyName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_arrayControllerBoundColumnListAST::cEnumerator_arrayControllerBoundColumnListAST (const GALGAS_arrayControllerBoundColumnListAST & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST_2D_element cEnumerator_arrayControllerBoundColumnListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListAST * p = (const cCollectionElement_arrayControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_arrayControllerBoundColumnListAST::current_mColumnName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListAST * p = (const cCollectionElement_arrayControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mColumnName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_arrayControllerBoundColumnListAST::current_mColumnOutletTypeName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListAST * p = (const cCollectionElement_arrayControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mColumnOutletTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_columnBindingAST cEnumerator_arrayControllerBoundColumnListAST::current_mColumnBindingAST (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListAST * p = (const cCollectionElement_arrayControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mColumnBindingAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_arrayControllerBoundColumnListAST::current_mSortPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBoundColumnListAST * p = (const cCollectionElement_arrayControllerBoundColumnListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBoundColumnListAST) ;
  return p->mObject.mProperty_mSortPropertyName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @arrayControllerBoundColumnListAST type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerBoundColumnListAST ("arrayControllerBoundColumnListAST",
                                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerBoundColumnListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBoundColumnListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerBoundColumnListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerBoundColumnListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerBoundColumnListAST::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListAST result ;
  const GALGAS_arrayControllerBoundColumnListAST * p = (const GALGAS_arrayControllerBoundColumnListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerBoundColumnListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBoundColumnListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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

