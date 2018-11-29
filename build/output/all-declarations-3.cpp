#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-3.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Class for element of '@mainXibLineDescriptorList' list                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_mainXibLineDescriptorList::cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibElement & in_mElement
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_mainXibLineDescriptorList::cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibLineDescriptorList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_mainXibLineDescriptorList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_mainXibLineDescriptorList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_mainXibLineDescriptorList (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_mainXibLineDescriptorList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElement" ":" ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_mainXibLineDescriptorList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_mainXibLineDescriptorList * operand = (cCollectionElement_mainXibLineDescriptorList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_mainXibLineDescriptorList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList::GALGAS_mainXibLineDescriptorList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList::GALGAS_mainXibLineDescriptorList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mainXibLineDescriptorList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibLineDescriptorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                  const GALGAS_mainXibElement & in_mElement
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_mainXibLineDescriptorList * p = NULL ;
  macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibLineDescriptorList::addAssign_operation (const GALGAS_mainXibElement & inOperand0
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibLineDescriptorList::setter_append (GALGAS_mainXibLineDescriptorList_2D_element inElement,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibLineDescriptorList::setter_insertAtIndex (const GALGAS_mainXibElement inOperand0,
                                                             const GALGAS_uint inInsertionIndex,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibLineDescriptorList::setter_removeAtIndex (GALGAS_mainXibElement & outOperand0,
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
      outOperand0 = p->mObject.mProperty_mElement ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_mainXibLineDescriptorList result = GALGAS_mainXibLineDescriptorList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_mainXibLineDescriptorList result = GALGAS_mainXibLineDescriptorList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibLineDescriptorList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_mainXibLineDescriptorList result = GALGAS_mainXibLineDescriptorList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibLineDescriptorList::plusAssign_operation (const GALGAS_mainXibLineDescriptorList inOperand,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_mainXibLineDescriptorList::cEnumerator_mainXibLineDescriptorList (const GALGAS_mainXibLineDescriptorList & inEnumeratedObject,
                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList_2D_element cEnumerator_mainXibLineDescriptorList::current (LOCATION_ARGS) const {
  const cCollectionElement_mainXibLineDescriptorList * p = (const cCollectionElement_mainXibLineDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibElement cEnumerator_mainXibLineDescriptorList::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_mainXibLineDescriptorList * p = (const cCollectionElement_mainXibLineDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
  return p->mObject.mProperty_mElement ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @mainXibLineDescriptorList type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibLineDescriptorList ("mainXibLineDescriptorList",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_mainXibLineDescriptorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibLineDescriptorList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_mainXibLineDescriptorList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibLineDescriptorList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_mainXibElement_text::cEnumAssociatedValues_mainXibElement_text (const GALGAS_lstring & inAssociatedValue0
                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_mainXibElement_text::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_mainXibElement_text::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_mainXibElement_text * ptr = dynamic_cast<const cEnumAssociatedValues_mainXibElement_text *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_mainXibElement_outlet::cEnumAssociatedValues_mainXibElement_outlet (const GALGAS_lstring & inAssociatedValue0,
                                                                                          const GALGAS_lstring & inAssociatedValue1
                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_mainXibElement_outlet::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibElement::GALGAS_mainXibElement (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_mainXibElement [3] = {
  "(not built)",
  "text",
  "outlet"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_mainXibElement::getter_isText (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_text == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_mainXibElement::getter_isOutlet (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_outlet == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibElement::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "<enum @mainXibElement: " << gEnumNameArrayFor_mainXibElement [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @mainXibElement type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibElement ("mainXibElement",
                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_mainXibElement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibElement ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_mainXibElement::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibElement (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Extension Getter '@mainXibDescriptorList generateCode'                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

GALGAS_toManyPropertyGenerationList_2D_element::GALGAS_toManyPropertyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyPropertyGenerationList_2D_element::~ GALGAS_toManyPropertyGenerationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyPropertyGenerationList_2D_element::GALGAS_toManyPropertyGenerationList_2D_element (const GALGAS_toManyPropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyPropertyGenerationList_2D_element GALGAS_toManyPropertyGenerationList_2D_element::constructor_new (const GALGAS_toManyPropertyGeneration & inOperand0 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toManyPropertyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_toManyPropertyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_toManyPropertyGenerationList_2D_element::objectCompare (const GALGAS_toManyPropertyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_toManyPropertyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyPropertyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyPropertyGeneration GALGAS_toManyPropertyGenerationList_2D_element::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @toManyPropertyGenerationList-element type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyPropertyGenerationList_2D_element ("toManyPropertyGenerationList-element",
                                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toManyPropertyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGenerationList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toManyPropertyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyPropertyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

GALGAS_tableViewControllerFilterListForGeneration_2D_element::GALGAS_tableViewControllerFilterListForGeneration_2D_element (void) :
mProperty_mFilterPropertyName (),
mProperty_mFilterPropertyKind () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerFilterListForGeneration_2D_element::~ GALGAS_tableViewControllerFilterListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerFilterListForGeneration_2D_element::GALGAS_tableViewControllerFilterListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                            const GALGAS_propertyKind & inOperand1) :
mProperty_mFilterPropertyName (inOperand0),
mProperty_mFilterPropertyKind (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerFilterListForGeneration_2D_element GALGAS_tableViewControllerFilterListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                            const GALGAS_propertyKind & inOperand1 
                                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewControllerFilterListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_tableViewControllerFilterListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_tableViewControllerFilterListForGeneration_2D_element::objectCompare (const GALGAS_tableViewControllerFilterListForGeneration_2D_element & inOperand) const {
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

bool GALGAS_tableViewControllerFilterListForGeneration_2D_element::isValid (void) const {
  return mProperty_mFilterPropertyName.isValid () && mProperty_mFilterPropertyKind.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewControllerFilterListForGeneration_2D_element::drop (void) {
  mProperty_mFilterPropertyName.drop () ;
  mProperty_mFilterPropertyKind.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewControllerFilterListForGeneration_2D_element::description (C_String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString << "<struct @tableViewControllerFilterListForGeneration-element:" ;
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

GALGAS_string GALGAS_tableViewControllerFilterListForGeneration_2D_element::getter_mFilterPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilterPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_tableViewControllerFilterListForGeneration_2D_element::getter_mFilterPropertyKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilterPropertyKind ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              @tableViewControllerFilterListForGeneration-element type                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerFilterListForGeneration_2D_element ("tableViewControllerFilterListForGeneration-element",
                                                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_tableViewControllerFilterListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerFilterListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_tableViewControllerFilterListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerFilterListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerFilterListForGeneration_2D_element GALGAS_tableViewControllerFilterListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_tableViewControllerFilterListForGeneration_2D_element result ;
  const GALGAS_tableViewControllerFilterListForGeneration_2D_element * p = (const GALGAS_tableViewControllerFilterListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewControllerFilterListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewControllerFilterListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (void) :
mProperty_mColumnName (),
mProperty_mColumnOutletTypeName (),
mProperty_mRunAction (),
mProperty_mRegularBindingsGenerationList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::~ GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                      const GALGAS_string & inOperand1,
                                                                                                                                      const GALGAS_string & inOperand2,
                                                                                                                                      const GALGAS_regularBindingsGenerationList & inOperand3) :
mProperty_mColumnName (inOperand0),
mProperty_mColumnOutletTypeName (inOperand1),
mProperty_mRunAction (inOperand2),
mProperty_mRegularBindingsGenerationList (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                            GALGAS_string::constructor_default (HERE),
                                                                            GALGAS_string::constructor_default (HERE),
                                                                            GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::isValid (void) const {
  return mProperty_mColumnName.isValid () && mProperty_mColumnOutletTypeName.isValid () && mProperty_mRunAction.isValid () && mProperty_mRegularBindingsGenerationList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::drop (void) {
  mProperty_mColumnName.drop () ;
  mProperty_mColumnOutletTypeName.drop () ;
  mProperty_mRunAction.drop () ;
  mProperty_mRegularBindingsGenerationList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::getter_mColumnName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::getter_mColumnOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnOutletTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::getter_mRunAction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRunAction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularBindingsGenerationList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            @tableViewControllerBoundColumnListForGeneration-element type                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element ("tableViewControllerBoundColumnListForGeneration-element",
                                                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerBoundColumnListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (void) :
mProperty_mColumnName (),
mProperty_mSortPropertyKind (),
mProperty_mObservablePropertyForSorting () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::~ GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                        const GALGAS_propertyKind & inOperand1,
                                                                                                                                        const GALGAS_string & inOperand2) :
mProperty_mColumnName (inOperand0),
mProperty_mSortPropertyKind (inOperand1),
mProperty_mObservablePropertyForSorting (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::isValid (void) const {
  return mProperty_mColumnName.isValid () && mProperty_mSortPropertyKind.isValid () && mProperty_mObservablePropertyForSorting.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::drop (void) {
  mProperty_mColumnName.drop () ;
  mProperty_mSortPropertyKind.drop () ;
  mProperty_mObservablePropertyForSorting.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::getter_mColumnName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mColumnName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::getter_mSortPropertyKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSortPropertyKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::getter_mObservablePropertyForSorting (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObservablePropertyForSorting ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           @tableViewControllerSortedColumnListForGeneration-element type                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element ("tableViewControllerSortedColumnListForGeneration-element",
                                                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewControllerSortedColumnListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration_2D_element::GALGAS_selectionControllerForGeneration_2D_element (void) :
mProperty_mOwnerName (),
mProperty_mSelectionControllerName (),
mProperty_mBoundControllerName (),
mProperty_mBoundControllerPropertyName (),
mProperty_mBaseTypeName (),
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
                                                                                                        const GALGAS_string & inOperand5,
                                                                                                        const GALGAS_propertyMap & inOperand6) :
mProperty_mOwnerName (inOperand0),
mProperty_mSelectionControllerName (inOperand1),
mProperty_mBoundControllerName (inOperand2),
mProperty_mBoundControllerPropertyName (inOperand3),
mProperty_mBaseTypeName (inOperand4),
mProperty_mSelectionTypeName (inOperand5),
mProperty_mSelectionObservablePropertyMap (inOperand6) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration_2D_element GALGAS_selectionControllerForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_selectionControllerForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_propertyMap::constructor_emptyMap (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration_2D_element GALGAS_selectionControllerForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                        const GALGAS_string & inOperand1,
                                                                                                                        const GALGAS_string & inOperand2,
                                                                                                                        const GALGAS_string & inOperand3,
                                                                                                                        const GALGAS_string & inOperand4,
                                                                                                                        const GALGAS_string & inOperand5,
                                                                                                                        const GALGAS_propertyMap & inOperand6 
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_selectionControllerForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_selectionControllerForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
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
    result = mProperty_mBaseTypeName.objectCompare (inOperand.mProperty_mBaseTypeName) ;
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
  return mProperty_mOwnerName.isValid () && mProperty_mSelectionControllerName.isValid () && mProperty_mBoundControllerName.isValid () && mProperty_mBoundControllerPropertyName.isValid () && mProperty_mBaseTypeName.isValid () && mProperty_mSelectionTypeName.isValid () && mProperty_mSelectionObservablePropertyMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_selectionControllerForGeneration_2D_element::drop (void) {
  mProperty_mOwnerName.drop () ;
  mProperty_mSelectionControllerName.drop () ;
  mProperty_mBoundControllerName.drop () ;
  mProperty_mBoundControllerPropertyName.drop () ;
  mProperty_mBaseTypeName.drop () ;
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
    mProperty_mBaseTypeName.description (ioString, inIndentation+1) ;
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

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mBaseTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBaseTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mSelectionTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap GALGAS_selectionControllerForGeneration_2D_element::getter_mSelectionObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (void) :
mProperty_mGroupReference (),
mProperty_mGroupName (),
mProperty_mGroupPath (),
mProperty_mChildrenRefs () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeGroupList_2D_element::~ GALGAS_XCodeGroupList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (const GALGAS_string & inOperand0,
                                                                    const GALGAS_string & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_stringlist & inOperand3) :
mProperty_mGroupReference (inOperand0),
mProperty_mGroupName (inOperand1),
mProperty_mGroupPath (inOperand2),
mProperty_mChildrenRefs (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeGroupList_2D_element (GALGAS_string::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_stringlist::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_XCodeGroupList_2D_element::isValid (void) const {
  return mProperty_mGroupReference.isValid () && mProperty_mGroupName.isValid () && mProperty_mGroupPath.isValid () && mProperty_mChildrenRefs.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_XCodeGroupList_2D_element::drop (void) {
  mProperty_mGroupReference.drop () ;
  mProperty_mGroupName.drop () ;
  mProperty_mGroupPath.drop () ;
  mProperty_mChildrenRefs.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupReference ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupPath (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGroupPath ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_XCodeGroupList_2D_element::getter_mChildrenRefs (UNUSED_LOCATION_ARGS) const {
  return mProperty_mChildrenRefs ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @XCodeGroupList-element type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ("XCodeGroupList-element",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_XCodeGroupList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_XCodeGroupList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeGroupList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeToolTargetList_2D_element::~ GALGAS_XCodeToolTargetList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_XCodeToolTargetList_2D_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mTargetRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mProductFileReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProductFileReference ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mProductFileName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProductFileName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mBuildPhaseRefList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildPhaseRefList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildPhaseRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationListRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationListRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationSettingList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationSettingList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mFrameworksFileRefList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFrameworksFileRefList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mFrameworkBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFrameworkBuildPhaseRef ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @XCodeToolTargetList-element type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ("XCodeToolTargetList-element",
                                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_XCodeToolTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_XCodeToolTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeToolTargetList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeAppTargetList_2D_element::GALGAS_XCodeAppTargetList_2D_element (void) :
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
mProperty_mFrameworkBuildPhaseRef (),
mProperty_mDependentTargets (),
mProperty_mResourceBuildRef (),
mProperty_mResourceFileBuildRefs (),
mProperty_mInfoPListFile () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeAppTargetList_2D_element::~ GALGAS_XCodeAppTargetList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeAppTargetList_2D_element::GALGAS_XCodeAppTargetList_2D_element (const GALGAS_string & inOperand0,
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
                                                                            const GALGAS_string & inOperand14) :
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
mProperty_mFrameworkBuildPhaseRef (inOperand10),
mProperty_mDependentTargets (inOperand11),
mProperty_mResourceBuildRef (inOperand12),
mProperty_mResourceFileBuildRefs (inOperand13),
mProperty_mInfoPListFile (inOperand14) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeAppTargetList_2D_element (GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS__32_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE),
                                               GALGAS_stringlist::constructor_emptyList (HERE),
                                               GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::constructor_new (const GALGAS_string & inOperand0,
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
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid ()) {
    result = GALGAS_XCodeAppTargetList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_XCodeAppTargetList_2D_element::objectCompare (const GALGAS_XCodeAppTargetList_2D_element & inOperand) const {
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
  if (result == kOperandEqual) {
    result = mProperty_mDependentTargets.objectCompare (inOperand.mProperty_mDependentTargets) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResourceBuildRef.objectCompare (inOperand.mProperty_mResourceBuildRef) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mResourceFileBuildRefs.objectCompare (inOperand.mProperty_mResourceFileBuildRefs) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInfoPListFile.objectCompare (inOperand.mProperty_mInfoPListFile) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_XCodeAppTargetList_2D_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () && mProperty_mDependentTargets.isValid () && mProperty_mResourceBuildRef.isValid () && mProperty_mResourceFileBuildRefs.isValid () && mProperty_mInfoPListFile.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_XCodeAppTargetList_2D_element::drop (void) {
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
  mProperty_mDependentTargets.drop () ;
  mProperty_mResourceBuildRef.drop () ;
  mProperty_mResourceFileBuildRefs.drop () ;
  mProperty_mInfoPListFile.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_XCodeAppTargetList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @XCodeAppTargetList-element:" ;
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
    ioString << ", " ;
    mProperty_mDependentTargets.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResourceBuildRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mResourceFileBuildRefs.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInfoPListFile.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mTargetRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mProductFileReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProductFileReference ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mProductFileName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProductFileName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mBuildPhaseRefList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildPhaseRefList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildPhaseRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationListRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationListRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationSettingList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationSettingList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mFrameworksFileRefList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFrameworksFileRefList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mFrameworkBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFrameworkBuildPhaseRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS__32_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mDependentTargets (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependentTargets ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mResourceBuildRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResourceBuildRef ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mResourceFileBuildRefs (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResourceFileBuildRefs ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mInfoPListFile (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInfoPListFile ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @XCodeAppTargetList-element type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ("XCodeAppTargetList-element",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_XCodeAppTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_XCodeAppTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeAppTargetList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList_2D_element result ;
  const GALGAS_XCodeAppTargetList_2D_element * p = (const GALGAS_XCodeAppTargetList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XCodeAppTargetList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeAppTargetList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (void) :
mProperty_mFileReference (),
mProperty_mFileName (),
mProperty_mBuildReference () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList_2D_element::~ GALGAS_BuildFileList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (const GALGAS_string & inOperand0,
                                                                  const GALGAS_string & inOperand1,
                                                                  const GALGAS_string & inOperand2) :
mProperty_mFileReference (inOperand0),
mProperty_mFileName (inOperand1),
mProperty_mBuildReference (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_BuildFileList_2D_element (GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_string & inOperand1,
                                                                                  const GALGAS_string & inOperand2 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_BuildFileList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_BuildFileList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_BuildFileList_2D_element::objectCompare (const GALGAS_BuildFileList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFileReference.objectCompare (inOperand.mProperty_mFileReference) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mFileName.objectCompare (inOperand.mProperty_mFileName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBuildReference.objectCompare (inOperand.mProperty_mBuildReference) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_BuildFileList_2D_element::isValid (void) const {
  return mProperty_mFileReference.isValid () && mProperty_mFileName.isValid () && mProperty_mBuildReference.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_BuildFileList_2D_element::drop (void) {
  mProperty_mFileReference.drop () ;
  mProperty_mFileName.drop () ;
  mProperty_mBuildReference.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_BuildFileList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @BuildFileList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFileReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBuildReference.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mFileReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFileReference ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mFileName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFileName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mBuildReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildReference ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @BuildFileList-element type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_BuildFileList_2D_element ("BuildFileList-element",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_BuildFileList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_BuildFileList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_BuildFileList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_BuildFileList_2D_element result ;
  const GALGAS_BuildFileList_2D_element * p = (const GALGAS_BuildFileList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_BuildFileList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("BuildFileList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibDescriptorList_2D_element::GALGAS_mainXibDescriptorList_2D_element (void) :
mProperty_mLine () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibDescriptorList_2D_element::~ GALGAS_mainXibDescriptorList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibDescriptorList_2D_element::GALGAS_mainXibDescriptorList_2D_element (const GALGAS_mainXibLineDescriptorList & inOperand0) :
mProperty_mLine (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibDescriptorList_2D_element GALGAS_mainXibDescriptorList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_mainXibDescriptorList_2D_element (GALGAS_mainXibLineDescriptorList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibDescriptorList_2D_element GALGAS_mainXibDescriptorList_2D_element::constructor_new (const GALGAS_mainXibLineDescriptorList & inOperand0 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mainXibDescriptorList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_mainXibDescriptorList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_mainXibDescriptorList_2D_element::objectCompare (const GALGAS_mainXibDescriptorList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLine.objectCompare (inOperand.mProperty_mLine) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_mainXibDescriptorList_2D_element::isValid (void) const {
  return mProperty_mLine.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibDescriptorList_2D_element::drop (void) {
  mProperty_mLine.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibDescriptorList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @mainXibDescriptorList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLine.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibDescriptorList_2D_element::getter_mLine (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLine ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @mainXibDescriptorList-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibDescriptorList_2D_element ("mainXibDescriptorList-element",
                                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_mainXibDescriptorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibDescriptorList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_mainXibDescriptorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibDescriptorList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibDescriptorList_2D_element GALGAS_mainXibDescriptorList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_mainXibDescriptorList_2D_element result ;
  const GALGAS_mainXibDescriptorList_2D_element * p = (const GALGAS_mainXibDescriptorList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mainXibDescriptorList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibDescriptorList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList_2D_element::GALGAS_mainXibLineDescriptorList_2D_element (void) :
mProperty_mElement () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList_2D_element::~ GALGAS_mainXibLineDescriptorList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList_2D_element::GALGAS_mainXibLineDescriptorList_2D_element (const GALGAS_mainXibElement & inOperand0) :
mProperty_mElement (inOperand0) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList_2D_element GALGAS_mainXibLineDescriptorList_2D_element::constructor_new (const GALGAS_mainXibElement & inOperand0 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mainXibLineDescriptorList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_mainXibLineDescriptorList_2D_element (inOperand0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_mainXibLineDescriptorList_2D_element::objectCompare (const GALGAS_mainXibLineDescriptorList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mElement.objectCompare (inOperand.mProperty_mElement) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_mainXibLineDescriptorList_2D_element::isValid (void) const {
  return mProperty_mElement.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibLineDescriptorList_2D_element::drop (void) {
  mProperty_mElement.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_mainXibLineDescriptorList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @mainXibLineDescriptorList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibElement GALGAS_mainXibLineDescriptorList_2D_element::getter_mElement (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElement ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @mainXibLineDescriptorList-element type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibLineDescriptorList_2D_element ("mainXibLineDescriptorList-element",
                                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_mainXibLineDescriptorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibLineDescriptorList_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_mainXibLineDescriptorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibLineDescriptorList_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibLineDescriptorList_2D_element GALGAS_mainXibLineDescriptorList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mainXibLineDescriptorList_2D_element result ;
  const GALGAS_mainXibLineDescriptorList_2D_element * p = (const GALGAS_mainXibLineDescriptorList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mainXibLineDescriptorList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibLineDescriptorList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

static const char * gNonTerminalNames_easyBindings_grammar [89] = {
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
  "<xcode_project>",// Index 26
  "<main_xib>",// Index 27
  "<main_xib_line>",// Index 28
  "<select_easyBindings_5F_syntax_0>",// Index 29
  "<select_easyBindings_5F_syntax_1>",// Index 30
  "<select_easyBindings_5F_syntax_2>",// Index 31
  "<select_easyBindings_5F_syntax_3>",// Index 32
  "<select_easyBindings_5F_syntax_4>",// Index 33
  "<select_easyBindings_5F_syntax_5>",// Index 34
  "<select_easyBindings_5F_syntax_6>",// Index 35
  "<select_easyBindings_5F_syntax_7>",// Index 36
  "<select_easyBindings_5F_syntax_8>",// Index 37
  "<select_easyBindings_5F_syntax_9>",// Index 38
  "<select_easyBindings_5F_syntax_10>",// Index 39
  "<select_easyBindings_5F_syntax_11>",// Index 40
  "<select_easyBindings_5F_syntax_12>",// Index 41
  "<select_easyBindings_5F_syntax_13>",// Index 42
  "<select_easyBindings_5F_syntax_14>",// Index 43
  "<select_easyBindings_5F_syntax_15>",// Index 44
  "<select_easyBindings_5F_syntax_16>",// Index 45
  "<select_easyBindings_5F_syntax_17>",// Index 46
  "<select_easyBindings_5F_syntax_18>",// Index 47
  "<select_easyBindings_5F_syntax_19>",// Index 48
  "<select_easyBindings_5F_syntax_20>",// Index 49
  "<select_easyBindings_5F_syntax_21>",// Index 50
  "<select_easyBindings_5F_syntax_22>",// Index 51
  "<select_easyBindings_5F_syntax_23>",// Index 52
  "<select_easyBindings_5F_syntax_24>",// Index 53
  "<select_easyBindings_5F_syntax_25>",// Index 54
  "<select_easyBindings_5F_syntax_26>",// Index 55
  "<select_easyBindings_5F_syntax_27>",// Index 56
  "<select_easyBindings_5F_syntax_28>",// Index 57
  "<select_easyBindings_5F_syntax_29>",// Index 58
  "<select_easyBindings_5F_syntax_30>",// Index 59
  "<select_easyBindings_5F_syntax_31>",// Index 60
  "<select_easyBindings_5F_syntax_32>",// Index 61
  "<select_easyBindings_5F_syntax_33>",// Index 62
  "<select_easyBindings_5F_syntax_34>",// Index 63
  "<select_easyBindings_5F_syntax_35>",// Index 64
  "<select_easyBindings_5F_syntax_36>",// Index 65
  "<select_easyBindings_5F_syntax_37>",// Index 66
  "<select_easyBindings_5F_syntax_38>",// Index 67
  "<select_easyBindings_5F_syntax_39>",// Index 68
  "<select_easyBindings_5F_syntax_40>",// Index 69
  "<select_easyBindings_5F_syntax_41>",// Index 70
  "<select_easyBindings_5F_syntax_42>",// Index 71
  "<select_easyBindings_5F_syntax_43>",// Index 72
  "<select_easyBindings_5F_syntax_44>",// Index 73
  "<select_easyBindings_5F_syntax_45>",// Index 74
  "<select_easyBindings_5F_syntax_46>",// Index 75
  "<select_easyBindings_5F_syntax_47>",// Index 76
  "<select_easyBindings_5F_syntax_48>",// Index 77
  "<select_easyBindings_5F_syntax_49>",// Index 78
  "<select_easyBindings_5F_syntax_50>",// Index 79
  "<select_easyBindings_5F_syntax_51>",// Index 80
  "<select_easyBindings_5F_syntax_52>",// Index 81
  "<select_easyBindings_5F_syntax_53>",// Index 82
  "<select_easyBindings_5F_syntax_54>",// Index 83
  "<select_easyBindings_5F_syntax_55>",// Index 84
  "<select_easyBindings_5F_syntax_56>",// Index 85
  "<select_easyBindings_5F_syntax_57>",// Index 86
  "<select_easyBindings_5F_syntax_58>",// Index 87
  "<>"// Index 88
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
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S1 (index = 29)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (24)
, END
// State S2 (index = 32)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (25)
, END
// State S3 (index = 35)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (26)
, END
// State S4 (index = 38)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (27)
, END
// State S5 (index = 41)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (58)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (58)
, END
// State S6 (index = 46)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (28)
, END
// State S7 (index = 49)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (29)
, END
// State S8 (index = 52)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (30)
, END
// State S9 (index = 55)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (31)
, END
// State S10 (index = 58)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (32)
, END
// State S11 (index = 61)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (33)
, END
// State S12 (index = 64)
, C_Lexique_easyBindings_5F_lexique::kToken_, ACCEPT
, END
// State S13 (index = 67)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S14 (index = 96)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S15 (index = 125)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S16 (index = 154)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S17 (index = 183)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S18 (index = 212)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S19 (index = 241)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S20 (index = 270)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S21 (index = 299)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S22 (index = 328)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (0)
, END
// State S23 (index = 331)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, SHIFT (43)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (59)
, END
// State S24 (index = 336)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (45)
, END
// State S25 (index = 339)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (46)
, C_Lexique_easyBindings_5F_lexique::kToken_struct, SHIFT (47)
, END
// State S26 (index = 344)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (49)
, END
// State S27 (index = 347)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (50)
, END
// State S28 (index = 350)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (51)
, END
// State S29 (index = 353)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (79)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, END
// State S30 (index = 376)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (70)
, END
// State S31 (index = 379)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (71)
, END
// State S32 (index = 382)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (72)
, END
// State S33 (index = 385)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (73)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (74)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (75)
, END
// State S34 (index = 392)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (40)
, END
// State S35 (index = 395)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (38)
, END
// State S36 (index = 398)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (39)
, END
// State S37 (index = 401)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (42)
, END
// State S38 (index = 404)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (41)
, END
// State S39 (index = 407)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (43)
, END
// State S40 (index = 410)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (44)
, END
// State S41 (index = 413)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (45)
, END
// State S42 (index = 416)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (46)
, END
// State S43 (index = 419)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (60)
, END
// State S44 (index = 422)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (77)
, END
// State S45 (index = 425)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S46 (index = 454)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (47)
, END
// State S47 (index = 457)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (48)
, END
// State S48 (index = 460)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (79)
, END
// State S49 (index = 463)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (80)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, END
// State S50 (index = 478)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (87)
, END
// State S51 (index = 481)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (88)
, END
// State S52 (index = 484)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (89)
, END
// State S53 (index = 487)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (90)
, END
// State S54 (index = 490)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (91)
, END
// State S55 (index = 495)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (93)
, END
// State S56 (index = 498)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (94)
, END
// State S57 (index = 501)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (95)
, END
// State S58 (index = 504)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (96)
, END
// State S59 (index = 507)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (97)
, END
// State S60 (index = 510)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (98)
, END
// State S61 (index = 513)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (99)
, END
// State S62 (index = 516)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (79)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, END
// State S63 (index = 539)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (79)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, END
// State S64 (index = 562)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (79)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, END
// State S65 (index = 585)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (79)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, END
// State S66 (index = 608)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (79)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, END
// State S67 (index = 631)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (79)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, END
// State S68 (index = 654)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (79)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, END
// State S69 (index = 677)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (107)
, END
// State S70 (index = 680)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (108)
, END
// State S71 (index = 683)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (109)
, END
// State S72 (index = 686)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (33)
, END
// State S73 (index = 715)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (208)
, END
// State S74 (index = 720)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (110)
, END
// State S75 (index = 723)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (111)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (112)
, END
// State S76 (index = 728)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (115)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (205)
, END
// State S77 (index = 733)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (61)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (117)
, END
// State S78 (index = 738)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (37)
, END
// State S79 (index = 741)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (119)
, END
// State S80 (index = 744)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (120)
, END
// State S81 (index = 747)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (80)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, END
// State S82 (index = 762)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (80)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, END
// State S83 (index = 777)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (80)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, END
// State S84 (index = 792)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (80)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, END
// State S85 (index = 807)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (80)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, END
// State S86 (index = 822)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (126)
, END
// State S87 (index = 825)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (127)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (49)
, END
// State S88 (index = 830)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (129)
, END
// State S89 (index = 833)
, C_Lexique_easyBindings_5F_lexique::kToken_calledBy, SHIFT (130)
, END
// State S90 (index = 836)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (131)
, END
// State S91 (index = 839)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (91)
, END
// State S92 (index = 844)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (133)
, END
// State S93 (index = 847)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (134)
, END
// State S94 (index = 850)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (135)
, END
// State S95 (index = 853)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (136)
, END
// State S96 (index = 856)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (137)
, END
// State S97 (index = 859)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (138)
, END
// State S98 (index = 862)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (139)
, END
// State S99 (index = 865)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (140)
, END
// State S100 (index = 868)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (84)
, END
// State S101 (index = 871)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (82)
, END
// State S102 (index = 874)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (83)
, END
// State S103 (index = 877)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (81)
, END
// State S104 (index = 880)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (85)
, END
// State S105 (index = 883)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (80)
, END
// State S106 (index = 886)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (86)
, END
// State S107 (index = 889)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (8)
, END
// State S108 (index = 918)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (141)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (87)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (87)
, END
// State S109 (index = 933)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (143)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (144)
, END
// State S110 (index = 938)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (207)
, END
// State S111 (index = 943)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (213)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (213)
, END
// State S112 (index = 948)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (146)
, END
// State S113 (index = 951)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (147)
, END
// State S114 (index = 954)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (148)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (210)
, END
// State S115 (index = 959)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (73)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (74)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (75)
, END
// State S116 (index = 966)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (151)
, END
// State S117 (index = 969)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (152)
, END
// State S118 (index = 972)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (153)
, END
// State S119 (index = 975)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (3)
, END
// State S120 (index = 1004)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (154)
, END
// State S121 (index = 1007)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (55)
, END
// State S122 (index = 1010)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (54)
, END
// State S123 (index = 1013)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (53)
, END
// State S124 (index = 1016)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (52)
, END
// State S125 (index = 1019)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (56)
, END
// State S126 (index = 1022)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (5)
, END
// State S127 (index = 1051)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (155)
, END
// State S128 (index = 1054)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (156)
, END
// State S129 (index = 1057)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (74)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, END
// State S130 (index = 1074)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (162)
, END
// State S131 (index = 1077)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (163)
, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom, REDUCE (140)
, END
// State S132 (index = 1082)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (145)
, END
// State S133 (index = 1085)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (165)
, END
// State S134 (index = 1088)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (166)
, END
// State S135 (index = 1091)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (168)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (169)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (170)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (171)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (172)
, END
// State S136 (index = 1106)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (174)
, END
// State S137 (index = 1109)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (19)
, END
// State S138 (index = 1136)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (175)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (176)
, END
// State S139 (index = 1141)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (178)
, END
// State S140 (index = 1144)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (179)
, END
// State S141 (index = 1147)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (180)
, END
// State S142 (index = 1150)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (89)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (185)
, END
// State S143 (index = 1163)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (98)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (98)
, END
// State S144 (index = 1168)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (97)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (97)
, END
// State S145 (index = 1173)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (187)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (188)
, END
// State S146 (index = 1178)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (212)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (212)
, END
// State S147 (index = 1183)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (209)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (209)
, END
// State S148 (index = 1188)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (111)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (112)
, END
// State S149 (index = 1193)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (35)
, END
// State S150 (index = 1196)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (115)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (205)
, END
// State S151 (index = 1201)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S152 (index = 1230)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (192)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (63)
, END
// State S153 (index = 1235)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (65)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (194)
, END
// State S154 (index = 1240)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (1)
, END
// State S155 (index = 1255)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (127)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (49)
, END
// State S156 (index = 1260)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (4)
, END
// State S157 (index = 1289)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (74)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, END
// State S158 (index = 1306)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (74)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, END
// State S159 (index = 1323)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (74)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, END
// State S160 (index = 1340)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (74)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, END
// State S161 (index = 1357)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (201)
, END
// State S162 (index = 1360)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (202)
, END
// State S163 (index = 1363)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (203)
, END
// State S164 (index = 1366)
, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom, SHIFT (204)
, END
// State S165 (index = 1369)
, C_Lexique_easyBindings_5F_lexique::kToken_default, SHIFT (205)
, END
// State S166 (index = 1372)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (206)
, END
// State S167 (index = 1375)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (207)
, END
// State S168 (index = 1378)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (209)
, END
// State S169 (index = 1383)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (214)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (215)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (216)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (217)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (218)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (220)
, END
// State S170 (index = 1404)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (214)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (215)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (216)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (217)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (218)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (220)
, END
// State S171 (index = 1425)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (228)
, END
// State S172 (index = 1428)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (214)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (215)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (216)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (217)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (218)
, END
// State S173 (index = 1443)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (230)
, END
// State S174 (index = 1446)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (18)
, END
// State S175 (index = 1469)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (173)
, END
// State S176 (index = 1472)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (174)
, END
// State S177 (index = 1475)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (231)
, END
// State S178 (index = 1478)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (232)
, END
// State S179 (index = 1481)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (233)
, END
// State S180 (index = 1484)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (88)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (88)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (88)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (88)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (88)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (88)
, END
// State S181 (index = 1497)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (89)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (185)
, END
// State S182 (index = 1510)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (89)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (185)
, END
// State S183 (index = 1523)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (89)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (185)
, END
// State S184 (index = 1536)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (89)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (185)
, END
// State S185 (index = 1549)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (89)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (183)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (184)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (185)
, END
// State S186 (index = 1562)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (239)
, END
// State S187 (index = 1565)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (99)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (99)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (99)
, END
// State S188 (index = 1572)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (100)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (100)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (100)
, END
// State S189 (index = 1579)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (95)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (95)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (240)
, END
// State S190 (index = 1586)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (148)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (210)
, END
// State S191 (index = 1591)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (206)
, END
// State S192 (index = 1594)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (243)
, END
// State S193 (index = 1597)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (244)
, END
// State S194 (index = 1600)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (245)
, END
// State S195 (index = 1603)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (246)
, END
// State S196 (index = 1606)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (50)
, END
// State S197 (index = 1609)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (77)
, END
// State S198 (index = 1612)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (76)
, END
// State S199 (index = 1615)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, END
// State S200 (index = 1618)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (78)
, END
// State S201 (index = 1621)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (7)
, END
// State S202 (index = 1650)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (2)
, END
// State S203 (index = 1675)
, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom, REDUCE (141)
, END
// State S204 (index = 1678)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (214)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (215)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (216)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (217)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (218)
, END
// State S205 (index = 1693)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (248)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (251)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (253)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (254)
, END
// State S206 (index = 1708)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (13)
, END
// State S207 (index = 1735)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (168)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (169)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (170)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (171)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (172)
, END
// State S208 (index = 1750)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (113)
, END
// State S209 (index = 1753)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (112)
, END
// State S210 (index = 1756)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (258)
, END
// State S211 (index = 1759)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (259)
, END
// State S212 (index = 1762)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (214)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (215)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (216)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (217)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (218)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (220)
, END
// State S213 (index = 1783)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (261)
, END
// State S214 (index = 1786)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (262)
, END
// State S215 (index = 1789)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (263)
, END
// State S216 (index = 1792)
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
// State S217 (index = 1835)
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
// State S218 (index = 1878)
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
// State S219 (index = 1921)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (214)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (215)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (216)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (217)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (218)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (220)
, END
// State S220 (index = 1942)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (26)
, END
// State S221 (index = 1981)
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
// State S222 (index = 2020)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (168)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (169)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (170)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (171)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (172)
, END
// State S223 (index = 2035)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, SHIFT (266)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (157)
, END
// State S224 (index = 2058)
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
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, SHIFT (268)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, SHIFT (269)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, SHIFT (270)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, SHIFT (271)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, SHIFT (272)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, SHIFT (273)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (159)
, END
// State S225 (index = 2093)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (275)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (276)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (166)
, END
// State S226 (index = 2132)
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
// State S227 (index = 2175)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (168)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (169)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (170)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (171)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (172)
, END
// State S228 (index = 2190)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (279)
, END
// State S229 (index = 2193)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (280)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (114)
, END
// State S230 (index = 2212)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (11)
, END
// State S231 (index = 2235)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (282)
, END
// State S232 (index = 2238)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (248)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (251)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (253)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (254)
, END
// State S233 (index = 2253)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (284)
, END
// State S234 (index = 2256)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (90)
, END
// State S235 (index = 2259)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (91)
, END
// State S236 (index = 2262)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (92)
, END
// State S237 (index = 2265)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (93)
, END
// State S238 (index = 2268)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (94)
, END
// State S239 (index = 2271)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (9)
, END
// State S240 (index = 2300)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (143)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (144)
, END
// State S241 (index = 2305)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (101)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (286)
, END
// State S242 (index = 2310)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (211)
, END
// State S243 (index = 2313)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (192)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (63)
, END
// State S244 (index = 2318)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (62)
, END
// State S245 (index = 2321)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (66)
, END
// State S246 (index = 2324)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (67)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (289)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (290)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, END
// State S247 (index = 2345)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (298)
, END
// State S248 (index = 2350)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (200)
, END
// State S249 (index = 2359)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (201)
, END
// State S250 (index = 2368)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (248)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (251)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (253)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (254)
, END
// State S251 (index = 2383)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (198)
, END
// State S252 (index = 2392)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (196)
, END
// State S253 (index = 2401)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (197)
, END
// State S254 (index = 2410)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (199)
, END
// State S255 (index = 2419)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (301)
, END
// State S256 (index = 2422)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (32)
, END
// State S257 (index = 2431)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (106)
, END
// State S258 (index = 2434)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (302)
, END
// State S259 (index = 2437)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (303)
, END
// State S260 (index = 2440)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (304)
, END
// State S261 (index = 2443)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (305)
, END
// State S262 (index = 2446)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (306)
, END
// State S263 (index = 2449)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (307)
, END
// State S264 (index = 2452)
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
// State S265 (index = 2491)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (108)
, END
// State S266 (index = 2494)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (214)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (215)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (216)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (217)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (218)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (220)
, END
// State S267 (index = 2515)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (20)
, END
// State S268 (index = 2536)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (214)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (215)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (216)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (217)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (218)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (220)
, END
// State S269 (index = 2557)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (214)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (215)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (216)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (217)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (218)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (220)
, END
// State S270 (index = 2578)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (214)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (215)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (216)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (217)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (218)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (220)
, END
// State S271 (index = 2599)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (214)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (215)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (216)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (217)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (218)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (220)
, END
// State S272 (index = 2620)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (214)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (215)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (216)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (217)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (218)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (220)
, END
// State S273 (index = 2641)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (214)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (215)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (216)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (217)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (218)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (220)
, END
// State S274 (index = 2662)
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
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (21)
, END
// State S275 (index = 2685)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (214)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (215)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (216)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (217)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (218)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (220)
, END
// State S276 (index = 2706)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (214)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (215)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (216)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (217)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (218)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (220)
, END
// State S277 (index = 2727)
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
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (22)
, END
// State S278 (index = 2762)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (109)
, END
// State S279 (index = 2765)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (317)
, END
// State S280 (index = 2768)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (214)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (215)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (216)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (217)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (218)
, END
// State S281 (index = 2783)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (319)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (169)
, END
// State S282 (index = 2804)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (322)
, END
// State S283 (index = 2807)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (323)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (175)
, END
// State S284 (index = 2812)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (325)
, END
// State S285 (index = 2815)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (187)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (188)
, END
// State S286 (index = 2820)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (327)
, END
// State S287 (index = 2823)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (328)
, END
// State S288 (index = 2826)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (64)
, END
// State S289 (index = 2829)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (146)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (329)
, END
// State S290 (index = 2834)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (331)
, END
// State S291 (index = 2839)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (67)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (289)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (290)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, END
// State S292 (index = 2860)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (67)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (289)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (290)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, END
// State S293 (index = 2881)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (67)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (289)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (290)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, END
// State S294 (index = 2902)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (67)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (289)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (290)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, END
// State S295 (index = 2923)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (67)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (289)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (290)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, END
// State S296 (index = 2944)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (67)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (289)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (290)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, END
// State S297 (index = 2965)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (339)
, END
// State S298 (index = 2968)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (214)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (215)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (216)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (217)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (218)
, END
// State S299 (index = 2983)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (341)
, END
// State S300 (index = 2986)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (342)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (203)
, END
// State S301 (index = 2991)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (15)
, END
// State S302 (index = 3018)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (168)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (169)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (170)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (171)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (172)
, END
// State S303 (index = 3033)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (345)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (138)
, END
// State S304 (index = 3078)
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
// State S305 (index = 3117)
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
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (347)
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
// State S306 (index = 3162)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (349)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (136)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (136)
, END
// State S307 (index = 3207)
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
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (351)
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
// State S308 (index = 3252)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, SHIFT (266)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (157)
, END
// State S309 (index = 3275)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (160)
, END
// State S310 (index = 3298)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (161)
, END
// State S311 (index = 3321)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (162)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (162)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (162)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (162)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (162)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (162)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (162)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (162)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (162)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (162)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (162)
, END
// State S312 (index = 3344)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (163)
, END
// State S313 (index = 3367)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (164)
, END
// State S314 (index = 3390)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (165)
, END
// State S315 (index = 3413)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (275)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (276)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (166)
, END
// State S316 (index = 3452)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (275)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (276)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (166)
, END
// State S317 (index = 3491)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (356)
, END
// State S318 (index = 3508)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (280)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (114)
, END
// State S319 (index = 3527)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (359)
, END
// State S320 (index = 3530)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (168)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (169)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (170)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (171)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (172)
, END
// State S321 (index = 3545)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (27)
, END
// State S322 (index = 3564)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (28)
, END
// State S323 (index = 3589)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (361)
, END
// State S324 (index = 3592)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (362)
, END
// State S325 (index = 3595)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (363)
, END
// State S326 (index = 3598)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (95)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (95)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (240)
, END
// State S327 (index = 3605)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (365)
, END
// State S328 (index = 3608)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (10)
, END
// State S329 (index = 3637)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (146)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (329)
, END
// State S330 (index = 3642)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (367)
, END
// State S331 (index = 3645)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (331)
, END
// State S332 (index = 3650)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (369)
, END
// State S333 (index = 3653)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (69)
, END
// State S334 (index = 3656)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (68)
, END
// State S335 (index = 3659)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (71)
, END
// State S336 (index = 3662)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (70)
, END
// State S337 (index = 3665)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (72)
, END
// State S338 (index = 3668)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (73)
, END
// State S339 (index = 3671)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (6)
, END
// State S340 (index = 3700)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (298)
, END
// State S341 (index = 3705)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (14)
, END
// State S342 (index = 3732)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (248)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (251)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (253)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (254)
, END
// State S343 (index = 3747)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (372)
, END
// State S344 (index = 3750)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (107)
, END
// State S345 (index = 3753)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (373)
, END
// State S346 (index = 3756)
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
// State S347 (index = 3799)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (374)
, C_Lexique_easyBindings_5F_lexique::kToken_all, SHIFT (375)
, C_Lexique_easyBindings_5F_lexique::kToken_none, SHIFT (376)
, END
// State S348 (index = 3806)
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
// State S349 (index = 3849)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (378)
, END
// State S350 (index = 3852)
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
// State S351 (index = 3895)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (379)
, C_Lexique_easyBindings_5F_lexique::kToken_all, SHIFT (380)
, C_Lexique_easyBindings_5F_lexique::kToken_none, SHIFT (381)
, C_Lexique_easyBindings_5F_lexique::kToken_one, SHIFT (382)
, END
// State S352 (index = 3904)
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
// State S353 (index = 3947)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (158)
, END
// State S354 (index = 3968)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (167)
, END
// State S355 (index = 4003)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (168)
, END
// State S356 (index = 4038)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (384)
, END
// State S357 (index = 4041)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (105)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (168)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (169)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (170)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (171)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (172)
, END
// State S358 (index = 4056)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (115)
, END
// State S359 (index = 4073)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (386)
, END
// State S360 (index = 4076)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (110)
, END
// State S361 (index = 4079)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (387)
, END
// State S362 (index = 4082)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (388)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (389)
, END
// State S363 (index = 4087)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (391)
, END
// State S364 (index = 4090)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (96)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (96)
, END
// State S365 (index = 4095)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (392)
, END
// State S366 (index = 4098)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (147)
, END
// State S367 (index = 4101)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (393)
, END
// State S368 (index = 4104)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (153)
, END
// State S369 (index = 4107)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (394)
, END
// State S370 (index = 4110)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (143)
, END
// State S371 (index = 4113)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (342)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (203)
, END
// State S372 (index = 4118)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (202)
, END
// State S373 (index = 4127)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (139)
, END
// State S374 (index = 4170)
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
// State S375 (index = 4213)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (396)
, END
// State S376 (index = 4216)
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
// State S377 (index = 4259)
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
// State S378 (index = 4302)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (137)
, END
// State S379 (index = 4345)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (135)
, END
// State S380 (index = 4388)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (397)
, END
// State S381 (index = 4391)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (134)
, END
// State S382 (index = 4434)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (398)
, END
// State S383 (index = 4437)
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
// State S384 (index = 4480)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (117)
, END
// State S385 (index = 4495)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (111)
, END
// State S386 (index = 4498)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (248)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (251)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (253)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (254)
, END
// State S387 (index = 4513)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (248)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (251)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (253)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (254)
, END
// State S388 (index = 4528)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (177)
, END
// State S389 (index = 4531)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (178)
, END
// State S390 (index = 4534)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (401)
, END
// State S391 (index = 4537)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (402)
, END
// State S392 (index = 4540)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (403)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (103)
, END
// State S393 (index = 4545)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_inverse, SHIFT (405)
, END
// State S394 (index = 4550)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom, SHIFT (407)
, C_Lexique_easyBindings_5F_lexique::kToken_inverse, SHIFT (408)
, END
// State S395 (index = 4557)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (204)
, END
// State S396 (index = 4560)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (410)
, END
// State S397 (index = 4563)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (411)
, END
// State S398 (index = 4566)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (412)
, END
// State S399 (index = 4569)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (413)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (171)
, END
// State S400 (index = 4574)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (323)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (175)
, END
// State S401 (index = 4579)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (416)
, END
// State S402 (index = 4582)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (31)
, END
// State S403 (index = 4607)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (417)
, END
// State S404 (index = 4610)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (418)
, END
// State S405 (index = 4613)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (419)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (420)
, END
// State S406 (index = 4618)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (422)
, END
// State S407 (index = 4621)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (423)
, END
// State S408 (index = 4624)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (424)
, END
// State S409 (index = 4627)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (425)
, END
// State S410 (index = 4630)
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
// State S411 (index = 4673)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (132)
, END
// State S412 (index = 4716)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (133)
, END
// State S413 (index = 4759)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (426)
, END
// State S414 (index = 4762)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (427)
, END
// State S415 (index = 4765)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (176)
, END
// State S416 (index = 4768)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (179)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (179)
, C_Lexique_easyBindings_5F_lexique::kToken_filter, SHIFT (428)
, END
// State S417 (index = 4775)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (430)
, END
// State S418 (index = 4778)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (102)
, END
// State S419 (index = 4781)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, REDUCE (150)
, END
// State S420 (index = 4784)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, REDUCE (151)
, END
// State S421 (index = 4787)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (431)
, END
// State S422 (index = 4790)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (16)
, END
// State S423 (index = 4811)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (432)
, END
// State S424 (index = 4814)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (433)
, END
// State S425 (index = 4817)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (17)
, END
// State S426 (index = 4838)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (434)
, END
// State S427 (index = 4841)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (170)
, END
// State S428 (index = 4860)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (435)
, END
// State S429 (index = 4863)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (436)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (437)
, END
// State S430 (index = 4868)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (439)
, END
// State S431 (index = 4871)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (149)
, END
// State S432 (index = 4874)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (440)
, END
// State S433 (index = 4877)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (154)
, END
// State S434 (index = 4880)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (248)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (249)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (251)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (253)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (254)
, END
// State S435 (index = 4895)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (181)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (181)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (442)
, END
// State S436 (index = 4902)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (183)
, END
// State S437 (index = 4927)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken_column, SHIFT (444)
, END
// State S438 (index = 4932)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (29)
, END
// State S439 (index = 4957)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (403)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (103)
, END
// State S440 (index = 4962)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (155)
, END
// State S441 (index = 4965)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (413)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (171)
, END
// State S442 (index = 4970)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (448)
, END
// State S443 (index = 4973)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (180)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (180)
, END
// State S444 (index = 4978)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (449)
, END
// State S445 (index = 4981)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (450)
, END
// State S446 (index = 4984)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (104)
, END
// State S447 (index = 4987)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (172)
, END
// State S448 (index = 4990)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (181)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (181)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (442)
, END
// State S449 (index = 4997)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken_sort, SHIFT (452)
, END
// State S450 (index = 5002)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (184)
, END
// State S451 (index = 5027)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (182)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (182)
, END
// State S452 (index = 5032)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (454)
, END
// State S453 (index = 5035)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (455)
, END
// State S454 (index = 5038)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (188)
, END
// State S455 (index = 5041)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (456)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (457)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (458)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (459)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (189)
, END
// State S456 (index = 5054)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (462)
, END
// State S457 (index = 5057)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (214)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (215)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (216)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (217)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (218)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (220)
, END
// State S458 (index = 5078)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (212)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (214)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (215)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (216)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (217)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (218)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (219)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (220)
, END
// State S459 (index = 5099)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (214)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (215)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (216)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (217)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (218)
, END
// State S460 (index = 5114)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken_column, SHIFT (444)
, END
// State S461 (index = 5119)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (30)
, END
// State S462 (index = 5124)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (467)
, END
// State S463 (index = 5127)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (456)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (457)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (458)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (459)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (189)
, END
// State S464 (index = 5140)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (456)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (457)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (458)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (459)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (189)
, END
// State S465 (index = 5153)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (470)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (194)
, END
// State S466 (index = 5170)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (186)
, END
// State S467 (index = 5173)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (472)
, END
// State S468 (index = 5176)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (191)
, END
// State S469 (index = 5181)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (192)
, END
// State S470 (index = 5186)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (211)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (214)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (215)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (216)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (217)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (218)
, END
// State S471 (index = 5201)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (319)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (169)
, END
// State S472 (index = 5222)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (456)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (457)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (458)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (459)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (189)
, END
// State S473 (index = 5235)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (470)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (194)
, END
// State S474 (index = 5252)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (456)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (457)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (458)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (459)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (189)
, END
// State S475 (index = 5265)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (190)
, END
// State S476 (index = 5270)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (195)
, END
// State S477 (index = 5285)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (193)
, END} ;

static const uint32_t gActionTableIndex_easyBindings_grammar [478] = {
  0  // S0
, 29  // S1
, 32  // S2
, 35  // S3
, 38  // S4
, 41  // S5
, 46  // S6
, 49  // S7
, 52  // S8
, 55  // S9
, 58  // S10
, 61  // S11
, 64  // S12
, 67  // S13
, 96  // S14
, 125  // S15
, 154  // S16
, 183  // S17
, 212  // S18
, 241  // S19
, 270  // S20
, 299  // S21
, 328  // S22
, 331  // S23
, 336  // S24
, 339  // S25
, 344  // S26
, 347  // S27
, 350  // S28
, 353  // S29
, 376  // S30
, 379  // S31
, 382  // S32
, 385  // S33
, 392  // S34
, 395  // S35
, 398  // S36
, 401  // S37
, 404  // S38
, 407  // S39
, 410  // S40
, 413  // S41
, 416  // S42
, 419  // S43
, 422  // S44
, 425  // S45
, 454  // S46
, 457  // S47
, 460  // S48
, 463  // S49
, 478  // S50
, 481  // S51
, 484  // S52
, 487  // S53
, 490  // S54
, 495  // S55
, 498  // S56
, 501  // S57
, 504  // S58
, 507  // S59
, 510  // S60
, 513  // S61
, 516  // S62
, 539  // S63
, 562  // S64
, 585  // S65
, 608  // S66
, 631  // S67
, 654  // S68
, 677  // S69
, 680  // S70
, 683  // S71
, 686  // S72
, 715  // S73
, 720  // S74
, 723  // S75
, 728  // S76
, 733  // S77
, 738  // S78
, 741  // S79
, 744  // S80
, 747  // S81
, 762  // S82
, 777  // S83
, 792  // S84
, 807  // S85
, 822  // S86
, 825  // S87
, 830  // S88
, 833  // S89
, 836  // S90
, 839  // S91
, 844  // S92
, 847  // S93
, 850  // S94
, 853  // S95
, 856  // S96
, 859  // S97
, 862  // S98
, 865  // S99
, 868  // S100
, 871  // S101
, 874  // S102
, 877  // S103
, 880  // S104
, 883  // S105
, 886  // S106
, 889  // S107
, 918  // S108
, 933  // S109
, 938  // S110
, 943  // S111
, 948  // S112
, 951  // S113
, 954  // S114
, 959  // S115
, 966  // S116
, 969  // S117
, 972  // S118
, 975  // S119
, 1004  // S120
, 1007  // S121
, 1010  // S122
, 1013  // S123
, 1016  // S124
, 1019  // S125
, 1022  // S126
, 1051  // S127
, 1054  // S128
, 1057  // S129
, 1074  // S130
, 1077  // S131
, 1082  // S132
, 1085  // S133
, 1088  // S134
, 1091  // S135
, 1106  // S136
, 1109  // S137
, 1136  // S138
, 1141  // S139
, 1144  // S140
, 1147  // S141
, 1150  // S142
, 1163  // S143
, 1168  // S144
, 1173  // S145
, 1178  // S146
, 1183  // S147
, 1188  // S148
, 1193  // S149
, 1196  // S150
, 1201  // S151
, 1230  // S152
, 1235  // S153
, 1240  // S154
, 1255  // S155
, 1260  // S156
, 1289  // S157
, 1306  // S158
, 1323  // S159
, 1340  // S160
, 1357  // S161
, 1360  // S162
, 1363  // S163
, 1366  // S164
, 1369  // S165
, 1372  // S166
, 1375  // S167
, 1378  // S168
, 1383  // S169
, 1404  // S170
, 1425  // S171
, 1428  // S172
, 1443  // S173
, 1446  // S174
, 1469  // S175
, 1472  // S176
, 1475  // S177
, 1478  // S178
, 1481  // S179
, 1484  // S180
, 1497  // S181
, 1510  // S182
, 1523  // S183
, 1536  // S184
, 1549  // S185
, 1562  // S186
, 1565  // S187
, 1572  // S188
, 1579  // S189
, 1586  // S190
, 1591  // S191
, 1594  // S192
, 1597  // S193
, 1600  // S194
, 1603  // S195
, 1606  // S196
, 1609  // S197
, 1612  // S198
, 1615  // S199
, 1618  // S200
, 1621  // S201
, 1650  // S202
, 1675  // S203
, 1678  // S204
, 1693  // S205
, 1708  // S206
, 1735  // S207
, 1750  // S208
, 1753  // S209
, 1756  // S210
, 1759  // S211
, 1762  // S212
, 1783  // S213
, 1786  // S214
, 1789  // S215
, 1792  // S216
, 1835  // S217
, 1878  // S218
, 1921  // S219
, 1942  // S220
, 1981  // S221
, 2020  // S222
, 2035  // S223
, 2058  // S224
, 2093  // S225
, 2132  // S226
, 2175  // S227
, 2190  // S228
, 2193  // S229
, 2212  // S230
, 2235  // S231
, 2238  // S232
, 2253  // S233
, 2256  // S234
, 2259  // S235
, 2262  // S236
, 2265  // S237
, 2268  // S238
, 2271  // S239
, 2300  // S240
, 2305  // S241
, 2310  // S242
, 2313  // S243
, 2318  // S244
, 2321  // S245
, 2324  // S246
, 2345  // S247
, 2350  // S248
, 2359  // S249
, 2368  // S250
, 2383  // S251
, 2392  // S252
, 2401  // S253
, 2410  // S254
, 2419  // S255
, 2422  // S256
, 2431  // S257
, 2434  // S258
, 2437  // S259
, 2440  // S260
, 2443  // S261
, 2446  // S262
, 2449  // S263
, 2452  // S264
, 2491  // S265
, 2494  // S266
, 2515  // S267
, 2536  // S268
, 2557  // S269
, 2578  // S270
, 2599  // S271
, 2620  // S272
, 2641  // S273
, 2662  // S274
, 2685  // S275
, 2706  // S276
, 2727  // S277
, 2762  // S278
, 2765  // S279
, 2768  // S280
, 2783  // S281
, 2804  // S282
, 2807  // S283
, 2812  // S284
, 2815  // S285
, 2820  // S286
, 2823  // S287
, 2826  // S288
, 2829  // S289
, 2834  // S290
, 2839  // S291
, 2860  // S292
, 2881  // S293
, 2902  // S294
, 2923  // S295
, 2944  // S296
, 2965  // S297
, 2968  // S298
, 2983  // S299
, 2986  // S300
, 2991  // S301
, 3018  // S302
, 3033  // S303
, 3078  // S304
, 3117  // S305
, 3162  // S306
, 3207  // S307
, 3252  // S308
, 3275  // S309
, 3298  // S310
, 3321  // S311
, 3344  // S312
, 3367  // S313
, 3390  // S314
, 3413  // S315
, 3452  // S316
, 3491  // S317
, 3508  // S318
, 3527  // S319
, 3530  // S320
, 3545  // S321
, 3564  // S322
, 3589  // S323
, 3592  // S324
, 3595  // S325
, 3598  // S326
, 3605  // S327
, 3608  // S328
, 3637  // S329
, 3642  // S330
, 3645  // S331
, 3650  // S332
, 3653  // S333
, 3656  // S334
, 3659  // S335
, 3662  // S336
, 3665  // S337
, 3668  // S338
, 3671  // S339
, 3700  // S340
, 3705  // S341
, 3732  // S342
, 3747  // S343
, 3750  // S344
, 3753  // S345
, 3756  // S346
, 3799  // S347
, 3806  // S348
, 3849  // S349
, 3852  // S350
, 3895  // S351
, 3904  // S352
, 3947  // S353
, 3968  // S354
, 4003  // S355
, 4038  // S356
, 4041  // S357
, 4056  // S358
, 4073  // S359
, 4076  // S360
, 4079  // S361
, 4082  // S362
, 4087  // S363
, 4090  // S364
, 4095  // S365
, 4098  // S366
, 4101  // S367
, 4104  // S368
, 4107  // S369
, 4110  // S370
, 4113  // S371
, 4118  // S372
, 4127  // S373
, 4170  // S374
, 4213  // S375
, 4216  // S376
, 4259  // S377
, 4302  // S378
, 4345  // S379
, 4388  // S380
, 4391  // S381
, 4434  // S382
, 4437  // S383
, 4480  // S384
, 4495  // S385
, 4498  // S386
, 4513  // S387
, 4528  // S388
, 4531  // S389
, 4534  // S390
, 4537  // S391
, 4540  // S392
, 4545  // S393
, 4550  // S394
, 4557  // S395
, 4560  // S396
, 4563  // S397
, 4566  // S398
, 4569  // S399
, 4574  // S400
, 4579  // S401
, 4582  // S402
, 4607  // S403
, 4610  // S404
, 4613  // S405
, 4618  // S406
, 4621  // S407
, 4624  // S408
, 4627  // S409
, 4630  // S410
, 4673  // S411
, 4716  // S412
, 4759  // S413
, 4762  // S414
, 4765  // S415
, 4768  // S416
, 4775  // S417
, 4778  // S418
, 4781  // S419
, 4784  // S420
, 4787  // S421
, 4790  // S422
, 4811  // S423
, 4814  // S424
, 4817  // S425
, 4838  // S426
, 4841  // S427
, 4860  // S428
, 4863  // S429
, 4868  // S430
, 4871  // S431
, 4874  // S432
, 4877  // S433
, 4880  // S434
, 4895  // S435
, 4902  // S436
, 4927  // S437
, 4932  // S438
, 4957  // S439
, 4962  // S440
, 4965  // S441
, 4970  // S442
, 4973  // S443
, 4978  // S444
, 4981  // S445
, 4984  // S446
, 4987  // S447
, 4990  // S448
, 4997  // S449
, 5002  // S450
, 5027  // S451
, 5032  // S452
, 5035  // S453
, 5038  // S454
, 5041  // S455
, 5054  // S456
, 5057  // S457
, 5078  // S458
, 5099  // S459
, 5114  // S460
, 5119  // S461
, 5124  // S462
, 5127  // S463
, 5140  // S464
, 5153  // S465
, 5170  // S466
, 5173  // S467
, 5176  // S468
, 5181  // S469
, 5186  // S470
, 5201  // S471
, 5222  // S472
, 5235  // S473
, 5252  // S474
, 5265  // S475
, 5270  // S476
, 5285  // S477
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                            SLR states successors table                                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int16_t gSuccessorTable_easyBindings_grammar_0 [25] = {0, 12,
  3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  26, 20,
  27, 21,
  29, 22,
  33, 23, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_13 [23] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  26, 20,
  27, 21,
  29, 34,
  33, 23, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_14 [23] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  26, 20,
  27, 21,
  29, 35,
  33, 23, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_15 [23] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  26, 20,
  27, 21,
  29, 36,
  33, 23, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_16 [23] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  26, 20,
  27, 21,
  29, 37,
  33, 23, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_17 [23] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  26, 20,
  27, 21,
  29, 38,
  33, 23, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_18 [23] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  26, 20,
  27, 21,
  29, 39,
  33, 23, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_19 [23] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  26, 20,
  27, 21,
  29, 40,
  33, 23, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_20 [23] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  26, 20,
  27, 21,
  29, 41,
  33, 23, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_21 [23] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  26, 20,
  27, 21,
  29, 42,
  33, 23, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_23 [3] = {34, 44, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_25 [3] = {30, 48, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_29 [17] = {2, 62,
  10, 63,
  12, 64,
  13, 65,
  16, 66,
  17, 67,
  23, 68,
  40, 69, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_33 [3] = {85, 76, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_45 [23] = {3, 13,
  4, 14,
  5, 15,
  6, 16,
  7, 17,
  8, 18,
  9, 19,
  26, 20,
  27, 21,
  29, 78,
  33, 23, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_49 [13] = {1, 81,
  2, 82,
  12, 83,
  13, 84,
  17, 85,
  32, 86, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_54 [3] = {61, 92, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_62 [17] = {2, 62,
  10, 63,
  12, 64,
  13, 65,
  16, 66,
  17, 67,
  23, 68,
  40, 100, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_63 [17] = {2, 62,
  10, 63,
  12, 64,
  13, 65,
  16, 66,
  17, 67,
  23, 68,
  40, 101, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_64 [17] = {2, 62,
  10, 63,
  12, 64,
  13, 65,
  16, 66,
  17, 67,
  23, 68,
  40, 102, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_65 [17] = {2, 62,
  10, 63,
  12, 64,
  13, 65,
  16, 66,
  17, 67,
  23, 68,
  40, 103, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_66 [17] = {2, 62,
  10, 63,
  12, 64,
  13, 65,
  16, 66,
  17, 67,
  23, 68,
  40, 104, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_67 [17] = {2, 62,
  10, 63,
  12, 64,
  13, 65,
  16, 66,
  17, 67,
  23, 68,
  40, 105, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_68 [17] = {2, 62,
  10, 63,
  12, 64,
  13, 65,
  16, 66,
  17, 67,
  23, 68,
  40, 106, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_75 [5] = {28, 113,
  87, 114, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_76 [3] = {84, 116, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_77 [3] = {35, 118, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_81 [13] = {1, 81,
  2, 82,
  12, 83,
  13, 84,
  17, 85,
  32, 121, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_82 [13] = {1, 81,
  2, 82,
  12, 83,
  13, 84,
  17, 85,
  32, 122, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_83 [13] = {1, 81,
  2, 82,
  12, 83,
  13, 84,
  17, 85,
  32, 123, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_84 [13] = {1, 81,
  2, 82,
  12, 83,
  13, 84,
  17, 85,
  32, 124, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_85 [13] = {1, 81,
  2, 82,
  12, 83,
  13, 84,
  17, 85,
  32, 125, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_87 [3] = {31, 128, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_91 [3] = {61, 132, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_108 [3] = {41, 142, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_109 [3] = {44, 145, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_114 [3] = {86, 149, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_115 [3] = {85, 150, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_129 [11] = {10, 157,
  12, 158,
  17, 159,
  23, 160,
  39, 161, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_131 [3] = {59, 164, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_135 [3] = {48, 173, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_138 [3] = {72, 177, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_142 [3] = {42, 186, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_145 [3] = {45, 189, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_148 [3] = {87, 190, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_150 [3] = {84, 191, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_152 [3] = {36, 193, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_153 [3] = {37, 195, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_155 [3] = {31, 196, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_157 [11] = {10, 157,
  12, 158,
  17, 159,
  23, 160,
  39, 197, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_158 [11] = {10, 157,
  12, 158,
  17, 159,
  23, 160,
  39, 198, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_159 [11] = {10, 157,
  12, 158,
  17, 159,
  23, 160,
  39, 199, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_160 [11] = {10, 157,
  12, 158,
  17, 159,
  23, 160,
  39, 200, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_168 [3] = {49, 210, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_169 [13] = {11, 221,
  18, 222,
  19, 223,
  20, 224,
  21, 225,
  52, 226, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_170 [13] = {11, 221,
  18, 227,
  19, 223,
  20, 224,
  21, 225,
  52, 226, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_172 [5] = {11, 229,
  52, 226, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_181 [3] = {42, 234, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_182 [3] = {42, 235, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_183 [3] = {42, 236, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_184 [3] = {42, 237, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_185 [3] = {42, 238, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_189 [3] = {43, 241, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_190 [3] = {86, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_204 [5] = {11, 247,
  52, 226, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_205 [5] = {25, 255,
  82, 256, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_207 [3] = {48, 257, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_212 [13] = {11, 221,
  18, 260,
  19, 223,
  20, 224,
  21, 225,
  52, 226, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_219 [7] = {11, 221,
  21, 264,
  52, 226, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_222 [3] = {48, 265, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_223 [3] = {67, 267, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_224 [3] = {68, 274, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_225 [3] = {69, 277, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_227 [3] = {48, 278, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_229 [3] = {50, 281, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_232 [5] = {25, 283,
  82, 256, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_240 [3] = {44, 285, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_241 [3] = {46, 287, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_243 [3] = {36, 288, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_246 [15] = {12, 291,
  13, 292,
  14, 293,
  15, 294,
  17, 295,
  23, 296,
  38, 297, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_247 [3] = {60, 299, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_250 [5] = {25, 300,
  82, 256, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_266 [11] = {11, 221,
  19, 308,
  20, 224,
  21, 225,
  52, 226, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_268 [9] = {11, 221,
  20, 309,
  21, 225,
  52, 226, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_269 [9] = {11, 221,
  20, 310,
  21, 225,
  52, 226, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_270 [9] = {11, 221,
  20, 311,
  21, 225,
  52, 226, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_271 [9] = {11, 221,
  20, 312,
  21, 225,
  52, 226, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_272 [9] = {11, 221,
  20, 313,
  21, 225,
  52, 226, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_273 [9] = {11, 221,
  20, 314,
  21, 225,
  52, 226, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_275 [7] = {11, 221,
  21, 315,
  52, 226, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_276 [7] = {11, 221,
  21, 316,
  52, 226, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_280 [5] = {11, 318,
  52, 226, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_281 [5] = {22, 320,
  70, 321, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_283 [3] = {73, 324, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_285 [3] = {45, 326, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_289 [3] = {62, 330, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_290 [3] = {65, 332, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_291 [15] = {12, 291,
  13, 292,
  14, 293,
  15, 294,
  17, 295,
  23, 296,
  38, 333, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_292 [15] = {12, 291,
  13, 292,
  14, 293,
  15, 294,
  17, 295,
  23, 296,
  38, 334, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_293 [15] = {12, 291,
  13, 292,
  14, 293,
  15, 294,
  17, 295,
  23, 296,
  38, 335, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_294 [15] = {12, 291,
  13, 292,
  14, 293,
  15, 294,
  17, 295,
  23, 296,
  38, 336, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_295 [15] = {12, 291,
  13, 292,
  14, 293,
  15, 294,
  17, 295,
  23, 296,
  38, 337, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_296 [15] = {12, 291,
  13, 292,
  14, 293,
  15, 294,
  17, 295,
  23, 296,
  38, 338, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_298 [5] = {11, 340,
  52, 226, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_300 [3] = {83, 343, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_302 [3] = {48, 344, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_303 [3] = {58, 346, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_305 [3] = {53, 348, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_306 [3] = {57, 350, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_307 [3] = {55, 352, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_308 [3] = {67, 353, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_315 [3] = {69, 354, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_316 [3] = {69, 355, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_317 [3] = {51, 357, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_318 [3] = {50, 358, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_320 [3] = {48, 360, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_326 [3] = {43, 364, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_329 [3] = {62, 366, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_331 [3] = {65, 368, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_340 [3] = {60, 370, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_342 [5] = {25, 371,
  82, 256, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_347 [3] = {54, 377, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_351 [3] = {56, 383, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_357 [3] = {48, 385, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_362 [3] = {74, 390, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_371 [3] = {83, 395, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_386 [5] = {25, 399,
  82, 256, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_387 [5] = {25, 400,
  82, 256, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_392 [3] = {47, 404, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_393 [3] = {63, 406, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_394 [3] = {66, 409, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_399 [3] = {71, 414, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_400 [3] = {73, 415, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_405 [3] = {64, 421, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_416 [3] = {75, 429, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_429 [3] = {77, 438, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_434 [5] = {25, 441,
  82, 256, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_435 [3] = {76, 443, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_437 [3] = {78, 445, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_439 [3] = {47, 446, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_441 [3] = {71, 447, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_448 [3] = {76, 451, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_449 [3] = {79, 453, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_455 [5] = {24, 460,
  80, 461, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_457 [13] = {11, 221,
  18, 463,
  19, 223,
  20, 224,
  21, 225,
  52, 226, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_458 [13] = {11, 221,
  18, 464,
  19, 223,
  20, 224,
  21, 225,
  52, 226, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_459 [5] = {11, 465,
  52, 226, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_460 [3] = {78, 466, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_463 [3] = {80, 468, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_464 [3] = {80, 469, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_465 [3] = {81, 471, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_470 [5] = {11, 473,
  52, 226, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_471 [5] = {22, 474,
  70, 321, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_472 [3] = {80, 475, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_473 [3] = {81, 476, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_474 [3] = {80, 477, -1} ;

static const int16_t * gSuccessorTable_easyBindings_grammar [478] = {
gSuccessorTable_easyBindings_grammar_0, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_13, gSuccessorTable_easyBindings_grammar_14, gSuccessorTable_easyBindings_grammar_15, 
  gSuccessorTable_easyBindings_grammar_16, gSuccessorTable_easyBindings_grammar_17, gSuccessorTable_easyBindings_grammar_18, gSuccessorTable_easyBindings_grammar_19, 
  gSuccessorTable_easyBindings_grammar_20, gSuccessorTable_easyBindings_grammar_21, NULL, gSuccessorTable_easyBindings_grammar_23, 
  NULL, gSuccessorTable_easyBindings_grammar_25, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_29, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_33, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_45, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_49, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_54, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_62, gSuccessorTable_easyBindings_grammar_63, 
  gSuccessorTable_easyBindings_grammar_64, gSuccessorTable_easyBindings_grammar_65, gSuccessorTable_easyBindings_grammar_66, gSuccessorTable_easyBindings_grammar_67, 
  gSuccessorTable_easyBindings_grammar_68, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_75, 
  gSuccessorTable_easyBindings_grammar_76, gSuccessorTable_easyBindings_grammar_77, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_81, gSuccessorTable_easyBindings_grammar_82, gSuccessorTable_easyBindings_grammar_83, 
  gSuccessorTable_easyBindings_grammar_84, gSuccessorTable_easyBindings_grammar_85, NULL, gSuccessorTable_easyBindings_grammar_87, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_91, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_108, gSuccessorTable_easyBindings_grammar_109, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_114, gSuccessorTable_easyBindings_grammar_115, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_129, NULL, gSuccessorTable_easyBindings_grammar_131, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_135, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_138, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_142, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_145, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_148, NULL, gSuccessorTable_easyBindings_grammar_150, NULL, 
  gSuccessorTable_easyBindings_grammar_152, gSuccessorTable_easyBindings_grammar_153, NULL, gSuccessorTable_easyBindings_grammar_155, 
  NULL, gSuccessorTable_easyBindings_grammar_157, gSuccessorTable_easyBindings_grammar_158, gSuccessorTable_easyBindings_grammar_159, 
  gSuccessorTable_easyBindings_grammar_160, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_168, gSuccessorTable_easyBindings_grammar_169, gSuccessorTable_easyBindings_grammar_170, NULL, 
  gSuccessorTable_easyBindings_grammar_172, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_181, gSuccessorTable_easyBindings_grammar_182, gSuccessorTable_easyBindings_grammar_183, 
  gSuccessorTable_easyBindings_grammar_184, gSuccessorTable_easyBindings_grammar_185, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_189, gSuccessorTable_easyBindings_grammar_190, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_204, gSuccessorTable_easyBindings_grammar_205, NULL, gSuccessorTable_easyBindings_grammar_207, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_212, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_219, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_222, gSuccessorTable_easyBindings_grammar_223, 
  gSuccessorTable_easyBindings_grammar_224, gSuccessorTable_easyBindings_grammar_225, NULL, gSuccessorTable_easyBindings_grammar_227, 
  NULL, gSuccessorTable_easyBindings_grammar_229, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_232, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_240, gSuccessorTable_easyBindings_grammar_241, NULL, gSuccessorTable_easyBindings_grammar_243, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_246, gSuccessorTable_easyBindings_grammar_247, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_250, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_266, NULL, 
  gSuccessorTable_easyBindings_grammar_268, gSuccessorTable_easyBindings_grammar_269, gSuccessorTable_easyBindings_grammar_270, gSuccessorTable_easyBindings_grammar_271, 
  gSuccessorTable_easyBindings_grammar_272, gSuccessorTable_easyBindings_grammar_273, NULL, gSuccessorTable_easyBindings_grammar_275, 
  gSuccessorTable_easyBindings_grammar_276, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_280, gSuccessorTable_easyBindings_grammar_281, NULL, gSuccessorTable_easyBindings_grammar_283, 
  NULL, gSuccessorTable_easyBindings_grammar_285, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_289, gSuccessorTable_easyBindings_grammar_290, gSuccessorTable_easyBindings_grammar_291, 
  gSuccessorTable_easyBindings_grammar_292, gSuccessorTable_easyBindings_grammar_293, gSuccessorTable_easyBindings_grammar_294, gSuccessorTable_easyBindings_grammar_295, 
  gSuccessorTable_easyBindings_grammar_296, NULL, gSuccessorTable_easyBindings_grammar_298, NULL, 
  gSuccessorTable_easyBindings_grammar_300, NULL, gSuccessorTable_easyBindings_grammar_302, gSuccessorTable_easyBindings_grammar_303, 
  NULL, gSuccessorTable_easyBindings_grammar_305, gSuccessorTable_easyBindings_grammar_306, gSuccessorTable_easyBindings_grammar_307, 
  gSuccessorTable_easyBindings_grammar_308, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_315, 
  gSuccessorTable_easyBindings_grammar_316, gSuccessorTable_easyBindings_grammar_317, gSuccessorTable_easyBindings_grammar_318, NULL, 
  gSuccessorTable_easyBindings_grammar_320, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_326, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_329, NULL, gSuccessorTable_easyBindings_grammar_331, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_340, NULL, gSuccessorTable_easyBindings_grammar_342, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_347, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_351, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_357, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_362, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_371, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_386, gSuccessorTable_easyBindings_grammar_387, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_392, gSuccessorTable_easyBindings_grammar_393, gSuccessorTable_easyBindings_grammar_394, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_399, 
  gSuccessorTable_easyBindings_grammar_400, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_405, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_416, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_429, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_434, gSuccessorTable_easyBindings_grammar_435, 
  NULL, gSuccessorTable_easyBindings_grammar_437, NULL, gSuccessorTable_easyBindings_grammar_439, 
  NULL, gSuccessorTable_easyBindings_grammar_441, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_448, gSuccessorTable_easyBindings_grammar_449, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_455, 
  NULL, gSuccessorTable_easyBindings_grammar_457, gSuccessorTable_easyBindings_grammar_458, gSuccessorTable_easyBindings_grammar_459, 
  gSuccessorTable_easyBindings_grammar_460, NULL, NULL, gSuccessorTable_easyBindings_grammar_463, 
  gSuccessorTable_easyBindings_grammar_464, gSuccessorTable_easyBindings_grammar_465, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_470, gSuccessorTable_easyBindings_grammar_471, 
  gSuccessorTable_easyBindings_grammar_472, gSuccessorTable_easyBindings_grammar_473, gSuccessorTable_easyBindings_grammar_474, NULL, 
  NULL, NULL} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                          Production rules infos (left non terminal, size of right string)                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionsTable_easyBindings_grammar [215 * 2] = {
  0, 1,
  1, 3,
  2, 5,
  3, 5,
  4, 6,
  3, 5,
  5, 9,
  6, 7,
  7, 4,
  8, 7,
  9, 9,
  10, 5,
  11, 1,
  12, 5,
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
  23, 7,
  23, 13,
  24, 1,
  23, 10,
  25, 1,
  26, 3,
  27, 5,
  28, 2,
  29, 0,
  29, 4,
  29, 2,
  29, 2,
  29, 2,
  29, 2,
  29, 2,
  29, 2,
  29, 2,
  29, 2,
  29, 2,
  30, 1,
  30, 1,
  31, 0,
  31, 3,
  32, 0,
  32, 2,
  32, 2,
  32, 2,
  32, 2,
  32, 2,
  33, 0,
  33, 1,
  34, 0,
  34, 1,
  35, 0,
  35, 4,
  36, 0,
  36, 3,
  37, 0,
  37, 2,
  38, 0,
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
  39, 2,
  40, 0,
  40, 2,
  40, 2,
  40, 2,
  40, 2,
  40, 2,
  40, 2,
  40, 2,
  41, 0,
  41, 2,
  42, 0,
  42, 2,
  42, 2,
  42, 2,
  42, 2,
  42, 2,
  43, 0,
  43, 4,
  44, 1,
  44, 1,
  45, 1,
  45, 1,
  46, 0,
  46, 6,
  47, 0,
  47, 5,
  48, 0,
  48, 3,
  48, 5,
  48, 3,
  48, 3,
  48, 5,
  48, 6,
  49, 1,
  49, 1,
  50, 0,
  50, 3,
  51, 0,
  51, 2,
  52, 4,
  52, 4,
  52, 4,
  52, 4,
  52, 1,
  52, 1,
  52, 1,
  53, 0,
  53, 2,
  54, 1,
  54, 3,
  54, 1,
  55, 0,
  55, 2,
  56, 3,
  56, 3,
  56, 1,
  56, 1,
  57, 0,
  57, 2,
  58, 0,
  58, 2,
  59, 0,
  59, 2,
  60, 0,
  60, 3,
  61, 0,
  61, 2,
  62, 0,
  62, 2,
  63, 0,
  63, 3,
  64, 1,
  64, 1,
  65, 0,
  65, 2,
  66, 3,
  66, 4,
  66, 0,
  67, 0,
  67, 3,
  68, 0,
  68, 2,
  68, 2,
  68, 2,
  68, 2,
  68, 2,
  68, 2,
  69, 0,
  69, 3,
  69, 3,
  70, 0,
  70, 6,
  71, 0,
  71, 5,
  72, 1,
  72, 1,
  73, 0,
  73, 5,
  74, 1,
  74, 1,
  75, 0,
  75, 3,
  76, 0,
  76, 3,
  77, 1,
  77, 3,
  78, 0,
  78, 6,
  79, 0,
  79, 2,
  80, 0,
  80, 5,
  80, 3,
  80, 3,
  80, 5,
  81, 0,
  81, 3,
  82, 1,
  82, 1,
  82, 1,
  82, 1,
  82, 1,
  82, 1,
  82, 4,
  83, 0,
  83, 3,
  84, 0,
  84, 3,
  85, 2,
  85, 1,
  85, 3,
  86, 0,
  86, 3,
  87, 2,
  87, 1,
  88, 1
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
  case 14 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i14_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_transient_5F_declaration_ (const GALGAS_lstring  parameter_1,
                                const GALGAS_lstring  parameter_2,
                                GALGAS_astDeclarationStruct &  parameter_3,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 13 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i13_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 14 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i14_(parameter_1, parameter_2, parameter_3, inLexique) ;
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
  case 15 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i15_parse(inLexique) ;
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
  case 15 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i15_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
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
  case 16 :
      rule_easyBindings_5F_syntax_toOne_5F_relationship_i16_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_toOne_5F_relationship_ (const GALGAS_lstring  parameter_1,
                                GALGAS_astDeclarationStruct &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 16 :
      rule_easyBindings_5F_syntax_toOne_5F_relationship_i16_(parameter_1, parameter_2, inLexique) ;
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
  case 17 :
      rule_easyBindings_5F_syntax_toMany_5F_relationship_i17_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_toMany_5F_relationship_ (const GALGAS_lstring  parameter_1,
                                GALGAS_stringset &  parameter_2,
                                GALGAS_astDeclarationStruct &  parameter_3,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 17 :
      rule_easyBindings_5F_syntax_toMany_5F_relationship_i17_(parameter_1, parameter_2, parameter_3, inLexique) ;
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
  case 18 :
      rule_easyBindings_5F_syntax_stored_5F_array_5F_declaration_i18_parse(inLexique) ;
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
  case 18 :
      rule_easyBindings_5F_syntax_stored_5F_array_5F_declaration_i18_(parameter_1, parameter_2, parameter_3, inLexique) ;
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
  case 19 :
      rule_easyBindings_5F_syntax_action_5F_declaration_i19_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_action_5F_declaration_ (GALGAS_lstringlist &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 19 :
      rule_easyBindings_5F_syntax_action_5F_declaration_i19_(parameter_1, inLexique) ;
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
  case 20 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i20_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingExpression_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 20 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i20_(parameter_1, inLexique) ;
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
  case 21 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i21_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingComparison_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 21 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i21_(parameter_1, inLexique) ;
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
  case 22 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i22_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingTerm_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 22 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i22_(parameter_1, inLexique) ;
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
  case 23 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_parse(inLexique) ;
    break ;
  case 24 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_parse(inLexique) ;
    break ;
  case 25 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i25_parse(inLexique) ;
    break ;
  case 26 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i26_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingOperand_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 23 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_(parameter_1, inLexique) ;
    break ;
  case 24 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_(parameter_1, inLexique) ;
    break ;
  case 25 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i25_(parameter_1, inLexique) ;
    break ;
  case 26 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i26_(parameter_1, inLexique) ;
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
  case 27 :
      rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i27_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_binding_5F_option_5F_list_ (GALGAS_bindingOptionList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 27 :
      rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i27_(parameter_1, inLexique) ;
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
  case 28 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i28_parse(inLexique) ;
    break ;
  case 29 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i29_parse(inLexique) ;
    break ;
  case 31 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i31_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_controller_5F_declaration_ (const GALGAS_lstring  parameter_1,
                                const GALGAS_lstring  parameter_2,
                                GALGAS_astDeclarationStruct &  parameter_3,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 28 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i28_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 29 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i29_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 31 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i31_(parameter_1, parameter_2, parameter_3, inLexique) ;
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
  case 30 :
      rule_easyBindings_5F_syntax_column_5F_bindings_i30_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_column_5F_bindings_ (GALGAS_tableViewColumnBindingAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 30 :
      rule_easyBindings_5F_syntax_column_5F_bindings_i30_(parameter_1, inLexique) ;
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
  case 32 :
      rule_easyBindings_5F_syntax_explicit_5F_value_i32_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_explicit_5F_value_ (GALGAS_abstractDefaultValue &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 32 :
      rule_easyBindings_5F_syntax_explicit_5F_value_i32_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'xcode_project' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_xcode_5F_project_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 33 :
      rule_easyBindings_5F_syntax_xcode_5F_project_i33_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_xcode_5F_project_ (GALGAS_lstring &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 33 :
      rule_easyBindings_5F_syntax_xcode_5F_project_i33_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       'main_xib' non terminal implementation                                         
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 34 :
      rule_easyBindings_5F_syntax_main_5F_xib_i34_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_ (GALGAS_mainXibDescriptorList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 34 :
      rule_easyBindings_5F_syntax_main_5F_xib_i34_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'main_xib_line' non terminal implementation                                       
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_5F_line_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 35 :
      rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i35_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_5F_line_ (GALGAS_mainXibLineDescriptorList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 35 :
      rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i35_(parameter_1, inLexique) ;
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
// Productions numbers : 36 37 38 39 40 41 42 43 44 45 46
  return inLexique->nextProductionIndex () - 35 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_1' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_1 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 47 48
  return inLexique->nextProductionIndex () - 46 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_2' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_2 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 49 50
  return inLexique->nextProductionIndex () - 48 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_3' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_3 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 51 52 53 54 55 56
  return inLexique->nextProductionIndex () - 50 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_4' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_4 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 57 58
  return inLexique->nextProductionIndex () - 56 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_5' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_5 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 59 60
  return inLexique->nextProductionIndex () - 58 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_6' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_6 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 61 62
  return inLexique->nextProductionIndex () - 60 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_7' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_7 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 63 64
  return inLexique->nextProductionIndex () - 62 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_8' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_8 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 65 66
  return inLexique->nextProductionIndex () - 64 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_9' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_9 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 67 68 69 70 71 72 73
  return inLexique->nextProductionIndex () - 66 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_10' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_10 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 74 75 76 77 78
  return inLexique->nextProductionIndex () - 73 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_11' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_11 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 79 80 81 82 83 84 85 86
  return inLexique->nextProductionIndex () - 78 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_12' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_12 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 87 88
  return inLexique->nextProductionIndex () - 86 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_13' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_13 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 89 90 91 92 93 94
  return inLexique->nextProductionIndex () - 88 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_14' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_14 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 95 96
  return inLexique->nextProductionIndex () - 94 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_15' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_15 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 97 98
  return inLexique->nextProductionIndex () - 96 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_16' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_16 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 99 100
  return inLexique->nextProductionIndex () - 98 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_17' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_17 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 101 102
  return inLexique->nextProductionIndex () - 100 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_18' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_18 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 103 104
  return inLexique->nextProductionIndex () - 102 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_19' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_19 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 105 106 107 108 109 110 111
  return inLexique->nextProductionIndex () - 104 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_20' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_20 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 112 113
  return inLexique->nextProductionIndex () - 111 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_21' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_21 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 114 115
  return inLexique->nextProductionIndex () - 113 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_22' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_22 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 116 117
  return inLexique->nextProductionIndex () - 115 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_23' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_23 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 118 119 120 121 122 123 124
  return inLexique->nextProductionIndex () - 117 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_24' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_24 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 125 126
  return inLexique->nextProductionIndex () - 124 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_25' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_25 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 127 128 129
  return inLexique->nextProductionIndex () - 126 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_26' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_26 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 130 131
  return inLexique->nextProductionIndex () - 129 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_27' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_27 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 132 133 134 135
  return inLexique->nextProductionIndex () - 131 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_28' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_28 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 136 137
  return inLexique->nextProductionIndex () - 135 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_29' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_29 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 138 139
  return inLexique->nextProductionIndex () - 137 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_30' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_30 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 140 141
  return inLexique->nextProductionIndex () - 139 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_31' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_31 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 142 143
  return inLexique->nextProductionIndex () - 141 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_32' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_32 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 144 145
  return inLexique->nextProductionIndex () - 143 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_33' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_33 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 146 147
  return inLexique->nextProductionIndex () - 145 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_34' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_34 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 148 149
  return inLexique->nextProductionIndex () - 147 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_35' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_35 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 150 151
  return inLexique->nextProductionIndex () - 149 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_36' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_36 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 152 153
  return inLexique->nextProductionIndex () - 151 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_37' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_37 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 154 155 156
  return inLexique->nextProductionIndex () - 153 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_38' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_38 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 157 158
  return inLexique->nextProductionIndex () - 156 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_39' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_39 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 159 160 161 162 163 164 165
  return inLexique->nextProductionIndex () - 158 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_40' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_40 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 166 167 168
  return inLexique->nextProductionIndex () - 165 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_41' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_41 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 169 170
  return inLexique->nextProductionIndex () - 168 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_42' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_42 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 171 172
  return inLexique->nextProductionIndex () - 170 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_43' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_43 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 173 174
  return inLexique->nextProductionIndex () - 172 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_44' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_44 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 175 176
  return inLexique->nextProductionIndex () - 174 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_45' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_45 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 177 178
  return inLexique->nextProductionIndex () - 176 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_46' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_46 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 179 180
  return inLexique->nextProductionIndex () - 178 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_47' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_47 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 181 182
  return inLexique->nextProductionIndex () - 180 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_48' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_48 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 183 184
  return inLexique->nextProductionIndex () - 182 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_49' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_49 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 185 186
  return inLexique->nextProductionIndex () - 184 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_50' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_50 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 187 188
  return inLexique->nextProductionIndex () - 186 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_51' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_51 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 189 190 191 192 193
  return inLexique->nextProductionIndex () - 188 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_52' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_52 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 194 195
  return inLexique->nextProductionIndex () - 193 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_53' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_53 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 196 197 198 199 200 201 202
  return inLexique->nextProductionIndex () - 195 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_54' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_54 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 203 204
  return inLexique->nextProductionIndex () - 202 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_55' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_55 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 205 206
  return inLexique->nextProductionIndex () - 204 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_56' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_56 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 207 208 209
  return inLexique->nextProductionIndex () - 206 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_57' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_57 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 210 211
  return inLexique->nextProductionIndex () - 209 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_58' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_58 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 212 213
  return inLexique->nextProductionIndex () - 211 ;
}

//---------------------------------------------------------------------------------------------------------------------*

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_astDeclaration::objectCompare (const GALGAS_astDeclaration & inOperand) const {
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

GALGAS_astDeclaration::GALGAS_astDeclaration (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclaration::GALGAS_astDeclaration (const cPtr_astDeclaration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astDeclaration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_astDeclaration::getter_mUserDefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_astDeclaration * p = (const cPtr_astDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astDeclaration) ;
    result = p->mProperty_mUserDefined ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_astDeclaration::getter_mUserDefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUserDefined ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                       Pointer class for @astDeclaration class                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_astDeclaration::cPtr_astDeclaration (const GALGAS_bool & in_mUserDefined
                                          COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mUserDefined (in_mUserDefined) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @astDeclaration type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astDeclaration ("astDeclaration",
                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_astDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_astDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astDeclaration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_astDeclaration GALGAS_astDeclaration::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_astDeclaration result ;
  const GALGAS_astDeclaration * p = (const GALGAS_astDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration::GALGAS_prefDeclaration (void) :
mProperty_mOutletDeclarationList (),
mProperty_mSimpleStoredAttributeList (),
mProperty_mActionDeclarationList (),
mProperty_mExternSwiftFunctionList (),
mProperty_mStoredArrayList (),
mProperty_mSignatureList (),
mProperty_mMainXibDescriptorList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration::~ GALGAS_prefDeclaration (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration::GALGAS_prefDeclaration (const GALGAS_outletDeclarationList & inOperand0,
                                                const GALGAS_simpleStoredPropertyList & inOperand1,
                                                const GALGAS_lstringlist & inOperand2,
                                                const GALGAS_externSwiftFunctionList & inOperand3,
                                                const GALGAS_storedArrayPropertyListAST & inOperand4,
                                                const GALGAS_stringset & inOperand5,
                                                const GALGAS_mainXibDescriptorList & inOperand6) :
mProperty_mOutletDeclarationList (inOperand0),
mProperty_mSimpleStoredAttributeList (inOperand1),
mProperty_mActionDeclarationList (inOperand2),
mProperty_mExternSwiftFunctionList (inOperand3),
mProperty_mStoredArrayList (inOperand4),
mProperty_mSignatureList (inOperand5),
mProperty_mMainXibDescriptorList (inOperand6) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration GALGAS_prefDeclaration::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_prefDeclaration (GALGAS_outletDeclarationList::constructor_emptyList (HERE),
                                 GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                 GALGAS_lstringlist::constructor_emptyList (HERE),
                                 GALGAS_externSwiftFunctionList::constructor_emptyList (HERE),
                                 GALGAS_storedArrayPropertyListAST::constructor_emptyList (HERE),
                                 GALGAS_stringset::constructor_emptySet (HERE),
                                 GALGAS_mainXibDescriptorList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration GALGAS_prefDeclaration::constructor_new (const GALGAS_outletDeclarationList & inOperand0,
                                                                const GALGAS_simpleStoredPropertyList & inOperand1,
                                                                const GALGAS_lstringlist & inOperand2,
                                                                const GALGAS_externSwiftFunctionList & inOperand3,
                                                                const GALGAS_storedArrayPropertyListAST & inOperand4,
                                                                const GALGAS_stringset & inOperand5,
                                                                const GALGAS_mainXibDescriptorList & inOperand6 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefDeclaration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_prefDeclaration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_prefDeclaration::objectCompare (const GALGAS_prefDeclaration & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOutletDeclarationList.objectCompare (inOperand.mProperty_mOutletDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSimpleStoredAttributeList.objectCompare (inOperand.mProperty_mSimpleStoredAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mActionDeclarationList.objectCompare (inOperand.mProperty_mActionDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExternSwiftFunctionList.objectCompare (inOperand.mProperty_mExternSwiftFunctionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStoredArrayList.objectCompare (inOperand.mProperty_mStoredArrayList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSignatureList.objectCompare (inOperand.mProperty_mSignatureList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMainXibDescriptorList.objectCompare (inOperand.mProperty_mMainXibDescriptorList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_prefDeclaration::isValid (void) const {
  return mProperty_mOutletDeclarationList.isValid () && mProperty_mSimpleStoredAttributeList.isValid () && mProperty_mActionDeclarationList.isValid () && mProperty_mExternSwiftFunctionList.isValid () && mProperty_mStoredArrayList.isValid () && mProperty_mSignatureList.isValid () && mProperty_mMainXibDescriptorList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_prefDeclaration::drop (void) {
  mProperty_mOutletDeclarationList.drop () ;
  mProperty_mSimpleStoredAttributeList.drop () ;
  mProperty_mActionDeclarationList.drop () ;
  mProperty_mExternSwiftFunctionList.drop () ;
  mProperty_mStoredArrayList.drop () ;
  mProperty_mSignatureList.drop () ;
  mProperty_mMainXibDescriptorList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_prefDeclaration::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @prefDeclaration:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOutletDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSimpleStoredAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStoredArrayList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSignatureList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMainXibDescriptorList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_prefDeclaration::getter_mOutletDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList GALGAS_prefDeclaration::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSimpleStoredAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_prefDeclaration::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_prefDeclaration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftFunctionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST GALGAS_prefDeclaration::getter_mStoredArrayList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStoredArrayList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_prefDeclaration::getter_mSignatureList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignatureList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibDescriptorList GALGAS_prefDeclaration::getter_mMainXibDescriptorList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMainXibDescriptorList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @prefDeclaration type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefDeclaration ("prefDeclaration",
                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_prefDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_prefDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefDeclaration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration GALGAS_prefDeclaration::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_prefDeclaration result ;
  const GALGAS_prefDeclaration * p = (const GALGAS_prefDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mProperty_mClassMap (),
mProperty_mOutletClassMap (),
mProperty_mBindingSpecificationMap () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_classMap & inOperand0,
                                                const GALGAS_outletClassMap & inOperand1,
                                                const GALGAS_bindingSpecificationMap & inOperand2) :
mProperty_mClassMap (inOperand0),
mProperty_mOutletClassMap (inOperand1),
mProperty_mBindingSpecificationMap (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_classMap::constructor_emptyMap (HERE),
                                 GALGAS_outletClassMap::constructor_emptyMap (HERE),
                                 GALGAS_bindingSpecificationMap::constructor_emptyMap (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_classMap & inOperand0,
                                                                const GALGAS_outletClassMap & inOperand1,
                                                                const GALGAS_bindingSpecificationMap & inOperand2 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_semanticContext (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_semanticContext::objectCompare (const GALGAS_semanticContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mClassMap.objectCompare (inOperand.mProperty_mClassMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOutletClassMap.objectCompare (inOperand.mProperty_mOutletClassMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingSpecificationMap.objectCompare (inOperand.mProperty_mBindingSpecificationMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_semanticContext::isValid (void) const {
  return mProperty_mClassMap.isValid () && mProperty_mOutletClassMap.isValid () && mProperty_mBindingSpecificationMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticContext::drop (void) {
  mProperty_mClassMap.drop () ;
  mProperty_mOutletClassMap.drop () ;
  mProperty_mBindingSpecificationMap.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_semanticContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mClassMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOutletClassMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingSpecificationMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classMap GALGAS_semanticContext::getter_mClassMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassMap GALGAS_semanticContext::getter_mOutletClassMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletClassMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationMap GALGAS_semanticContext::getter_mBindingSpecificationMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBindingSpecificationMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @semanticContext type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_semanticContext GALGAS_semanticContext::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  const GALGAS_semanticContext * p = (const GALGAS_semanticContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



typeComparisonResult GALGAS_abstractDeclarationAST::objectCompare (const GALGAS_abstractDeclarationAST & inOperand) const {
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

GALGAS_abstractDeclarationAST::GALGAS_abstractDeclarationAST (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDeclarationAST::GALGAS_abstractDeclarationAST (const cPtr_abstractDeclarationAST * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_abstractDeclarationAST::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_abstractDeclarationAST * p = (const cPtr_abstractDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractDeclarationAST) ;
    result = p->mProperty_mClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_abstractDeclarationAST::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @abstractDeclarationAST class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_abstractDeclarationAST::cPtr_abstractDeclarationAST (const GALGAS_lstring & in_mClassName
                                                          COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mClassName (in_mClassName) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @abstractDeclarationAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractDeclarationAST ("abstractDeclarationAST",
                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_abstractDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_abstractDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDeclarationAST GALGAS_abstractDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractDeclarationAST result ;
  const GALGAS_abstractDeclarationAST * p = (const GALGAS_abstractDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Abstract extension method '@abstractDeclarationAST enterInPrecedenceGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph> gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_enterInPrecedenceGraph (const int32_t inClassIndex,
                                                  extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractDeclarationAST_enterInPrecedenceGraph (void) {
  gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractDeclarationAST_enterInPrecedenceGraph (NULL,
                                                                          freeExtensionMethod_abstractDeclarationAST_enterInPrecedenceGraph) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_enterInPrecedenceGraph (const cPtr_abstractDeclarationAST * inObject,
                                                 GALGAS_declarationPrecedenceGraph & io_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclarationAST_enterInPrecedenceGraph f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.count ()) {
      f = gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.count ()) {
          f = gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractDeclarationAST_enterInPrecedenceGraph.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioGraph, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Abstract extension getter '@abstractDeclarationAST lkey'                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <enterExtensionGetter_abstractDeclarationAST_lkey> gExtensionGetterTable_abstractDeclarationAST_lkey ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionGetter_lkey (const int32_t inClassIndex,
                                enterExtensionGetter_abstractDeclarationAST_lkey inGetter) {
  gExtensionGetterTable_abstractDeclarationAST_lkey.forceObjectAtIndex (inClassIndex, inGetter, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionGetter_abstractDeclarationAST_lkey (void) {
  gExtensionGetterTable_abstractDeclarationAST_lkey.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_abstractDeclarationAST_lkey (NULL,
                                                        freeExtensionGetter_abstractDeclarationAST_lkey) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring callExtensionGetter_lkey (const cPtr_abstractDeclarationAST * inObject,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GALGAS_lstring result ;
//--- Find Reader
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    enterExtensionGetter_abstractDeclarationAST_lkey f = NULL ;
    if (classIndex < gExtensionGetterTable_abstractDeclarationAST_lkey.count ()) {
      f = gExtensionGetterTable_abstractDeclarationAST_lkey (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionGetterTable_abstractDeclarationAST_lkey.count ()) {
           f = gExtensionGetterTable_abstractDeclarationAST_lkey (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionGetterTable_abstractDeclarationAST_lkey.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
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
//                       Abstract extension method '@abstractDeclarationAST firstAnalysisPhase'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_firstAnalysisPhase> gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_firstAnalysisPhase (const int32_t inClassIndex,
                                              extensionMethodSignature_abstractDeclarationAST_firstAnalysisPhase inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractDeclarationAST_firstAnalysisPhase (void) {
  gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractDeclarationAST_firstAnalysisPhase (NULL,
                                                                      freeExtensionMethod_abstractDeclarationAST_firstAnalysisPhase) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_firstAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                             GALGAS_semanticContext & io_ioSemanticContext,
                                             GALGAS_generationStruct & io_ioGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclarationAST_firstAnalysisPhase f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase.count ()) {
      f = gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase.count ()) {
          f = gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_abstractDeclarationAST_firstAnalysisPhase.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                           Extension method '@abstractDeclarationAST secondAnalysisPhase'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_secondAnalysisPhase> gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_secondAnalysisPhase (const int32_t inClassIndex,
                                               extensionMethodSignature_abstractDeclarationAST_secondAnalysisPhase inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_secondAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                              GALGAS_semanticContext & io_ioSemanticContext,
                                              GALGAS_generationStruct & io_ioGeneration,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclarationAST_secondAnalysisPhase f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase.count ()) {
      f = gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase.count ()) {
           f = gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_abstractDeclarationAST_secondAnalysisPhase (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                        GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                        GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_abstractDeclarationAST_secondAnalysisPhase (void) {
  enterExtensionMethod_secondAnalysisPhase (kTypeDescriptor_GALGAS_abstractDeclarationAST.mSlotID,
                                            extensionMethod_abstractDeclarationAST_secondAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractDeclarationAST_secondAnalysisPhase (void) {
  gExtensionMethodTable_abstractDeclarationAST_secondAnalysisPhase.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractDeclarationAST_secondAnalysisPhase (defineExtensionMethod_abstractDeclarationAST_secondAnalysisPhase,
                                                                       freeExtensionMethod_abstractDeclarationAST_secondAnalysisPhase) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Extension method '@abstractDeclarationAST thirdAnalysisPhase'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static TC_UniqueArray <extensionMethodSignature_abstractDeclarationAST_thirdAnalysisPhase> gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void enterExtensionMethod_thirdAnalysisPhase (const int32_t inClassIndex,
                                              extensionMethodSignature_abstractDeclarationAST_thirdAnalysisPhase inMethod) {
  gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void callExtensionMethod_thirdAnalysisPhase (const cPtr_abstractDeclarationAST * inObject,
                                             GALGAS_semanticContext & io_ioSemanticContext,
                                             GALGAS_generationStruct & io_ioGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_abstractDeclarationAST_thirdAnalysisPhase f = NULL ;
    if (classIndex < gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase.count ()) {
      f = gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase.count ()) {
           f = gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_abstractDeclarationAST_thirdAnalysisPhase (const cPtr_abstractDeclarationAST * /* inObject */,
                                                                       GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                       GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_abstractDeclarationAST_thirdAnalysisPhase (void) {
  enterExtensionMethod_thirdAnalysisPhase (kTypeDescriptor_GALGAS_abstractDeclarationAST.mSlotID,
                                           extensionMethod_abstractDeclarationAST_thirdAnalysisPhase) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void freeExtensionMethod_abstractDeclarationAST_thirdAnalysisPhase (void) {
  gExtensionMethodTable_abstractDeclarationAST_thirdAnalysisPhase.free () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_abstractDeclarationAST_thirdAnalysisPhase (defineExtensionMethod_abstractDeclarationAST_thirdAnalysisPhase,
                                                                      freeExtensionMethod_abstractDeclarationAST_thirdAnalysisPhase) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_transientClassDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_transientClassDeclarationAST * p = (const cPtr_transientClassDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_transientClassDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsClass.objectCompare (p->mProperty_mIsClass) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_transientClassDeclarationAST::objectCompare (const GALGAS_transientClassDeclarationAST & inOperand) const {
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

GALGAS_transientClassDeclarationAST::GALGAS_transientClassDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientClassDeclarationAST GALGAS_transientClassDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_transientClassDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientClassDeclarationAST::GALGAS_transientClassDeclarationAST (const cPtr_transientClassDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientClassDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientClassDeclarationAST GALGAS_transientClassDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                          const GALGAS_bool & inAttribute_mIsClass
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_transientClassDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mIsClass.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_transientClassDeclarationAST (inAttribute_mClassName, inAttribute_mIsClass COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_transientClassDeclarationAST::getter_mIsClass (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientClassDeclarationAST * p = (const cPtr_transientClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientClassDeclarationAST) ;
    result = p->mProperty_mIsClass ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_transientClassDeclarationAST::getter_mIsClass (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsClass ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @transientClassDeclarationAST class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_transientClassDeclarationAST::cPtr_transientClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                      const GALGAS_bool & in_mIsClass
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mIsClass (in_mIsClass) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_transientClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientClassDeclarationAST ;
}

void cPtr_transientClassDeclarationAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@transientClassDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsClass.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_transientClassDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_transientClassDeclarationAST (mProperty_mClassName, mProperty_mIsClass COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @transientClassDeclarationAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientClassDeclarationAST ("transientClassDeclarationAST",
                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transientClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientClassDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transientClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientClassDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientClassDeclarationAST GALGAS_transientClassDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_transientClassDeclarationAST result ;
  const GALGAS_transientClassDeclarationAST * p = (const GALGAS_transientClassDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientClassDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientClassDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_enumerationDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumerationDeclarationAST * p = (const cPtr_enumerationDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumConstantNameList.objectCompare (p->mProperty_mEnumConstantNameList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_enumerationDeclarationAST::objectCompare (const GALGAS_enumerationDeclarationAST & inOperand) const {
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

GALGAS_enumerationDeclarationAST::GALGAS_enumerationDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumerationDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_lstringlist::constructor_emptyList (HERE)
                                                            COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationDeclarationAST::GALGAS_enumerationDeclarationAST (const cPtr_enumerationDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumerationDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                    const GALGAS_lstringlist & inAttribute_mEnumConstantNameList
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mEnumConstantNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumerationDeclarationAST (inAttribute_mClassName, inAttribute_mEnumConstantNameList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_enumerationDeclarationAST::getter_mEnumConstantNameList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumerationDeclarationAST * p = (const cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    result = p->mProperty_mEnumConstantNameList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_enumerationDeclarationAST::getter_mEnumConstantNameList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumConstantNameList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @enumerationDeclarationAST class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_enumerationDeclarationAST::cPtr_enumerationDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                const GALGAS_lstringlist & in_mEnumConstantNameList
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mEnumConstantNameList (in_mEnumConstantNameList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_enumerationDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

void cPtr_enumerationDeclarationAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@enumerationDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumConstantNameList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_enumerationDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumerationDeclarationAST (mProperty_mClassName, mProperty_mEnumConstantNameList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @enumerationDeclarationAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationDeclarationAST ("enumerationDeclarationAST",
                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumerationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumerationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST result ;
  const GALGAS_enumerationDeclarationAST * p = (const GALGAS_enumerationDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumerationDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_enumForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumForGeneration * p = (const cPtr_enumForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mEnumName.objectCompare (p->mProperty_mEnumName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumConstantList.objectCompare (p->mProperty_mEnumConstantList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_enumForGeneration::objectCompare (const GALGAS_enumForGeneration & inOperand) const {
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

GALGAS_enumForGeneration::GALGAS_enumForGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumForGeneration GALGAS_enumForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumForGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                    GALGAS_lstringlist::constructor_emptyList (HERE)
                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumForGeneration::GALGAS_enumForGeneration (const cPtr_enumForGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumForGeneration GALGAS_enumForGeneration::constructor_new (const GALGAS_string & inAttribute_mEnumName,
                                                                    const GALGAS_lstringlist & inAttribute_mEnumConstantList
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumForGeneration result ;
  if (inAttribute_mEnumName.isValid () && inAttribute_mEnumConstantList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumForGeneration (inAttribute_mEnumName, inAttribute_mEnumConstantList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_enumForGeneration::getter_mEnumName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumForGeneration * p = (const cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    result = p->mProperty_mEnumName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_enumForGeneration::getter_mEnumName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_enumForGeneration::getter_mEnumConstantList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumForGeneration * p = (const cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    result = p->mProperty_mEnumConstantList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_enumForGeneration::getter_mEnumConstantList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumConstantList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @enumForGeneration class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_enumForGeneration::cPtr_enumForGeneration (const GALGAS_string & in_mEnumName,
                                                const GALGAS_lstringlist & in_mEnumConstantList
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mEnumName (in_mEnumName),
mProperty_mEnumConstantList (in_mEnumConstantList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_enumForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumForGeneration ;
}

void cPtr_enumForGeneration::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@enumForGeneration:" ;
  mProperty_mEnumName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumConstantList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_enumForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumForGeneration (mProperty_mEnumName, mProperty_mEnumConstantList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @enumForGeneration type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumForGeneration ("enumForGeneration",
                                          & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumForGeneration GALGAS_enumForGeneration::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_enumForGeneration result ;
  const GALGAS_enumForGeneration * p = (const GALGAS_enumForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_atomicClassDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_atomicClassDeclarationAST * p = (const cPtr_atomicClassDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_atomicClassDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_atomicClassDeclarationAST::objectCompare (const GALGAS_atomicClassDeclarationAST & inOperand) const {
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

GALGAS_atomicClassDeclarationAST::GALGAS_atomicClassDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicClassDeclarationAST::GALGAS_atomicClassDeclarationAST (const cPtr_atomicClassDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicClassDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicClassDeclarationAST GALGAS_atomicClassDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                    const GALGAS_typeKind & inAttribute_mKind
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_atomicClassDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_atomicClassDeclarationAST (inAttribute_mClassName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_atomicClassDeclarationAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicClassDeclarationAST * p = (const cPtr_atomicClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicClassDeclarationAST) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cPtr_atomicClassDeclarationAST::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @atomicClassDeclarationAST class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_atomicClassDeclarationAST::cPtr_atomicClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                const GALGAS_typeKind & in_mKind
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mKind (in_mKind) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_atomicClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicClassDeclarationAST ;
}

void cPtr_atomicClassDeclarationAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@atomicClassDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_atomicClassDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_atomicClassDeclarationAST (mProperty_mClassName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @atomicClassDeclarationAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicClassDeclarationAST ("atomicClassDeclarationAST",
                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_atomicClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicClassDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_atomicClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicClassDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicClassDeclarationAST GALGAS_atomicClassDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_atomicClassDeclarationAST result ;
  const GALGAS_atomicClassDeclarationAST * p = (const GALGAS_atomicClassDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicClassDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicClassDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_classDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_classDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsUserDefined.objectCompare (p->mProperty_mIsUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternSwiftFunctionList.objectCompare (p->mProperty_mExternSwiftFunctionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternSwiftDelegateList.objectCompare (p->mProperty_mExternSwiftDelegateList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionDeclarationList.objectCompare (p->mProperty_mActionDeclarationList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_classDeclarationAST::objectCompare (const GALGAS_classDeclarationAST & inOperand) const {
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

GALGAS_classDeclarationAST::GALGAS_classDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classDeclarationAST GALGAS_classDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_classDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_externSwiftFunctionList::constructor_emptyList (HERE),
                                                      GALGAS_externSwiftDelegateList::constructor_emptyList (HERE),
                                                      GALGAS_lstringlist::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classDeclarationAST::GALGAS_classDeclarationAST (const cPtr_classDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classDeclarationAST GALGAS_classDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                        const GALGAS_bool & inAttribute_mIsUserDefined,
                                                                        const GALGAS_externSwiftFunctionList & inAttribute_mExternSwiftFunctionList,
                                                                        const GALGAS_externSwiftDelegateList & inAttribute_mExternSwiftDelegateList,
                                                                        const GALGAS_lstringlist & inAttribute_mActionDeclarationList
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_classDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mIsUserDefined.isValid () && inAttribute_mExternSwiftFunctionList.isValid () && inAttribute_mExternSwiftDelegateList.isValid () && inAttribute_mActionDeclarationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_classDeclarationAST (inAttribute_mClassName, inAttribute_mIsUserDefined, inAttribute_mExternSwiftFunctionList, inAttribute_mExternSwiftDelegateList, inAttribute_mActionDeclarationList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_classDeclarationAST::getter_mIsUserDefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    result = p->mProperty_mIsUserDefined ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_classDeclarationAST::getter_mIsUserDefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsUserDefined ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_classDeclarationAST::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftFunctionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    result = p->mProperty_mExternSwiftFunctionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList cPtr_classDeclarationAST::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftFunctionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList GALGAS_classDeclarationAST::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftDelegateList result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    result = p->mProperty_mExternSwiftDelegateList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList cPtr_classDeclarationAST::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftDelegateList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_classDeclarationAST::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclarationAST * p = (const cPtr_classDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclarationAST) ;
    result = p->mProperty_mActionDeclarationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_classDeclarationAST::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @classDeclarationAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_classDeclarationAST::cPtr_classDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                    const GALGAS_bool & in_mIsUserDefined,
                                                    const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                                    const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                                    const GALGAS_lstringlist & in_mActionDeclarationList
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mIsUserDefined (in_mIsUserDefined),
mProperty_mExternSwiftFunctionList (in_mExternSwiftFunctionList),
mProperty_mExternSwiftDelegateList (in_mExternSwiftDelegateList),
mProperty_mActionDeclarationList (in_mActionDeclarationList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_classDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclarationAST ;
}

void cPtr_classDeclarationAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@classDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternSwiftDelegateList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_classDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_classDeclarationAST (mProperty_mClassName, mProperty_mIsUserDefined, mProperty_mExternSwiftFunctionList, mProperty_mExternSwiftDelegateList, mProperty_mActionDeclarationList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @classDeclarationAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classDeclarationAST ("classDeclarationAST",
                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_classDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_classDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classDeclarationAST GALGAS_classDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_classDeclarationAST result ;
  const GALGAS_classDeclarationAST * p = (const GALGAS_classDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_classForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_classForGeneration * p = (const cPtr_classForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_classForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyGenerationList.objectCompare (p->mProperty_mPropertyGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternSwiftFunctionList.objectCompare (p->mProperty_mExternSwiftFunctionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternSwiftDelegateList.objectCompare (p->mProperty_mExternSwiftDelegateList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_classForGeneration::objectCompare (const GALGAS_classForGeneration & inOperand) const {
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

GALGAS_classForGeneration::GALGAS_classForGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classForGeneration GALGAS_classForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_classForGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                     GALGAS_propertyGenerationList::constructor_emptyList (HERE),
                                                     GALGAS_externSwiftFunctionList::constructor_emptyList (HERE),
                                                     GALGAS_externSwiftDelegateList::constructor_emptyList (HERE)
                                                     COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classForGeneration::GALGAS_classForGeneration (const cPtr_classForGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classForGeneration GALGAS_classForGeneration::constructor_new (const GALGAS_string & inAttribute_mClassName,
                                                                      const GALGAS_propertyGenerationList & inAttribute_mPropertyGenerationList,
                                                                      const GALGAS_externSwiftFunctionList & inAttribute_mExternSwiftFunctionList,
                                                                      const GALGAS_externSwiftDelegateList & inAttribute_mExternSwiftDelegateList
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_classForGeneration result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mPropertyGenerationList.isValid () && inAttribute_mExternSwiftFunctionList.isValid () && inAttribute_mExternSwiftDelegateList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_classForGeneration (inAttribute_mClassName, inAttribute_mPropertyGenerationList, inAttribute_mExternSwiftFunctionList, inAttribute_mExternSwiftDelegateList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_classForGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_classForGeneration * p = (const cPtr_classForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classForGeneration) ;
    result = p->mProperty_mClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_classForGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList GALGAS_classForGeneration::getter_mPropertyGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_classForGeneration * p = (const cPtr_classForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classForGeneration) ;
    result = p->mProperty_mPropertyGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList cPtr_classForGeneration::getter_mPropertyGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_classForGeneration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftFunctionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_classForGeneration * p = (const cPtr_classForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classForGeneration) ;
    result = p->mProperty_mExternSwiftFunctionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList cPtr_classForGeneration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftFunctionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList GALGAS_classForGeneration::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftDelegateList result ;
  if (NULL != mObjectPtr) {
    const cPtr_classForGeneration * p = (const cPtr_classForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classForGeneration) ;
    result = p->mProperty_mExternSwiftDelegateList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList cPtr_classForGeneration::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftDelegateList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @classForGeneration class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_classForGeneration::cPtr_classForGeneration (const GALGAS_string & in_mClassName,
                                                  const GALGAS_propertyGenerationList & in_mPropertyGenerationList,
                                                  const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                                  const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mClassName (in_mClassName),
mProperty_mPropertyGenerationList (in_mPropertyGenerationList),
mProperty_mExternSwiftFunctionList (in_mExternSwiftFunctionList),
mProperty_mExternSwiftDelegateList (in_mExternSwiftDelegateList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_classForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classForGeneration ;
}

void cPtr_classForGeneration::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@classForGeneration:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternSwiftDelegateList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_classForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_classForGeneration (mProperty_mClassName, mProperty_mPropertyGenerationList, mProperty_mExternSwiftFunctionList, mProperty_mExternSwiftDelegateList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @classForGeneration type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classForGeneration ("classForGeneration",
                                           & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_classForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_classForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classForGeneration GALGAS_classForGeneration::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_classForGeneration result ;
  const GALGAS_classForGeneration * p = (const GALGAS_classForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_entityDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsAbstract.objectCompare (p->mProperty_mIsAbstract) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsUserDefined.objectCompare (p->mProperty_mIsUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperEntityName.objectCompare (p->mProperty_mSuperEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSimpleStoredAttributeList.objectCompare (p->mProperty_mSimpleStoredAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSignatureList.objectCompare (p->mProperty_mSignatureList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionDeclarationList.objectCompare (p->mProperty_mActionDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mObsoleteEntityNames.objectCompare (p->mProperty_mObsoleteEntityNames) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsGraphicEntity.objectCompare (p->mProperty_mIsGraphicEntity) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_entityDeclarationAST::objectCompare (const GALGAS_entityDeclarationAST & inOperand) const {
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

GALGAS_entityDeclarationAST::GALGAS_entityDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityDeclarationAST GALGAS_entityDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_entityDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                                       GALGAS_stringset::constructor_emptySet (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE),
                                                       GALGAS_bool::constructor_default (HERE)
                                                       COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityDeclarationAST::GALGAS_entityDeclarationAST (const cPtr_entityDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_entityDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityDeclarationAST GALGAS_entityDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                          const GALGAS_bool & inAttribute_mIsAbstract,
                                                                          const GALGAS_bool & inAttribute_mIsUserDefined,
                                                                          const GALGAS_lstring & inAttribute_mSuperEntityName,
                                                                          const GALGAS_simpleStoredPropertyList & inAttribute_mSimpleStoredAttributeList,
                                                                          const GALGAS_stringset & inAttribute_mSignatureList,
                                                                          const GALGAS_lstringlist & inAttribute_mActionDeclarationList,
                                                                          const GALGAS_lstringlist & inAttribute_mObsoleteEntityNames,
                                                                          const GALGAS_bool & inAttribute_mIsGraphicEntity
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_entityDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mIsAbstract.isValid () && inAttribute_mIsUserDefined.isValid () && inAttribute_mSuperEntityName.isValid () && inAttribute_mSimpleStoredAttributeList.isValid () && inAttribute_mSignatureList.isValid () && inAttribute_mActionDeclarationList.isValid () && inAttribute_mObsoleteEntityNames.isValid () && inAttribute_mIsGraphicEntity.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_entityDeclarationAST (inAttribute_mClassName, inAttribute_mIsAbstract, inAttribute_mIsUserDefined, inAttribute_mSuperEntityName, inAttribute_mSimpleStoredAttributeList, inAttribute_mSignatureList, inAttribute_mActionDeclarationList, inAttribute_mObsoleteEntityNames, inAttribute_mIsGraphicEntity COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_entityDeclarationAST::getter_mIsAbstract (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mIsAbstract ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_entityDeclarationAST::getter_mIsAbstract (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsAbstract ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_entityDeclarationAST::getter_mIsUserDefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mIsUserDefined ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_entityDeclarationAST::getter_mIsUserDefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsUserDefined ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_entityDeclarationAST::getter_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mSuperEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_entityDeclarationAST::getter_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSuperEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList GALGAS_entityDeclarationAST::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mSimpleStoredAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList cPtr_entityDeclarationAST::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSimpleStoredAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_entityDeclarationAST::getter_mSignatureList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringset result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mSignatureList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset cPtr_entityDeclarationAST::getter_mSignatureList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignatureList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_entityDeclarationAST::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mActionDeclarationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_entityDeclarationAST::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_entityDeclarationAST::getter_mObsoleteEntityNames (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mObsoleteEntityNames ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_entityDeclarationAST::getter_mObsoleteEntityNames (UNUSED_LOCATION_ARGS) const {
  return mProperty_mObsoleteEntityNames ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_entityDeclarationAST::getter_mIsGraphicEntity (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mIsGraphicEntity ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_entityDeclarationAST::getter_mIsGraphicEntity (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsGraphicEntity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @entityDeclarationAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_entityDeclarationAST::cPtr_entityDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                      const GALGAS_bool & in_mIsAbstract,
                                                      const GALGAS_bool & in_mIsUserDefined,
                                                      const GALGAS_lstring & in_mSuperEntityName,
                                                      const GALGAS_simpleStoredPropertyList & in_mSimpleStoredAttributeList,
                                                      const GALGAS_stringset & in_mSignatureList,
                                                      const GALGAS_lstringlist & in_mActionDeclarationList,
                                                      const GALGAS_lstringlist & in_mObsoleteEntityNames,
                                                      const GALGAS_bool & in_mIsGraphicEntity
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mIsAbstract (in_mIsAbstract),
mProperty_mIsUserDefined (in_mIsUserDefined),
mProperty_mSuperEntityName (in_mSuperEntityName),
mProperty_mSimpleStoredAttributeList (in_mSimpleStoredAttributeList),
mProperty_mSignatureList (in_mSignatureList),
mProperty_mActionDeclarationList (in_mActionDeclarationList),
mProperty_mObsoleteEntityNames (in_mObsoleteEntityNames),
mProperty_mIsGraphicEntity (in_mIsGraphicEntity) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_entityDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclarationAST ;
}

void cPtr_entityDeclarationAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@entityDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSimpleStoredAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSignatureList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mObsoleteEntityNames.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsGraphicEntity.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_entityDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_entityDeclarationAST (mProperty_mClassName, mProperty_mIsAbstract, mProperty_mIsUserDefined, mProperty_mSuperEntityName, mProperty_mSimpleStoredAttributeList, mProperty_mSignatureList, mProperty_mActionDeclarationList, mProperty_mObsoleteEntityNames, mProperty_mIsGraphicEntity COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @entityDeclarationAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityDeclarationAST ("entityDeclarationAST",
                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_entityDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_entityDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityDeclarationAST GALGAS_entityDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_entityDeclarationAST result ;
  const GALGAS_entityDeclarationAST * p = (const GALGAS_entityDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_documentDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_documentDeclarationAST * p = (const cPtr_documentDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_documentDeclarationAST) ;
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
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_documentDeclarationAST::objectCompare (const GALGAS_documentDeclarationAST & inOperand) const {
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

GALGAS_documentDeclarationAST::GALGAS_documentDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentDeclarationAST GALGAS_documentDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_documentDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_lstring::constructor_default (HERE),
                                                         GALGAS_outletDeclarationList::constructor_emptyList (HERE),
                                                         GALGAS_lstringlist::constructor_emptyList (HERE)
                                                         COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentDeclarationAST::GALGAS_documentDeclarationAST (const cPtr_documentDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_documentDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentDeclarationAST GALGAS_documentDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                              const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                              const GALGAS_outletDeclarationList & inAttribute_mOutletDeclarationList,
                                                                              const GALGAS_lstringlist & inAttribute_mActionDeclarationList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_documentDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mOutletDeclarationList.isValid () && inAttribute_mActionDeclarationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_documentDeclarationAST (inAttribute_mClassName, inAttribute_mRootEntityName, inAttribute_mOutletDeclarationList, inAttribute_mActionDeclarationList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_documentDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclarationAST * p = (const cPtr_documentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclarationAST) ;
    result = p->mProperty_mRootEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_documentDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRootEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_documentDeclarationAST::getter_mOutletDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclarationAST * p = (const cPtr_documentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclarationAST) ;
    result = p->mProperty_mOutletDeclarationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList cPtr_documentDeclarationAST::getter_mOutletDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_documentDeclarationAST::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclarationAST * p = (const cPtr_documentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclarationAST) ;
    result = p->mProperty_mActionDeclarationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_documentDeclarationAST::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @documentDeclarationAST class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_documentDeclarationAST::cPtr_documentDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                          const GALGAS_lstring & in_mRootEntityName,
                                                          const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                                          const GALGAS_lstringlist & in_mActionDeclarationList
                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mOutletDeclarationList (in_mOutletDeclarationList),
mProperty_mActionDeclarationList (in_mActionDeclarationList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_documentDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentDeclarationAST ;
}

void cPtr_documentDeclarationAST::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@documentDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutletDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_documentDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_documentDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mOutletDeclarationList, mProperty_mActionDeclarationList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @documentDeclarationAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_documentDeclarationAST ("documentDeclarationAST",
                                               & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_documentDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_documentDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_documentDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentDeclarationAST GALGAS_documentDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_documentDeclarationAST result ;
  const GALGAS_documentDeclarationAST * p = (const GALGAS_documentDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_documentDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("documentDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_documentFileGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_documentFileGeneration * p = (const cPtr_documentFileGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_documentFileGeneration) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_documentFileGeneration::objectCompare (const GALGAS_documentFileGeneration & inOperand) const {
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

GALGAS_documentFileGeneration::GALGAS_documentFileGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentFileGeneration GALGAS_documentFileGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_documentFileGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentFileGeneration::GALGAS_documentFileGeneration (const cPtr_documentFileGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_documentFileGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentFileGeneration GALGAS_documentFileGeneration::constructor_new (const GALGAS_string & inAttribute_mDocumentName,
                                                                              const GALGAS_string & inAttribute_mRootEntityName,
                                                                              const GALGAS_propertyGenerationList & inAttribute_mDocumentPropertyGenearionList,
                                                                              const GALGAS_decoratedOutletMap & inAttribute_mOutletMap,
                                                                              const GALGAS_actionBindingListForGeneration & inAttribute_mTargetActionList,
                                                                              const GALGAS_regularBindingsGenerationList & inAttribute_mRegularBindingsGenerationList,
                                                                              const GALGAS_multipleBindingGenerationList & inAttribute_multipleBindingGenerationList,
                                                                              const GALGAS_tableViewBindingGenerationList & inAttribute_mTableViewBindingGenerationList,
                                                                              const GALGAS_ebViewGraphicControllerBindingGenerationList & inAttribute_mEBViewBindingGenerationList
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_documentFileGeneration result ;
  if (inAttribute_mDocumentName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mDocumentPropertyGenearionList.isValid () && inAttribute_mOutletMap.isValid () && inAttribute_mTargetActionList.isValid () && inAttribute_mRegularBindingsGenerationList.isValid () && inAttribute_multipleBindingGenerationList.isValid () && inAttribute_mTableViewBindingGenerationList.isValid () && inAttribute_mEBViewBindingGenerationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_documentFileGeneration (inAttribute_mDocumentName, inAttribute_mRootEntityName, inAttribute_mDocumentPropertyGenearionList, inAttribute_mOutletMap, inAttribute_mTargetActionList, inAttribute_mRegularBindingsGenerationList, inAttribute_multipleBindingGenerationList, inAttribute_mTableViewBindingGenerationList, inAttribute_mEBViewBindingGenerationList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_documentFileGeneration::getter_mDocumentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentFileGeneration * p = (const cPtr_documentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentFileGeneration) ;
    result = p->mProperty_mDocumentName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_documentFileGeneration::getter_mDocumentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDocumentName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_documentFileGeneration::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentFileGeneration * p = (const cPtr_documentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentFileGeneration) ;
    result = p->mProperty_mRootEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_documentFileGeneration::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRootEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList GALGAS_documentFileGeneration::getter_mDocumentPropertyGenearionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentFileGeneration * p = (const cPtr_documentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentFileGeneration) ;
    result = p->mProperty_mDocumentPropertyGenearionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList cPtr_documentFileGeneration::getter_mDocumentPropertyGenearionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDocumentPropertyGenearionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap GALGAS_documentFileGeneration::getter_mOutletMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedOutletMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentFileGeneration * p = (const cPtr_documentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentFileGeneration) ;
    result = p->mProperty_mOutletMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap cPtr_documentFileGeneration::getter_mOutletMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_documentFileGeneration::getter_mTargetActionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentFileGeneration * p = (const cPtr_documentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentFileGeneration) ;
    result = p->mProperty_mTargetActionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration cPtr_documentFileGeneration::getter_mTargetActionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetActionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_documentFileGeneration::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentFileGeneration * p = (const cPtr_documentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentFileGeneration) ;
    result = p->mProperty_mRegularBindingsGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList cPtr_documentFileGeneration::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularBindingsGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_documentFileGeneration::getter_multipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentFileGeneration * p = (const cPtr_documentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentFileGeneration) ;
    result = p->mProperty_multipleBindingGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList cPtr_documentFileGeneration::getter_multipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_multipleBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_documentFileGeneration::getter_mTableViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentFileGeneration * p = (const cPtr_documentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentFileGeneration) ;
    result = p->mProperty_mTableViewBindingGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList cPtr_documentFileGeneration::getter_mTableViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableViewBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_documentFileGeneration::getter_mEBViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentFileGeneration * p = (const cPtr_documentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentFileGeneration) ;
    result = p->mProperty_mEBViewBindingGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList cPtr_documentFileGeneration::getter_mEBViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEBViewBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @documentFileGeneration class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_documentFileGeneration::cPtr_documentFileGeneration (const GALGAS_string & in_mDocumentName,
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_documentFileGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentFileGeneration ;
}

void cPtr_documentFileGeneration::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "[@documentFileGeneration:" ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_documentFileGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_documentFileGeneration (mProperty_mDocumentName, mProperty_mRootEntityName, mProperty_mDocumentPropertyGenearionList, mProperty_mOutletMap, mProperty_mTargetActionList, mProperty_mRegularBindingsGenerationList, mProperty_multipleBindingGenerationList, mProperty_mTableViewBindingGenerationList, mProperty_mEBViewBindingGenerationList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @documentFileGeneration type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_documentFileGeneration ("documentFileGeneration",
                                               & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_documentFileGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentFileGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_documentFileGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_documentFileGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentFileGeneration GALGAS_documentFileGeneration::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_documentFileGeneration result ;
  const GALGAS_documentFileGeneration * p = (const GALGAS_documentFileGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_documentFileGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("documentFileGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_prefsDeclarationAST::objectCompare (const GALGAS_prefsDeclarationAST & inOperand) const {
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

GALGAS_prefsDeclarationAST::GALGAS_prefsDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefsDeclarationAST GALGAS_prefsDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_prefsDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_prefDeclaration::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefsDeclarationAST::GALGAS_prefsDeclarationAST (const cPtr_prefsDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefsDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefsDeclarationAST GALGAS_prefsDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                        const GALGAS_prefDeclaration & inAttribute_mDeclaration
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_prefsDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mDeclaration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_prefsDeclarationAST (inAttribute_mClassName, inAttribute_mDeclaration COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration GALGAS_prefsDeclarationAST::getter_mDeclaration (UNUSED_LOCATION_ARGS) const {
  GALGAS_prefDeclaration result ;
  if (NULL != mObjectPtr) {
    const cPtr_prefsDeclarationAST * p = (const cPtr_prefsDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefsDeclarationAST) ;
    result = p->mProperty_mDeclaration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration cPtr_prefsDeclarationAST::getter_mDeclaration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @prefsDeclarationAST class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_prefsDeclarationAST::cPtr_prefsDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                    const GALGAS_prefDeclaration & in_mDeclaration
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mDeclaration (in_mDeclaration) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_prefsDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_prefsDeclarationAST (mProperty_mClassName, mProperty_mDeclaration COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @prefsDeclarationAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefsDeclarationAST ("prefsDeclarationAST",
                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_prefsDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_prefsDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefsDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_outletClassDeclarationAST::objectCompare (const GALGAS_outletClassDeclarationAST & inOperand) const {
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

GALGAS_outletClassDeclarationAST::GALGAS_outletClassDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassDeclarationAST::GALGAS_outletClassDeclarationAST (const cPtr_outletClassDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outletClassDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationAST::getter_mUserDefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    result = p->mProperty_mUserDefined ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_outletClassDeclarationAST::getter_mUserDefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUserDefined ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_outletClassDeclarationAST::getter_mSuperClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    result = p->mProperty_mSuperClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_outletClassDeclarationAST::getter_mSuperClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSuperClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationAST::getter_mHasRunAction (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    result = p->mProperty_mHasRunAction ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_outletClassDeclarationAST::getter_mHasRunAction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasRunAction ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationAST::getter_mHasEnabled (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    result = p->mProperty_mHasEnabled ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_outletClassDeclarationAST::getter_mHasEnabled (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasEnabled ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationAST::getter_mHandlesTableValueBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    result = p->mProperty_mHandlesTableValueBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_outletClassDeclarationAST::getter_mHandlesTableValueBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHandlesTableValueBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationAST::getter_mHandlesGraphicControllerBinding (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    result = p->mProperty_mHandlesGraphicControllerBinding ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_outletClassDeclarationAST::getter_mHandlesGraphicControllerBinding (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHandlesGraphicControllerBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_outletClassDeclarationAST::getter_mHasHidden (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    result = p->mProperty_mHasHidden ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_outletClassDeclarationAST::getter_mHasHidden (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHasHidden ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                 Pointer class for @outletClassDeclarationAST class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_outletClassDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_outletClassDeclarationAST (mProperty_mClassName, mProperty_mUserDefined, mProperty_mSuperClassName, mProperty_mHasRunAction, mProperty_mHasEnabled, mProperty_mHandlesTableValueBinding, mProperty_mHandlesGraphicControllerBinding, mProperty_mHasHidden COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @outletClassDeclarationAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassDeclarationAST ("outletClassDeclarationAST",
                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result = mProperty_mExternFunctionName.objectCompare (p->mProperty_mExternFunctionName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_transientDeclarationAST::objectCompare (const GALGAS_transientDeclarationAST & inOperand) const {
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

GALGAS_transientDeclarationAST::GALGAS_transientDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDeclarationAST GALGAS_transientDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_transientDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_observablePropertyList::constructor_emptyList (HERE),
                                                          GALGAS_lstring::constructor_default (HERE)
                                                          COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDeclarationAST::GALGAS_transientDeclarationAST (const cPtr_transientDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDeclarationAST GALGAS_transientDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                                const GALGAS_lstring & inAttribute_mTransientTypeName,
                                                                                const GALGAS_lstring & inAttribute_mTransientName,
                                                                                const GALGAS_observablePropertyList & inAttribute_mDependencyList,
                                                                                const GALGAS_lstring & inAttribute_mExternFunctionName
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_transientDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mTransientTypeName.isValid () && inAttribute_mTransientName.isValid () && inAttribute_mDependencyList.isValid () && inAttribute_mExternFunctionName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_transientDeclarationAST (inAttribute_mClassName, inAttribute_mRootEntityName, inAttribute_mTransientTypeName, inAttribute_mTransientName, inAttribute_mDependencyList, inAttribute_mExternFunctionName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_transientDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientDeclarationAST * p = (const cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    result = p->mProperty_mRootEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_transientDeclarationAST::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRootEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_transientDeclarationAST::getter_mTransientTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientDeclarationAST * p = (const cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    result = p->mProperty_mTransientTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_transientDeclarationAST::getter_mTransientTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_transientDeclarationAST::getter_mTransientName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientDeclarationAST * p = (const cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    result = p->mProperty_mTransientName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_transientDeclarationAST::getter_mTransientName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList GALGAS_transientDeclarationAST::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_observablePropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientDeclarationAST * p = (const cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    result = p->mProperty_mDependencyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList cPtr_transientDeclarationAST::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependencyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_transientDeclarationAST::getter_mExternFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientDeclarationAST * p = (const cPtr_transientDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientDeclarationAST) ;
    result = p->mProperty_mExternFunctionName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_transientDeclarationAST::getter_mExternFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternFunctionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @transientDeclarationAST class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_transientDeclarationAST::cPtr_transientDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                            const GALGAS_lstring & in_mRootEntityName,
                                                            const GALGAS_lstring & in_mTransientTypeName,
                                                            const GALGAS_lstring & in_mTransientName,
                                                            const GALGAS_observablePropertyList & in_mDependencyList,
                                                            const GALGAS_lstring & in_mExternFunctionName
                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mTransientTypeName (in_mTransientTypeName),
mProperty_mTransientName (in_mTransientName),
mProperty_mDependencyList (in_mDependencyList),
mProperty_mExternFunctionName (in_mExternFunctionName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  mProperty_mExternFunctionName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_transientDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_transientDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mTransientTypeName, mProperty_mTransientName, mProperty_mDependencyList, mProperty_mExternFunctionName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @transientDeclarationAST type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientDeclarationAST ("transientDeclarationAST",
                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transientDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transientDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

