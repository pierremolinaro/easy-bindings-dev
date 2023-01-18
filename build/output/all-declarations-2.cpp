#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@astAutoLayoutViewInstructionParameterList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_astAutoLayoutViewInstructionParameterList : public cCollectionElement {
  public: GALGAS_astAutoLayoutViewInstructionParameterList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_astAutoLayoutViewInstructionParameterList (const GALGAS_lstring & in_mParameterName,
                                                                        const GALGAS_autoLayoutClassParameterType & in_mParameterType,
                                                                        const GALGAS_astAutoLayoutViewInstructionParameterValue & in_mParameter
                                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_astAutoLayoutViewInstructionParameterList (const GALGAS_astAutoLayoutViewInstructionParameterList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_astAutoLayoutViewInstructionParameterList::cCollectionElement_astAutoLayoutViewInstructionParameterList (const GALGAS_lstring & in_mParameterName,
                                                                                                                            const GALGAS_autoLayoutClassParameterType & in_mParameterType,
                                                                                                                            const GALGAS_astAutoLayoutViewInstructionParameterValue & in_mParameter
                                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mParameterName, in_mParameterType, in_mParameter) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_astAutoLayoutViewInstructionParameterList::cCollectionElement_astAutoLayoutViewInstructionParameterList (const GALGAS_astAutoLayoutViewInstructionParameterList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mParameterName, inElement.mProperty_mParameterType, inElement.mProperty_mParameter) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_astAutoLayoutViewInstructionParameterList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_astAutoLayoutViewInstructionParameterList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_astAutoLayoutViewInstructionParameterList (mObject.mProperty_mParameterName, mObject.mProperty_mParameterType, mObject.mProperty_mParameter COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_astAutoLayoutViewInstructionParameterList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterName" ":" ;
  mObject.mProperty_mParameterName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterType" ":" ;
  mObject.mProperty_mParameterType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameter" ":" ;
  mObject.mProperty_mParameter.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_astAutoLayoutViewInstructionParameterList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_astAutoLayoutViewInstructionParameterList * operand = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList::GALGAS_astAutoLayoutViewInstructionParameterList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList::GALGAS_astAutoLayoutViewInstructionParameterList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList GALGAS_astAutoLayoutViewInstructionParameterList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_astAutoLayoutViewInstructionParameterList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList GALGAS_astAutoLayoutViewInstructionParameterList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                              const GALGAS_autoLayoutClassParameterType & inOperand1,
                                                                                                                              const GALGAS_astAutoLayoutViewInstructionParameterValue & inOperand2
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewInstructionParameterList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_astAutoLayoutViewInstructionParameterList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_astAutoLayoutViewInstructionParameterList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                  const GALGAS_lstring & in_mParameterName,
                                                                                  const GALGAS_autoLayoutClassParameterType & in_mParameterType,
                                                                                  const GALGAS_astAutoLayoutViewInstructionParameterValue & in_mParameter
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = NULL ;
  macroMyNew (p, cCollectionElement_astAutoLayoutViewInstructionParameterList (in_mParameterName,
                                                                               in_mParameterType,
                                                                               in_mParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_autoLayoutClassParameterType & inOperand1,
                                                                            const GALGAS_astAutoLayoutViewInstructionParameterValue & inOperand2
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_astAutoLayoutViewInstructionParameterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_astAutoLayoutViewInstructionParameterList::setter_append (GALGAS_astAutoLayoutViewInstructionParameterList_2D_element inElement,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_astAutoLayoutViewInstructionParameterList (inElement COMMA_THERE)) ;
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

void GALGAS_astAutoLayoutViewInstructionParameterList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                             const GALGAS_autoLayoutClassParameterType inOperand1,
                                                                             const GALGAS_astAutoLayoutViewInstructionParameterValue inOperand2,
                                                                             const GALGAS_uint inInsertionIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_astAutoLayoutViewInstructionParameterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_astAutoLayoutViewInstructionParameterList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                             GALGAS_autoLayoutClassParameterType & outOperand1,
                                                                             GALGAS_astAutoLayoutViewInstructionParameterValue & outOperand2,
                                                                             const GALGAS_uint inRemoveIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
        outOperand0 = p->mObject.mProperty_mParameterName ;
        outOperand1 = p->mObject.mProperty_mParameterType ;
        outOperand2 = p->mObject.mProperty_mParameter ;
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

void GALGAS_astAutoLayoutViewInstructionParameterList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                        GALGAS_autoLayoutClassParameterType & outOperand1,
                                                                        GALGAS_astAutoLayoutViewInstructionParameterValue & outOperand2,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterType ;
    outOperand2 = p->mObject.mProperty_mParameter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::setter_popLast (GALGAS_lstring & outOperand0,
                                                                       GALGAS_autoLayoutClassParameterType & outOperand1,
                                                                       GALGAS_astAutoLayoutViewInstructionParameterValue & outOperand2,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterType ;
    outOperand2 = p->mObject.mProperty_mParameter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::method_first (GALGAS_lstring & outOperand0,
                                                                     GALGAS_autoLayoutClassParameterType & outOperand1,
                                                                     GALGAS_astAutoLayoutViewInstructionParameterValue & outOperand2,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterType ;
    outOperand2 = p->mObject.mProperty_mParameter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::method_last (GALGAS_lstring & outOperand0,
                                                                    GALGAS_autoLayoutClassParameterType & outOperand1,
                                                                    GALGAS_astAutoLayoutViewInstructionParameterValue & outOperand2,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterType ;
    outOperand2 = p->mObject.mProperty_mParameter ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList GALGAS_astAutoLayoutViewInstructionParameterList::add_operation (const GALGAS_astAutoLayoutViewInstructionParameterList & inOperand,
                                                                                                                  C_Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutViewInstructionParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList GALGAS_astAutoLayoutViewInstructionParameterList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutViewInstructionParameterList result = GALGAS_astAutoLayoutViewInstructionParameterList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList GALGAS_astAutoLayoutViewInstructionParameterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutViewInstructionParameterList result = GALGAS_astAutoLayoutViewInstructionParameterList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList GALGAS_astAutoLayoutViewInstructionParameterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutViewInstructionParameterList result = GALGAS_astAutoLayoutViewInstructionParameterList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::plusAssign_operation (const GALGAS_astAutoLayoutViewInstructionParameterList inOperand,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::setter_setMParameterNameAtIndex (GALGAS_lstring inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameterName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astAutoLayoutViewInstructionParameterList::getter_mParameterNameAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
    result = p->mObject.mProperty_mParameterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::setter_setMParameterTypeAtIndex (GALGAS_autoLayoutClassParameterType inOperand,
                                                                                        GALGAS_uint inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameterType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType GALGAS_astAutoLayoutViewInstructionParameterList::getter_mParameterTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) attributes.ptr () ;
  GALGAS_autoLayoutClassParameterType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
    result = p->mObject.mProperty_mParameterType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::setter_setMParameterAtIndex (GALGAS_astAutoLayoutViewInstructionParameterValue inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameter = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterValue GALGAS_astAutoLayoutViewInstructionParameterList::getter_mParameterAtIndex (const GALGAS_uint & inIndex,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) attributes.ptr () ;
  GALGAS_astAutoLayoutViewInstructionParameterValue result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
    result = p->mObject.mProperty_mParameter ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_astAutoLayoutViewInstructionParameterList::cEnumerator_astAutoLayoutViewInstructionParameterList (const GALGAS_astAutoLayoutViewInstructionParameterList & inEnumeratedObject,
                                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList_2D_element cEnumerator_astAutoLayoutViewInstructionParameterList::current (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (const cCollectionElement_astAutoLayoutViewInstructionParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_astAutoLayoutViewInstructionParameterList::current_mParameterName (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (const cCollectionElement_astAutoLayoutViewInstructionParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
  return p->mObject.mProperty_mParameterName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType cEnumerator_astAutoLayoutViewInstructionParameterList::current_mParameterType (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (const cCollectionElement_astAutoLayoutViewInstructionParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
  return p->mObject.mProperty_mParameterType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterValue cEnumerator_astAutoLayoutViewInstructionParameterList::current_mParameter (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (const cCollectionElement_astAutoLayoutViewInstructionParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
  return p->mObject.mProperty_mParameter ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@astAutoLayoutViewInstructionParameterList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterList ("astAutoLayoutViewInstructionParameterList",
                                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAutoLayoutViewInstructionParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAutoLayoutViewInstructionParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAutoLayoutViewInstructionParameterList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList GALGAS_astAutoLayoutViewInstructionParameterList::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewInstructionParameterList result ;
  const GALGAS_astAutoLayoutViewInstructionParameterList * p = (const GALGAS_astAutoLayoutViewInstructionParameterList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astAutoLayoutViewInstructionParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewInstructionParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_tableValueBinding_tableValueBinding::cEnumAssociatedValues_tableValueBinding_tableValueBinding (const GALGAS_lstring inAssociatedValue0
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_tableValueBinding_tableValueBinding::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_tableValueBinding_tableValueBinding::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_tableValueBinding_tableValueBinding * ptr = dynamic_cast<const cEnumAssociatedValues_tableValueBinding_tableValueBinding *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableValueBinding::GALGAS_tableValueBinding (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableValueBinding GALGAS_tableValueBinding::constructor_noTableValueBinding (UNUSED_LOCATION_ARGS) {
  GALGAS_tableValueBinding result ;
  result.mEnum = kEnum_noTableValueBinding ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_tableValueBinding::optional_noTableValueBinding () const {
  const bool ok = mEnum == kEnum_noTableValueBinding ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_tableValueBinding::optional_tableValueBinding (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_tableValueBinding ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_tableValueBinding_tableValueBinding *) unsafePointer () ;
    // const cEnumAssociatedValues_tableValueBinding_tableValueBinding * ptr = (const cEnumAssociatedValues_tableValueBinding_tableValueBinding *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_tableValueBinding [3] = {
  "(not built)",
  "noTableValueBinding",
  "tableValueBinding"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_tableValueBinding::getter_isNoTableValueBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noTableValueBinding == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_tableValueBinding::getter_isTableValueBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_tableValueBinding == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableValueBinding::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<enum @tableValueBinding: " << gEnumNameArrayFor_tableValueBinding [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@tableValueBinding type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableValueBinding ("tableValueBinding",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableValueBinding::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableValueBinding ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableValueBinding::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableValueBinding (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_runActionDescriptor_action::cEnumAssociatedValues_runActionDescriptor_action (const GALGAS_lstring inAssociatedValue0,
                                                                                                    const GALGAS_lstring inAssociatedValue1
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_runActionDescriptor_action::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_runActionDescriptor::GALGAS_runActionDescriptor (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_runActionDescriptor GALGAS_runActionDescriptor::constructor_noAction (UNUSED_LOCATION_ARGS) {
  GALGAS_runActionDescriptor result ;
  result.mEnum = kEnum_noAction ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_runActionDescriptor::optional_noAction () const {
  const bool ok = mEnum == kEnum_noAction ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_runActionDescriptor::optional_action (GALGAS_lstring & outAssociatedValue0,
                                                  GALGAS_lstring & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_action ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_runActionDescriptor_action *) unsafePointer () ;
    // const cEnumAssociatedValues_runActionDescriptor_action * ptr = (const cEnumAssociatedValues_runActionDescriptor_action *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_runActionDescriptor [3] = {
  "(not built)",
  "noAction",
  "action"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_runActionDescriptor::getter_isNoAction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noAction == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_runActionDescriptor::getter_isAction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_action == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_runActionDescriptor::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<enum @runActionDescriptor: " << gEnumNameArrayFor_runActionDescriptor [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@runActionDescriptor type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_runActionDescriptor ("runActionDescriptor",
                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_runActionDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_runActionDescriptor ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_runActionDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_runActionDescriptor (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_multipleBindingDescriptor_binding::cEnumAssociatedValues_multipleBindingDescriptor_binding (const GALGAS_abstractBooleanMultipleBindingExpressionAST inAssociatedValue0
                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_multipleBindingDescriptor_binding::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_multipleBindingDescriptor_binding::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_multipleBindingDescriptor_binding * ptr = dynamic_cast<const cEnumAssociatedValues_multipleBindingDescriptor_binding *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor::GALGAS_multipleBindingDescriptor (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor GALGAS_multipleBindingDescriptor::constructor_noBinding (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingDescriptor result ;
  result.mEnum = kEnum_noBinding ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingDescriptor::optional_noBinding () const {
  const bool ok = mEnum == kEnum_noBinding ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingDescriptor::optional_binding (GALGAS_abstractBooleanMultipleBindingExpressionAST & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_binding ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) unsafePointer () ;
    // const cEnumAssociatedValues_multipleBindingDescriptor_binding * ptr = (const cEnumAssociatedValues_multipleBindingDescriptor_binding *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_multipleBindingDescriptor [3] = {
  "(not built)",
  "noBinding",
  "binding"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_multipleBindingDescriptor::getter_isNoBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noBinding == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_multipleBindingDescriptor::getter_isBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_binding == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingDescriptor::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<enum @multipleBindingDescriptor: " << gEnumNameArrayFor_multipleBindingDescriptor [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@multipleBindingDescriptor type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleBindingDescriptor ("multipleBindingDescriptor",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_multipleBindingDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingDescriptor ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_multipleBindingDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingDescriptor (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_graphicController_defined::cEnumAssociatedValues_graphicController_defined (const GALGAS_lstring inAssociatedValue0,
                                                                                                  const GALGAS_lstring inAssociatedValue1
                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_graphicController_defined::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_graphicController_defined::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_graphicController_defined * ptr = dynamic_cast<const cEnumAssociatedValues_graphicController_defined *> (inOperand) ;
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

GALGAS_graphicController::GALGAS_graphicController (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphicController GALGAS_graphicController::constructor_none (UNUSED_LOCATION_ARGS) {
  GALGAS_graphicController result ;
  result.mEnum = kEnum_none ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphicController GALGAS_graphicController::constructor_defined (const GALGAS_lstring & inAssociatedValue0,
                                                                        const GALGAS_lstring & inAssociatedValue1
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_graphicController result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_defined ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_graphicController_defined (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphicController::method_defined (GALGAS_lstring & outAssociatedValue0,
                                               GALGAS_lstring & outAssociatedValue1,
                                               C_Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_defined) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @graphicController defined invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_graphicController_defined * ptr = (const cEnumAssociatedValues_graphicController_defined *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_graphicController::optional_none () const {
  const bool ok = mEnum == kEnum_none ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_graphicController::optional_defined (GALGAS_lstring & outAssociatedValue0,
                                                 GALGAS_lstring & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_defined ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_graphicController_defined *) unsafePointer () ;
    // const cEnumAssociatedValues_graphicController_defined * ptr = (const cEnumAssociatedValues_graphicController_defined *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_graphicController [3] = {
  "(not built)",
  "none",
  "defined"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_graphicController::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_none == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_graphicController::getter_isDefined (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_defined == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_graphicController::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<enum @graphicController: " << gEnumNameArrayFor_graphicController [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_graphicController::objectCompare (const GALGAS_graphicController & inOperand) const {
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
//@graphicController type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_graphicController ("graphicController",
                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_graphicController::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphicController ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_graphicController::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphicController (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphicController GALGAS_graphicController::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_graphicController result ;
  const GALGAS_graphicController * p = (const GALGAS_graphicController *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_graphicController *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphicController", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@regularBindingList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_regularBindingList : public cCollectionElement {
  public: GALGAS_regularBindingList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_regularBindingList (const GALGAS_lstring & in_mBindingName,
                                                 const GALGAS_observablePropertyList & in_mObservablePropertyList,
                                                 const GALGAS_bindingOptionList & in_mBindingOptionList
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_regularBindingList (const GALGAS_regularBindingList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_regularBindingList::cCollectionElement_regularBindingList (const GALGAS_lstring & in_mBindingName,
                                                                              const GALGAS_observablePropertyList & in_mObservablePropertyList,
                                                                              const GALGAS_bindingOptionList & in_mBindingOptionList
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBindingName, in_mObservablePropertyList, in_mBindingOptionList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_regularBindingList::cCollectionElement_regularBindingList (const GALGAS_regularBindingList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mBindingName, inElement.mProperty_mObservablePropertyList, inElement.mProperty_mBindingOptionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_regularBindingList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_regularBindingList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_regularBindingList (mObject.mProperty_mBindingName, mObject.mProperty_mObservablePropertyList, mObject.mProperty_mBindingOptionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_regularBindingList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBindingName" ":" ;
  mObject.mProperty_mBindingName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObservablePropertyList" ":" ;
  mObject.mProperty_mObservablePropertyList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBindingOptionList" ":" ;
  mObject.mProperty_mBindingOptionList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_regularBindingList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_regularBindingList * operand = (cCollectionElement_regularBindingList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_regularBindingList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingList::GALGAS_regularBindingList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingList::GALGAS_regularBindingList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingList GALGAS_regularBindingList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_regularBindingList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingList GALGAS_regularBindingList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                const GALGAS_observablePropertyList & inOperand1,
                                                                                const GALGAS_bindingOptionList & inOperand2
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_regularBindingList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_regularBindingList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_regularBindingList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_lstring & in_mBindingName,
                                                           const GALGAS_observablePropertyList & in_mObservablePropertyList,
                                                           const GALGAS_bindingOptionList & in_mBindingOptionList
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_regularBindingList * p = NULL ;
  macroMyNew (p, cCollectionElement_regularBindingList (in_mBindingName,
                                                        in_mObservablePropertyList,
                                                        in_mBindingOptionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                     const GALGAS_observablePropertyList & inOperand1,
                                                     const GALGAS_bindingOptionList & inOperand2
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_regularBindingList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_regularBindingList::setter_append (GALGAS_regularBindingList_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_regularBindingList (inElement COMMA_THERE)) ;
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

void GALGAS_regularBindingList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                      const GALGAS_observablePropertyList inOperand1,
                                                      const GALGAS_bindingOptionList inOperand2,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_regularBindingList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_regularBindingList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                      GALGAS_observablePropertyList & outOperand1,
                                                      GALGAS_bindingOptionList & outOperand2,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
        outOperand0 = p->mObject.mProperty_mBindingName ;
        outOperand1 = p->mObject.mProperty_mObservablePropertyList ;
        outOperand2 = p->mObject.mProperty_mBindingOptionList ;
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

void GALGAS_regularBindingList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                 GALGAS_observablePropertyList & outOperand1,
                                                 GALGAS_bindingOptionList & outOperand2,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
    outOperand0 = p->mObject.mProperty_mBindingName ;
    outOperand1 = p->mObject.mProperty_mObservablePropertyList ;
    outOperand2 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::setter_popLast (GALGAS_lstring & outOperand0,
                                                GALGAS_observablePropertyList & outOperand1,
                                                GALGAS_bindingOptionList & outOperand2,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
    outOperand0 = p->mObject.mProperty_mBindingName ;
    outOperand1 = p->mObject.mProperty_mObservablePropertyList ;
    outOperand2 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::method_first (GALGAS_lstring & outOperand0,
                                              GALGAS_observablePropertyList & outOperand1,
                                              GALGAS_bindingOptionList & outOperand2,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
    outOperand0 = p->mObject.mProperty_mBindingName ;
    outOperand1 = p->mObject.mProperty_mObservablePropertyList ;
    outOperand2 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::method_last (GALGAS_lstring & outOperand0,
                                             GALGAS_observablePropertyList & outOperand1,
                                             GALGAS_bindingOptionList & outOperand2,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
    outOperand0 = p->mObject.mProperty_mBindingName ;
    outOperand1 = p->mObject.mProperty_mObservablePropertyList ;
    outOperand2 = p->mObject.mProperty_mBindingOptionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingList GALGAS_regularBindingList::add_operation (const GALGAS_regularBindingList & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_regularBindingList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingList GALGAS_regularBindingList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingList result = GALGAS_regularBindingList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingList GALGAS_regularBindingList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingList result = GALGAS_regularBindingList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingList GALGAS_regularBindingList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingList result = GALGAS_regularBindingList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::plusAssign_operation (const GALGAS_regularBindingList inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::setter_setMBindingNameAtIndex (GALGAS_lstring inOperand,
                                                               GALGAS_uint inIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBindingName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_regularBindingList::getter_mBindingNameAtIndex (const GALGAS_uint & inIndex,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
    result = p->mObject.mProperty_mBindingName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::setter_setMObservablePropertyListAtIndex (GALGAS_observablePropertyList inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mObservablePropertyList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList GALGAS_regularBindingList::getter_mObservablePropertyListAtIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
  GALGAS_observablePropertyList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
    result = p->mObject.mProperty_mObservablePropertyList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::setter_setMBindingOptionListAtIndex (GALGAS_bindingOptionList inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBindingOptionList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bindingOptionList GALGAS_regularBindingList::getter_mBindingOptionListAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingList * p = (cCollectionElement_regularBindingList *) attributes.ptr () ;
  GALGAS_bindingOptionList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
    result = p->mObject.mProperty_mBindingOptionList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_regularBindingList::cEnumerator_regularBindingList (const GALGAS_regularBindingList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingList_2D_element cEnumerator_regularBindingList::current (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingList * p = (const cCollectionElement_regularBindingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_regularBindingList::current_mBindingName (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingList * p = (const cCollectionElement_regularBindingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
  return p->mObject.mProperty_mBindingName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList cEnumerator_regularBindingList::current_mObservablePropertyList (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingList * p = (const cCollectionElement_regularBindingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
  return p->mObject.mProperty_mObservablePropertyList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bindingOptionList cEnumerator_regularBindingList::current_mBindingOptionList (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingList * p = (const cCollectionElement_regularBindingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
  return p->mObject.mProperty_mBindingOptionList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@regularBindingList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_regularBindingList ("regularBindingList",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_regularBindingList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_regularBindingList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularBindingList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingList GALGAS_regularBindingList::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_regularBindingList result ;
  const GALGAS_regularBindingList * p = (const GALGAS_regularBindingList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_regularBindingList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularBindingList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_astComputedViewInstruction_2D_weak::objectCompare (const GALGAS_astComputedViewInstruction_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction_2D_weak::GALGAS_astComputedViewInstruction_2D_weak (void) :
GALGAS_astAbstractViewInstructionDeclaration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction_2D_weak & GALGAS_astComputedViewInstruction_2D_weak::operator = (const GALGAS_astComputedViewInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction_2D_weak::GALGAS_astComputedViewInstruction_2D_weak (const GALGAS_astComputedViewInstruction & inSource) :
GALGAS_astAbstractViewInstructionDeclaration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction_2D_weak GALGAS_astComputedViewInstruction_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_astComputedViewInstruction_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction GALGAS_astComputedViewInstruction_2D_weak::bang_astComputedViewInstruction_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_astComputedViewInstruction result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string::cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string (const GALGAS_string inAssociatedValue0
                                                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string::description (C_String & ioString,
                                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string * ptr = dynamic_cast<const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem::cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem (const GALGAS_string inAssociatedValue0,
                                                                                                                                                      const GALGAS_runActionDescriptor inAssociatedValue1,
                                                                                                                                                      const GALGAS_multipleBindingDescriptor inAssociatedValue2
                                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem::description (C_String & ioString,
                                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem * ptr = dynamic_cast<const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem *> (inOperand) ;
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

cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc::cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc (const GALGAS_lstring inAssociatedValue0,
                                                                                                                                                      const GALGAS_lstring inAssociatedValue1
                                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc::description (C_String & ioString,
                                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc * ptr = dynamic_cast<const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc *> (inOperand) ;
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

cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc::cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc (const GALGAS_astAbstractViewInstructionDeclaration inAssociatedValue0
                                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc::description (C_String & ioString,
                                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc * ptr = dynamic_cast<const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity::cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity (const GALGAS_lstring inAssociatedValue0
                                                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity::description (C_String & ioString,
                                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity * ptr = dynamic_cast<const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterValue::GALGAS_astAutoLayoutViewInstructionParameterValue (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterValue GALGAS_astAutoLayoutViewInstructionParameterValue::constructor_string (const GALGAS_string & inAssociatedValue0
                                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewInstructionParameterValue result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_string ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterValue GALGAS_astAutoLayoutViewInstructionParameterValue::constructor_menuItem (const GALGAS_string & inAssociatedValue0,
                                                                                                                           const GALGAS_runActionDescriptor & inAssociatedValue1,
                                                                                                                           const GALGAS_multipleBindingDescriptor & inAssociatedValue2
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewInstructionParameterValue result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_menuItem ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterValue GALGAS_astAutoLayoutViewInstructionParameterValue::constructor_enumFunc (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                           const GALGAS_lstring & inAssociatedValue1
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewInstructionParameterValue result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_enumFunc ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterValue GALGAS_astAutoLayoutViewInstructionParameterValue::constructor_viewFunc (const GALGAS_astAbstractViewInstructionDeclaration & inAssociatedValue0
                                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewInstructionParameterValue result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_viewFunc ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterValue GALGAS_astAutoLayoutViewInstructionParameterValue::constructor_entity (const GALGAS_lstring & inAssociatedValue0
                                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewInstructionParameterValue result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_entity ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterValue::method_string (GALGAS_string & outAssociatedValue0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_string) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @astAutoLayoutViewInstructionParameterValue string invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterValue::method_menuItem (GALGAS_string & outAssociatedValue0,
                                                                         GALGAS_runActionDescriptor & outAssociatedValue1,
                                                                         GALGAS_multipleBindingDescriptor & outAssociatedValue2,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_menuItem) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @astAutoLayoutViewInstructionParameterValue menuItem invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterValue::method_enumFunc (GALGAS_lstring & outAssociatedValue0,
                                                                         GALGAS_lstring & outAssociatedValue1,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_enumFunc) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @astAutoLayoutViewInstructionParameterValue enumFunc invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterValue::method_viewFunc (GALGAS_astAbstractViewInstructionDeclaration & outAssociatedValue0,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_viewFunc) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @astAutoLayoutViewInstructionParameterValue viewFunc invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterValue::method_entity (GALGAS_lstring & outAssociatedValue0,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_entity) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @astAutoLayoutViewInstructionParameterValue entity invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_astAutoLayoutViewInstructionParameterValue::optional_string (GALGAS_string & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_string ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string *) unsafePointer () ;
    // const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_astAutoLayoutViewInstructionParameterValue::optional_menuItem (GALGAS_string & outAssociatedValue0,
                                                                           GALGAS_runActionDescriptor & outAssociatedValue1,
                                                                           GALGAS_multipleBindingDescriptor & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_menuItem ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem *) unsafePointer () ;
    // const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_astAutoLayoutViewInstructionParameterValue::optional_enumFunc (GALGAS_lstring & outAssociatedValue0,
                                                                           GALGAS_lstring & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_enumFunc ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc *) unsafePointer () ;
    // const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_astAutoLayoutViewInstructionParameterValue::optional_viewFunc (GALGAS_astAbstractViewInstructionDeclaration & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_viewFunc ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc *) unsafePointer () ;
    // const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_astAutoLayoutViewInstructionParameterValue::optional_entity (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_entity ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity *) unsafePointer () ;
    // const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity * ptr = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_astAutoLayoutViewInstructionParameterValue [6] = {
  "(not built)",
  "string",
  "menuItem",
  "enumFunc",
  "viewFunc",
  "entity"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_astAutoLayoutViewInstructionParameterValue::getter_isString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_string == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_astAutoLayoutViewInstructionParameterValue::getter_isMenuItem (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_menuItem == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_astAutoLayoutViewInstructionParameterValue::getter_isEnumFunc (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_enumFunc == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_astAutoLayoutViewInstructionParameterValue::getter_isViewFunc (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_viewFunc == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_astAutoLayoutViewInstructionParameterValue::getter_isEntity (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_entity == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterValue::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<enum @astAutoLayoutViewInstructionParameterValue: " << gEnumNameArrayFor_astAutoLayoutViewInstructionParameterValue [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_astAutoLayoutViewInstructionParameterValue::objectCompare (const GALGAS_astAutoLayoutViewInstructionParameterValue & inOperand) const {
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
//@astAutoLayoutViewInstructionParameterValue type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue ("astAutoLayoutViewInstructionParameterValue",
                                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAutoLayoutViewInstructionParameterValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAutoLayoutViewInstructionParameterValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAutoLayoutViewInstructionParameterValue (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterValue GALGAS_astAutoLayoutViewInstructionParameterValue::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewInstructionParameterValue result ;
  const GALGAS_astAutoLayoutViewInstructionParameterValue * p = (const GALGAS_astAutoLayoutViewInstructionParameterValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astAutoLayoutViewInstructionParameterValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewInstructionParameterValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_autoLayoutViewDeclarationMap::cMapElement_autoLayoutViewDeclarationMap (const GALGAS_lstring & inKey
                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_autoLayoutViewDeclarationMap::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_autoLayoutViewDeclarationMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_autoLayoutViewDeclarationMap (mProperty_lkey COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_autoLayoutViewDeclarationMap::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_autoLayoutViewDeclarationMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_autoLayoutViewDeclarationMap * operand = (cMapElement_autoLayoutViewDeclarationMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewDeclarationMap::GALGAS_autoLayoutViewDeclarationMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewDeclarationMap::GALGAS_autoLayoutViewDeclarationMap (const GALGAS_autoLayoutViewDeclarationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewDeclarationMap & GALGAS_autoLayoutViewDeclarationMap::operator = (const GALGAS_autoLayoutViewDeclarationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewDeclarationMap GALGAS_autoLayoutViewDeclarationMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_autoLayoutViewDeclarationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewDeclarationMap GALGAS_autoLayoutViewDeclarationMap::constructor_mapWithMapToOverride (const GALGAS_autoLayoutViewDeclarationMap & inMapToOverride
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewDeclarationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewDeclarationMap GALGAS_autoLayoutViewDeclarationMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewDeclarationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewDeclarationMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_autoLayoutViewDeclarationMap * p = NULL ;
  macroMyNew (p, cMapElement_autoLayoutViewDeclarationMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@autoLayoutViewDeclarationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewDeclarationMap::setter_insertKey (GALGAS_lstring inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_autoLayoutViewDeclarationMap * p = NULL ;
  macroMyNew (p, cMapElement_autoLayoutViewDeclarationMap (inKey COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' view is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_autoLayoutViewDeclarationMap_searchKey = "there is no '%K' view" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewDeclarationMap::method_searchKey (GALGAS_lstring inKey,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_autoLayoutViewDeclarationMap * p = (const cMapElement_autoLayoutViewDeclarationMap *) performSearch (inKey,
                                                                                                                         inCompiler,
                                                                                                                         kSearchErrorMessage_autoLayoutViewDeclarationMap_searchKey
                                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
  }else{
    macroValidSharedObject (p, cMapElement_autoLayoutViewDeclarationMap) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_autoLayoutViewDeclarationMap * GALGAS_autoLayoutViewDeclarationMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                   const GALGAS_string & inKey
                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_autoLayoutViewDeclarationMap * result = (cMapElement_autoLayoutViewDeclarationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_autoLayoutViewDeclarationMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutViewDeclarationMap::cEnumerator_autoLayoutViewDeclarationMap (const GALGAS_autoLayoutViewDeclarationMap & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewDeclarationMap_2D_element cEnumerator_autoLayoutViewDeclarationMap::current (LOCATION_ARGS) const {
  const cMapElement_autoLayoutViewDeclarationMap * p = (const cMapElement_autoLayoutViewDeclarationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autoLayoutViewDeclarationMap) ;
  return GALGAS_autoLayoutViewDeclarationMap_2D_element (p->mProperty_lkey) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autoLayoutViewDeclarationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutViewDeclarationMap::optional_searchKey (const GALGAS_string & inKey) const {
  const cMapElement_autoLayoutViewDeclarationMap * p = (const cMapElement_autoLayoutViewDeclarationMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_autoLayoutViewDeclarationMap) ;
  }else{
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutViewDeclarationMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutViewDeclarationMap ("autoLayoutViewDeclarationMap",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewDeclarationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewDeclarationMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewDeclarationMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewDeclarationMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewDeclarationMap GALGAS_autoLayoutViewDeclarationMap::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewDeclarationMap result ;
  const GALGAS_autoLayoutViewDeclarationMap * p = (const GALGAS_autoLayoutViewDeclarationMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutViewDeclarationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewDeclarationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @abstractViewInstructionGeneration reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractViewInstructionGeneration::objectCompare (const GALGAS_abstractViewInstructionGeneration & inOperand) const {
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

GALGAS_abstractViewInstructionGeneration::GALGAS_abstractViewInstructionGeneration (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewInstructionGeneration::GALGAS_abstractViewInstructionGeneration (const cPtr_abstractViewInstructionGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractViewInstructionGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractViewInstructionGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractViewInstructionGeneration::cPtr_abstractViewInstructionGeneration (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
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
//
//Abstract extension method '@astAbstractViewDeclaration checkView'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_checkView (cPtr_astAbstractViewDeclaration * inObject,
                                    const GALGAS_string constin_inViewName,
                                    const GALGAS_autoLayoutViewDeclarationMap constin_inViewDeclarationMap,
                                    const GALGAS_bool constin_inPreferences,
                                    const GALGAS_propertyMap constin_inRootObservablePropertyMap,
                                    const GALGAS_propertyMap constin_inPreferencesPropertyMap,
                                    const GALGAS_semanticContext constin_inSemanticContext,
                                    const GALGAS_propertyMap constin_inObservablePropertyMap,
                                    const GALGAS_actionMap constin_inActionMap,
                                    const GALGAS_string constin_inReceiverSwiftTypeName,
                                    const GALGAS_classMap constin_inClassMap,
                                    GALGAS_implicitViewFunctionGenerationList & io_ioImplicitViewFunctionGenerationList,
                                    GALGAS_autoLayoutConfiguratorMap & io_ioConfiguratorMap,
                                    GALGAS_autoLayoutOutletMap & io_ioOutletMap,
                                    GALGAS_abstractViewGeneration & out_outGeneration,
                                    C_Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outGeneration.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_astAbstractViewDeclaration) ;
    inObject->method_checkView (constin_inViewName, constin_inViewDeclarationMap, constin_inPreferences, constin_inRootObservablePropertyMap, constin_inPreferencesPropertyMap, constin_inSemanticContext, constin_inObservablePropertyMap, constin_inActionMap, constin_inReceiverSwiftTypeName, constin_inClassMap, io_ioImplicitViewFunctionGenerationList, io_ioConfiguratorMap, io_ioOutletMap, out_outGeneration, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@astAutoLayoutViewFunctionCallList checkViewFunctionCallList'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_checkViewFunctionCallList (const GALGAS_astAutoLayoutViewFunctionCallList inObject,
                                                const GALGAS_astAutoLayoutViewFunctionMap constinArgument_inFunctionMap,
                                                const GALGAS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                const GALGAS_bool constinArgument_inPreferences,
                                                const GALGAS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                const GALGAS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                const GALGAS_propertyMap constinArgument_inObservablePropertyMap,
                                                const GALGAS_actionMap constinArgument_inActionMap,
                                                const GALGAS_string constinArgument_inReceiverSwiftTypeName,
                                                const GALGAS_classMap constinArgument_inClassMap,
                                                GALGAS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                GALGAS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                GALGAS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                GALGAS_autoLayoutViewInstructionGenerationFuncCallList & outArgument_outFuncCallList,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFuncCallList.drop () ; // Release 'out' argument
  outArgument_outFuncCallList = GALGAS_autoLayoutViewInstructionGenerationFuncCallList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 571)) ;
  const GALGAS_astAutoLayoutViewFunctionCallList temp_0 = inObject ;
  cEnumerator_astAutoLayoutViewFunctionCallList enumerator_23504 (temp_0, kENUMERATION_UP) ;
  while (enumerator_23504.hasCurrentObject ()) {
    GALGAS_string var_mangleName_23535 = enumerator_23504.current_mFunctionName (HERE).readProperty_string ().add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 573)) ;
    cEnumerator_astAutoLayoutViewInstructionParameterList enumerator_23589 (enumerator_23504.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_23589.hasCurrentObject ()) {
      var_mangleName_23535.plusAssign_operation(enumerator_23589.current_mParameterName (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 575)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 575)) ;
      enumerator_23589.gotoNextObject () ;
    }
    var_mangleName_23535.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 577)) ;
    GALGAS_autoLayoutClassParameterList var_formalParameterList_23790 ;
    constinArgument_inFunctionMap.method_searchKey (GALGAS_lstring::constructor_new (var_mangleName_23535, enumerator_23504.current_mFunctionName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 578)), var_formalParameterList_23790, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 578)) ;
    GALGAS_autoLayoutViewInstructionGenerationParameterList var_parameterList_23863 = GALGAS_autoLayoutViewInstructionGenerationParameterList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 579)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsNotEqual, var_formalParameterList_23790.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 580)).objectCompare (enumerator_23504.current_mParameterList (HERE).getter_length (SOURCE_FILE ("auto-layout-view.ggs", 580)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_23504.current_mFunctionName (HERE).readProperty_location (), var_formalParameterList_23790.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 582)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 582)).add_operation (GALGAS_string (" parameter(s) required, "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 582)).add_operation (enumerator_23504.current_mParameterList (HERE).getter_length (SOURCE_FILE ("auto-layout-view.ggs", 582)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 582)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 582)).add_operation (GALGAS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 582)), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 581)) ;
      }
    }
    if (kBoolFalse == test_1) {
      cEnumerator_astAutoLayoutViewInstructionParameterList enumerator_24123 (enumerator_23504.current_mParameterList (HERE), kENUMERATION_UP) ;
      cEnumerator_autoLayoutClassParameterList enumerator_24171 (var_formalParameterList_23790, kENUMERATION_UP) ;
      while (enumerator_24123.hasCurrentObject () && enumerator_24171.hasCurrentObject ()) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          GALGAS_lstring var_enumTypeName_24258 ;
          const bool optionalResult24234 = enumerator_24171.current_mParameterType (HERE).optional_typeEnum (var_enumTypeName_24258) ;
          if (!optionalResult24234) {
            test_3 = kBoolFalse ;
          }
          if (kBoolTrue == test_3) {
            GALGAS_lstring var_constantName_24303 ;
            const bool optionalResult24279 = enumerator_24123.current_mParameterType (HERE).optional_typeEnum (var_constantName_24303) ;
            if (!optionalResult24279) {
              test_3 = kBoolFalse ;
            }
            if (kBoolTrue == test_3) {
              GALGAS_classKind var_typeKind_24369 ;
              GALGAS_propertyMap joker_24371_3 ; // Joker input parameter
              GALGAS_actionMap joker_24371_2 ; // Joker input parameter
              GALGAS_propertyGenerationList joker_24371_1 ; // Joker input parameter
              constinArgument_inClassMap.method_searchKey (var_enumTypeName_24258, var_typeKind_24369, joker_24371_3, joker_24371_2, joker_24371_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 586)) ;
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                GALGAS_typeKind var_classKind_24429 ;
                const bool optionalResult24408 = var_typeKind_24369.optional_atomic (var_classKind_24429) ;
                if (!optionalResult24408) {
                  test_4 = kBoolFalse ;
                }
                if (kBoolTrue == test_4) {
                  GALGAS_string var_unused_0_24459 ;
                  GALGAS_enumConstantMap var_constantMap_24489 ;
                  GALGAS_enumFuncMap var_unused_0_24493 ;
                  const bool optionalResult24455 = var_classKind_24429.optional_enumType (var_unused_0_24459, var_constantMap_24489, var_unused_0_24493) ;
                  if (!optionalResult24455) {
                    test_4 = kBoolFalse ;
                  }
                  if (kBoolTrue == test_4) {
                    GALGAS_uint joker_24550 ; // Joker input parameter
                    var_constantMap_24489.method_searchKey (var_constantName_24303, joker_24550, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 588)) ;
                  }
                }
              }
              if (kBoolFalse == test_4) {
                TC_Array <C_FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (var_enumTypeName_24258.readProperty_location (), GALGAS_string ("this type name is not an enum"), fixItArray5  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 590)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsNotEqual, enumerator_24123.current_mParameterType (HERE).objectCompare (enumerator_24171.current_mParameterType (HERE))).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_24123.current_mParameterName (HERE).readProperty_location (), GALGAS_string ("the formal parameter requires ").add_operation (extensionGetter_string (enumerator_24171.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 593)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 593)).add_operation (GALGAS_string (", actual parameter is "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 593)).add_operation (extensionGetter_string (enumerator_24123.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 593)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 593)), fixItArray7  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 593)) ;
            }
          }
        }
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (kIsNotEqual, enumerator_24123.current_mParameterName (HERE).readProperty_string ().objectCompare (enumerator_24171.current_mParameterName (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_24123.current_mParameterName (HERE).readProperty_location (), GALGAS_string ("the parameter name should be '").add_operation (enumerator_24171.current_mParameterName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 596)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 596)), fixItArray9  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 596)) ;
          }
        }
        switch (enumerator_24123.current_mParameter (HERE).enumValue ()) {
        case GALGAS_astAutoLayoutViewInstructionParameterValue::kNotBuilt:
          break ;
        case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_viewFunc:
          {
            const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc * extractPtr_25710 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_viewFunc *) (enumerator_24123.current_mParameter (HERE).unsafePointer ()) ;
            const GALGAS_astAbstractViewInstructionDeclaration extractedValue_24991_instruction = extractPtr_25710->mAssociatedValue0 ;
            GALGAS_abstractViewInstructionGeneration var_viewInstruction_25513 ;
            callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) extractedValue_24991_instruction.ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_viewInstruction_25513, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 600)) ;
            var_parameterList_23863.addAssign_operation (enumerator_24123.current_mParameterName (HERE).readProperty_string (), GALGAS_string ("self.computeImplicitView_").add_operation (ioArgument_ioImplicitViewFunctionGenerationList.getter_length (SOURCE_FILE ("auto-layout-view.ggs", 615)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 615)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 615)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 615))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 615)) ;
            ioArgument_ioImplicitViewFunctionGenerationList.addAssign_operation (var_viewInstruction_25513  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 616)) ;
          }
          break ;
        case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_string:
          {
            const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string * extractPtr_25792 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_string *) (enumerator_24123.current_mParameter (HERE).unsafePointer ()) ;
            const GALGAS_string extractedValue_25743_stringValue = extractPtr_25792->mAssociatedValue0 ;
            var_parameterList_23863.addAssign_operation (enumerator_24123.current_mParameterName (HERE).readProperty_string (), extractedValue_25743_stringValue  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 618)) ;
          }
          break ;
        case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_entity:
          {
            const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity * extractPtr_26069 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_entity *) (enumerator_24123.current_mParameter (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_25824_entityName = extractPtr_26069->mAssociatedValue0 ;
            GALGAS_classKind var_classKind_25886 ;
            GALGAS_propertyMap joker_25888_3 ; // Joker input parameter
            GALGAS_actionMap joker_25888_2 ; // Joker input parameter
            GALGAS_propertyGenerationList joker_25888_1 ; // Joker input parameter
            constinArgument_inClassMap.method_searchKey (extractedValue_25824_entityName, var_classKind_25886, joker_25888_3, joker_25888_2, joker_25888_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 620)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = var_classKind_25886.getter_isEntity (SOURCE_FILE ("auto-layout-view.ggs", 621)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 621)).boolEnum () ;
              if (kBoolTrue == test_10) {
                TC_Array <C_FixItDescription> fixItArray11 ;
                inCompiler->emitSemanticError (extractedValue_25824_entityName.readProperty_location (), GALGAS_string ("an entity is required here"), fixItArray11  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 622)) ;
              }
            }
            var_parameterList_23863.addAssign_operation (enumerator_24123.current_mParameterName (HERE).readProperty_string (), extractedValue_25824_entityName.readProperty_string ().add_operation (GALGAS_string (".self"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 624))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 624)) ;
          }
          break ;
        case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_menuItem:
          {
            const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem * extractPtr_27484 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_menuItem *) (enumerator_24123.current_mParameter (HERE).unsafePointer ()) ;
            const GALGAS_string extractedValue_26098_title = extractPtr_27484->mAssociatedValue0 ;
            const GALGAS_runActionDescriptor extractedValue_26102_run = extractPtr_27484->mAssociatedValue1 ;
            const GALGAS_multipleBindingDescriptor extractedValue_26117_enabledBinding = extractPtr_27484->mAssociatedValue2 ;
            GALGAS_autolayoutRunBindingForGeneration var_runBindingGeneration_26443 ;
            {
            routine_analyzeAutoLayoutRunBinding (extractedValue_26102_run, GALGAS_bool (true), constinArgument_inPreferences, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 630)), constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, var_runBindingGeneration_26443, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 626)) ;
            }
            GALGAS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_26800 ;
            {
            routine_analyzeAutoLayoutEnableBinding (extractedValue_26117_enabledBinding, GALGAS_bool (true), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_26800, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 636)) ;
            }
            GALGAS_string var_s_26828 = GALGAS_string ("AutoLayoutMenuItemDescriptor (title: ").add_operation (extractedValue_26098_title.getter_cStringRepresentation (SOURCE_FILE ("auto-layout-view.ggs", 646)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 646)) ;
            switch (var_runBindingGeneration_26443.enumValue ()) {
            case GALGAS_autolayoutRunBindingForGeneration::kNotBuilt:
              break ;
            case GALGAS_autolayoutRunBindingForGeneration::kEnum_none:
              {
                var_s_26828.plusAssign_operation(GALGAS_string (", target: nil, selector: nil"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 649)) ;
              }
              break ;
            case GALGAS_autolayoutRunBindingForGeneration::kEnum_run:
              {
                const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run * extractPtr_27187 = (const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run *) (var_runBindingGeneration_26443.unsafePointer ()) ;
                const GALGAS_string extractedValue_27042_targetName = extractPtr_27187->mAssociatedValue0 ;
                const GALGAS_string extractedValue_27053_actionName = extractPtr_27187->mAssociatedValue1 ;
                const GALGAS_string extractedValue_27067_runTargetName = extractPtr_27187->mAssociatedValue2 ;
                var_s_26828.plusAssign_operation(GALGAS_string (", target: ").add_operation (extractedValue_27042_targetName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 651)).add_operation (GALGAS_string (", selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 651)).add_operation (extractedValue_27067_runTargetName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 651)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 651)).add_operation (extractedValue_27053_actionName, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 651)).add_operation (GALGAS_string (" (_:))"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 651)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 651)) ;
              }
              break ;
            }
            switch (var_enabledBindingGeneration_26800.enumValue ()) {
            case GALGAS_autolayoutEnabledBindingForGeneration::kNotBuilt:
              break ;
            case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_none:
              {
                var_s_26828.plusAssign_operation(GALGAS_string (", enableBinding: .alwaysTrue"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 655)) ;
              }
              break ;
            case GALGAS_autolayoutEnabledBindingForGeneration::kEnum_enabled:
              {
                const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled * extractPtr_27415 = (const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled *) (var_enabledBindingGeneration_26800.unsafePointer ()) ;
                const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_27346_binding = extractPtr_27415->mAssociatedValue0 ;
                var_s_26828.plusAssign_operation(GALGAS_string (", enableBinding: ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) extractedValue_27346_binding.ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 657)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 657)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 657)) ;
              }
              break ;
            }
            var_s_26828.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 659)) ;
            var_parameterList_23863.addAssign_operation (enumerator_24123.current_mParameterName (HERE).readProperty_string (), var_s_26828  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 660)) ;
          }
          break ;
        case GALGAS_astAutoLayoutViewInstructionParameterValue::kEnum_enumFunc:
          {
            const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc * extractPtr_28120 = (const cEnumAssociatedValues_astAutoLayoutViewInstructionParameterValue_enumFunc *) (enumerator_24123.current_mParameter (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_27520_enumTypeName = extractPtr_28120->mAssociatedValue0 ;
            const GALGAS_lstring extractedValue_27529_funcName = extractPtr_28120->mAssociatedValue1 ;
            GALGAS_classKind var_type_27605 ;
            GALGAS_propertyMap joker_27607_3 ; // Joker input parameter
            GALGAS_actionMap joker_27607_2 ; // Joker input parameter
            GALGAS_propertyGenerationList joker_27607_1 ; // Joker input parameter
            constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_27520_enumTypeName, var_type_27605, joker_27607_3, joker_27607_2, joker_27607_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 662)) ;
            enumGalgasBool test_12 = kBoolTrue ;
            if (kBoolTrue == test_12) {
              test_12 = var_type_27605.getter_isAtomic (SOURCE_FILE ("auto-layout-view.ggs", 663)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 663)).boolEnum () ;
              if (kBoolTrue == test_12) {
                TC_Array <C_FixItDescription> fixItArray13 ;
                inCompiler->emitSemanticError (extractedValue_27520_enumTypeName.readProperty_location (), GALGAS_string ("this type should be an enum type"), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 664)) ;
              }
            }
            if (kBoolFalse == test_12) {
              GALGAS_typeKind var_typeKind_27775 ;
              var_type_27605.method_atomic (var_typeKind_27775, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 666)) ;
              enumGalgasBool test_14 = kBoolTrue ;
              if (kBoolTrue == test_14) {
                test_14 = var_typeKind_27775.getter_isEnumType (SOURCE_FILE ("auto-layout-view.ggs", 667)).boolEnum () ;
                if (kBoolTrue == test_14) {
                  GALGAS_enumFuncMap var_funcMap_27876 ;
                  GALGAS_string joker_27853_2 ; // Joker input parameter
                  GALGAS_enumConstantMap joker_27853_1 ; // Joker input parameter
                  var_typeKind_27775.method_enumType (joker_27853_2, joker_27853_1, var_funcMap_27876, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 668)) ;
                  GALGAS_enumFunAssociationSortedList joker_27922 ; // Joker input parameter
                  var_funcMap_27876.method_searchKey (extractedValue_27529_funcName, joker_27922, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 669)) ;
                }
              }
              if (kBoolFalse == test_14) {
                TC_Array <C_FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (extractedValue_27520_enumTypeName.readProperty_location (), GALGAS_string ("this type should be an enum type"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 671)) ;
              }
            }
            var_parameterList_23863.addAssign_operation (enumerator_24123.current_mParameterName (HERE).readProperty_string (), extractedValue_27520_enumTypeName.readProperty_string ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 674)).add_operation (extractedValue_27529_funcName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 674)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 674))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 674)) ;
          }
          break ;
        }
        enumerator_24123.gotoNextObject () ;
        enumerator_24171.gotoNextObject () ;
      }
    }
    outArgument_outFuncCallList.addAssign_operation (enumerator_23504.current_mFunctionName (HERE).readProperty_string (), var_parameterList_23863  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 678)) ;
    enumerator_23504.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@astAbstractViewInstructionDeclaration generateViewCode'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_generateViewCode (cPtr_astAbstractViewInstructionDeclaration * inObject,
                                           const GALGAS_autoLayoutViewDeclarationMap constin_inViewDeclarationMap,
                                           const GALGAS_bool constin_inPreferences,
                                           const GALGAS_propertyMap constin_inRootObservablePropertyMap,
                                           const GALGAS_propertyMap constin_inPreferencesPropertyMap,
                                           const GALGAS_semanticContext constin_inSemanticContext,
                                           const GALGAS_propertyMap constin_inObservablePropertyMap,
                                           const GALGAS_actionMap constin_inActionMap,
                                           const GALGAS_string constin_inReceiverSwiftTypeName,
                                           const GALGAS_classMap constin_inClassMap,
                                           GALGAS_implicitViewFunctionGenerationList & io_ioImplicitViewFunctionGenerationList,
                                           GALGAS_autoLayoutConfiguratorMap & io_ioConfiguratorMap,
                                           GALGAS_autoLayoutOutletMap & io_ioOutletMap,
                                           GALGAS_abstractViewInstructionGeneration & out_outInstruction,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outInstruction.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_astAbstractViewInstructionDeclaration) ;
    inObject->method_generateViewCode (constin_inViewDeclarationMap, constin_inPreferences, constin_inRootObservablePropertyMap, constin_inPreferencesPropertyMap, constin_inSemanticContext, constin_inObservablePropertyMap, constin_inActionMap, constin_inReceiverSwiftTypeName, constin_inClassMap, io_ioImplicitViewFunctionGenerationList, io_ioConfiguratorMap, io_ioOutletMap, out_outInstruction, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
// @abstractViewGeneration reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractViewGeneration::objectCompare (const GALGAS_abstractViewGeneration & inOperand) const {
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

GALGAS_abstractViewGeneration::GALGAS_abstractViewGeneration (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewGeneration::GALGAS_abstractViewGeneration (const cPtr_abstractViewGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractViewGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractViewGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractViewGeneration::cPtr_abstractViewGeneration (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractViewGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractViewGeneration ("abstractViewGeneration",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractViewGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractViewGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractViewGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractViewGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewGeneration GALGAS_abstractViewGeneration::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractViewGeneration result ;
  const GALGAS_abstractViewGeneration * p = (const GALGAS_abstractViewGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractViewGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractViewGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractViewGeneration_2D_weak::objectCompare (const GALGAS_abstractViewGeneration_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewGeneration_2D_weak::GALGAS_abstractViewGeneration_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewGeneration_2D_weak & GALGAS_abstractViewGeneration_2D_weak::operator = (const GALGAS_abstractViewGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewGeneration_2D_weak::GALGAS_abstractViewGeneration_2D_weak (const GALGAS_abstractViewGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewGeneration_2D_weak GALGAS_abstractViewGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractViewGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewGeneration GALGAS_abstractViewGeneration_2D_weak::bang_abstractViewGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractViewGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractViewGeneration) ;
      result = GALGAS_abstractViewGeneration ((cPtr_abstractViewGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractViewGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractViewGeneration_2D_weak ("abstractViewGeneration-weak",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractViewGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractViewGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractViewGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractViewGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewGeneration_2D_weak GALGAS_abstractViewGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractViewGeneration_2D_weak result ;
  const GALGAS_abstractViewGeneration_2D_weak * p = (const GALGAS_abstractViewGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractViewGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractViewGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutViewInstructionGenerationFuncCallList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList : public cCollectionElement {
  public: GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList (const GALGAS_string & in_mFunctionName,
                                                                              const GALGAS_autoLayoutViewInstructionGenerationParameterList & in_mParameters
                                                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList::cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList (const GALGAS_string & in_mFunctionName,
                                                                                                                                        const GALGAS_autoLayoutViewInstructionGenerationParameterList & in_mParameters
                                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFunctionName, in_mParameters) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList::cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFunctionName, inElement.mProperty_mParameters) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList (mObject.mProperty_mFunctionName, mObject.mProperty_mParameters COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFunctionName" ":" ;
  mObject.mProperty_mFunctionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameters" ":" ;
  mObject.mProperty_mParameters.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList * operand = (cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList::GALGAS_autoLayoutViewInstructionGenerationFuncCallList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList::GALGAS_autoLayoutViewInstructionGenerationFuncCallList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList GALGAS_autoLayoutViewInstructionGenerationFuncCallList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutViewInstructionGenerationFuncCallList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList GALGAS_autoLayoutViewInstructionGenerationFuncCallList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                                          const GALGAS_autoLayoutViewInstructionGenerationParameterList & inOperand1
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_autoLayoutViewInstructionGenerationFuncCallList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_autoLayoutViewInstructionGenerationFuncCallList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationFuncCallList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                        const GALGAS_string & in_mFunctionName,
                                                                                        const GALGAS_autoLayoutViewInstructionGenerationParameterList & in_mParameters
                                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList * p = NULL ;
  macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList (in_mFunctionName,
                                                                                     in_mParameters COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationFuncCallList::addAssign_operation (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_autoLayoutViewInstructionGenerationParameterList & inOperand1
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_autoLayoutViewInstructionGenerationFuncCallList::setter_append (GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element inElement,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList (inElement COMMA_THERE)) ;
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

void GALGAS_autoLayoutViewInstructionGenerationFuncCallList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                                   const GALGAS_autoLayoutViewInstructionGenerationParameterList inOperand1,
                                                                                   const GALGAS_uint inInsertionIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_autoLayoutViewInstructionGenerationFuncCallList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                                   GALGAS_autoLayoutViewInstructionGenerationParameterList & outOperand1,
                                                                                   const GALGAS_uint inRemoveIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList * p = (cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList) ;
        outOperand0 = p->mObject.mProperty_mFunctionName ;
        outOperand1 = p->mObject.mProperty_mParameters ;
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

void GALGAS_autoLayoutViewInstructionGenerationFuncCallList::setter_popFirst (GALGAS_string & outOperand0,
                                                                              GALGAS_autoLayoutViewInstructionGenerationParameterList & outOperand1,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList * p = (cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mParameters ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationFuncCallList::setter_popLast (GALGAS_string & outOperand0,
                                                                             GALGAS_autoLayoutViewInstructionGenerationParameterList & outOperand1,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList * p = (cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mParameters ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationFuncCallList::method_first (GALGAS_string & outOperand0,
                                                                           GALGAS_autoLayoutViewInstructionGenerationParameterList & outOperand1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList * p = (cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mParameters ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationFuncCallList::method_last (GALGAS_string & outOperand0,
                                                                          GALGAS_autoLayoutViewInstructionGenerationParameterList & outOperand1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList * p = (cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mParameters ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList GALGAS_autoLayoutViewInstructionGenerationFuncCallList::add_operation (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inOperand,
                                                                                                                              C_Compiler * /* inCompiler */
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList GALGAS_autoLayoutViewInstructionGenerationFuncCallList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList result = GALGAS_autoLayoutViewInstructionGenerationFuncCallList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList GALGAS_autoLayoutViewInstructionGenerationFuncCallList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList result = GALGAS_autoLayoutViewInstructionGenerationFuncCallList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList GALGAS_autoLayoutViewInstructionGenerationFuncCallList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList result = GALGAS_autoLayoutViewInstructionGenerationFuncCallList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationFuncCallList::plusAssign_operation (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList inOperand,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationFuncCallList::setter_setMFunctionNameAtIndex (GALGAS_string inOperand,
                                                                                             GALGAS_uint inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList * p = (cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFunctionName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutViewInstructionGenerationFuncCallList::getter_mFunctionNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList * p = (cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList) ;
    result = p->mObject.mProperty_mFunctionName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationFuncCallList::setter_setMParametersAtIndex (GALGAS_autoLayoutViewInstructionGenerationParameterList inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList * p = (cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameters = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList GALGAS_autoLayoutViewInstructionGenerationFuncCallList::getter_mParametersAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                           C_Compiler * inCompiler
                                                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList * p = (cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList *) attributes.ptr () ;
  GALGAS_autoLayoutViewInstructionGenerationParameterList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList) ;
    result = p->mObject.mProperty_mParameters ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutViewInstructionGenerationFuncCallList::cEnumerator_autoLayoutViewInstructionGenerationFuncCallList (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inEnumeratedObject,
                                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element cEnumerator_autoLayoutViewInstructionGenerationFuncCallList::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList * p = (const cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_autoLayoutViewInstructionGenerationFuncCallList::current_mFunctionName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList * p = (const cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList) ;
  return p->mObject.mProperty_mFunctionName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList cEnumerator_autoLayoutViewInstructionGenerationFuncCallList::current_mParameters (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList * p = (const cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList) ;
  return p->mObject.mProperty_mParameters ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutViewInstructionGenerationFuncCallList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList ("autoLayoutViewInstructionGenerationFuncCallList",
                                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewInstructionGenerationFuncCallList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewInstructionGenerationFuncCallList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewInstructionGenerationFuncCallList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList GALGAS_autoLayoutViewInstructionGenerationFuncCallList::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList result ;
  const GALGAS_autoLayoutViewInstructionGenerationFuncCallList * p = (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutViewInstructionGenerationFuncCallList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewInstructionGenerationFuncCallList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_newHorizontalStackViewGeneration_2D_weak::objectCompare (const GALGAS_newHorizontalStackViewGeneration_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newHorizontalStackViewGeneration_2D_weak::GALGAS_newHorizontalStackViewGeneration_2D_weak (void) :
GALGAS_abstractViewGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newHorizontalStackViewGeneration_2D_weak & GALGAS_newHorizontalStackViewGeneration_2D_weak::operator = (const GALGAS_newHorizontalStackViewGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newHorizontalStackViewGeneration_2D_weak::GALGAS_newHorizontalStackViewGeneration_2D_weak (const GALGAS_newHorizontalStackViewGeneration & inSource) :
GALGAS_abstractViewGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newHorizontalStackViewGeneration_2D_weak GALGAS_newHorizontalStackViewGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_newHorizontalStackViewGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newHorizontalStackViewGeneration GALGAS_newHorizontalStackViewGeneration_2D_weak::bang_newHorizontalStackViewGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_newHorizontalStackViewGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
// @newVerticalStackViewGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_newVerticalStackViewGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_newVerticalStackViewGeneration * p = (const cPtr_newVerticalStackViewGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_newVerticalStackViewGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mFuncCallList.objectCompare (p->mProperty_mFuncCallList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_newVerticalStackViewGeneration::objectCompare (const GALGAS_newVerticalStackViewGeneration & inOperand) const {
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

GALGAS_newVerticalStackViewGeneration::GALGAS_newVerticalStackViewGeneration (void) :
GALGAS_abstractViewGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newVerticalStackViewGeneration GALGAS_newVerticalStackViewGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_newVerticalStackViewGeneration::constructor_new (GALGAS_autoLayoutViewInstructionGenerationFuncCallList::constructor_emptyList (HERE)
                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newVerticalStackViewGeneration::GALGAS_newVerticalStackViewGeneration (const cPtr_newVerticalStackViewGeneration * inSourcePtr) :
GALGAS_abstractViewGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_newVerticalStackViewGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_newVerticalStackViewGeneration GALGAS_newVerticalStackViewGeneration::constructor_new (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inAttribute_mFuncCallList
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_newVerticalStackViewGeneration result ;
  if (inAttribute_mFuncCallList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_newVerticalStackViewGeneration (inAttribute_mFuncCallList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_newVerticalStackViewGeneration::setter_setMFuncCallList (GALGAS_autoLayoutViewInstructionGenerationFuncCallList inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_newVerticalStackViewGeneration * p = (cPtr_newVerticalStackViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_newVerticalStackViewGeneration) ;
    p->mProperty_mFuncCallList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList GALGAS_newVerticalStackViewGeneration::readProperty_mFuncCallList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationFuncCallList () ;
  }else{
    cPtr_newVerticalStackViewGeneration * p = (cPtr_newVerticalStackViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_newVerticalStackViewGeneration) ;
    return p->mProperty_mFuncCallList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @newVerticalStackViewGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_newVerticalStackViewGeneration::cPtr_newVerticalStackViewGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractViewGeneration (THERE),
mProperty_mFuncCallList (in_mFuncCallList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_newVerticalStackViewGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_newVerticalStackViewGeneration ;
}

void cPtr_newVerticalStackViewGeneration::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@newVerticalStackViewGeneration:" ;
  mProperty_mFuncCallList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_newVerticalStackViewGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_newVerticalStackViewGeneration (mProperty_mFuncCallList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@newVerticalStackViewGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_newVerticalStackViewGeneration ("newVerticalStackViewGeneration",
                                                       & kTypeDescriptor_GALGAS_abstractViewGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_newVerticalStackViewGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_newVerticalStackViewGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_newVerticalStackViewGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_newVerticalStackViewGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newVerticalStackViewGeneration GALGAS_newVerticalStackViewGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_newVerticalStackViewGeneration result ;
  const GALGAS_newVerticalStackViewGeneration * p = (const GALGAS_newVerticalStackViewGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_newVerticalStackViewGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("newVerticalStackViewGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_newVerticalStackViewGeneration_2D_weak::objectCompare (const GALGAS_newVerticalStackViewGeneration_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newVerticalStackViewGeneration_2D_weak::GALGAS_newVerticalStackViewGeneration_2D_weak (void) :
GALGAS_abstractViewGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newVerticalStackViewGeneration_2D_weak & GALGAS_newVerticalStackViewGeneration_2D_weak::operator = (const GALGAS_newVerticalStackViewGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newVerticalStackViewGeneration_2D_weak::GALGAS_newVerticalStackViewGeneration_2D_weak (const GALGAS_newVerticalStackViewGeneration & inSource) :
GALGAS_abstractViewGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newVerticalStackViewGeneration_2D_weak GALGAS_newVerticalStackViewGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_newVerticalStackViewGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newVerticalStackViewGeneration GALGAS_newVerticalStackViewGeneration_2D_weak::bang_newVerticalStackViewGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_newVerticalStackViewGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_newVerticalStackViewGeneration) ;
      result = GALGAS_newVerticalStackViewGeneration ((cPtr_newVerticalStackViewGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@newVerticalStackViewGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_newVerticalStackViewGeneration_2D_weak ("newVerticalStackViewGeneration-weak",
                                                               & kTypeDescriptor_GALGAS_abstractViewGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_newVerticalStackViewGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_newVerticalStackViewGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_newVerticalStackViewGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_newVerticalStackViewGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_newVerticalStackViewGeneration_2D_weak GALGAS_newVerticalStackViewGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_newVerticalStackViewGeneration_2D_weak result ;
  const GALGAS_newVerticalStackViewGeneration_2D_weak * p = (const GALGAS_newVerticalStackViewGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_newVerticalStackViewGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("newVerticalStackViewGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutViewInstructionGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutViewInstructionGenerationList : public cCollectionElement {
  public: GALGAS_autoLayoutViewInstructionGenerationList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_autoLayoutViewInstructionGenerationList (const GALGAS_abstractViewInstructionGeneration & in_mInstruction
                                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutViewInstructionGenerationList (const GALGAS_autoLayoutViewInstructionGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutViewInstructionGenerationList::cCollectionElement_autoLayoutViewInstructionGenerationList (const GALGAS_abstractViewInstructionGeneration & in_mInstruction
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutViewInstructionGenerationList::cCollectionElement_autoLayoutViewInstructionGenerationList (const GALGAS_autoLayoutViewInstructionGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutViewInstructionGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutViewInstructionGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_autoLayoutViewInstructionGenerationList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutViewInstructionGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_autoLayoutViewInstructionGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_autoLayoutViewInstructionGenerationList * operand = (cCollectionElement_autoLayoutViewInstructionGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_autoLayoutViewInstructionGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList::GALGAS_autoLayoutViewInstructionGenerationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList::GALGAS_autoLayoutViewInstructionGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutViewInstructionGenerationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList GALGAS_autoLayoutViewInstructionGenerationList::constructor_listWithValue (const GALGAS_abstractViewInstructionGeneration & inOperand0
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_autoLayoutViewInstructionGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_autoLayoutViewInstructionGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                const GALGAS_abstractViewInstructionGeneration & in_mInstruction
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewInstructionGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationList::addAssign_operation (const GALGAS_abstractViewInstructionGeneration & inOperand0
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_autoLayoutViewInstructionGenerationList::setter_append (GALGAS_autoLayoutViewInstructionGenerationList_2D_element inElement,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationList (inElement COMMA_THERE)) ;
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

void GALGAS_autoLayoutViewInstructionGenerationList::setter_insertAtIndex (const GALGAS_abstractViewInstructionGeneration inOperand0,
                                                                           const GALGAS_uint inInsertionIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_autoLayoutViewInstructionGenerationList::setter_removeAtIndex (GALGAS_abstractViewInstructionGeneration & outOperand0,
                                                                           const GALGAS_uint inRemoveIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_autoLayoutViewInstructionGenerationList * p = (cCollectionElement_autoLayoutViewInstructionGenerationList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationList) ;
        outOperand0 = p->mObject.mProperty_mInstruction ;
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

void GALGAS_autoLayoutViewInstructionGenerationList::setter_popFirst (GALGAS_abstractViewInstructionGeneration & outOperand0,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationList * p = (cCollectionElement_autoLayoutViewInstructionGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationList::setter_popLast (GALGAS_abstractViewInstructionGeneration & outOperand0,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationList * p = (cCollectionElement_autoLayoutViewInstructionGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationList::method_first (GALGAS_abstractViewInstructionGeneration & outOperand0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationList * p = (cCollectionElement_autoLayoutViewInstructionGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationList::method_last (GALGAS_abstractViewInstructionGeneration & outOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationList * p = (cCollectionElement_autoLayoutViewInstructionGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList GALGAS_autoLayoutViewInstructionGenerationList::add_operation (const GALGAS_autoLayoutViewInstructionGenerationList & inOperand,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewInstructionGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList GALGAS_autoLayoutViewInstructionGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewInstructionGenerationList result = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList GALGAS_autoLayoutViewInstructionGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewInstructionGenerationList result = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList GALGAS_autoLayoutViewInstructionGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewInstructionGenerationList result = GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationList::plusAssign_operation (const GALGAS_autoLayoutViewInstructionGenerationList inOperand,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationList::setter_setMInstructionAtIndex (GALGAS_abstractViewInstructionGeneration inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewInstructionGenerationList * p = (cCollectionElement_autoLayoutViewInstructionGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewInstructionGeneration GALGAS_autoLayoutViewInstructionGenerationList::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationList * p = (cCollectionElement_autoLayoutViewInstructionGenerationList *) attributes.ptr () ;
  GALGAS_abstractViewInstructionGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationList) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutViewInstructionGenerationList::cEnumerator_autoLayoutViewInstructionGenerationList (const GALGAS_autoLayoutViewInstructionGenerationList & inEnumeratedObject,
                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList_2D_element cEnumerator_autoLayoutViewInstructionGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewInstructionGenerationList * p = (const cCollectionElement_autoLayoutViewInstructionGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewInstructionGeneration cEnumerator_autoLayoutViewInstructionGenerationList::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutViewInstructionGenerationList * p = (const cCollectionElement_autoLayoutViewInstructionGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationList) ;
  return p->mObject.mProperty_mInstruction ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutViewInstructionGenerationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList ("autoLayoutViewInstructionGenerationList",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewInstructionGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewInstructionGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewInstructionGenerationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList GALGAS_autoLayoutViewInstructionGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationList result ;
  const GALGAS_autoLayoutViewInstructionGenerationList * p = (const GALGAS_autoLayoutViewInstructionGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutViewInstructionGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewInstructionGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_computedHorizontalViewGeneration_2D_weak::objectCompare (const GALGAS_computedHorizontalViewGeneration_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration_2D_weak::GALGAS_computedHorizontalViewGeneration_2D_weak (void) :
GALGAS_abstractViewGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration_2D_weak & GALGAS_computedHorizontalViewGeneration_2D_weak::operator = (const GALGAS_computedHorizontalViewGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration_2D_weak::GALGAS_computedHorizontalViewGeneration_2D_weak (const GALGAS_computedHorizontalViewGeneration & inSource) :
GALGAS_abstractViewGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration_2D_weak GALGAS_computedHorizontalViewGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_computedHorizontalViewGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration GALGAS_computedHorizontalViewGeneration_2D_weak::bang_computedHorizontalViewGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_computedHorizontalViewGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
// @computedVerticalViewGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_computedVerticalViewGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_computedVerticalViewGeneration * p = (const cPtr_computedVerticalViewGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_computedVerticalViewGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mFuncCallList.objectCompare (p->mProperty_mFuncCallList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNewStackViewDeclarationList.objectCompare (p->mProperty_mNewStackViewDeclarationList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_computedVerticalViewGeneration::objectCompare (const GALGAS_computedVerticalViewGeneration & inOperand) const {
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

GALGAS_computedVerticalViewGeneration::GALGAS_computedVerticalViewGeneration (void) :
GALGAS_abstractViewGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedVerticalViewGeneration GALGAS_computedVerticalViewGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_computedVerticalViewGeneration::constructor_new (GALGAS_autoLayoutViewInstructionGenerationFuncCallList::constructor_emptyList (HERE),
                                                                 GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (HERE),
                                                                 GALGAS_astNewStackViewDeclarationList::constructor_emptyList (HERE)
                                                                 COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedVerticalViewGeneration::GALGAS_computedVerticalViewGeneration (const cPtr_computedVerticalViewGeneration * inSourcePtr) :
GALGAS_abstractViewGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computedVerticalViewGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedVerticalViewGeneration GALGAS_computedVerticalViewGeneration::constructor_new (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inAttribute_mFuncCallList,
                                                                                              const GALGAS_autoLayoutViewInstructionGenerationList & inAttribute_mInstructionList,
                                                                                              const GALGAS_astNewStackViewDeclarationList & inAttribute_mNewStackViewDeclarationList
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_computedVerticalViewGeneration result ;
  if (inAttribute_mFuncCallList.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mNewStackViewDeclarationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_computedVerticalViewGeneration (inAttribute_mFuncCallList, inAttribute_mInstructionList, inAttribute_mNewStackViewDeclarationList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedVerticalViewGeneration::setter_setMFuncCallList (GALGAS_autoLayoutViewInstructionGenerationFuncCallList inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_computedVerticalViewGeneration * p = (cPtr_computedVerticalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedVerticalViewGeneration) ;
    p->mProperty_mFuncCallList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedVerticalViewGeneration::setter_setMInstructionList (GALGAS_autoLayoutViewInstructionGenerationList inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_computedVerticalViewGeneration * p = (cPtr_computedVerticalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedVerticalViewGeneration) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_computedVerticalViewGeneration::setter_setMNewStackViewDeclarationList (GALGAS_astNewStackViewDeclarationList inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_computedVerticalViewGeneration * p = (cPtr_computedVerticalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedVerticalViewGeneration) ;
    p->mProperty_mNewStackViewDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList GALGAS_computedVerticalViewGeneration::readProperty_mFuncCallList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationFuncCallList () ;
  }else{
    cPtr_computedVerticalViewGeneration * p = (cPtr_computedVerticalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedVerticalViewGeneration) ;
    return p->mProperty_mFuncCallList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList GALGAS_computedVerticalViewGeneration::readProperty_mInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationList () ;
  }else{
    cPtr_computedVerticalViewGeneration * p = (cPtr_computedVerticalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedVerticalViewGeneration) ;
    return p->mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList GALGAS_computedVerticalViewGeneration::readProperty_mNewStackViewDeclarationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_computedVerticalViewGeneration * p = (cPtr_computedVerticalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedVerticalViewGeneration) ;
    return p->mProperty_mNewStackViewDeclarationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @computedVerticalViewGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_computedVerticalViewGeneration::cPtr_computedVerticalViewGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                                          const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                                          const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractViewGeneration (THERE),
mProperty_mFuncCallList (in_mFuncCallList),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mNewStackViewDeclarationList (in_mNewStackViewDeclarationList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_computedVerticalViewGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedVerticalViewGeneration ;
}

void cPtr_computedVerticalViewGeneration::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@computedVerticalViewGeneration:" ;
  mProperty_mFuncCallList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNewStackViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_computedVerticalViewGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_computedVerticalViewGeneration (mProperty_mFuncCallList, mProperty_mInstructionList, mProperty_mNewStackViewDeclarationList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@computedVerticalViewGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_computedVerticalViewGeneration ("computedVerticalViewGeneration",
                                                       & kTypeDescriptor_GALGAS_abstractViewGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedVerticalViewGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedVerticalViewGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedVerticalViewGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedVerticalViewGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedVerticalViewGeneration GALGAS_computedVerticalViewGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_computedVerticalViewGeneration result ;
  const GALGAS_computedVerticalViewGeneration * p = (const GALGAS_computedVerticalViewGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_computedVerticalViewGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedVerticalViewGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_computedVerticalViewGeneration_2D_weak::objectCompare (const GALGAS_computedVerticalViewGeneration_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedVerticalViewGeneration_2D_weak::GALGAS_computedVerticalViewGeneration_2D_weak (void) :
GALGAS_abstractViewGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedVerticalViewGeneration_2D_weak & GALGAS_computedVerticalViewGeneration_2D_weak::operator = (const GALGAS_computedVerticalViewGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedVerticalViewGeneration_2D_weak::GALGAS_computedVerticalViewGeneration_2D_weak (const GALGAS_computedVerticalViewGeneration & inSource) :
GALGAS_abstractViewGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedVerticalViewGeneration_2D_weak GALGAS_computedVerticalViewGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_computedVerticalViewGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedVerticalViewGeneration GALGAS_computedVerticalViewGeneration_2D_weak::bang_computedVerticalViewGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_computedVerticalViewGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_computedVerticalViewGeneration) ;
      result = GALGAS_computedVerticalViewGeneration ((cPtr_computedVerticalViewGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@computedVerticalViewGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_computedVerticalViewGeneration_2D_weak ("computedVerticalViewGeneration-weak",
                                                               & kTypeDescriptor_GALGAS_abstractViewGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedVerticalViewGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedVerticalViewGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedVerticalViewGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedVerticalViewGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_computedVerticalViewGeneration_2D_weak GALGAS_computedVerticalViewGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_computedVerticalViewGeneration_2D_weak result ;
  const GALGAS_computedVerticalViewGeneration_2D_weak * p = (const GALGAS_computedVerticalViewGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_computedVerticalViewGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedVerticalViewGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_abstractViewInstructionGeneration_2D_weak::objectCompare (const GALGAS_abstractViewInstructionGeneration_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewInstructionGeneration_2D_weak::GALGAS_abstractViewInstructionGeneration_2D_weak (void) :
AC_GALGAS_weak_reference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewInstructionGeneration_2D_weak & GALGAS_abstractViewInstructionGeneration_2D_weak::operator = (const GALGAS_abstractViewInstructionGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewInstructionGeneration_2D_weak::GALGAS_abstractViewInstructionGeneration_2D_weak (const GALGAS_abstractViewInstructionGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewInstructionGeneration_2D_weak GALGAS_abstractViewInstructionGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_abstractViewInstructionGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewInstructionGeneration GALGAS_abstractViewInstructionGeneration_2D_weak::bang_abstractViewInstructionGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_abstractViewInstructionGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractViewInstructionGeneration) ;
      result = GALGAS_abstractViewInstructionGeneration ((cPtr_abstractViewInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@abstractViewInstructionGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2D_weak ("abstractViewInstructionGeneration-weak",
                                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractViewInstructionGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractViewInstructionGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractViewInstructionGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewInstructionGeneration_2D_weak GALGAS_abstractViewInstructionGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_abstractViewInstructionGeneration_2D_weak result ;
  const GALGAS_abstractViewInstructionGeneration_2D_weak * p = (const GALGAS_abstractViewInstructionGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractViewInstructionGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractViewInstructionGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutMultipleBindingGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutMultipleBindingGenerationList : public cCollectionElement {
  public: GALGAS_autoLayoutMultipleBindingGenerationList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_autoLayoutMultipleBindingGenerationList (const GALGAS_string & in_mBindingName,
                                                                      const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutMultipleBindingGenerationList (const GALGAS_autoLayoutMultipleBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutMultipleBindingGenerationList::cCollectionElement_autoLayoutMultipleBindingGenerationList (const GALGAS_string & in_mBindingName,
                                                                                                                        const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBindingName, in_mBoundObjectExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutMultipleBindingGenerationList::cCollectionElement_autoLayoutMultipleBindingGenerationList (const GALGAS_autoLayoutMultipleBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mBindingName, inElement.mProperty_mBoundObjectExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutMultipleBindingGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutMultipleBindingGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_autoLayoutMultipleBindingGenerationList (mObject.mProperty_mBindingName, mObject.mProperty_mBoundObjectExpression COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutMultipleBindingGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBindingName" ":" ;
  mObject.mProperty_mBindingName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mBoundObjectExpression" ":" ;
  mObject.mProperty_mBoundObjectExpression.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_autoLayoutMultipleBindingGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_autoLayoutMultipleBindingGenerationList * operand = (cCollectionElement_autoLayoutMultipleBindingGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_autoLayoutMultipleBindingGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList::GALGAS_autoLayoutMultipleBindingGenerationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList::GALGAS_autoLayoutMultipleBindingGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutMultipleBindingGenerationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList GALGAS_autoLayoutMultipleBindingGenerationList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                          const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutMultipleBindingGenerationList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_autoLayoutMultipleBindingGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_autoLayoutMultipleBindingGenerationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutMultipleBindingGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                const GALGAS_string & in_mBindingName,
                                                                                const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutMultipleBindingGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_autoLayoutMultipleBindingGenerationList (in_mBindingName,
                                                                             in_mBoundObjectExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutMultipleBindingGenerationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                                          const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutMultipleBindingGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_autoLayoutMultipleBindingGenerationList::setter_append (GALGAS_autoLayoutMultipleBindingGenerationList_2D_element inElement,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutMultipleBindingGenerationList (inElement COMMA_THERE)) ;
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

void GALGAS_autoLayoutMultipleBindingGenerationList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                           const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inOperand1,
                                                                           const GALGAS_uint inInsertionIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutMultipleBindingGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_autoLayoutMultipleBindingGenerationList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                           GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand1,
                                                                           const GALGAS_uint inRemoveIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_autoLayoutMultipleBindingGenerationList * p = (cCollectionElement_autoLayoutMultipleBindingGenerationList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_autoLayoutMultipleBindingGenerationList) ;
        outOperand0 = p->mObject.mProperty_mBindingName ;
        outOperand1 = p->mObject.mProperty_mBoundObjectExpression ;
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

void GALGAS_autoLayoutMultipleBindingGenerationList::setter_popFirst (GALGAS_string & outOperand0,
                                                                      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutMultipleBindingGenerationList * p = (cCollectionElement_autoLayoutMultipleBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutMultipleBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mBindingName ;
    outOperand1 = p->mObject.mProperty_mBoundObjectExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutMultipleBindingGenerationList::setter_popLast (GALGAS_string & outOperand0,
                                                                     GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutMultipleBindingGenerationList * p = (cCollectionElement_autoLayoutMultipleBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutMultipleBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mBindingName ;
    outOperand1 = p->mObject.mProperty_mBoundObjectExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutMultipleBindingGenerationList::method_first (GALGAS_string & outOperand0,
                                                                   GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutMultipleBindingGenerationList * p = (cCollectionElement_autoLayoutMultipleBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutMultipleBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mBindingName ;
    outOperand1 = p->mObject.mProperty_mBoundObjectExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutMultipleBindingGenerationList::method_last (GALGAS_string & outOperand0,
                                                                  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutMultipleBindingGenerationList * p = (cCollectionElement_autoLayoutMultipleBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutMultipleBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mBindingName ;
    outOperand1 = p->mObject.mProperty_mBoundObjectExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList GALGAS_autoLayoutMultipleBindingGenerationList::add_operation (const GALGAS_autoLayoutMultipleBindingGenerationList & inOperand,
                                                                                                              C_Compiler * /* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutMultipleBindingGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList GALGAS_autoLayoutMultipleBindingGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutMultipleBindingGenerationList result = GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList GALGAS_autoLayoutMultipleBindingGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutMultipleBindingGenerationList result = GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList GALGAS_autoLayoutMultipleBindingGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutMultipleBindingGenerationList result = GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutMultipleBindingGenerationList::plusAssign_operation (const GALGAS_autoLayoutMultipleBindingGenerationList inOperand,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutMultipleBindingGenerationList::setter_setMBindingNameAtIndex (GALGAS_string inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutMultipleBindingGenerationList * p = (cCollectionElement_autoLayoutMultipleBindingGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutMultipleBindingGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBindingName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutMultipleBindingGenerationList::getter_mBindingNameAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutMultipleBindingGenerationList * p = (cCollectionElement_autoLayoutMultipleBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutMultipleBindingGenerationList) ;
    result = p->mObject.mProperty_mBindingName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutMultipleBindingGenerationList::setter_setMBoundObjectExpressionAtIndex (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inOperand,
                                                                                              GALGAS_uint inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutMultipleBindingGenerationList * p = (cCollectionElement_autoLayoutMultipleBindingGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutMultipleBindingGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBoundObjectExpression = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_autoLayoutMultipleBindingGenerationList::getter_mBoundObjectExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                                   C_Compiler * inCompiler
                                                                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutMultipleBindingGenerationList * p = (cCollectionElement_autoLayoutMultipleBindingGenerationList *) attributes.ptr () ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutMultipleBindingGenerationList) ;
    result = p->mObject.mProperty_mBoundObjectExpression ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutMultipleBindingGenerationList::cEnumerator_autoLayoutMultipleBindingGenerationList (const GALGAS_autoLayoutMultipleBindingGenerationList & inEnumeratedObject,
                                                                                                          const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList_2D_element cEnumerator_autoLayoutMultipleBindingGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutMultipleBindingGenerationList * p = (const cCollectionElement_autoLayoutMultipleBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutMultipleBindingGenerationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_autoLayoutMultipleBindingGenerationList::current_mBindingName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutMultipleBindingGenerationList * p = (const cCollectionElement_autoLayoutMultipleBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutMultipleBindingGenerationList) ;
  return p->mObject.mProperty_mBindingName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cEnumerator_autoLayoutMultipleBindingGenerationList::current_mBoundObjectExpression (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutMultipleBindingGenerationList * p = (const cCollectionElement_autoLayoutMultipleBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutMultipleBindingGenerationList) ;
  return p->mObject.mProperty_mBoundObjectExpression ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutMultipleBindingGenerationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList ("autoLayoutMultipleBindingGenerationList",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutMultipleBindingGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutMultipleBindingGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutMultipleBindingGenerationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList GALGAS_autoLayoutMultipleBindingGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutMultipleBindingGenerationList result ;
  const GALGAS_autoLayoutMultipleBindingGenerationList * p = (const GALGAS_autoLayoutMultipleBindingGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutMultipleBindingGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutMultipleBindingGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_hStackViewInstructionGeneration_2D_weak::objectCompare (const GALGAS_hStackViewInstructionGeneration_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration_2D_weak::GALGAS_hStackViewInstructionGeneration_2D_weak (void) :
GALGAS_abstractViewInstructionGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration_2D_weak & GALGAS_hStackViewInstructionGeneration_2D_weak::operator = (const GALGAS_hStackViewInstructionGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration_2D_weak::GALGAS_hStackViewInstructionGeneration_2D_weak (const GALGAS_hStackViewInstructionGeneration & inSource) :
GALGAS_abstractViewInstructionGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration_2D_weak GALGAS_hStackViewInstructionGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_hStackViewInstructionGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration GALGAS_hStackViewInstructionGeneration_2D_weak::bang_hStackViewInstructionGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_hStackViewInstructionGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
// @vStackViewInstructionGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_vStackViewInstructionGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_vStackViewInstructionGeneration * p = (const cPtr_vStackViewInstructionGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
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


typeComparisonResult GALGAS_vStackViewInstructionGeneration::objectCompare (const GALGAS_vStackViewInstructionGeneration & inOperand) const {
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

GALGAS_vStackViewInstructionGeneration::GALGAS_vStackViewInstructionGeneration (void) :
GALGAS_abstractViewInstructionGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_vStackViewInstructionGeneration GALGAS_vStackViewInstructionGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_vStackViewInstructionGeneration::constructor_new (GALGAS_autoLayoutViewInstructionGenerationFuncCallList::constructor_emptyList (HERE),
                                                                  GALGAS_autoLayoutViewInstructionGenerationList::constructor_emptyList (HERE),
                                                                  GALGAS_autoLayoutMultipleBindingGenerationList::constructor_emptyList (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_vStackViewInstructionGeneration::GALGAS_vStackViewInstructionGeneration (const cPtr_vStackViewInstructionGeneration * inSourcePtr) :
GALGAS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_vStackViewInstructionGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_vStackViewInstructionGeneration GALGAS_vStackViewInstructionGeneration::constructor_new (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inAttribute_mFuncCallList,
                                                                                                const GALGAS_autoLayoutViewInstructionGenerationList & inAttribute_mInstructionList,
                                                                                                const GALGAS_autoLayoutMultipleBindingGenerationList & inAttribute_mMultipleBindingGenerationList
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_vStackViewInstructionGeneration result ;
  if (inAttribute_mFuncCallList.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mMultipleBindingGenerationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_vStackViewInstructionGeneration (inAttribute_mFuncCallList, inAttribute_mInstructionList, inAttribute_mMultipleBindingGenerationList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_vStackViewInstructionGeneration::setter_setMFuncCallList (GALGAS_autoLayoutViewInstructionGenerationFuncCallList inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_vStackViewInstructionGeneration * p = (cPtr_vStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
    p->mProperty_mFuncCallList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_vStackViewInstructionGeneration::setter_setMInstructionList (GALGAS_autoLayoutViewInstructionGenerationList inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_vStackViewInstructionGeneration * p = (cPtr_vStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_vStackViewInstructionGeneration::setter_setMMultipleBindingGenerationList (GALGAS_autoLayoutMultipleBindingGenerationList inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_vStackViewInstructionGeneration * p = (cPtr_vStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
    p->mProperty_mMultipleBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList GALGAS_vStackViewInstructionGeneration::readProperty_mFuncCallList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationFuncCallList () ;
  }else{
    cPtr_vStackViewInstructionGeneration * p = (cPtr_vStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
    return p->mProperty_mFuncCallList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList GALGAS_vStackViewInstructionGeneration::readProperty_mInstructionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationList () ;
  }else{
    cPtr_vStackViewInstructionGeneration * p = (cPtr_vStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
    return p->mProperty_mInstructionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList GALGAS_vStackViewInstructionGeneration::readProperty_mMultipleBindingGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutMultipleBindingGenerationList () ;
  }else{
    cPtr_vStackViewInstructionGeneration * p = (cPtr_vStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_vStackViewInstructionGeneration) ;
    return p->mProperty_mMultipleBindingGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @vStackViewInstructionGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_vStackViewInstructionGeneration::cPtr_vStackViewInstructionGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                                            const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                                            const GALGAS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (THERE),
mProperty_mFuncCallList (in_mFuncCallList),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mMultipleBindingGenerationList (in_mMultipleBindingGenerationList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_vStackViewInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_vStackViewInstructionGeneration ;
}

void cPtr_vStackViewInstructionGeneration::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@vStackViewInstructionGeneration:" ;
  mProperty_mFuncCallList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMultipleBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_vStackViewInstructionGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_vStackViewInstructionGeneration (mProperty_mFuncCallList, mProperty_mInstructionList, mProperty_mMultipleBindingGenerationList COMMA_THERE)) ;
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

typeComparisonResult GALGAS_vStackViewInstructionGeneration_2D_weak::objectCompare (const GALGAS_vStackViewInstructionGeneration_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_vStackViewInstructionGeneration_2D_weak::GALGAS_vStackViewInstructionGeneration_2D_weak (void) :
GALGAS_abstractViewInstructionGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_vStackViewInstructionGeneration_2D_weak & GALGAS_vStackViewInstructionGeneration_2D_weak::operator = (const GALGAS_vStackViewInstructionGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_vStackViewInstructionGeneration_2D_weak::GALGAS_vStackViewInstructionGeneration_2D_weak (const GALGAS_vStackViewInstructionGeneration & inSource) :
GALGAS_abstractViewInstructionGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_vStackViewInstructionGeneration_2D_weak GALGAS_vStackViewInstructionGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_vStackViewInstructionGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_vStackViewInstructionGeneration GALGAS_vStackViewInstructionGeneration_2D_weak::bang_vStackViewInstructionGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_vStackViewInstructionGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_vStackViewInstructionGeneration) ;
      result = GALGAS_vStackViewInstructionGeneration ((cPtr_vStackViewInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@vStackViewInstructionGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_vStackViewInstructionGeneration_2D_weak ("vStackViewInstructionGeneration-weak",
                                                                & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_vStackViewInstructionGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_vStackViewInstructionGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_vStackViewInstructionGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_vStackViewInstructionGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_vStackViewInstructionGeneration_2D_weak GALGAS_vStackViewInstructionGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_vStackViewInstructionGeneration_2D_weak result ;
  const GALGAS_vStackViewInstructionGeneration_2D_weak * p = (const GALGAS_vStackViewInstructionGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_vStackViewInstructionGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("vStackViewInstructionGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @autoLayoutSpaceViewInstructionGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_autoLayoutSpaceViewInstructionGeneration::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_autoLayoutSpaceViewInstructionGeneration::objectCompare (const GALGAS_autoLayoutSpaceViewInstructionGeneration & inOperand) const {
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

typeComparisonResult GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak::objectCompare (const GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak::GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak (void) :
GALGAS_abstractViewInstructionGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak & GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak::operator = (const GALGAS_autoLayoutSpaceViewInstructionGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak::GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak (const GALGAS_autoLayoutSpaceViewInstructionGeneration & inSource) :
GALGAS_abstractViewInstructionGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutSpaceViewInstructionGeneration GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak::bang_autoLayoutSpaceViewInstructionGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutSpaceViewInstructionGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutSpaceViewInstructionGeneration) ;
      result = GALGAS_autoLayoutSpaceViewInstructionGeneration ((cPtr_autoLayoutSpaceViewInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutSpaceViewInstructionGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak ("autoLayoutSpaceViewInstructionGeneration-weak",
                                                                         & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak result ;
  const GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak * p = (const GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutSpaceViewInstructionGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutSpaceViewInstructionGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @autoLayoutSeparatorInstructionGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_autoLayoutSeparatorInstructionGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_autoLayoutSeparatorInstructionGeneration * p = (const cPtr_autoLayoutSeparatorInstructionGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutSeparatorInstructionGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_horizontal.objectCompare (p->mProperty_horizontal) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_autoLayoutSeparatorInstructionGeneration::objectCompare (const GALGAS_autoLayoutSeparatorInstructionGeneration & inOperand) const {
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

GALGAS_autoLayoutSeparatorInstructionGeneration::GALGAS_autoLayoutSeparatorInstructionGeneration (void) :
GALGAS_abstractViewInstructionGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutSeparatorInstructionGeneration GALGAS_autoLayoutSeparatorInstructionGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_autoLayoutSeparatorInstructionGeneration::constructor_new (GALGAS_bool::constructor_default (HERE)
                                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutSeparatorInstructionGeneration::GALGAS_autoLayoutSeparatorInstructionGeneration (const cPtr_autoLayoutSeparatorInstructionGeneration * inSourcePtr) :
GALGAS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutSeparatorInstructionGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutSeparatorInstructionGeneration GALGAS_autoLayoutSeparatorInstructionGeneration::constructor_new (const GALGAS_bool & inAttribute_horizontal
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutSeparatorInstructionGeneration result ;
  if (inAttribute_horizontal.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autoLayoutSeparatorInstructionGeneration (inAttribute_horizontal COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutSeparatorInstructionGeneration::setter_setHorizontal (GALGAS_bool inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutSeparatorInstructionGeneration * p = (cPtr_autoLayoutSeparatorInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutSeparatorInstructionGeneration) ;
    p->mProperty_horizontal = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutSeparatorInstructionGeneration::readProperty_horizontal (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutSeparatorInstructionGeneration * p = (cPtr_autoLayoutSeparatorInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutSeparatorInstructionGeneration) ;
    return p->mProperty_horizontal ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutSeparatorInstructionGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_autoLayoutSeparatorInstructionGeneration::cPtr_autoLayoutSeparatorInstructionGeneration (const GALGAS_bool & in_horizontal
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (THERE),
mProperty_horizontal (in_horizontal) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutSeparatorInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutSeparatorInstructionGeneration ;
}

void cPtr_autoLayoutSeparatorInstructionGeneration::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "[@autoLayoutSeparatorInstructionGeneration:" ;
  mProperty_horizontal.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutSeparatorInstructionGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_autoLayoutSeparatorInstructionGeneration (mProperty_horizontal COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutSeparatorInstructionGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutSeparatorInstructionGeneration ("autoLayoutSeparatorInstructionGeneration",
                                                                 & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutSeparatorInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutSeparatorInstructionGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutSeparatorInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutSeparatorInstructionGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutSeparatorInstructionGeneration GALGAS_autoLayoutSeparatorInstructionGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutSeparatorInstructionGeneration result ;
  const GALGAS_autoLayoutSeparatorInstructionGeneration * p = (const GALGAS_autoLayoutSeparatorInstructionGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutSeparatorInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutSeparatorInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak::objectCompare (const GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak::GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak (void) :
GALGAS_abstractViewInstructionGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak & GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak::operator = (const GALGAS_autoLayoutSeparatorInstructionGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak::GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak (const GALGAS_autoLayoutSeparatorInstructionGeneration & inSource) :
GALGAS_abstractViewInstructionGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutSeparatorInstructionGeneration GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak::bang_autoLayoutSeparatorInstructionGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutSeparatorInstructionGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutSeparatorInstructionGeneration) ;
      result = GALGAS_autoLayoutSeparatorInstructionGeneration ((cPtr_autoLayoutSeparatorInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutSeparatorInstructionGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak ("autoLayoutSeparatorInstructionGeneration-weak",
                                                                         & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak result ;
  const GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak * p = (const GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutSeparatorInstructionGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutSeparatorInstructionGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @autoLayoutDividerInstructionGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_autoLayoutDividerInstructionGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_autoLayoutDividerInstructionGeneration * p = (const cPtr_autoLayoutDividerInstructionGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutDividerInstructionGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_horizontal.objectCompare (p->mProperty_horizontal) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_autoLayoutDividerInstructionGeneration::objectCompare (const GALGAS_autoLayoutDividerInstructionGeneration & inOperand) const {
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

GALGAS_autoLayoutDividerInstructionGeneration::GALGAS_autoLayoutDividerInstructionGeneration (void) :
GALGAS_abstractViewInstructionGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDividerInstructionGeneration GALGAS_autoLayoutDividerInstructionGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_autoLayoutDividerInstructionGeneration::constructor_new (GALGAS_bool::constructor_default (HERE)
                                                                         COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDividerInstructionGeneration::GALGAS_autoLayoutDividerInstructionGeneration (const cPtr_autoLayoutDividerInstructionGeneration * inSourcePtr) :
GALGAS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutDividerInstructionGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDividerInstructionGeneration GALGAS_autoLayoutDividerInstructionGeneration::constructor_new (const GALGAS_bool & inAttribute_horizontal
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDividerInstructionGeneration result ;
  if (inAttribute_horizontal.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autoLayoutDividerInstructionGeneration (inAttribute_horizontal COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDividerInstructionGeneration::setter_setHorizontal (GALGAS_bool inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDividerInstructionGeneration * p = (cPtr_autoLayoutDividerInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDividerInstructionGeneration) ;
    p->mProperty_horizontal = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutDividerInstructionGeneration::readProperty_horizontal (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutDividerInstructionGeneration * p = (cPtr_autoLayoutDividerInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDividerInstructionGeneration) ;
    return p->mProperty_horizontal ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutDividerInstructionGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_autoLayoutDividerInstructionGeneration::cPtr_autoLayoutDividerInstructionGeneration (const GALGAS_bool & in_horizontal
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (THERE),
mProperty_horizontal (in_horizontal) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutDividerInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDividerInstructionGeneration ;
}

void cPtr_autoLayoutDividerInstructionGeneration::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "[@autoLayoutDividerInstructionGeneration:" ;
  mProperty_horizontal.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutDividerInstructionGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_autoLayoutDividerInstructionGeneration (mProperty_horizontal COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutDividerInstructionGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutDividerInstructionGeneration ("autoLayoutDividerInstructionGeneration",
                                                               & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutDividerInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDividerInstructionGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutDividerInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutDividerInstructionGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDividerInstructionGeneration GALGAS_autoLayoutDividerInstructionGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDividerInstructionGeneration result ;
  const GALGAS_autoLayoutDividerInstructionGeneration * p = (const GALGAS_autoLayoutDividerInstructionGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutDividerInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDividerInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutDividerInstructionGeneration_2D_weak::objectCompare (const GALGAS_autoLayoutDividerInstructionGeneration_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDividerInstructionGeneration_2D_weak::GALGAS_autoLayoutDividerInstructionGeneration_2D_weak (void) :
GALGAS_abstractViewInstructionGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDividerInstructionGeneration_2D_weak & GALGAS_autoLayoutDividerInstructionGeneration_2D_weak::operator = (const GALGAS_autoLayoutDividerInstructionGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDividerInstructionGeneration_2D_weak::GALGAS_autoLayoutDividerInstructionGeneration_2D_weak (const GALGAS_autoLayoutDividerInstructionGeneration & inSource) :
GALGAS_abstractViewInstructionGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDividerInstructionGeneration_2D_weak GALGAS_autoLayoutDividerInstructionGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_autoLayoutDividerInstructionGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDividerInstructionGeneration GALGAS_autoLayoutDividerInstructionGeneration_2D_weak::bang_autoLayoutDividerInstructionGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutDividerInstructionGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutDividerInstructionGeneration) ;
      result = GALGAS_autoLayoutDividerInstructionGeneration ((cPtr_autoLayoutDividerInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutDividerInstructionGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutDividerInstructionGeneration_2D_weak ("autoLayoutDividerInstructionGeneration-weak",
                                                                       & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutDividerInstructionGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDividerInstructionGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutDividerInstructionGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutDividerInstructionGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDividerInstructionGeneration_2D_weak GALGAS_autoLayoutDividerInstructionGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDividerInstructionGeneration_2D_weak result ;
  const GALGAS_autoLayoutDividerInstructionGeneration_2D_weak * p = (const GALGAS_autoLayoutDividerInstructionGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutDividerInstructionGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDividerInstructionGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @autoLayoutLocalViewInstructionGeneration reference class
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

void GALGAS_autoLayoutLocalViewInstructionGeneration::setter_setMLocalView (GALGAS_string inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutLocalViewInstructionGeneration * p = (cPtr_autoLayoutLocalViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutLocalViewInstructionGeneration) ;
    p->mProperty_mLocalView = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutLocalViewInstructionGeneration::readProperty_mLocalView (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutLocalViewInstructionGeneration * p = (cPtr_autoLayoutLocalViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutLocalViewInstructionGeneration) ;
    return p->mProperty_mLocalView ;
  }
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

typeComparisonResult GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak::objectCompare (const GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak::GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak (void) :
GALGAS_abstractViewInstructionGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak & GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak::operator = (const GALGAS_autoLayoutLocalViewInstructionGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak::GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak (const GALGAS_autoLayoutLocalViewInstructionGeneration & inSource) :
GALGAS_abstractViewInstructionGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutLocalViewInstructionGeneration GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak::bang_autoLayoutLocalViewInstructionGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutLocalViewInstructionGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutLocalViewInstructionGeneration) ;
      result = GALGAS_autoLayoutLocalViewInstructionGeneration ((cPtr_autoLayoutLocalViewInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutLocalViewInstructionGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak ("autoLayoutLocalViewInstructionGeneration-weak",
                                                                         & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak result ;
  const GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak * p = (const GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutLocalViewInstructionGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutLocalViewInstructionGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  public: GALGAS_autoLayoutRegularBindingsGenerationList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_autoLayoutRegularBindingsGenerationList (const GALGAS_string & in_mBindingName,
                                                                      const GALGAS_boundObjectList & in_mBoundObjectList,
                                                                      const GALGAS_string & in_mBindingOptionsString
                                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutRegularBindingsGenerationList (const GALGAS_autoLayoutRegularBindingsGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutRegularBindingsGenerationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_autoLayoutRegularBindingsGenerationList::setter_append (GALGAS_autoLayoutRegularBindingsGenerationList_2D_element inElement,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutRegularBindingsGenerationList (inElement COMMA_THERE)) ;
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

void GALGAS_autoLayoutRegularBindingsGenerationList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                           const GALGAS_boundObjectList inOperand1,
                                                                           const GALGAS_string inOperand2,
                                                                           const GALGAS_uint inInsertionIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutRegularBindingsGenerationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
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

void GALGAS_autoLayoutRegularBindingsGenerationList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                           GALGAS_boundObjectList & outOperand1,
                                                                           GALGAS_string & outOperand2,
                                                                           const GALGAS_uint inRemoveIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_autoLayoutRegularBindingsGenerationList * p = (cCollectionElement_autoLayoutRegularBindingsGenerationList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        outOperand2.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_autoLayoutRegularBindingsGenerationList) ;
        outOperand0 = p->mObject.mProperty_mBindingName ;
        outOperand1 = p->mObject.mProperty_mBoundObjectList ;
        outOperand2 = p->mObject.mProperty_mBindingOptionsString ;
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
  public: GALGAS_boundObjectList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_boundObjectList (const GALGAS_string & in_mBoundObjectString,
                                              const GALGAS_propertyKind & in_mKind
                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_boundObjectList (const GALGAS_boundObjectList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_boundObjectList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_boundObjectList::setter_append (GALGAS_boundObjectList_2D_element inElement,
                                            C_Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_boundObjectList (inElement COMMA_THERE)) ;
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

void GALGAS_boundObjectList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                   const GALGAS_propertyKind inOperand1,
                                                   const GALGAS_uint inInsertionIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_boundObjectList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_boundObjectList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                   GALGAS_propertyKind & outOperand1,
                                                   const GALGAS_uint inRemoveIndex,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_boundObjectList * p = (cCollectionElement_boundObjectList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_boundObjectList) ;
        outOperand0 = p->mObject.mProperty_mBoundObjectString ;
        outOperand1 = p->mObject.mProperty_mKind ;
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
// @abstractBooleanMultipleBindingExpressionForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractBooleanMultipleBindingExpressionForGeneration::objectCompare (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration::GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration::GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractBooleanMultipleBindingExpressionForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractBooleanMultipleBindingExpressionForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractBooleanMultipleBindingExpressionForGeneration::cPtr_abstractBooleanMultipleBindingExpressionForGeneration (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractBooleanMultipleBindingExpressionForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration ("abstractBooleanMultipleBindingExpressionForGeneration",
                                                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_autolayoutRunBindingForGeneration_run::cEnumAssociatedValues_autolayoutRunBindingForGeneration_run (const GALGAS_string inAssociatedValue0,
                                                                                                                          const GALGAS_string inAssociatedValue1,
                                                                                                                          const GALGAS_string inAssociatedValue2
                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_autolayoutRunBindingForGeneration_run::description (C_String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_autolayoutRunBindingForGeneration_run::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run * ptr = dynamic_cast<const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run *> (inOperand) ;
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

GALGAS_autolayoutRunBindingForGeneration::GALGAS_autolayoutRunBindingForGeneration (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autolayoutRunBindingForGeneration GALGAS_autolayoutRunBindingForGeneration::constructor_none (UNUSED_LOCATION_ARGS) {
  GALGAS_autolayoutRunBindingForGeneration result ;
  result.mEnum = kEnum_none ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autolayoutRunBindingForGeneration GALGAS_autolayoutRunBindingForGeneration::constructor_run (const GALGAS_string & inAssociatedValue0,
                                                                                                    const GALGAS_string & inAssociatedValue1,
                                                                                                    const GALGAS_string & inAssociatedValue2
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_autolayoutRunBindingForGeneration result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_run ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_autolayoutRunBindingForGeneration_run (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autolayoutRunBindingForGeneration::method_run (GALGAS_string & outAssociatedValue0,
                                                           GALGAS_string & outAssociatedValue1,
                                                           GALGAS_string & outAssociatedValue2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_run) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @autolayoutRunBindingForGeneration run invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run * ptr = (const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autolayoutRunBindingForGeneration::optional_none () const {
  const bool ok = mEnum == kEnum_none ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autolayoutRunBindingForGeneration::optional_run (GALGAS_string & outAssociatedValue0,
                                                             GALGAS_string & outAssociatedValue1,
                                                             GALGAS_string & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_run ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run *) unsafePointer () ;
    // const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run * ptr = (const cEnumAssociatedValues_autolayoutRunBindingForGeneration_run *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_autolayoutRunBindingForGeneration [3] = {
  "(not built)",
  "none",
  "run"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autolayoutRunBindingForGeneration::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_none == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autolayoutRunBindingForGeneration::getter_isRun (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_run == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autolayoutRunBindingForGeneration::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<enum @autolayoutRunBindingForGeneration: " << gEnumNameArrayFor_autolayoutRunBindingForGeneration [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autolayoutRunBindingForGeneration::objectCompare (const GALGAS_autolayoutRunBindingForGeneration & inOperand) const {
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
//@autolayoutRunBindingForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autolayoutRunBindingForGeneration ("autolayoutRunBindingForGeneration",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autolayoutRunBindingForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autolayoutRunBindingForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autolayoutRunBindingForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autolayoutRunBindingForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autolayoutRunBindingForGeneration GALGAS_autolayoutRunBindingForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autolayoutRunBindingForGeneration result ;
  const GALGAS_autolayoutRunBindingForGeneration * p = (const GALGAS_autolayoutRunBindingForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autolayoutRunBindingForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autolayoutRunBindingForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding::cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding (const GALGAS_string inAssociatedValue0
                                                                                                                                                                COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding::description (C_String & ioString,
                                                                                                  const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding * ptr = dynamic_cast<const cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewGraphicControllerBindingGeneration::GALGAS_autoLayoutViewGraphicControllerBindingGeneration (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewGraphicControllerBindingGeneration GALGAS_autoLayoutViewGraphicControllerBindingGeneration::constructor_none (UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewGraphicControllerBindingGeneration result ;
  result.mEnum = kEnum_none ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewGraphicControllerBindingGeneration GALGAS_autoLayoutViewGraphicControllerBindingGeneration::constructor_binding (const GALGAS_string & inAssociatedValue0
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewGraphicControllerBindingGeneration result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_binding ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewGraphicControllerBindingGeneration::method_binding (GALGAS_string & outAssociatedValue0,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_binding) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @autoLayoutViewGraphicControllerBindingGeneration binding invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding * ptr = (const cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutViewGraphicControllerBindingGeneration::optional_none () const {
  const bool ok = mEnum == kEnum_none ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutViewGraphicControllerBindingGeneration::optional_binding (GALGAS_string & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_binding ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding *) unsafePointer () ;
    // const cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding * ptr = (const cEnumAssociatedValues_autoLayoutViewGraphicControllerBindingGeneration_binding *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_autoLayoutViewGraphicControllerBindingGeneration [3] = {
  "(not built)",
  "none",
  "binding"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewGraphicControllerBindingGeneration::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_none == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewGraphicControllerBindingGeneration::getter_isBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_binding == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewGraphicControllerBindingGeneration::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<enum @autoLayoutViewGraphicControllerBindingGeneration: " << gEnumNameArrayFor_autoLayoutViewGraphicControllerBindingGeneration [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutViewGraphicControllerBindingGeneration::objectCompare (const GALGAS_autoLayoutViewGraphicControllerBindingGeneration & inOperand) const {
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
//@autoLayoutViewGraphicControllerBindingGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration ("autoLayoutViewGraphicControllerBindingGeneration",
                                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewGraphicControllerBindingGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewGraphicControllerBindingGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewGraphicControllerBindingGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewGraphicControllerBindingGeneration GALGAS_autoLayoutViewGraphicControllerBindingGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewGraphicControllerBindingGeneration result ;
  const GALGAS_autoLayoutViewGraphicControllerBindingGeneration * p = (const GALGAS_autoLayoutViewGraphicControllerBindingGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutViewGraphicControllerBindingGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewGraphicControllerBindingGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled::cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inAssociatedValue0
                                                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled::description (C_String & ioString,
                                                                                       const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled * ptr = dynamic_cast<const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autolayoutEnabledBindingForGeneration::GALGAS_autolayoutEnabledBindingForGeneration (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autolayoutEnabledBindingForGeneration GALGAS_autolayoutEnabledBindingForGeneration::constructor_none (UNUSED_LOCATION_ARGS) {
  GALGAS_autolayoutEnabledBindingForGeneration result ;
  result.mEnum = kEnum_none ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autolayoutEnabledBindingForGeneration GALGAS_autolayoutEnabledBindingForGeneration::constructor_enabled (const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inAssociatedValue0
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autolayoutEnabledBindingForGeneration result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_enabled ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autolayoutEnabledBindingForGeneration::method_enabled (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outAssociatedValue0,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_enabled) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @autolayoutEnabledBindingForGeneration enabled invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled * ptr = (const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autolayoutEnabledBindingForGeneration::optional_none () const {
  const bool ok = mEnum == kEnum_none ;
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autolayoutEnabledBindingForGeneration::optional_enabled (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_enabled ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled *) unsafePointer () ;
    // const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled * ptr = (const cEnumAssociatedValues_autolayoutEnabledBindingForGeneration_enabled *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_autolayoutEnabledBindingForGeneration [3] = {
  "(not built)",
  "none",
  "enabled"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autolayoutEnabledBindingForGeneration::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_none == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autolayoutEnabledBindingForGeneration::getter_isEnabled (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_enabled == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autolayoutEnabledBindingForGeneration::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<enum @autolayoutEnabledBindingForGeneration: " << gEnumNameArrayFor_autolayoutEnabledBindingForGeneration [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autolayoutEnabledBindingForGeneration::objectCompare (const GALGAS_autolayoutEnabledBindingForGeneration & inOperand) const {
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
//@autolayoutEnabledBindingForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration ("autolayoutEnabledBindingForGeneration",
                                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autolayoutEnabledBindingForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autolayoutEnabledBindingForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autolayoutEnabledBindingForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autolayoutEnabledBindingForGeneration GALGAS_autolayoutEnabledBindingForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_autolayoutEnabledBindingForGeneration result ;
  const GALGAS_autolayoutEnabledBindingForGeneration * p = (const GALGAS_autolayoutEnabledBindingForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autolayoutEnabledBindingForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autolayoutEnabledBindingForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  public: GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_autoLayoutViewInstructionGenerationParameterList (const GALGAS_string & in_mParameterName,
                                                                               const GALGAS_string & in_mParameterValue
                                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutViewInstructionGenerationParameterList (const GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
} ;

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutViewInstructionGenerationParameterList::cCollectionElement_autoLayoutViewInstructionGenerationParameterList (const GALGAS_string & in_mParameterName,
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

GALGAS_autoLayoutViewInstructionGenerationParameterList GALGAS_autoLayoutViewInstructionGenerationParameterList::constructor_listWithValue (const GALGAS_string & inOperand0,
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
                                                                                         const GALGAS_string & in_mParameterName,
                                                                                         const GALGAS_string & in_mParameterValue
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = NULL ;
  macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList (in_mParameterName,
                                                                                      in_mParameterValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationParameterList::addAssign_operation (const GALGAS_string & inOperand0,
                                                                                   const GALGAS_string & inOperand1
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_autoLayoutViewInstructionGenerationParameterList::setter_append (GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element inElement,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList (inElement COMMA_THERE)) ;
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

void GALGAS_autoLayoutViewInstructionGenerationParameterList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                                    const GALGAS_string inOperand1,
                                                                                    const GALGAS_uint inInsertionIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_autoLayoutViewInstructionGenerationParameterList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                                    GALGAS_string & outOperand1,
                                                                                    const GALGAS_uint inRemoveIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
        outOperand0 = p->mObject.mProperty_mParameterName ;
        outOperand1 = p->mObject.mProperty_mParameterValue ;
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

void GALGAS_autoLayoutViewInstructionGenerationParameterList::setter_popFirst (GALGAS_string & outOperand0,
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

void GALGAS_autoLayoutViewInstructionGenerationParameterList::setter_popLast (GALGAS_string & outOperand0,
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

void GALGAS_autoLayoutViewInstructionGenerationParameterList::method_first (GALGAS_string & outOperand0,
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

void GALGAS_autoLayoutViewInstructionGenerationParameterList::method_last (GALGAS_string & outOperand0,
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

void GALGAS_autoLayoutViewInstructionGenerationParameterList::setter_setMParameterNameAtIndex (GALGAS_string inOperand,
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

GALGAS_string GALGAS_autoLayoutViewInstructionGenerationParameterList::getter_mParameterNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) attributes.ptr () ;
  GALGAS_string result ;
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

GALGAS_string cEnumerator_autoLayoutViewInstructionGenerationParameterList::current_mParameterName (LOCATION_ARGS) const {
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

typeComparisonResult GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak::objectCompare (const GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak::GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak (void) :
GALGAS_abstractViewInstructionGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak & GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak::operator = (const GALGAS_autoLayoutComputedViewInstructionGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak::GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak (const GALGAS_autoLayoutComputedViewInstructionGeneration & inSource) :
GALGAS_abstractViewInstructionGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration GALGAS_autoLayoutComputedViewInstructionGeneration_2D_weak::bang_autoLayoutComputedViewInstructionGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutComputedViewInstructionGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
//
//Extension method '@autoLayoutViewInstructionGenerationFuncCallList generate'
//
//----------------------------------------------------------------------------------------------------------------------

void extensionMethod_generate (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList inObject,
                               const GALGAS_string constinArgument_inIndentation,
                               GALGAS_string & ioArgument_ioStr,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_autoLayoutViewInstructionGenerationFuncCallList temp_0 = inObject ;
  cEnumerator_autoLayoutViewInstructionGenerationFuncCallList enumerator_78612 (temp_0, kENUMERATION_UP) ;
  while (enumerator_78612.hasCurrentObject ()) {
    ioArgument_ioStr.plusAssign_operation(constinArgument_inIndentation.add_operation (GALGAS_string ("  ."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1828)).add_operation (enumerator_78612.current_mFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1828)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1828)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1828)) ;
    cEnumerator_autoLayoutViewInstructionGenerationParameterList enumerator_78721 (enumerator_78612.current_mParameters (HERE), kENUMERATION_UP) ;
    while (enumerator_78721.hasCurrentObject ()) {
      ioArgument_ioStr.plusAssign_operation(enumerator_78721.current_mParameterName (HERE).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1830)).add_operation (enumerator_78721.current_mParameterValue (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1830)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1830)) ;
      if (enumerator_78721.hasNextObject ()) {
        ioArgument_ioStr.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1831)) ;
      }
      enumerator_78721.gotoNextObject () ;
    }
    ioArgument_ioStr.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1833)) ;
    enumerator_78612.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractViewGeneration generateViewBuilder'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateViewBuilder (const cPtr_abstractViewGeneration * inObject,
                                                       const GALGAS_bool in_inPreferences,
                                                       const GALGAS_string in_inViewName,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateViewBuilder (in_inPreferences, in_inViewName, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractViewInstructionGeneration generateViewInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string callExtensionGetter_generateViewInstruction (const cPtr_abstractViewInstructionGeneration * inObject,
                                                           const GALGAS_bool in_inPreferences,
                                                           const GALGAS_string in_inName,
                                                           const GALGAS_string in_inIndentation,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GALGAS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateViewInstruction (in_inPreferences, in_inName, in_inIndentation, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_outletClassDeclarationAST_2D_weak::objectCompare (const GALGAS_outletClassDeclarationAST_2D_weak & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST_2D_weak::GALGAS_outletClassDeclarationAST_2D_weak (void) :
GALGAS_abstractDeclarationAST_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST_2D_weak & GALGAS_outletClassDeclarationAST_2D_weak::operator = (const GALGAS_outletClassDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST_2D_weak::GALGAS_outletClassDeclarationAST_2D_weak (const GALGAS_outletClassDeclarationAST & inSource) :
GALGAS_abstractDeclarationAST_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST_2D_weak GALGAS_outletClassDeclarationAST_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_outletClassDeclarationAST_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST GALGAS_outletClassDeclarationAST_2D_weak::bang_outletClassDeclarationAST_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassDeclarationAST result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
  public: GALGAS_bindingOptionList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_bindingOptionList (const GALGAS_lstring & in_mOptionName,
                                                const GALGAS_abstractDefaultValue & in_mOptionValue
                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_bindingOptionList (const GALGAS_bindingOptionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_bindingOptionList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_bindingOptionList::setter_append (GALGAS_bindingOptionList_2D_element inElement,
                                              C_Compiler * /* inCompiler */
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_bindingOptionList (inElement COMMA_THERE)) ;
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

void GALGAS_bindingOptionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                     const GALGAS_abstractDefaultValue inOperand1,
                                                     const GALGAS_uint inInsertionIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_bindingOptionList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_bindingOptionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                     GALGAS_abstractDefaultValue & outOperand1,
                                                     const GALGAS_uint inRemoveIndex,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_bindingOptionList * p = (cCollectionElement_bindingOptionList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
        outOperand0 = p->mObject.mProperty_mOptionName ;
        outOperand1 = p->mObject.mProperty_mOptionValue ;
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
// @abstractDefaultValue reference class
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractDefaultValue::objectCompare (const GALGAS_abstractDefaultValue & inOperand) const {
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

GALGAS_abstractDefaultValue::GALGAS_abstractDefaultValue (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDefaultValue::GALGAS_abstractDefaultValue (const cPtr_abstractDefaultValue * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDefaultValue) ;
}
//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractDefaultValue class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractDefaultValue::cPtr_abstractDefaultValue (LOCATION_ARGS) :
acStrongPtr_class (THERE) {
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
  public: GALGAS_outletBindingModelList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_outletBindingModelList (const GALGAS_propertyKind & in_mKind,
                                                     const GALGAS_location & in_mErrorLocation
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_outletBindingModelList (const GALGAS_outletBindingModelList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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
  if (isValid ()) {
    if (inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_outletBindingModelList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_outletBindingModelList::setter_append (GALGAS_outletBindingModelList_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_outletBindingModelList (inElement COMMA_THERE)) ;
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

void GALGAS_outletBindingModelList::setter_insertAtIndex (const GALGAS_propertyKind inOperand0,
                                                          const GALGAS_location inOperand1,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_outletBindingModelList (inOperand0, inOperand1 COMMA_THERE)) ;
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

void GALGAS_outletBindingModelList::setter_removeAtIndex (GALGAS_propertyKind & outOperand0,
                                                          GALGAS_location & outOperand1,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_outletBindingModelList * p = (cCollectionElement_outletBindingModelList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        outOperand1.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_outletBindingModelList) ;
        outOperand0 = p->mObject.mProperty_mKind ;
        outOperand1 = p->mObject.mProperty_mErrorLocation ;
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

cEnumAssociatedValues_propertyKind_property::cEnumAssociatedValues_propertyKind_property (const GALGAS_typeKind inAssociatedValue0,
                                                                                          const GALGAS_propertyAccessibility inAssociatedValue1
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

cEnumAssociatedValues_propertyKind_toMany::cEnumAssociatedValues_propertyKind_toMany (const GALGAS_lstring inAssociatedValue0,
                                                                                      const GALGAS_propertyAccessibility inAssociatedValue1,
                                                                                      const GALGAS_bool inAssociatedValue2,
                                                                                      const GALGAS_toManyRelationshipOptionAST inAssociatedValue3
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

cEnumAssociatedValues_propertyKind_toOne::cEnumAssociatedValues_propertyKind_toOne (const GALGAS_lstring inAssociatedValue0,
                                                                                    const GALGAS_propertyAccessibility inAssociatedValue1,
                                                                                    const GALGAS_bool inAssociatedValue2,
                                                                                    const GALGAS_toOneOppositeRelationship inAssociatedValue3,
                                                                                    const GALGAS_bool inAssociatedValue4
                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2),
mAssociatedValue3 (inAssociatedValue3),
mAssociatedValue4 (inAssociatedValue4) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_propertyKind_toOne::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  mAssociatedValue3.description (ioString, inIndentation) ;
  mAssociatedValue4.description (ioString, inIndentation) ;
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
  if (result == kOperandEqual) {
    result = mAssociatedValue4.objectCompare (ptr->mAssociatedValue4) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_propertyKind_arrayController::cEnumAssociatedValues_propertyKind_arrayController (const GALGAS_lstring inAssociatedValue0,
                                                                                                        const GALGAS_bool inAssociatedValue1
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

cEnumAssociatedValues_propertyKind_selectionController::cEnumAssociatedValues_propertyKind_selectionController (const GALGAS_string inAssociatedValue0
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
                                                            const GALGAS_toOneOppositeRelationship & inAssociatedValue3,
                                                            const GALGAS_bool & inAssociatedValue4
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_propertyKind result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid () && inAssociatedValue3.isValid () && inAssociatedValue4.isValid ()) {
    result.mEnum = kEnum_toOne ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_propertyKind_toOne (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3, inAssociatedValue4 COMMA_THERE)) ;
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
                                        GALGAS_bool & outAssociatedValue4,
                                        C_Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_toOne) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    outAssociatedValue3.drop () ;
    outAssociatedValue4.drop () ;
    C_String s ;
    s << "method @propertyKind toOne invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_propertyKind_toOne * ptr = (const cEnumAssociatedValues_propertyKind_toOne *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
    outAssociatedValue4 = ptr->mAssociatedValue4 ;
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

bool GALGAS_propertyKind::optional_property (GALGAS_typeKind & outAssociatedValue0,
                                             GALGAS_propertyAccessibility & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_property ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_propertyKind_property *) unsafePointer () ;
    // const cEnumAssociatedValues_propertyKind_property * ptr = (const cEnumAssociatedValues_propertyKind_property *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyKind::optional_toMany (GALGAS_lstring & outAssociatedValue0,
                                           GALGAS_propertyAccessibility & outAssociatedValue1,
                                           GALGAS_bool & outAssociatedValue2,
                                           GALGAS_toManyRelationshipOptionAST & outAssociatedValue3) const {
  const bool ok = mEnum == kEnum_toMany ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_propertyKind_toMany *) unsafePointer () ;
    // const cEnumAssociatedValues_propertyKind_toMany * ptr = (const cEnumAssociatedValues_propertyKind_toMany *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyKind::optional_toOne (GALGAS_lstring & outAssociatedValue0,
                                          GALGAS_propertyAccessibility & outAssociatedValue1,
                                          GALGAS_bool & outAssociatedValue2,
                                          GALGAS_toOneOppositeRelationship & outAssociatedValue3,
                                          GALGAS_bool & outAssociatedValue4) const {
  const bool ok = mEnum == kEnum_toOne ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_propertyKind_toOne *) unsafePointer () ;
    // const cEnumAssociatedValues_propertyKind_toOne * ptr = (const cEnumAssociatedValues_propertyKind_toOne *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
    outAssociatedValue3 = ptr->mAssociatedValue3 ;
    outAssociatedValue4 = ptr->mAssociatedValue4 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyKind::optional_arrayController (GALGAS_lstring & outAssociatedValue0,
                                                    GALGAS_bool & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_arrayController ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_propertyKind_arrayController *) unsafePointer () ;
    // const cEnumAssociatedValues_propertyKind_arrayController * ptr = (const cEnumAssociatedValues_propertyKind_arrayController *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyKind::optional_selectionController (GALGAS_string & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_selectionController ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_propertyKind_selectionController *) unsafePointer () ;
    // const cEnumAssociatedValues_propertyKind_selectionController * ptr = (const cEnumAssociatedValues_propertyKind_selectionController *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
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

cEnumAssociatedValues_observablePropertyAST_rootProperty::cEnumAssociatedValues_observablePropertyAST_rootProperty (const GALGAS_lstring inAssociatedValue0
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

cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption::cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption (const GALGAS_lstring inAssociatedValue0,
                                                                                                                                        const GALGAS_lstring inAssociatedValue1
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

cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship::cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship (const GALGAS_lstring inAssociatedValue0,
                                                                                                                                            const GALGAS_lstring inAssociatedValue1
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

cEnumAssociatedValues_observablePropertyAST_rootPropertyNone::cEnumAssociatedValues_observablePropertyAST_rootPropertyNone (const GALGAS_lstring inAssociatedValue0
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

cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty::cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty (const GALGAS_location inAssociatedValue0
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

cEnumAssociatedValues_observablePropertyAST_selfProperty::cEnumAssociatedValues_observablePropertyAST_selfProperty (const GALGAS_lstring inAssociatedValue0
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

cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption::cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption (const GALGAS_lstring inAssociatedValue0,
                                                                                                                                        const GALGAS_lstring inAssociatedValue1
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

cEnumAssociatedValues_observablePropertyAST_selfPropertyArray::cEnumAssociatedValues_observablePropertyAST_selfPropertyArray (const GALGAS_lstring inAssociatedValue0,
                                                                                                                              const GALGAS_lstring inAssociatedValue1
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

cEnumAssociatedValues_observablePropertyAST_selfPropertyObject::cEnumAssociatedValues_observablePropertyAST_selfPropertyObject (const GALGAS_lstring inAssociatedValue0,
                                                                                                                                const GALGAS_lstring inAssociatedValue1
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

cEnumAssociatedValues_observablePropertyAST_selfPropertyNone::cEnumAssociatedValues_observablePropertyAST_selfPropertyNone (const GALGAS_lstring inAssociatedValue0
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

cEnumAssociatedValues_observablePropertyAST_prefsProperty::cEnumAssociatedValues_observablePropertyAST_prefsProperty (const GALGAS_lstring inAssociatedValue0
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

cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption::cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption (const GALGAS_lstring inAssociatedValue0,
                                                                                                                                          const GALGAS_lstring inAssociatedValue1
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

cEnumAssociatedValues_observablePropertyAST_selfControllerProperty::cEnumAssociatedValues_observablePropertyAST_selfControllerProperty (const GALGAS_lstring inAssociatedValue0,
                                                                                                                                        const GALGAS_lstring inAssociatedValue1
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

cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty::cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty (const GALGAS_lstring inAssociatedValue0,
                                                                                                                                                          const GALGAS_lstring inAssociatedValue1,
                                                                                                                                                          const GALGAS_lstring inAssociatedValue2
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

cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties::cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties (const GALGAS_lstring inAssociatedValue0,
                                                                                                                                                  const GALGAS_lstring inAssociatedValue1,
                                                                                                                                                  const GALGAS_lstring inAssociatedValue2
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

cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty::cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty (const GALGAS_lstring inAssociatedValue0,
                                                                                                                                              const GALGAS_lstring inAssociatedValue1
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

cEnumAssociatedValues_observablePropertyAST_signatureProperty::cEnumAssociatedValues_observablePropertyAST_signatureProperty (const GALGAS_location inAssociatedValue0
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

cEnumAssociatedValues_observablePropertyAST_versionProperty::cEnumAssociatedValues_observablePropertyAST_versionProperty (const GALGAS_location inAssociatedValue0
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

cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty::cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty (const GALGAS_location inAssociatedValue0
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

cEnumAssociatedValues_observablePropertyAST_superProperty::cEnumAssociatedValues_observablePropertyAST_superProperty (const GALGAS_lstring inAssociatedValue0,
                                                                                                                      const GALGAS_lstring inAssociatedValue1
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

cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue::cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue (const GALGAS_lstring inAssociatedValue0,
                                                                                                                                                      const GALGAS_lstring inAssociatedValue1,
                                                                                                                                                      const GALGAS_abstractDefaultValue inAssociatedValue2
                                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1),
mAssociatedValue2 (inAssociatedValue2) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue::description (C_String & ioString,
                                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  mAssociatedValue2.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue * ptr = dynamic_cast<const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue *> (inOperand) ;
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

GALGAS_observablePropertyAST GALGAS_observablePropertyAST::constructor_superPropertyWithDefaultValue (const GALGAS_lstring & inAssociatedValue0,
                                                                                                      const GALGAS_lstring & inAssociatedValue1,
                                                                                                      const GALGAS_abstractDefaultValue & inAssociatedValue2
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyAST result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid () && inAssociatedValue2.isValid ()) {
    result.mEnum = kEnum_superPropertyWithDefaultValue ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2 COMMA_THERE)) ;
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

void GALGAS_observablePropertyAST::method_superPropertyWithDefaultValue (GALGAS_lstring & outAssociatedValue0,
                                                                         GALGAS_lstring & outAssociatedValue1,
                                                                         GALGAS_abstractDefaultValue & outAssociatedValue2,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_superPropertyWithDefaultValue) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    outAssociatedValue2.drop () ;
    C_String s ;
    s << "method @observablePropertyAST superPropertyWithDefaultValue invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue * ptr = (const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyAST::optional_rootProperty (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_rootProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) unsafePointer () ;
    // const cEnumAssociatedValues_observablePropertyAST_rootProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyAST::optional_rootPropertyWithOption (GALGAS_lstring & outAssociatedValue0,
                                                                    GALGAS_lstring & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_rootPropertyWithOption ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) unsafePointer () ;
    // const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * ptr = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyAST::optional_rootPropertyRelationship (GALGAS_lstring & outAssociatedValue0,
                                                                      GALGAS_lstring & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_rootPropertyRelationship ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) unsafePointer () ;
    // const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * ptr = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyAST::optional_rootPropertyNone (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_rootPropertyNone ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) unsafePointer () ;
    // const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * ptr = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyAST::optional_selfWithoutProperty (GALGAS_location & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_selfWithoutProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty *) unsafePointer () ;
    // const cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfWithoutProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyAST::optional_selfProperty (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_selfProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) unsafePointer () ;
    // const cEnumAssociatedValues_observablePropertyAST_selfProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyAST::optional_selfPropertyWithOption (GALGAS_lstring & outAssociatedValue0,
                                                                    GALGAS_lstring & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_selfPropertyWithOption ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) unsafePointer () ;
    // const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyAST::optional_selfPropertyArray (GALGAS_lstring & outAssociatedValue0,
                                                               GALGAS_lstring & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_selfPropertyArray ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) unsafePointer () ;
    // const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyAST::optional_selfPropertyObject (GALGAS_lstring & outAssociatedValue0,
                                                                GALGAS_lstring & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_selfPropertyObject ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) unsafePointer () ;
    // const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyAST::optional_selfPropertyNone (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_selfPropertyNone ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) unsafePointer () ;
    // const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyAST::optional_prefsProperty (GALGAS_lstring & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_prefsProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) unsafePointer () ;
    // const cEnumAssociatedValues_observablePropertyAST_prefsProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyAST::optional_prefsPropertyWithOption (GALGAS_lstring & outAssociatedValue0,
                                                                     GALGAS_lstring & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_prefsPropertyWithOption ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) unsafePointer () ;
    // const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * ptr = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyAST::optional_selfControllerProperty (GALGAS_lstring & outAssociatedValue0,
                                                                    GALGAS_lstring & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_selfControllerProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) unsafePointer () ;
    // const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyAST::optional_selfControllerSecondaryProperty (GALGAS_lstring & outAssociatedValue0,
                                                                             GALGAS_lstring & outAssociatedValue1,
                                                                             GALGAS_lstring & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_selfControllerSecondaryProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) unsafePointer () ;
    // const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyAST::optional_selfControllerAllProperties (GALGAS_lstring & outAssociatedValue0,
                                                                         GALGAS_lstring & outAssociatedValue1,
                                                                         GALGAS_lstring & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_selfControllerAllProperties ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) unsafePointer () ;
    // const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyAST::optional_selfControllerOneProperty (GALGAS_lstring & outAssociatedValue0,
                                                                       GALGAS_lstring & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_selfControllerOneProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) unsafePointer () ;
    // const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyAST::optional_signatureProperty (GALGAS_location & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_signatureProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_observablePropertyAST_signatureProperty *) unsafePointer () ;
    // const cEnumAssociatedValues_observablePropertyAST_signatureProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_signatureProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyAST::optional_versionProperty (GALGAS_location & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_versionProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_observablePropertyAST_versionProperty *) unsafePointer () ;
    // const cEnumAssociatedValues_observablePropertyAST_versionProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_versionProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyAST::optional_versionShouldChangeProperty (GALGAS_location & outAssociatedValue0) const {
  const bool ok = mEnum == kEnum_versionShouldChangeProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty *) unsafePointer () ;
    // const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyAST::optional_superProperty (GALGAS_lstring & outAssociatedValue0,
                                                           GALGAS_lstring & outAssociatedValue1) const {
  const bool ok = mEnum == kEnum_superProperty ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) unsafePointer () ;
    // const cEnumAssociatedValues_observablePropertyAST_superProperty * ptr = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyAST::optional_superPropertyWithDefaultValue (GALGAS_lstring & outAssociatedValue0,
                                                                           GALGAS_lstring & outAssociatedValue1,
                                                                           GALGAS_abstractDefaultValue & outAssociatedValue2) const {
  const bool ok = mEnum == kEnum_superPropertyWithDefaultValue ;
  if (ok) {
    const auto * ptr = (const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue *) unsafePointer () ;
    // const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue * ptr = (const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
    outAssociatedValue2 = ptr->mAssociatedValue2 ;
  }
  return ok ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_observablePropertyAST [22] = {
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
  "superProperty",
  "superPropertyWithDefaultValue"
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

GALGAS_bool GALGAS_observablePropertyAST::getter_isSuperPropertyWithDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_superPropertyWithDefaultValue == mEnum) ;
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
  public: GALGAS_observablePropertyList_2D_element mObject ;

//--- Constructors
  public: cCollectionElement_observablePropertyList (const GALGAS_observablePropertyAST & in_mObservableProperty
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_observablePropertyList (const GALGAS_observablePropertyList_2D_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements
  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;
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
  if (isValid ()) {
    if (inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_observablePropertyList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_observablePropertyList::setter_append (GALGAS_observablePropertyList_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inElement.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_observablePropertyList (inElement COMMA_THERE)) ;
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

void GALGAS_observablePropertyList::setter_insertAtIndex (const GALGAS_observablePropertyAST inOperand0,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inInsertionIndex.isValid () && inOperand0.isValid ()) {
      cCollectionElement * p = NULL ;
      macroMyNew (p, cCollectionElement_observablePropertyList (inOperand0 COMMA_THERE)) ;
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

void GALGAS_observablePropertyList::setter_removeAtIndex (GALGAS_observablePropertyAST & outOperand0,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    if (inRemoveIndex.isValid ()) {
      capCollectionElement attributes ;
      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
      cCollectionElement_observablePropertyList * p = (cCollectionElement_observablePropertyList *) attributes.ptr () ;
      if (NULL == p) {
        outOperand0.drop () ;
        drop () ;
      }else{
        macroValidSharedObject (p, cCollectionElement_observablePropertyList) ;
        outOperand0 = p->mObject.mProperty_mObservableProperty ;
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
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_7239 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_7168_propertyName = extractPtr_7239->mAssociatedValue0 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 189)).add_operation (extractedValue_7168_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 189)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 189)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_7353 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_7286_propertyName = extractPtr_7353->mAssociatedValue0 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 191)).add_operation (extractedValue_7286_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 191)).add_operation (GALGAS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 191)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_7530 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_7406_propertyName = extractPtr_7530->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_7426_optionName = extractPtr_7530->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 193)).add_operation (extractedValue_7406_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 193)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 193)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 193)).add_operation (extractedValue_7426_optionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 193)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 193)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_7666 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_7589_relationshipName = extractPtr_7666->mAssociatedValue0 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 195)).add_operation (extractedValue_7589_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 195)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 195)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfWithoutProperty:
    {
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("objectIndex"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 197)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_7836 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_7781_propertyName = extractPtr_7836->mAssociatedValue0 ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_7781_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 199)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 199)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_7997 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_7889_propertyName = extractPtr_7997->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_7909_optionName = extractPtr_7997->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_7889_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 201)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 201)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 201)).add_operation (extractedValue_7909_optionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 201)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 201)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_8136 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_8045_propertyName = extractPtr_8136->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_8081_elementPropertyName = extractPtr_8136->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_8045_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 203)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 203)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_8306 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_8185_propertyName = extractPtr_8306->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_8214_elementPropertyName = extractPtr_8306->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_8185_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 205)).add_operation (GALGAS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 205)).add_operation (extractedValue_8214_elementPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 205)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 205)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_8404 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_8353_propertyName = extractPtr_8404->mAssociatedValue0 ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_8353_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 207)).add_operation (GALGAS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 207)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_8511 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_8448_propertyName = extractPtr_8511->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("preferences_").add_operation (extractedValue_8448_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 209)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 209)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_8681 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_8565_propertyName = extractPtr_8681->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_8585_optionName = extractPtr_8681->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("preferences_").add_operation (extractedValue_8565_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 211)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 211)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 211)).add_operation (extractedValue_8585_optionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 211)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 211)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_8836 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_8736_controllerName = extractPtr_8836->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_8758_propertyName = extractPtr_8836->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_8736_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 213)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 213)).add_operation (extractedValue_8758_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 213)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 213)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_9075 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_8900_controllerName = extractPtr_9075->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_8922_propertyName = extractPtr_9075->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_8953_secondaryPropertyName = extractPtr_9075->mAssociatedValue2 ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_8900_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 215)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 215)).add_operation (extractedValue_8922_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 215)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 215)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 215)).add_operation (extractedValue_8953_secondaryPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 215)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 215)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_9237 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_9135_controllerName = extractPtr_9237->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_9157_propertyName = extractPtr_9237->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_9135_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 217)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 217)).add_operation (extractedValue_9157_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 217)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 217)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_9395 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_9295_controllerName = extractPtr_9395->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_9317_propertyName = extractPtr_9395->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_9295_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 219)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 219)).add_operation (extractedValue_9317_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 219)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 219)) ;
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
      const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_9755 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_9700_propertyName = extractPtr_9755->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_9700_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 227)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 227)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_superPropertyWithDefaultValue:
    {
      const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue * extractPtr_9874 = (const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_9817_propertyName = extractPtr_9874->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_9817_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 229)).add_operation (GALGAS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 229)) ;
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
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_10187 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_10145_propertyName = extractPtr_10187->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("root_").add_operation (extractedValue_10145_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 238)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone * extractPtr_10287 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_10235_propertyName = extractPtr_10287->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("root_").add_operation (extractedValue_10235_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 240)).add_operation (GALGAS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 240)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_10421 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_10340_propertyName = extractPtr_10421->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_10360_optionName = extractPtr_10421->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("root_").add_operation (extractedValue_10340_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 242)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 242)).add_operation (extractedValue_10360_optionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 242)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_10583 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_10480_relationshipName = extractPtr_10583->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_10509_elementPropertyName = extractPtr_10583->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("root_").add_operation (extractedValue_10480_relationshipName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 244)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 244)).add_operation (extractedValue_10509_elementPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 244)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfWithoutProperty:
    {
      result_outResult = GALGAS_string ("self_address") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_10732 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_10690_propertyName = extractPtr_10732->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_10690_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 248)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_10866 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_10785_propertyName = extractPtr_10866->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_10805_optionName = extractPtr_10866->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_10785_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 250)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 250)).add_operation (extractedValue_10805_optionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 250)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_11013 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_10914_propertyName = extractPtr_11013->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_10943_elementPropertyName = extractPtr_11013->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_10914_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 252)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 252)).add_operation (extractedValue_10943_elementPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 252)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyObject:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject * extractPtr_11161 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyObject *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_11062_propertyName = extractPtr_11161->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_11091_elementPropertyName = extractPtr_11161->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_11062_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 254)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 254)).add_operation (extractedValue_11091_elementPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 254)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyNone:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone * extractPtr_11260 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyNone *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_11208_propertyName = extractPtr_11260->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_11208_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 256)).add_operation (GALGAS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 256)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_11347 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_11304_propertyName = extractPtr_11347->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("prefs_").add_operation (extractedValue_11304_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 258)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_11483 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_11401_propertyName = extractPtr_11483->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_11421_optionName = extractPtr_11483->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("prefs_").add_operation (extractedValue_11401_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 260)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 260)).add_operation (extractedValue_11421_optionName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 260)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty * extractPtr_11625 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_11538_controllerName = extractPtr_11625->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_11560_propertyName = extractPtr_11625->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_11538_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 262)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 262)).add_operation (extractedValue_11560_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 262)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty * extractPtr_11837 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_11689_controllerName = extractPtr_11837->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_11711_propertyName = extractPtr_11837->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_11742_secondaryPropertyName = extractPtr_11837->mAssociatedValue2 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_11689_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 264)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 264)).add_operation (extractedValue_11711_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 264)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 264)).add_operation (extractedValue_11742_secondaryPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 264)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerAllProperties:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties * extractPtr_12049 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerAllProperties *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_11897_controllerName = extractPtr_12049->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_11919_propertyName = extractPtr_12049->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_11950_secondaryPropertyName = extractPtr_12049->mAssociatedValue2 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_11897_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 266)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 266)).add_operation (extractedValue_11919_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 266)).add_operation (GALGAS_string ("_all_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 266)).add_operation (extractedValue_11950_secondaryPropertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 266)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfControllerOneProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty * extractPtr_12209 = (const cEnumAssociatedValues_observablePropertyAST_selfControllerOneProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_12107_controllerName = extractPtr_12209->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_12129_propertyName = extractPtr_12209->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_12107_controllerName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 268)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 268)).add_operation (extractedValue_12129_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 268)).add_operation (GALGAS_string ("_all_<<2>>"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 268)) ;
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
      const cEnumAssociatedValues_observablePropertyAST_superProperty * extractPtr_12576 = (const cEnumAssociatedValues_observablePropertyAST_superProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_12488_superEntityName = extractPtr_12576->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_12510_propertyName = extractPtr_12576->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_12488_superEntityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 276)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 276)).add_operation (extractedValue_12510_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 276)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_superPropertyWithDefaultValue:
    {
      const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue * extractPtr_12729 = (const cEnumAssociatedValues_observablePropertyAST_superPropertyWithDefaultValue *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_12639_superEntityName = extractPtr_12729->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_12661_propertyName = extractPtr_12729->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self_").add_operation (extractedValue_12639_superEntityName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 278)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 278)).add_operation (extractedValue_12661_propertyName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 278)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




