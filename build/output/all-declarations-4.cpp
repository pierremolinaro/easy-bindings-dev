#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

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
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_fileGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeGroupList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList::setter_append (GALGAS_XCodeGroupList_2D_element inElement,
                                           C_Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeGroupList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
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
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeGroupList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
      outOperand0 = p->mObject.mProperty_mGroupReference ;
      outOperand1 = p->mObject.mProperty_mGroupName ;
      outOperand2 = p->mObject.mProperty_mGroupPath ;
      outOperand3 = p->mObject.mProperty_mChildrenRefs ;
    }
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
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeToolTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList::setter_append (GALGAS_XCodeToolTargetList_2D_element inElement,
                                                C_Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeToolTargetList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
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
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeToolTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList::setter_append (GALGAS_XCodeAppTargetList_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeAppTargetList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
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
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_BuildFileList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_append (GALGAS_BuildFileList_2D_element inElement,
                                          C_Compiler * /* inCompiler */
                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_BuildFileList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_insertAtIndex (const GALGAS_string inOperand0,
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
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList::setter_removeAtIndex (GALGAS_string & outOperand0,
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
      outOperand0 = p->mObject.mProperty_mFileReference ;
      outOperand1 = p->mObject.mProperty_mFileName ;
      outOperand2 = p->mObject.mProperty_mBuildReference ;
    }
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
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

GALGAS_autoLayoutToolbarItemGenerationList_2D_element::GALGAS_autoLayoutToolbarItemGenerationList_2D_element (void) :
mProperty_mTitle (),
mProperty_mInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList_2D_element::~ GALGAS_autoLayoutToolbarItemGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList_2D_element::GALGAS_autoLayoutToolbarItemGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                              const GALGAS_abstractViewInstructionGeneration & inOperand1) :
mProperty_mTitle (inOperand0),
mProperty_mInstruction (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList_2D_element GALGAS_autoLayoutToolbarItemGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                              const GALGAS_abstractViewInstructionGeneration & inOperand1 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutToolbarItemGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_autoLayoutToolbarItemGenerationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutToolbarItemGenerationList_2D_element::objectCompare (const GALGAS_autoLayoutToolbarItemGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mTitle.objectCompare (inOperand.mProperty_mTitle) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutToolbarItemGenerationList_2D_element::isValid (void) const {
  return mProperty_mTitle.isValid () && mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutToolbarItemGenerationList_2D_element::drop (void) {
  mProperty_mTitle.drop () ;
  mProperty_mInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutToolbarItemGenerationList_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @autoLayoutToolbarItemGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mTitle.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutToolbarItemGenerationList_2D_element::getter_mTitle (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTitle ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewInstructionGeneration GALGAS_autoLayoutToolbarItemGenerationList_2D_element::getter_mInstruction (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstruction ;
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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element::~ GALGAS_XCodeAppTargetList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_XCodeAppTargetList_2D_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () && mProperty_mDependentTargets.isValid () && mProperty_mResourceBuildRef.isValid () && mProperty_mResourceFileBuildRefs.isValid () && mProperty_mInfoPListFile.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mTargetRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTargetName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mProductFileReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProductFileReference ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mProductFileName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProductFileName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mBuildPhaseRefList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildPhaseRefList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildPhaseRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationListRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationListRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationSettingList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationSettingList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildConfigurationRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mFrameworksFileRefList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFrameworksFileRefList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mFrameworkBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFrameworkBuildPhaseRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS__32_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mDependentTargets (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependentTargets ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mResourceBuildRef (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResourceBuildRef ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mResourceFileBuildRefs (UNUSED_LOCATION_ARGS) const {
  return mProperty_mResourceFileBuildRefs ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mInfoPListFile (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInfoPListFile ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@XCodeAppTargetList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ("XCodeAppTargetList-element",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeAppTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeAppTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeAppTargetList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (void) :
mProperty_mFileReference (),
mProperty_mFileName (),
mProperty_mBuildReference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element::~ GALGAS_BuildFileList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (const GALGAS_string & inOperand0,
                                                                  const GALGAS_string & inOperand1,
                                                                  const GALGAS_string & inOperand2) :
mProperty_mFileReference (inOperand0),
mProperty_mFileName (inOperand1),
mProperty_mBuildReference (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_BuildFileList_2D_element (GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_BuildFileList_2D_element::isValid (void) const {
  return mProperty_mFileReference.isValid () && mProperty_mFileName.isValid () && mProperty_mBuildReference.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList_2D_element::drop (void) {
  mProperty_mFileReference.drop () ;
  mProperty_mFileName.drop () ;
  mProperty_mBuildReference.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mFileReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFileReference ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mFileName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFileName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mBuildReference (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBuildReference ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@BuildFileList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_BuildFileList_2D_element ("BuildFileList-element",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_BuildFileList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_BuildFileList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_BuildFileList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList_2D_element::GALGAS_mainXibDescriptorList_2D_element (void) :
mProperty_mLine () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList_2D_element::~ GALGAS_mainXibDescriptorList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList_2D_element::GALGAS_mainXibDescriptorList_2D_element (const GALGAS_mainXibLineDescriptorList & inOperand0) :
mProperty_mLine (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList_2D_element GALGAS_mainXibDescriptorList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_mainXibDescriptorList_2D_element (GALGAS_mainXibLineDescriptorList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList_2D_element GALGAS_mainXibDescriptorList_2D_element::constructor_new (const GALGAS_mainXibLineDescriptorList & inOperand0 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mainXibDescriptorList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_mainXibDescriptorList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_mainXibDescriptorList_2D_element::objectCompare (const GALGAS_mainXibDescriptorList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLine.objectCompare (inOperand.mProperty_mLine) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_mainXibDescriptorList_2D_element::isValid (void) const {
  return mProperty_mLine.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList_2D_element::drop (void) {
  mProperty_mLine.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList GALGAS_mainXibDescriptorList_2D_element::getter_mLine (UNUSED_LOCATION_ARGS) const {
  return mProperty_mLine ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@mainXibDescriptorList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibDescriptorList_2D_element ("mainXibDescriptorList-element",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mainXibDescriptorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibDescriptorList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mainXibDescriptorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibDescriptorList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList_2D_element::GALGAS_mainXibLineDescriptorList_2D_element (void) :
mProperty_mElement () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList_2D_element::~ GALGAS_mainXibLineDescriptorList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList_2D_element::GALGAS_mainXibLineDescriptorList_2D_element (const GALGAS_mainXibElement & inOperand0) :
mProperty_mElement (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList_2D_element GALGAS_mainXibLineDescriptorList_2D_element::constructor_new (const GALGAS_mainXibElement & inOperand0 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mainXibLineDescriptorList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_mainXibLineDescriptorList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_mainXibLineDescriptorList_2D_element::objectCompare (const GALGAS_mainXibLineDescriptorList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mElement.objectCompare (inOperand.mProperty_mElement) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_mainXibLineDescriptorList_2D_element::isValid (void) const {
  return mProperty_mElement.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList_2D_element::drop (void) {
  mProperty_mElement.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibElement GALGAS_mainXibLineDescriptorList_2D_element::getter_mElement (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElement ;
}



//----------------------------------------------------------------------------------------------------------------------
//
//@mainXibLineDescriptorList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibLineDescriptorList_2D_element ("mainXibLineDescriptorList-element",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mainXibLineDescriptorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibLineDescriptorList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mainXibLineDescriptorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibLineDescriptorList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

static const char * gNonTerminalNames_easyBindings_grammar [120] = {
  "<start_symbol>",// Index 0
  "<extern_swift_delegate>",// Index 1
  "<extern_swift_func>",// Index 2
  "<class_declaration>",// Index 3
  "<enum_declaration>",// Index 4
  "<entity_declaration>",// Index 5
  "<document_declaration>",// Index 6
  "<preferences_declaration>",// Index 7
  "<graphviz_declaration>",// Index 8
  "<autolayout_view_class_declaration>",// Index 9
  "<autolayout_formal_parameter_list>",// Index 10
  "<auto_layout_view_binding_specification>",// Index 11
  "<view_declaration>",// Index 12
  "<view_instruction_list>",// Index 13
  "<view_instruction>",// Index 14
  "<view_actual_parameter_list>",// Index 15
  "<margin>",// Index 16
  "<outlet_class_declaration>",// Index 17
  "<outlet_binding_specification>",// Index 18
  "<outlet_declaration>",// Index 19
  "<outlet_binding>",// Index 20
  "<observable_property>",// Index 21
  "<transient_declaration>",// Index 22
  "<controller_declaration>",// Index 23
  "<simple_stored_declaration>",// Index 24
  "<toOne_relationship>",// Index 25
  "<toMany_relationship>",// Index 26
  "<action_declaration>",// Index 27
  "<booleanMultipleBindingExpression>",// Index 28
  "<booleanMultipleBindingComparison>",// Index 29
  "<booleanMultipleBindingTerm>",// Index 30
  "<booleanMultipleBindingOperand>",// Index 31
  "<binding_option_list>",// Index 32
  "<column_bindings>",// Index 33
  "<explicit_value>",// Index 34
  "<xcode_project>",// Index 35
  "<main_xib>",// Index 36
  "<main_xib_line>",// Index 37
  "<select_easyBindings_5F_syntax_0>",// Index 38
  "<select_easyBindings_5F_syntax_1>",// Index 39
  "<select_easyBindings_5F_syntax_2>",// Index 40
  "<select_easyBindings_5F_syntax_3>",// Index 41
  "<select_easyBindings_5F_syntax_4>",// Index 42
  "<select_easyBindings_5F_syntax_5>",// Index 43
  "<select_easyBindings_5F_syntax_6>",// Index 44
  "<select_easyBindings_5F_syntax_7>",// Index 45
  "<select_easyBindings_5F_syntax_8>",// Index 46
  "<select_easyBindings_5F_syntax_9>",// Index 47
  "<select_easyBindings_5F_syntax_10>",// Index 48
  "<select_easyBindings_5F_syntax_11>",// Index 49
  "<select_easyBindings_5F_syntax_12>",// Index 50
  "<select_easyBindings_5F_syntax_13>",// Index 51
  "<select_easyBindings_5F_syntax_14>",// Index 52
  "<select_easyBindings_5F_syntax_15>",// Index 53
  "<select_easyBindings_5F_syntax_16>",// Index 54
  "<select_easyBindings_5F_syntax_17>",// Index 55
  "<select_easyBindings_5F_syntax_18>",// Index 56
  "<select_easyBindings_5F_syntax_19>",// Index 57
  "<select_easyBindings_5F_syntax_20>",// Index 58
  "<select_easyBindings_5F_syntax_21>",// Index 59
  "<select_easyBindings_5F_syntax_22>",// Index 60
  "<select_easyBindings_5F_syntax_23>",// Index 61
  "<select_easyBindings_5F_syntax_24>",// Index 62
  "<select_easyBindings_5F_syntax_25>",// Index 63
  "<select_easyBindings_5F_syntax_26>",// Index 64
  "<select_easyBindings_5F_syntax_27>",// Index 65
  "<select_easyBindings_5F_syntax_28>",// Index 66
  "<select_easyBindings_5F_syntax_29>",// Index 67
  "<select_easyBindings_5F_syntax_30>",// Index 68
  "<select_easyBindings_5F_syntax_31>",// Index 69
  "<select_easyBindings_5F_syntax_32>",// Index 70
  "<select_easyBindings_5F_syntax_33>",// Index 71
  "<select_easyBindings_5F_syntax_34>",// Index 72
  "<select_easyBindings_5F_syntax_35>",// Index 73
  "<select_easyBindings_5F_syntax_36>",// Index 74
  "<select_easyBindings_5F_syntax_37>",// Index 75
  "<select_easyBindings_5F_syntax_38>",// Index 76
  "<select_easyBindings_5F_syntax_39>",// Index 77
  "<select_easyBindings_5F_syntax_40>",// Index 78
  "<select_easyBindings_5F_syntax_41>",// Index 79
  "<select_easyBindings_5F_syntax_42>",// Index 80
  "<select_easyBindings_5F_syntax_43>",// Index 81
  "<select_easyBindings_5F_syntax_44>",// Index 82
  "<select_easyBindings_5F_syntax_45>",// Index 83
  "<select_easyBindings_5F_syntax_46>",// Index 84
  "<select_easyBindings_5F_syntax_47>",// Index 85
  "<select_easyBindings_5F_syntax_48>",// Index 86
  "<select_easyBindings_5F_syntax_49>",// Index 87
  "<select_easyBindings_5F_syntax_50>",// Index 88
  "<select_easyBindings_5F_syntax_51>",// Index 89
  "<select_easyBindings_5F_syntax_52>",// Index 90
  "<select_easyBindings_5F_syntax_53>",// Index 91
  "<select_easyBindings_5F_syntax_54>",// Index 92
  "<select_easyBindings_5F_syntax_55>",// Index 93
  "<select_easyBindings_5F_syntax_56>",// Index 94
  "<select_easyBindings_5F_syntax_57>",// Index 95
  "<select_easyBindings_5F_syntax_58>",// Index 96
  "<select_easyBindings_5F_syntax_59>",// Index 97
  "<select_easyBindings_5F_syntax_60>",// Index 98
  "<select_easyBindings_5F_syntax_61>",// Index 99
  "<select_easyBindings_5F_syntax_62>",// Index 100
  "<select_easyBindings_5F_syntax_63>",// Index 101
  "<select_easyBindings_5F_syntax_64>",// Index 102
  "<select_easyBindings_5F_syntax_65>",// Index 103
  "<select_easyBindings_5F_syntax_66>",// Index 104
  "<select_easyBindings_5F_syntax_67>",// Index 105
  "<select_easyBindings_5F_syntax_68>",// Index 106
  "<select_easyBindings_5F_syntax_69>",// Index 107
  "<select_easyBindings_5F_syntax_70>",// Index 108
  "<select_easyBindings_5F_syntax_71>",// Index 109
  "<select_easyBindings_5F_syntax_72>",// Index 110
  "<select_easyBindings_5F_syntax_73>",// Index 111
  "<select_easyBindings_5F_syntax_74>",// Index 112
  "<select_easyBindings_5F_syntax_75>",// Index 113
  "<select_easyBindings_5F_syntax_76>",// Index 114
  "<select_easyBindings_5F_syntax_77>",// Index 115
  "<select_easyBindings_5F_syntax_78>",// Index 116
  "<select_easyBindings_5F_syntax_79>",// Index 117
  "<select_easyBindings_5F_syntax_80>",// Index 118
  "<>"// Index 119
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
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (53)
, END
// State S1 (index = 35)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (29)
, END
// State S2 (index = 38)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (30)
, END
// State S3 (index = 41)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (31)
, END
// State S4 (index = 44)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (71)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (71)
, END
// State S5 (index = 49)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (32)
, END
// State S6 (index = 52)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (33)
, END
// State S7 (index = 55)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (34)
, END
// State S8 (index = 58)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (35)
, END
// State S9 (index = 61)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (155)
, END
// State S10 (index = 66)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (36)
, END
// State S11 (index = 69)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (37)
, END
// State S12 (index = 72)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (38)
, END
// State S13 (index = 75)
, C_Lexique_easyBindings_5F_lexique::kToken_, ACCEPT
, END
// State S14 (index = 78)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (53)
, END
// State S15 (index = 113)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (53)
, END
// State S16 (index = 148)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (53)
, END
// State S17 (index = 183)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (53)
, END
// State S18 (index = 218)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (53)
, END
// State S19 (index = 253)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (53)
, END
// State S20 (index = 288)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (53)
, END
// State S21 (index = 323)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (53)
, END
// State S22 (index = 358)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (53)
, END
// State S23 (index = 393)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (53)
, END
// State S24 (index = 428)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (53)
, END
// State S25 (index = 463)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (0)
, END
// State S26 (index = 466)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (72)
, END
// State S27 (index = 471)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, SHIFT (52)
, END
// State S28 (index = 474)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (53)
, END
// State S29 (index = 477)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (54)
, END
// State S30 (index = 480)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_struct, SHIFT (56)
, END
// State S31 (index = 485)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (58)
, END
// State S32 (index = 488)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (59)
, END
// State S33 (index = 491)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (60)
, END
// State S34 (index = 494)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (100)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (67)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S35 (index = 521)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (82)
, END
// State S36 (index = 524)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (83)
, END
// State S37 (index = 527)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (84)
, END
// State S38 (index = 530)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (85)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (86)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (87)
, END
// State S39 (index = 537)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (59)
, END
// State S40 (index = 540)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (57)
, END
// State S41 (index = 543)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (58)
, END
// State S42 (index = 546)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (61)
, END
// State S43 (index = 549)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (60)
, END
// State S44 (index = 552)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (56)
, END
// State S45 (index = 555)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (55)
, END
// State S46 (index = 558)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (62)
, END
// State S47 (index = 561)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (63)
, END
// State S48 (index = 564)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (64)
, END
// State S49 (index = 567)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (65)
, END
// State S50 (index = 570)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (73)
, END
// State S51 (index = 573)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (89)
, END
// State S52 (index = 576)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (90)
, END
// State S53 (index = 579)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (91)
, END
// State S54 (index = 582)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (53)
, END
// State S55 (index = 617)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (66)
, END
// State S56 (index = 620)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (67)
, END
// State S57 (index = 623)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (93)
, END
// State S58 (index = 626)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (94)
, END
// State S59 (index = 629)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (95)
, END
// State S60 (index = 632)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (96)
, END
// State S61 (index = 635)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (97)
, END
// State S62 (index = 638)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (224)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, REDUCE (222)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (98)
, END
// State S63 (index = 645)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (100)
, END
// State S64 (index = 648)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (101)
, END
// State S65 (index = 651)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (102)
, END
// State S66 (index = 654)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (219)
, END
// State S67 (index = 657)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (232)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, REDUCE (223)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (103)
, END
// State S68 (index = 664)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (105)
, END
// State S69 (index = 667)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (106)
, END
// State S70 (index = 670)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (107)
, END
// State S71 (index = 673)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (108)
, END
// State S72 (index = 676)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (100)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (67)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S73 (index = 703)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (100)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (67)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S74 (index = 730)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (100)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (67)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S75 (index = 757)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (100)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (67)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S76 (index = 784)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (100)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (67)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S77 (index = 811)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (100)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (67)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S78 (index = 838)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (100)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (67)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S79 (index = 865)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (116)
, END
// State S80 (index = 868)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (117)
, END
// State S81 (index = 871)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, SHIFT (118)
, END
// State S82 (index = 874)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (9)
, END
// State S83 (index = 909)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (119)
, END
// State S84 (index = 912)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (50)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (50)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (50)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (50)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (50)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (50)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, REDUCE (50)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, REDUCE (50)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (50)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (50)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (50)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (50)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (50)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (50)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (50)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (50)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (50)
, END
// State S85 (index = 947)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (285)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (285)
, END
// State S86 (index = 952)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (120)
, END
// State S87 (index = 955)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (121)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (122)
, END
// State S88 (index = 960)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (125)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (282)
, END
// State S89 (index = 965)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (127)
, END
// State S90 (index = 968)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (128)
, END
// State S91 (index = 971)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (129)
, END
// State S92 (index = 974)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (54)
, END
// State S93 (index = 977)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (130)
, END
// State S94 (index = 980)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (131)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (68)
, END
// State S95 (index = 985)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (133)
, END
// State S96 (index = 988)
, C_Lexique_easyBindings_5F_lexique::kToken_view, SHIFT (134)
, END
// State S97 (index = 991)
, C_Lexique_easyBindings_5F_lexique::kToken_calledBy, SHIFT (135)
, END
// State S98 (index = 994)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (224)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (98)
, END
// State S99 (index = 999)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (137)
, END
// State S100 (index = 1002)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (138)
, END
// State S101 (index = 1005)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (139)
, END
// State S102 (index = 1008)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (140)
, END
// State S103 (index = 1011)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (232)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (103)
, END
// State S104 (index = 1016)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (142)
, END
// State S105 (index = 1019)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (143)
, END
// State S106 (index = 1022)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (144)
, END
// State S107 (index = 1025)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (145)
, END
// State S108 (index = 1028)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (146)
, END
// State S109 (index = 1031)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (105)
, END
// State S110 (index = 1034)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (103)
, END
// State S111 (index = 1037)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (104)
, END
// State S112 (index = 1040)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (107)
, END
// State S113 (index = 1043)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (102)
, END
// State S114 (index = 1046)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (106)
, END
// State S115 (index = 1049)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (101)
, END
// State S116 (index = 1052)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (8)
, END
// State S117 (index = 1087)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (147)
, END
// State S118 (index = 1090)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (148)
, END
// State S119 (index = 1093)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (149)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (150)
, END
// State S120 (index = 1098)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (284)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (284)
, END
// State S121 (index = 1103)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (290)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (290)
, END
// State S122 (index = 1108)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (152)
, END
// State S123 (index = 1111)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (153)
, END
// State S124 (index = 1114)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (154)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (287)
, END
// State S125 (index = 1119)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (85)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (86)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (87)
, END
// State S126 (index = 1126)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (157)
, END
// State S127 (index = 1129)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (74)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (158)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, REDUCE (74)
, END
// State S128 (index = 1136)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (160)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_func, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (121)
, END
// State S129 (index = 1159)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (163)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (157)
, END
// State S130 (index = 1174)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (3)
, END
// State S131 (index = 1209)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (165)
, END
// State S132 (index = 1212)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (166)
, END
// State S133 (index = 1215)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (88)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (168)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S134 (index = 1240)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (174)
, END
// State S135 (index = 1243)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (175)
, END
// State S136 (index = 1246)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (225)
, END
// State S137 (index = 1249)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (176)
, END
// State S138 (index = 1252)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (177)
, END
// State S139 (index = 1255)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (179)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (183)
, END
// State S140 (index = 1270)
, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom, SHIFT (186)
, END
// State S141 (index = 1273)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (233)
, END
// State S142 (index = 1276)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (187)
, END
// State S143 (index = 1279)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (36)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (36)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (36)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (36)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (36)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (36)
, C_Lexique_easyBindings_5F_lexique::kToken_view, REDUCE (36)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, REDUCE (36)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (36)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (36)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (36)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (36)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (36)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (36)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (36)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (36)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (36)
, END
// State S144 (index = 1314)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (188)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (189)
, END
// State S145 (index = 1319)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (191)
, END
// State S146 (index = 1322)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (192)
, END
// State S147 (index = 1325)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (193)
, END
// State S148 (index = 1328)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (194)
, END
// State S149 (index = 1331)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (168)
, END
// State S150 (index = 1336)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (167)
, END
// State S151 (index = 1341)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (196)
, END
// State S152 (index = 1346)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (289)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (289)
, END
// State S153 (index = 1351)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (286)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (286)
, END
// State S154 (index = 1356)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (121)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (122)
, END
// State S155 (index = 1361)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (52)
, END
// State S156 (index = 1364)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (125)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (282)
, END
// State S157 (index = 1369)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (51)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (51)
, END
// State S158 (index = 1404)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (200)
, END
// State S159 (index = 1407)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (78)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (201)
, END
// State S160 (index = 1412)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (203)
, END
// State S161 (index = 1415)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (110)
, END
// State S162 (index = 1430)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_func, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (11)
, END
// State S163 (index = 1451)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (206)
, END
// State S164 (index = 1454)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (211)
, END
// State S165 (index = 1467)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (131)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (68)
, END
// State S166 (index = 1472)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (4)
, END
// State S167 (index = 1507)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, REDUCE (222)
, END
// State S168 (index = 1510)
, C_Lexique_easyBindings_5F_lexique::kToken_proxy, REDUCE (223)
, END
// State S169 (index = 1513)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (88)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (168)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S170 (index = 1538)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (88)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (168)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S171 (index = 1563)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (88)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (168)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S172 (index = 1588)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (88)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (168)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S173 (index = 1613)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (218)
, END
// State S174 (index = 1616)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (219)
, END
// State S175 (index = 1619)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (220)
, END
// State S176 (index = 1622)
, C_Lexique_easyBindings_5F_lexique::kToken_default, SHIFT (221)
, END
// State S177 (index = 1625)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (222)
, END
// State S178 (index = 1628)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (223)
, END
// State S179 (index = 1631)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, REDUCE (182)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (224)
, END
// State S180 (index = 1636)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (236)
, END
// State S181 (index = 1659)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (236)
, END
// State S182 (index = 1682)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (244)
, END
// State S183 (index = 1685)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, END
// State S184 (index = 1702)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (246)
, END
// State S185 (index = 1705)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (27)
, END
// State S186 (index = 1708)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, END
// State S187 (index = 1725)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (236)
, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom, SHIFT (248)
, C_Lexique_easyBindings_5F_lexique::kToken_inverse, SHIFT (249)
, END
// State S188 (index = 1732)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (253)
, END
// State S189 (index = 1735)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (254)
, END
// State S190 (index = 1738)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (251)
, END
// State S191 (index = 1741)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (252)
, END
// State S192 (index = 1744)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (253)
, END
// State S193 (index = 1747)
, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom, SHIFT (254)
, END
// State S194 (index = 1750)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (255)
, END
// State S195 (index = 1753)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (169)
, END
// State S196 (index = 1760)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (170)
, END
// State S197 (index = 1767)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (256)
, END
// State S198 (index = 1774)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (154)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (287)
, END
// State S199 (index = 1779)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (283)
, END
// State S200 (index = 1782)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (259)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (76)
, END
// State S201 (index = 1787)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (261)
, END
// State S202 (index = 1790)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (262)
, END
// State S203 (index = 1793)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (263)
, END
// State S204 (index = 1796)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (264)
, END
// State S205 (index = 1799)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (265)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (266)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (267)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (268)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (269)
, END
// State S206 (index = 1812)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (158)
, END
// State S207 (index = 1825)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (211)
, END
// State S208 (index = 1838)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (211)
, END
// State S209 (index = 1851)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (211)
, END
// State S210 (index = 1864)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (211)
, END
// State S211 (index = 1877)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (207)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (208)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (209)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (210)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (211)
, END
// State S212 (index = 1890)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (276)
, END
// State S213 (index = 1893)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (69)
, END
// State S214 (index = 1896)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (91)
, END
// State S215 (index = 1899)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (90)
, END
// State S216 (index = 1902)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (92)
, END
// State S217 (index = 1905)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (89)
, END
// State S218 (index = 1908)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (6)
, END
// State S219 (index = 1943)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_view, SHIFT (277)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, SHIFT (278)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (168)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S220 (index = 1972)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (2)
, END
// State S221 (index = 1999)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (285)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (286)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (287)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (288)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (289)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (290)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (291)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (292)
, END
// State S222 (index = 2016)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_view, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (30)
, END
// State S223 (index = 2051)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (179)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (183)
, END
// State S224 (index = 2066)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (296)
, END
// State S225 (index = 2069)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (297)
, END
// State S226 (index = 2072)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (236)
, END
// State S227 (index = 2095)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (299)
, END
// State S228 (index = 2098)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (300)
, END
// State S229 (index = 2101)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (43)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (43)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (43)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (43)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (43)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (43)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (43)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (43)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (43)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (43)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (43)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (43)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (43)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (43)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (43)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (43)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (43)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (43)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (43)
, END
// State S230 (index = 2140)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (301)
, END
// State S231 (index = 2143)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (302)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (201)
, END
// State S232 (index = 2188)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (192)
, END
// State S233 (index = 2231)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (193)
, END
// State S234 (index = 2274)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (194)
, END
// State S235 (index = 2317)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (304)
, END
// State S236 (index = 2320)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (236)
, END
// State S237 (index = 2343)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (40)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (40)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (40)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (40)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (40)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (40)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (40)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (40)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (40)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (40)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (40)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (40)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (40)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (40)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (40)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (40)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (40)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (40)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (40)
, END
// State S238 (index = 2382)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (179)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (183)
, END
// State S239 (index = 2397)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (237)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (237)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (237)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (237)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (237)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (237)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (237)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (237)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (237)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, SHIFT (307)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (237)
, END
// State S240 (index = 2420)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (239)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (239)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (239)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (239)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (239)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (239)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (239)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (239)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (239)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (239)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, SHIFT (309)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, SHIFT (310)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, SHIFT (311)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, SHIFT (312)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, SHIFT (313)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, SHIFT (314)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (239)
, END
// State S241 (index = 2455)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (316)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (317)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (246)
, END
// State S242 (index = 2494)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (28)
, END
// State S243 (index = 2537)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (179)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (183)
, END
// State S244 (index = 2552)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (186)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (186)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (186)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (186)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (186)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (186)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (186)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (320)
, END
// State S245 (index = 2569)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (322)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (184)
, END
// State S246 (index = 2588)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_view, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (26)
, END
// State S247 (index = 2619)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (216)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (324)
, END
// State S248 (index = 2624)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (326)
, END
// State S249 (index = 2627)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (327)
, END
// State S250 (index = 2630)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (328)
, END
// State S251 (index = 2633)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (329)
, END
// State S252 (index = 2636)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (285)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (286)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (287)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (288)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (289)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (290)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (291)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (292)
, END
// State S253 (index = 2653)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (331)
, END
// State S254 (index = 2656)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, END
// State S255 (index = 2673)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (333)
, END
// State S256 (index = 2676)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (149)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (150)
, END
// State S257 (index = 2681)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (335)
, END
// State S258 (index = 2686)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (288)
, END
// State S259 (index = 2689)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (337)
, END
// State S260 (index = 2692)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (338)
, END
// State S261 (index = 2695)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (79)
, END
// State S262 (index = 2698)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (339)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (80)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (67)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (340)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S263 (index = 2725)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (349)
, C_Lexique_easyBindings_5F_lexique::kToken_view, SHIFT (350)
, END
// State S264 (index = 2730)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (111)
, END
// State S265 (index = 2743)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (265)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (266)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (267)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (268)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (269)
, END
// State S266 (index = 2756)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (265)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (266)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (267)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (268)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (269)
, END
// State S267 (index = 2769)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (265)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (266)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (267)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (268)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (269)
, END
// State S268 (index = 2782)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (265)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (266)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (267)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (268)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (269)
, END
// State S269 (index = 2795)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (265)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (266)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (267)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (268)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (269)
, END
// State S270 (index = 2808)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (357)
, END
// State S271 (index = 2811)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (160)
, END
// State S272 (index = 2814)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (161)
, END
// State S273 (index = 2817)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (162)
, END
// State S274 (index = 2820)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (163)
, END
// State S275 (index = 2823)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (164)
, END
// State S276 (index = 2826)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (24)
, END
// State S277 (index = 2861)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (358)
, END
// State S278 (index = 2864)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (359)
, END
// State S279 (index = 2867)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_view, SHIFT (277)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, SHIFT (278)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (168)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S280 (index = 2896)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_view, SHIFT (277)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, SHIFT (278)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (168)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S281 (index = 2925)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_view, SHIFT (277)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, SHIFT (278)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (168)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S282 (index = 2954)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_view, SHIFT (277)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, SHIFT (278)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (168)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S283 (index = 2983)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_view, SHIFT (277)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, SHIFT (278)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (168)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S284 (index = 3012)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (365)
, END
// State S285 (index = 3015)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (279)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (279)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (279)
, END
// State S286 (index = 3022)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (280)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (280)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (280)
, END
// State S287 (index = 3029)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (366)
, END
// State S288 (index = 3032)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (274)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (274)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (274)
, END
// State S289 (index = 3039)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (275)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (275)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (275)
, END
// State S290 (index = 3046)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (276)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (276)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (276)
, END
// State S291 (index = 3053)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (367)
, END
// State S292 (index = 3056)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (278)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (278)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (278)
, END
// State S293 (index = 3063)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (368)
, END
// State S294 (index = 3066)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (49)
, END
// State S295 (index = 3073)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (176)
, END
// State S296 (index = 3076)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, REDUCE (183)
, END
// State S297 (index = 3079)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (179)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (183)
, END
// State S298 (index = 3094)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (370)
, END
// State S299 (index = 3097)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (371)
, END
// State S300 (index = 3100)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (372)
, END
// State S301 (index = 3103)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (373)
, C_Lexique_easyBindings_5F_lexique::kToken_one, SHIFT (374)
, END
// State S302 (index = 3108)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (376)
, END
// State S303 (index = 3111)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (189)
, END
// State S304 (index = 3154)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (377)
, END
// State S305 (index = 3157)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (41)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (41)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (41)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (41)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (41)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (41)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (41)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (41)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (41)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (41)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (41)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (41)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (41)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (41)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (41)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (41)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (41)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (41)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (41)
, END
// State S306 (index = 3196)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (178)
, END
// State S307 (index = 3199)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (236)
, END
// State S308 (index = 3222)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (37)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (37)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (37)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (37)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (37)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (37)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (37)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (37)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (37)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (37)
, END
// State S309 (index = 3243)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (236)
, END
// State S310 (index = 3266)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (236)
, END
// State S311 (index = 3289)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (236)
, END
// State S312 (index = 3312)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (236)
, END
// State S313 (index = 3335)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (236)
, END
// State S314 (index = 3358)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (236)
, END
// State S315 (index = 3381)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (38)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (38)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (38)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (38)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (38)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (38)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (38)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (38)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (38)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (38)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (38)
, END
// State S316 (index = 3404)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (236)
, END
// State S317 (index = 3427)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (236)
, END
// State S318 (index = 3450)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (39)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (39)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (39)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (39)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (39)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (39)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (39)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (39)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (39)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (39)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (39)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (39)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (39)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (39)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (39)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (39)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (39)
, END
// State S319 (index = 3485)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (179)
, END
// State S320 (index = 3488)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (387)
, END
// State S321 (index = 3491)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (179)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (183)
, END
// State S322 (index = 3506)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, END
// State S323 (index = 3523)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (249)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (390)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (249)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (249)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (249)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (249)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (249)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (249)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (249)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (249)
, END
// State S324 (index = 3544)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, END
// State S325 (index = 3561)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (394)
, END
// State S326 (index = 3564)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (395)
, END
// State S327 (index = 3567)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (396)
, END
// State S328 (index = 3570)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (35)
, END
// State S329 (index = 3601)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (255)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (397)
, END
// State S330 (index = 3606)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (399)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (257)
, END
// State S331 (index = 3611)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (401)
, END
// State S332 (index = 3614)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (220)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (402)
, END
// State S333 (index = 3619)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (404)
, END
// State S334 (index = 3622)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (196)
, END
// State S335 (index = 3627)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (406)
, END
// State S336 (index = 3630)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (407)
, END
// State S337 (index = 3633)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (259)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (76)
, END
// State S338 (index = 3638)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (75)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, REDUCE (75)
, END
// State S339 (index = 3643)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (409)
, END
// State S340 (index = 3646)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (226)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (410)
, END
// State S341 (index = 3651)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (339)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (80)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (67)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (340)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S342 (index = 3678)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (339)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (80)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (67)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (340)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S343 (index = 3705)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (339)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (80)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (67)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (340)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S344 (index = 3732)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (339)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (80)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (67)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (340)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S345 (index = 3759)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (339)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (80)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (67)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (340)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S346 (index = 3786)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (339)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (80)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (67)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (340)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S347 (index = 3813)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (339)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (62)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (80)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (67)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (340)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S348 (index = 3840)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (419)
, END
// State S349 (index = 3843)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (126)
, END
// State S350 (index = 3848)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (125)
, END
// State S351 (index = 3853)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (420)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (123)
, END
// State S352 (index = 3858)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (113)
, END
// State S353 (index = 3861)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (114)
, END
// State S354 (index = 3864)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (115)
, END
// State S355 (index = 3867)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (116)
, END
// State S356 (index = 3870)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (117)
, END
// State S357 (index = 3873)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_func, SHIFT (422)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (423)
, END
// State S358 (index = 3880)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (426)
, C_Lexique_easyBindings_5F_lexique::kToken_hStack, SHIFT (427)
, C_Lexique_easyBindings_5F_lexique::kToken_vStack, SHIFT (428)
, END
// State S359 (index = 3887)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (429)
, END
// State S360 (index = 3890)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (94)
, END
// State S361 (index = 3893)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (97)
, END
// State S362 (index = 3896)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (96)
, END
// State S363 (index = 3899)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (98)
, END
// State S364 (index = 3902)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (95)
, END
// State S365 (index = 3905)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (7)
, END
// State S366 (index = 3940)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (430)
, END
// State S367 (index = 3943)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (277)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (277)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (277)
, END
// State S368 (index = 3950)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (33)
, END
// State S369 (index = 3981)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (177)
, END
// State S370 (index = 3984)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (42)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (42)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (42)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (42)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (42)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (42)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (42)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (42)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (42)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (42)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (42)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (42)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (42)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (42)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (42)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (42)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (42)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (42)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (42)
, END
// State S371 (index = 4023)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (431)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (196)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (196)
, END
// State S372 (index = 4068)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (209)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (209)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (209)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (209)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (209)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (209)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (209)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (209)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (209)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (209)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (209)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (433)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (209)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (209)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (209)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (209)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (209)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (209)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (209)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (209)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (209)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (209)
, END
// State S373 (index = 4113)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (213)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (213)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (213)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (213)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (213)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (213)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (213)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (213)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (213)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (213)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (213)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (435)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (213)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (213)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (213)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (213)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (213)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (213)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (213)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (213)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (213)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (213)
, END
// State S374 (index = 4158)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (437)
, END
// State S375 (index = 4161)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (191)
, END
// State S376 (index = 4204)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (438)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (203)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (203)
, END
// State S377 (index = 4249)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (440)
, END
// State S378 (index = 4252)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (237)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (237)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (237)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (237)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (237)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (237)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (237)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (237)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (237)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, SHIFT (307)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (237)
, END
// State S379 (index = 4275)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (240)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (240)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (240)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (240)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (240)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (240)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (240)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (240)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (240)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (240)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (240)
, END
// State S380 (index = 4298)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (241)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (241)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (241)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (241)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (241)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (241)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (241)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (241)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (241)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (241)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (241)
, END
// State S381 (index = 4321)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (242)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (242)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (242)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (242)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (242)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (242)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (242)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (242)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (242)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (242)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (242)
, END
// State S382 (index = 4344)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (243)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (243)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (243)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (243)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (243)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (243)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (243)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (243)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (243)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (243)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (243)
, END
// State S383 (index = 4367)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (244)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (244)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (244)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (244)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (244)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (244)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (244)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (244)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (244)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (244)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (244)
, END
// State S384 (index = 4390)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (245)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (245)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (245)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (245)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (245)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (245)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (245)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (245)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (245)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (245)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (245)
, END
// State S385 (index = 4413)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (316)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (317)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (246)
, END
// State S386 (index = 4452)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (246)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (316)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (317)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (246)
, END
// State S387 (index = 4491)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (187)
, END
// State S388 (index = 4506)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (181)
, END
// State S389 (index = 4509)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (322)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (184)
, END
// State S390 (index = 4528)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (445)
, END
// State S391 (index = 4531)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (179)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (183)
, END
// State S392 (index = 4546)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (44)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (44)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (44)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (44)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (44)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (44)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (44)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (44)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (44)
, END
// State S393 (index = 4565)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (216)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (324)
, END
// State S394 (index = 4570)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_view, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (29)
, END
// State S395 (index = 4605)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (448)
, END
// State S396 (index = 4608)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (234)
, END
// State S397 (index = 4611)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (236)
, END
// State S398 (index = 4634)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (450)
, END
// State S399 (index = 4637)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (451)
, END
// State S400 (index = 4640)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (452)
, END
// State S401 (index = 4643)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (453)
, END
// State S402 (index = 4646)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, END
// State S403 (index = 4663)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (455)
, END
// State S404 (index = 4666)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (456)
, END
// State S405 (index = 4669)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (256)
, END
// State S406 (index = 4676)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (458)
, END
// State S407 (index = 4679)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (25)
, END
// State S408 (index = 4714)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (77)
, END
// State S409 (index = 4717)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (459)
, END
// State S410 (index = 4720)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (226)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (410)
, END
// State S411 (index = 4725)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (461)
, END
// State S412 (index = 4728)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (87)
, END
// State S413 (index = 4731)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (82)
, END
// State S414 (index = 4734)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (86)
, END
// State S415 (index = 4737)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (81)
, END
// State S416 (index = 4740)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (84)
, END
// State S417 (index = 4743)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (83)
, END
// State S418 (index = 4746)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (85)
, END
// State S419 (index = 4749)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (5)
, END
// State S420 (index = 4784)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (462)
, END
// State S421 (index = 4787)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (463)
, END
// State S422 (index = 4790)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (464)
, END
// State S423 (index = 4793)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (465)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (466)
, END
// State S424 (index = 4798)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_func, SHIFT (422)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (423)
, END
// State S425 (index = 4805)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (469)
, END
// State S426 (index = 4808)
, C_Lexique_easyBindings_5F_lexique::kToken_hStack, SHIFT (470)
, C_Lexique_easyBindings_5F_lexique::kToken_vStack, SHIFT (471)
, END
// State S427 (index = 4813)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (473)
, END
// State S428 (index = 4820)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (473)
, END
// State S429 (index = 4827)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (477)
, C_Lexique_easyBindings_5F_lexique::kToken_view, SHIFT (478)
, C_Lexique_easyBindings_5F_lexique::kToken_hStack, SHIFT (479)
, C_Lexique_easyBindings_5F_lexique::kToken_vStack, SHIFT (480)
, C_Lexique_easyBindings_5F_lexique::kToken_space, SHIFT (481)
, END
// State S430 (index = 4838)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (281)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (281)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (281)
, END
// State S431 (index = 4845)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (483)
, C_Lexique_easyBindings_5F_lexique::kToken_all, SHIFT (484)
, C_Lexique_easyBindings_5F_lexique::kToken_none, SHIFT (485)
, END
// State S432 (index = 4852)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (188)
, END
// State S433 (index = 4895)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (487)
, END
// State S434 (index = 4898)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (190)
, END
// State S435 (index = 4941)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (488)
, C_Lexique_easyBindings_5F_lexique::kToken_all, SHIFT (489)
, END
// State S436 (index = 4946)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (212)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (212)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (212)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (212)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (212)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (212)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (212)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (212)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (212)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (212)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (212)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (212)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (212)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (212)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (212)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (212)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (212)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (212)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (212)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (212)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (212)
, END
// State S437 (index = 4989)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (490)
, END
// State S438 (index = 4992)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (491)
, C_Lexique_easyBindings_5F_lexique::kToken_all, SHIFT (492)
, C_Lexique_easyBindings_5F_lexique::kToken_none, SHIFT (493)
, C_Lexique_easyBindings_5F_lexique::kToken_one, SHIFT (494)
, END
// State S439 (index = 5001)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (202)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (202)
, END
// State S440 (index = 5044)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (496)
, END
// State S441 (index = 5047)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (238)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (238)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (238)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (238)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (238)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (238)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (238)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (238)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (238)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (238)
, END
// State S442 (index = 5068)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (247)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (247)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (247)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (247)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (247)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (247)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (247)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (247)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (247)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (247)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (247)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (247)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (247)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (247)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (247)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (247)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (247)
, END
// State S443 (index = 5103)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (248)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (248)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (248)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (248)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (248)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (248)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (248)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (248)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (248)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (248)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (248)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (248)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (248)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (248)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (248)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (248)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (248)
, END
// State S444 (index = 5138)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (185)
, END
// State S445 (index = 5155)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (497)
, END
// State S446 (index = 5158)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (180)
, END
// State S447 (index = 5161)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (217)
, END
// State S448 (index = 5164)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (235)
, END
// State S449 (index = 5167)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (256)
, END
// State S450 (index = 5170)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (45)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (45)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (45)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (45)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (45)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (45)
, C_Lexique_easyBindings_5F_lexique::kToken_view, REDUCE (45)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, REDUCE (45)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (45)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (45)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (45)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (45)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (45)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (45)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (45)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (45)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (45)
, END
// State S451 (index = 5205)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (498)
, END
// State S452 (index = 5208)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (499)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (500)
, END
// State S453 (index = 5213)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (48)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (48)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (48)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (48)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (48)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (48)
, C_Lexique_easyBindings_5F_lexique::kToken_view, REDUCE (48)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, REDUCE (48)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (48)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (48)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (48)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (48)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (48)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (48)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (48)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (48)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (48)
, END
// State S454 (index = 5248)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (220)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (402)
, END
// State S455 (index = 5253)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_view, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (31)
, END
// State S456 (index = 5288)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (503)
, END
// State S457 (index = 5291)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (166)
, END
// State S458 (index = 5296)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (504)
, END
// State S459 (index = 5299)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (1)
, END
// State S460 (index = 5326)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (227)
, END
// State S461 (index = 5329)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (505)
, END
// State S462 (index = 5332)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (506)
, END
// State S463 (index = 5335)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_func, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (122)
, END
// State S464 (index = 5356)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (160)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_func, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (121)
, END
// State S465 (index = 5379)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (130)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (130)
, END
// State S466 (index = 5384)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (129)
, END
// State S467 (index = 5389)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (508)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (509)
, END
// State S468 (index = 5394)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (120)
, END
// State S469 (index = 5397)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xibdocument, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_graphviz, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_autolayout, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (10)
, END
// State S470 (index = 5432)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (473)
, END
// State S471 (index = 5439)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (473)
, END
// State S472 (index = 5446)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (513)
, END
// State S473 (index = 5449)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (514)
, END
// State S474 (index = 5452)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (515)
, END
// State S475 (index = 5455)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (21)
, END
// State S476 (index = 5460)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (516)
, END
// State S477 (index = 5463)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (517)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (143)
, END
// State S478 (index = 5482)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (520)
, END
// State S479 (index = 5485)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (473)
, END
// State S480 (index = 5492)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (473)
, END
// State S481 (index = 5499)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (523)
, END
// State S482 (index = 5502)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (218)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (63)
, C_Lexique_easyBindings_5F_lexique::kToken_view, SHIFT (277)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, SHIFT (278)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (64)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, SHIFT (65)
, C_Lexique_easyBindings_5F_lexique::kToken_override, SHIFT (66)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (168)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (68)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (69)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (71)
, END
// State S483 (index = 5531)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (198)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (198)
, END
// State S484 (index = 5574)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (525)
, END
// State S485 (index = 5577)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (200)
, END
// State S486 (index = 5620)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (197)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (197)
, END
// State S487 (index = 5663)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (210)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (210)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (210)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (210)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (210)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (210)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (210)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (210)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (210)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (210)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (210)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (210)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (210)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (210)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (210)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (210)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (210)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (210)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (210)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (210)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (210)
, END
// State S488 (index = 5706)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (214)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (214)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (214)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (214)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (214)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (214)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (214)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (214)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (214)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (214)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (214)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (214)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (214)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (214)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (214)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (214)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (214)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (214)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (214)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (214)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (214)
, END
// State S489 (index = 5749)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (526)
, END
// State S490 (index = 5752)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (211)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (211)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (211)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (211)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (211)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (211)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (211)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (211)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (211)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (211)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (211)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (211)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (211)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (211)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (211)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (211)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (211)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (211)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (211)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (211)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (211)
, END
// State S491 (index = 5795)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (208)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (208)
, END
// State S492 (index = 5838)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (527)
, END
// State S493 (index = 5841)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (207)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (207)
, END
// State S494 (index = 5884)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (528)
, END
// State S495 (index = 5887)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (204)
, END
// State S496 (index = 5930)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (195)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (195)
, END
// State S497 (index = 5973)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (285)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (286)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (287)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (288)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (289)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (290)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (291)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (292)
, END
// State S498 (index = 5990)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (285)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (286)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (287)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (288)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (289)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (290)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (291)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (292)
, END
// State S499 (index = 6007)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (259)
, END
// State S500 (index = 6010)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (260)
, END
// State S501 (index = 6013)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (531)
, END
// State S502 (index = 6016)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (221)
, END
// State S503 (index = 6019)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_view, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (32)
, END
// State S504 (index = 6054)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (532)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (173)
, END
// State S505 (index = 6059)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (228)
, C_Lexique_easyBindings_5F_lexique::kToken_inverse, SHIFT (534)
, END
// State S506 (index = 6064)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (349)
, C_Lexique_easyBindings_5F_lexique::kToken_view, SHIFT (350)
, END
// State S507 (index = 6069)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_func, SHIFT (422)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (423)
, END
// State S508 (index = 6076)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_func, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (131)
, END
// State S509 (index = 6087)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_func, REDUCE (132)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (132)
, END
// State S510 (index = 6098)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (538)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_func, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (127)
, END
// State S511 (index = 6109)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (137)
, END
// State S512 (index = 6112)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (138)
, END
// State S513 (index = 6115)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_view, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (13)
, END
// State S514 (index = 6144)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (540)
, END
// State S515 (index = 6147)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (477)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_view, SHIFT (478)
, C_Lexique_easyBindings_5F_lexique::kToken_hStack, SHIFT (479)
, C_Lexique_easyBindings_5F_lexique::kToken_vStack, SHIFT (480)
, C_Lexique_easyBindings_5F_lexique::kToken_space, SHIFT (481)
, END
// State S516 (index = 6160)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (477)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_view, SHIFT (478)
, C_Lexique_easyBindings_5F_lexique::kToken_hStack, SHIFT (479)
, C_Lexique_easyBindings_5F_lexique::kToken_vStack, SHIFT (480)
, C_Lexique_easyBindings_5F_lexique::kToken_space, SHIFT (481)
, END
// State S517 (index = 6173)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (545)
, END
// State S518 (index = 6176)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (546)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (141)
, END
// State S519 (index = 6193)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (20)
, END
// State S520 (index = 6210)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (548)
, END
// State S521 (index = 6213)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (549)
, END
// State S522 (index = 6216)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (550)
, END
// State S523 (index = 6219)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_view, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_hStack, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_vStack, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_space, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (17)
, END
// State S524 (index = 6256)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (99)
, END
// State S525 (index = 6259)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (551)
, END
// State S526 (index = 6262)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (552)
, END
// State S527 (index = 6265)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (553)
, END
// State S528 (index = 6268)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (554)
, END
// State S529 (index = 6271)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (555)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (251)
, END
// State S530 (index = 6276)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (399)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (257)
, END
// State S531 (index = 6281)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (558)
, END
// State S532 (index = 6284)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (559)
, END
// State S533 (index = 6287)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (560)
, END
// State S534 (index = 6290)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (561)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (562)
, END
// State S535 (index = 6295)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (564)
, END
// State S536 (index = 6298)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (420)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (123)
, END
// State S537 (index = 6303)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (119)
, END
// State S538 (index = 6306)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (465)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (466)
, END
// State S539 (index = 6311)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (567)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_func, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (133)
, END
// State S540 (index = 6320)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (569)
, END
// State S541 (index = 6323)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (570)
, END
// State S542 (index = 6326)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (477)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_view, SHIFT (478)
, C_Lexique_easyBindings_5F_lexique::kToken_hStack, SHIFT (479)
, C_Lexique_easyBindings_5F_lexique::kToken_vStack, SHIFT (480)
, C_Lexique_easyBindings_5F_lexique::kToken_space, SHIFT (481)
, END
// State S543 (index = 6339)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (16)
, END
// State S544 (index = 6342)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (572)
, END
// State S545 (index = 6345)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (573)
, END
// State S546 (index = 6348)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (517)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (143)
, END
// State S547 (index = 6367)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (178)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (179)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (180)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (181)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (182)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (183)
, END
// State S548 (index = 6382)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_view, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_hStack, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_vStack, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_space, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (18)
, END
// State S549 (index = 6419)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (477)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_view, SHIFT (478)
, C_Lexique_easyBindings_5F_lexique::kToken_hStack, SHIFT (479)
, C_Lexique_easyBindings_5F_lexique::kToken_vStack, SHIFT (480)
, C_Lexique_easyBindings_5F_lexique::kToken_space, SHIFT (481)
, END
// State S550 (index = 6432)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (477)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_view, SHIFT (478)
, C_Lexique_easyBindings_5F_lexique::kToken_hStack, SHIFT (479)
, C_Lexique_easyBindings_5F_lexique::kToken_vStack, SHIFT (480)
, C_Lexique_easyBindings_5F_lexique::kToken_space, SHIFT (481)
, END
// State S551 (index = 6445)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (199)
, END
// State S552 (index = 6488)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (215)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (215)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (215)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (215)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (215)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (215)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (215)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (215)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (215)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (215)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (215)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (215)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (215)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (215)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (215)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (215)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (215)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (215)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (215)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (215)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (215)
, END
// State S553 (index = 6531)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (205)
, END
// State S554 (index = 6574)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (206)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (206)
, END
// State S555 (index = 6617)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (578)
, END
// State S556 (index = 6620)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (579)
, END
// State S557 (index = 6623)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (258)
, END
// State S558 (index = 6626)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (580)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (581)
, END
// State S559 (index = 6631)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (583)
, END
// State S560 (index = 6634)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (172)
, END
// State S561 (index = 6637)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (584)
, END
// State S562 (index = 6640)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (585)
, END
// State S563 (index = 6643)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (229)
, END
// State S564 (index = 6646)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (34)
, END
// State S565 (index = 6673)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (124)
, END
// State S566 (index = 6676)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (508)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (509)
, END
// State S567 (index = 6681)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (587)
, END
// State S568 (index = 6684)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_func, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (12)
, END
// State S569 (index = 6691)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (588)
, END
// State S570 (index = 6694)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_view, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (15)
, END
// State S571 (index = 6723)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (140)
, END
// State S572 (index = 6726)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_view, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (14)
, END
// State S573 (index = 6755)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (589)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (590)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (591)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (592)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (593)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (594)
, END
// State S574 (index = 6768)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (546)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (141)
, END
// State S575 (index = 6785)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (597)
, END
// State S576 (index = 6788)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (598)
, END
// State S577 (index = 6791)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (599)
, END
// State S578 (index = 6794)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (600)
, END
// State S579 (index = 6797)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (250)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (250)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (250)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (250)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (250)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (250)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (250)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (250)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (250)
, END
// State S580 (index = 6816)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (261)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (261)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (261)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (261)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (261)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (261)
, C_Lexique_easyBindings_5F_lexique::kToken_view, REDUCE (261)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, REDUCE (261)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (261)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (261)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (261)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (261)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (261)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (261)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (261)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (261)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (261)
, END
// State S581 (index = 6851)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (263)
, C_Lexique_easyBindings_5F_lexique::kToken_column, SHIFT (601)
, END
// State S582 (index = 6856)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (46)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (46)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (46)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (46)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (46)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (46)
, C_Lexique_easyBindings_5F_lexique::kToken_view, REDUCE (46)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, REDUCE (46)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (46)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (46)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (46)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (46)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (46)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (46)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (46)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (46)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (46)
, END
// State S583 (index = 6891)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (603)
, END
// State S584 (index = 6894)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (231)
, END
// State S585 (index = 6897)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (230)
, END
// State S586 (index = 6900)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (538)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_func, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (127)
, END
// State S587 (index = 6911)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (605)
, END
// State S588 (index = 6914)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (154)
, END
// State S589 (index = 6919)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (152)
, END
// State S590 (index = 6924)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (147)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (147)
, END
// State S591 (index = 6929)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (148)
, END
// State S592 (index = 6934)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (149)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (149)
, END
// State S593 (index = 6939)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (150)
, END
// State S594 (index = 6944)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (606)
, END
// State S595 (index = 6947)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (607)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (145)
, END
// State S596 (index = 6952)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (142)
, END
// State S597 (index = 6967)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_view, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_hStack, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_vStack, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_space, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (19)
, END
// State S598 (index = 7004)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_view, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_hStack, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_vStack, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_space, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (23)
, END
// State S599 (index = 7041)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_view, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_hStack, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_vStack, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_space, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (22)
, END
// State S600 (index = 7078)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (285)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (286)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (287)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (288)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (289)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (290)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (291)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (292)
, END
// State S601 (index = 7095)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (610)
, END
// State S602 (index = 7098)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (611)
, END
// State S603 (index = 7101)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (532)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (173)
, END
// State S604 (index = 7106)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_func, REDUCE (128)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (128)
, END
// State S605 (index = 7115)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (613)
, END
// State S606 (index = 7118)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (151)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (151)
, END
// State S607 (index = 7123)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (614)
, END
// State S608 (index = 7126)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (615)
, END
// State S609 (index = 7129)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (555)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (251)
, END
// State S610 (index = 7134)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (265)
, C_Lexique_easyBindings_5F_lexique::kToken_sort, SHIFT (617)
, END
// State S611 (index = 7139)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (262)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (262)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (262)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (262)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (262)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (262)
, C_Lexique_easyBindings_5F_lexique::kToken_view, REDUCE (262)
, C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem, REDUCE (262)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (262)
, C_Lexique_easyBindings_5F_lexique::kToken_computed, REDUCE (262)
, C_Lexique_easyBindings_5F_lexique::kToken_override, REDUCE (262)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (262)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (262)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (262)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (262)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (262)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (262)
, END
// State S612 (index = 7174)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (174)
, END
// State S613 (index = 7177)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (619)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (135)
, END
// State S614 (index = 7182)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (621)
, END
// State S615 (index = 7185)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (144)
, END
// State S616 (index = 7202)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (252)
, END
// State S617 (index = 7205)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (622)
, END
// State S618 (index = 7208)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (623)
, END
// State S619 (index = 7211)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (624)
, END
// State S620 (index = 7214)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (625)
, END
// State S621 (index = 7217)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (589)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (590)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (591)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (592)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (593)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (594)
, END
// State S622 (index = 7230)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (266)
, END
// State S623 (index = 7233)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (267)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (627)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (628)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (629)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (630)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (267)
, END
// State S624 (index = 7246)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (633)
, END
// State S625 (index = 7249)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_func, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (134)
, END
// State S626 (index = 7256)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (607)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (145)
, END
// State S627 (index = 7261)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (635)
, END
// State S628 (index = 7264)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (236)
, END
// State S629 (index = 7287)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (236)
, END
// State S630 (index = 7310)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, END
// State S631 (index = 7327)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (263)
, C_Lexique_easyBindings_5F_lexique::kToken_column, SHIFT (601)
, END
// State S632 (index = 7332)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (47)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (47)
, END
// State S633 (index = 7337)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (640)
, END
// State S634 (index = 7340)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (146)
, END
// State S635 (index = 7343)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (267)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (627)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (628)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (629)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (630)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (267)
, END
// State S636 (index = 7356)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (267)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (627)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (628)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (629)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (630)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (267)
, END
// State S637 (index = 7369)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (267)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (627)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (628)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (629)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (630)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (267)
, END
// State S638 (index = 7382)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (272)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (644)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (272)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (272)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (272)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (272)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (272)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (272)
, END
// State S639 (index = 7399)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (264)
, END
// State S640 (index = 7402)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (619)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (135)
, END
// State S641 (index = 7407)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (268)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (268)
, END
// State S642 (index = 7412)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (269)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (269)
, END
// State S643 (index = 7417)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (270)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (270)
, END
// State S644 (index = 7422)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_controllerName, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_super, SHIFT (235)
, END
// State S645 (index = 7439)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (249)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (390)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (249)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (249)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (249)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (249)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (249)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (249)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (249)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (249)
, END
// State S646 (index = 7460)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (136)
, END
// State S647 (index = 7463)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (272)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (644)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (272)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (272)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (272)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (272)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (272)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (272)
, END
// State S648 (index = 7480)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (267)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (627)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (628)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (629)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (630)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (267)
, END
// State S649 (index = 7493)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (273)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (273)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (273)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (273)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (273)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (273)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (273)
, END
// State S650 (index = 7508)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (271)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (271)
, END} ;

static const uint32_t gActionTableIndex_easyBindings_grammar [651] = {
  0  // S0
, 35  // S1
, 38  // S2
, 41  // S3
, 44  // S4
, 49  // S5
, 52  // S6
, 55  // S7
, 58  // S8
, 61  // S9
, 66  // S10
, 69  // S11
, 72  // S12
, 75  // S13
, 78  // S14
, 113  // S15
, 148  // S16
, 183  // S17
, 218  // S18
, 253  // S19
, 288  // S20
, 323  // S21
, 358  // S22
, 393  // S23
, 428  // S24
, 463  // S25
, 466  // S26
, 471  // S27
, 474  // S28
, 477  // S29
, 480  // S30
, 485  // S31
, 488  // S32
, 491  // S33
, 494  // S34
, 521  // S35
, 524  // S36
, 527  // S37
, 530  // S38
, 537  // S39
, 540  // S40
, 543  // S41
, 546  // S42
, 549  // S43
, 552  // S44
, 555  // S45
, 558  // S46
, 561  // S47
, 564  // S48
, 567  // S49
, 570  // S50
, 573  // S51
, 576  // S52
, 579  // S53
, 582  // S54
, 617  // S55
, 620  // S56
, 623  // S57
, 626  // S58
, 629  // S59
, 632  // S60
, 635  // S61
, 638  // S62
, 645  // S63
, 648  // S64
, 651  // S65
, 654  // S66
, 657  // S67
, 664  // S68
, 667  // S69
, 670  // S70
, 673  // S71
, 676  // S72
, 703  // S73
, 730  // S74
, 757  // S75
, 784  // S76
, 811  // S77
, 838  // S78
, 865  // S79
, 868  // S80
, 871  // S81
, 874  // S82
, 909  // S83
, 912  // S84
, 947  // S85
, 952  // S86
, 955  // S87
, 960  // S88
, 965  // S89
, 968  // S90
, 971  // S91
, 974  // S92
, 977  // S93
, 980  // S94
, 985  // S95
, 988  // S96
, 991  // S97
, 994  // S98
, 999  // S99
, 1002  // S100
, 1005  // S101
, 1008  // S102
, 1011  // S103
, 1016  // S104
, 1019  // S105
, 1022  // S106
, 1025  // S107
, 1028  // S108
, 1031  // S109
, 1034  // S110
, 1037  // S111
, 1040  // S112
, 1043  // S113
, 1046  // S114
, 1049  // S115
, 1052  // S116
, 1087  // S117
, 1090  // S118
, 1093  // S119
, 1098  // S120
, 1103  // S121
, 1108  // S122
, 1111  // S123
, 1114  // S124
, 1119  // S125
, 1126  // S126
, 1129  // S127
, 1136  // S128
, 1159  // S129
, 1174  // S130
, 1209  // S131
, 1212  // S132
, 1215  // S133
, 1240  // S134
, 1243  // S135
, 1246  // S136
, 1249  // S137
, 1252  // S138
, 1255  // S139
, 1270  // S140
, 1273  // S141
, 1276  // S142
, 1279  // S143
, 1314  // S144
, 1319  // S145
, 1322  // S146
, 1325  // S147
, 1328  // S148
, 1331  // S149
, 1336  // S150
, 1341  // S151
, 1346  // S152
, 1351  // S153
, 1356  // S154
, 1361  // S155
, 1364  // S156
, 1369  // S157
, 1404  // S158
, 1407  // S159
, 1412  // S160
, 1415  // S161
, 1430  // S162
, 1451  // S163
, 1454  // S164
, 1467  // S165
, 1472  // S166
, 1507  // S167
, 1510  // S168
, 1513  // S169
, 1538  // S170
, 1563  // S171
, 1588  // S172
, 1613  // S173
, 1616  // S174
, 1619  // S175
, 1622  // S176
, 1625  // S177
, 1628  // S178
, 1631  // S179
, 1636  // S180
, 1659  // S181
, 1682  // S182
, 1685  // S183
, 1702  // S184
, 1705  // S185
, 1708  // S186
, 1725  // S187
, 1732  // S188
, 1735  // S189
, 1738  // S190
, 1741  // S191
, 1744  // S192
, 1747  // S193
, 1750  // S194
, 1753  // S195
, 1760  // S196
, 1767  // S197
, 1774  // S198
, 1779  // S199
, 1782  // S200
, 1787  // S201
, 1790  // S202
, 1793  // S203
, 1796  // S204
, 1799  // S205
, 1812  // S206
, 1825  // S207
, 1838  // S208
, 1851  // S209
, 1864  // S210
, 1877  // S211
, 1890  // S212
, 1893  // S213
, 1896  // S214
, 1899  // S215
, 1902  // S216
, 1905  // S217
, 1908  // S218
, 1943  // S219
, 1972  // S220
, 1999  // S221
, 2016  // S222
, 2051  // S223
, 2066  // S224
, 2069  // S225
, 2072  // S226
, 2095  // S227
, 2098  // S228
, 2101  // S229
, 2140  // S230
, 2143  // S231
, 2188  // S232
, 2231  // S233
, 2274  // S234
, 2317  // S235
, 2320  // S236
, 2343  // S237
, 2382  // S238
, 2397  // S239
, 2420  // S240
, 2455  // S241
, 2494  // S242
, 2537  // S243
, 2552  // S244
, 2569  // S245
, 2588  // S246
, 2619  // S247
, 2624  // S248
, 2627  // S249
, 2630  // S250
, 2633  // S251
, 2636  // S252
, 2653  // S253
, 2656  // S254
, 2673  // S255
, 2676  // S256
, 2681  // S257
, 2686  // S258
, 2689  // S259
, 2692  // S260
, 2695  // S261
, 2698  // S262
, 2725  // S263
, 2730  // S264
, 2743  // S265
, 2756  // S266
, 2769  // S267
, 2782  // S268
, 2795  // S269
, 2808  // S270
, 2811  // S271
, 2814  // S272
, 2817  // S273
, 2820  // S274
, 2823  // S275
, 2826  // S276
, 2861  // S277
, 2864  // S278
, 2867  // S279
, 2896  // S280
, 2925  // S281
, 2954  // S282
, 2983  // S283
, 3012  // S284
, 3015  // S285
, 3022  // S286
, 3029  // S287
, 3032  // S288
, 3039  // S289
, 3046  // S290
, 3053  // S291
, 3056  // S292
, 3063  // S293
, 3066  // S294
, 3073  // S295
, 3076  // S296
, 3079  // S297
, 3094  // S298
, 3097  // S299
, 3100  // S300
, 3103  // S301
, 3108  // S302
, 3111  // S303
, 3154  // S304
, 3157  // S305
, 3196  // S306
, 3199  // S307
, 3222  // S308
, 3243  // S309
, 3266  // S310
, 3289  // S311
, 3312  // S312
, 3335  // S313
, 3358  // S314
, 3381  // S315
, 3404  // S316
, 3427  // S317
, 3450  // S318
, 3485  // S319
, 3488  // S320
, 3491  // S321
, 3506  // S322
, 3523  // S323
, 3544  // S324
, 3561  // S325
, 3564  // S326
, 3567  // S327
, 3570  // S328
, 3601  // S329
, 3606  // S330
, 3611  // S331
, 3614  // S332
, 3619  // S333
, 3622  // S334
, 3627  // S335
, 3630  // S336
, 3633  // S337
, 3638  // S338
, 3643  // S339
, 3646  // S340
, 3651  // S341
, 3678  // S342
, 3705  // S343
, 3732  // S344
, 3759  // S345
, 3786  // S346
, 3813  // S347
, 3840  // S348
, 3843  // S349
, 3848  // S350
, 3853  // S351
, 3858  // S352
, 3861  // S353
, 3864  // S354
, 3867  // S355
, 3870  // S356
, 3873  // S357
, 3880  // S358
, 3887  // S359
, 3890  // S360
, 3893  // S361
, 3896  // S362
, 3899  // S363
, 3902  // S364
, 3905  // S365
, 3940  // S366
, 3943  // S367
, 3950  // S368
, 3981  // S369
, 3984  // S370
, 4023  // S371
, 4068  // S372
, 4113  // S373
, 4158  // S374
, 4161  // S375
, 4204  // S376
, 4249  // S377
, 4252  // S378
, 4275  // S379
, 4298  // S380
, 4321  // S381
, 4344  // S382
, 4367  // S383
, 4390  // S384
, 4413  // S385
, 4452  // S386
, 4491  // S387
, 4506  // S388
, 4509  // S389
, 4528  // S390
, 4531  // S391
, 4546  // S392
, 4565  // S393
, 4570  // S394
, 4605  // S395
, 4608  // S396
, 4611  // S397
, 4634  // S398
, 4637  // S399
, 4640  // S400
, 4643  // S401
, 4646  // S402
, 4663  // S403
, 4666  // S404
, 4669  // S405
, 4676  // S406
, 4679  // S407
, 4714  // S408
, 4717  // S409
, 4720  // S410
, 4725  // S411
, 4728  // S412
, 4731  // S413
, 4734  // S414
, 4737  // S415
, 4740  // S416
, 4743  // S417
, 4746  // S418
, 4749  // S419
, 4784  // S420
, 4787  // S421
, 4790  // S422
, 4793  // S423
, 4798  // S424
, 4805  // S425
, 4808  // S426
, 4813  // S427
, 4820  // S428
, 4827  // S429
, 4838  // S430
, 4845  // S431
, 4852  // S432
, 4895  // S433
, 4898  // S434
, 4941  // S435
, 4946  // S436
, 4989  // S437
, 4992  // S438
, 5001  // S439
, 5044  // S440
, 5047  // S441
, 5068  // S442
, 5103  // S443
, 5138  // S444
, 5155  // S445
, 5158  // S446
, 5161  // S447
, 5164  // S448
, 5167  // S449
, 5170  // S450
, 5205  // S451
, 5208  // S452
, 5213  // S453
, 5248  // S454
, 5253  // S455
, 5288  // S456
, 5291  // S457
, 5296  // S458
, 5299  // S459
, 5326  // S460
, 5329  // S461
, 5332  // S462
, 5335  // S463
, 5356  // S464
, 5379  // S465
, 5384  // S466
, 5389  // S467
, 5394  // S468
, 5397  // S469
, 5432  // S470
, 5439  // S471
, 5446  // S472
, 5449  // S473
, 5452  // S474
, 5455  // S475
, 5460  // S476
, 5463  // S477
, 5482  // S478
, 5485  // S479
, 5492  // S480
, 5499  // S481
, 5502  // S482
, 5531  // S483
, 5574  // S484
, 5577  // S485
, 5620  // S486
, 5663  // S487
, 5706  // S488
, 5749  // S489
, 5752  // S490
, 5795  // S491
, 5838  // S492
, 5841  // S493
, 5884  // S494
, 5887  // S495
, 5930  // S496
, 5973  // S497
, 5990  // S498
, 6007  // S499
, 6010  // S500
, 6013  // S501
, 6016  // S502
, 6019  // S503
, 6054  // S504
, 6059  // S505
, 6064  // S506
, 6069  // S507
, 6076  // S508
, 6087  // S509
, 6098  // S510
, 6109  // S511
, 6112  // S512
, 6115  // S513
, 6144  // S514
, 6147  // S515
, 6160  // S516
, 6173  // S517
, 6176  // S518
, 6193  // S519
, 6210  // S520
, 6213  // S521
, 6216  // S522
, 6219  // S523
, 6256  // S524
, 6259  // S525
, 6262  // S526
, 6265  // S527
, 6268  // S528
, 6271  // S529
, 6276  // S530
, 6281  // S531
, 6284  // S532
, 6287  // S533
, 6290  // S534
, 6295  // S535
, 6298  // S536
, 6303  // S537
, 6306  // S538
, 6311  // S539
, 6320  // S540
, 6323  // S541
, 6326  // S542
, 6339  // S543
, 6342  // S544
, 6345  // S545
, 6348  // S546
, 6367  // S547
, 6382  // S548
, 6419  // S549
, 6432  // S550
, 6445  // S551
, 6488  // S552
, 6531  // S553
, 6574  // S554
, 6617  // S555
, 6620  // S556
, 6623  // S557
, 6626  // S558
, 6631  // S559
, 6634  // S560
, 6637  // S561
, 6640  // S562
, 6643  // S563
, 6646  // S564
, 6673  // S565
, 6676  // S566
, 6681  // S567
, 6684  // S568
, 6691  // S569
, 6694  // S570
, 6723  // S571
, 6726  // S572
, 6755  // S573
, 6768  // S574
, 6785  // S575
, 6788  // S576
, 6791  // S577
, 6794  // S578
, 6797  // S579
, 6816  // S580
, 6851  // S581
, 6856  // S582
, 6891  // S583
, 6894  // S584
, 6897  // S585
, 6900  // S586
, 6911  // S587
, 6914  // S588
, 6919  // S589
, 6924  // S590
, 6929  // S591
, 6934  // S592
, 6939  // S593
, 6944  // S594
, 6947  // S595
, 6952  // S596
, 6967  // S597
, 7004  // S598
, 7041  // S599
, 7078  // S600
, 7095  // S601
, 7098  // S602
, 7101  // S603
, 7106  // S604
, 7115  // S605
, 7118  // S606
, 7123  // S607
, 7126  // S608
, 7129  // S609
, 7134  // S610
, 7139  // S611
, 7174  // S612
, 7177  // S613
, 7182  // S614
, 7185  // S615
, 7202  // S616
, 7205  // S617
, 7208  // S618
, 7211  // S619
, 7214  // S620
, 7217  // S621
, 7230  // S622
, 7233  // S623
, 7246  // S624
, 7249  // S625
, 7256  // S626
, 7261  // S627
, 7264  // S628
, 7287  // S629
, 7310  // S630
, 7327  // S631
, 7332  // S632
, 7337  // S633
, 7340  // S634
, 7343  // S635
, 7356  // S636
, 7369  // S637
, 7382  // S638
, 7399  // S639
, 7402  // S640
, 7407  // S641
, 7412  // S642
, 7417  // S643
, 7422  // S644
, 7439  // S645
, 7460  // S646
, 7463  // S647
, 7480  // S648
, 7493  // S649
, 7508  // S650
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                            SLR states successors table                                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int16_t gSuccessorTable_easyBindings_grammar_0 [33] = {0, 13,
  3, 14,
  4, 15,
  5, 16,
  6, 17,
  7, 18,
  8, 19,
  9, 20,
  17, 21,
  18, 22,
  35, 23,
  36, 24,
  38, 25,
  41, 26,
  50, 27,
  69, 28, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_14 [31] = {3, 14,
  4, 15,
  5, 16,
  6, 17,
  7, 18,
  8, 19,
  9, 20,
  17, 21,
  18, 22,
  35, 23,
  36, 24,
  38, 39,
  41, 26,
  50, 27,
  69, 28, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_15 [31] = {3, 14,
  4, 15,
  5, 16,
  6, 17,
  7, 18,
  8, 19,
  9, 20,
  17, 21,
  18, 22,
  35, 23,
  36, 24,
  38, 40,
  41, 26,
  50, 27,
  69, 28, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_16 [31] = {3, 14,
  4, 15,
  5, 16,
  6, 17,
  7, 18,
  8, 19,
  9, 20,
  17, 21,
  18, 22,
  35, 23,
  36, 24,
  38, 41,
  41, 26,
  50, 27,
  69, 28, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_17 [31] = {3, 14,
  4, 15,
  5, 16,
  6, 17,
  7, 18,
  8, 19,
  9, 20,
  17, 21,
  18, 22,
  35, 23,
  36, 24,
  38, 42,
  41, 26,
  50, 27,
  69, 28, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_18 [31] = {3, 14,
  4, 15,
  5, 16,
  6, 17,
  7, 18,
  8, 19,
  9, 20,
  17, 21,
  18, 22,
  35, 23,
  36, 24,
  38, 43,
  41, 26,
  50, 27,
  69, 28, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_19 [31] = {3, 14,
  4, 15,
  5, 16,
  6, 17,
  7, 18,
  8, 19,
  9, 20,
  17, 21,
  18, 22,
  35, 23,
  36, 24,
  38, 44,
  41, 26,
  50, 27,
  69, 28, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_20 [31] = {3, 14,
  4, 15,
  5, 16,
  6, 17,
  7, 18,
  8, 19,
  9, 20,
  17, 21,
  18, 22,
  35, 23,
  36, 24,
  38, 45,
  41, 26,
  50, 27,
  69, 28, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_21 [31] = {3, 14,
  4, 15,
  5, 16,
  6, 17,
  7, 18,
  8, 19,
  9, 20,
  17, 21,
  18, 22,
  35, 23,
  36, 24,
  38, 46,
  41, 26,
  50, 27,
  69, 28, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_22 [31] = {3, 14,
  4, 15,
  5, 16,
  6, 17,
  7, 18,
  8, 19,
  9, 20,
  17, 21,
  18, 22,
  35, 23,
  36, 24,
  38, 47,
  41, 26,
  50, 27,
  69, 28, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_23 [31] = {3, 14,
  4, 15,
  5, 16,
  6, 17,
  7, 18,
  8, 19,
  9, 20,
  17, 21,
  18, 22,
  35, 23,
  36, 24,
  38, 48,
  41, 26,
  50, 27,
  69, 28, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_24 [31] = {3, 14,
  4, 15,
  5, 16,
  6, 17,
  7, 18,
  8, 19,
  9, 20,
  17, 21,
  18, 22,
  35, 23,
  36, 24,
  38, 49,
  41, 26,
  50, 27,
  69, 28, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_26 [3] = {42, 51, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_30 [3] = {39, 57, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_34 [21] = {2, 72,
  19, 73,
  22, 74,
  23, 75,
  24, 76,
  26, 77,
  27, 78,
  49, 79,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_38 [3] = {116, 88, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_54 [31] = {3, 14,
  4, 15,
  5, 16,
  6, 17,
  7, 18,
  8, 19,
  9, 20,
  17, 21,
  18, 22,
  35, 23,
  36, 24,
  38, 92,
  41, 26,
  50, 27,
  69, 28, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_62 [3] = {94, 99, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_67 [3] = {98, 104, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_72 [21] = {2, 72,
  19, 73,
  22, 74,
  23, 75,
  24, 76,
  26, 77,
  27, 78,
  49, 109,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_73 [21] = {2, 72,
  19, 73,
  22, 74,
  23, 75,
  24, 76,
  26, 77,
  27, 78,
  49, 110,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_74 [21] = {2, 72,
  19, 73,
  22, 74,
  23, 75,
  24, 76,
  26, 77,
  27, 78,
  49, 111,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_75 [21] = {2, 72,
  19, 73,
  22, 74,
  23, 75,
  24, 76,
  26, 77,
  27, 78,
  49, 112,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_76 [21] = {2, 72,
  19, 73,
  22, 74,
  23, 75,
  24, 76,
  26, 77,
  27, 78,
  49, 113,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_77 [21] = {2, 72,
  19, 73,
  22, 74,
  23, 75,
  24, 76,
  26, 77,
  27, 78,
  49, 114,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_78 [21] = {2, 72,
  19, 73,
  22, 74,
  23, 75,
  24, 76,
  26, 77,
  27, 78,
  49, 115,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_87 [5] = {37, 123,
  118, 124, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_88 [3] = {115, 126, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_94 [3] = {40, 132, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_98 [3] = {94, 136, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_103 [3] = {98, 141, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_119 [3] = {73, 151, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_124 [3] = {117, 155, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_125 [3] = {116, 156, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_127 [3] = {43, 159, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_128 [5] = {10, 161,
  54, 162, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_129 [3] = {70, 164, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_133 [15] = {19, 169,
  22, 170,
  23, 171,
  27, 172,
  47, 173,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_139 [5] = {20, 184,
  77, 185, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_144 [3] = {105, 190, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_151 [3] = {74, 197, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_154 [3] = {118, 198, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_156 [3] = {115, 199, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_159 [3] = {45, 202, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_161 [3] = {51, 205, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_164 [3] = {71, 212, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_165 [3] = {40, 213, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_169 [15] = {19, 169,
  22, 170,
  23, 171,
  27, 172,
  47, 214,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_170 [15] = {19, 169,
  22, 170,
  23, 171,
  27, 172,
  47, 215,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_171 [15] = {19, 169,
  22, 170,
  23, 171,
  27, 172,
  47, 216,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_172 [15] = {19, 169,
  22, 170,
  23, 171,
  27, 172,
  47, 217,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_179 [3] = {78, 225, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_180 [13] = {21, 237,
  28, 238,
  29, 239,
  30, 240,
  31, 241,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_181 [13] = {21, 237,
  28, 243,
  29, 239,
  30, 240,
  31, 241,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_183 [5] = {21, 245,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_186 [5] = {21, 247,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_187 [3] = {99, 250, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_197 [3] = {72, 257, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_198 [3] = {117, 258, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_200 [3] = {44, 260, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_205 [3] = {52, 270, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_207 [3] = {71, 271, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_208 [3] = {71, 272, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_209 [3] = {71, 273, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_210 [3] = {71, 274, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_211 [3] = {71, 275, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_219 [17] = {12, 279,
  19, 280,
  22, 281,
  23, 282,
  27, 283,
  48, 284,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_221 [5] = {34, 293,
  114, 294, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_223 [3] = {77, 295, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_226 [13] = {21, 237,
  28, 298,
  29, 239,
  30, 240,
  31, 241,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_231 [3] = {84, 303, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_236 [7] = {21, 237,
  31, 305,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_238 [3] = {77, 306, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_239 [3] = {100, 308, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_240 [3] = {101, 315, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_241 [3] = {102, 318, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_243 [3] = {77, 319, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_244 [3] = {80, 321, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_245 [3] = {79, 323, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_247 [3] = {90, 325, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_252 [5] = {34, 330,
  114, 294, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_254 [5] = {21, 332,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_256 [3] = {73, 334, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_257 [3] = {75, 336, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_262 [21] = {1, 341,
  22, 342,
  23, 343,
  24, 344,
  25, 345,
  26, 346,
  27, 347,
  46, 348,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_263 [3] = {56, 351, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_265 [3] = {52, 352, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_266 [3] = {52, 353, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_267 [3] = {52, 354, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_268 [3] = {52, 355, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_269 [3] = {52, 356, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_279 [17] = {12, 279,
  19, 280,
  22, 281,
  23, 282,
  27, 283,
  48, 360,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_280 [17] = {12, 279,
  19, 280,
  22, 281,
  23, 282,
  27, 283,
  48, 361,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_281 [17] = {12, 279,
  19, 280,
  22, 281,
  23, 282,
  27, 283,
  48, 362,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_282 [17] = {12, 279,
  19, 280,
  22, 281,
  23, 282,
  27, 283,
  48, 363,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_283 [17] = {12, 279,
  19, 280,
  22, 281,
  23, 282,
  27, 283,
  48, 364,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_297 [3] = {77, 369, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_301 [3] = {88, 375, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_307 [11] = {21, 237,
  29, 378,
  30, 240,
  31, 241,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_309 [9] = {21, 237,
  30, 379,
  31, 241,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_310 [9] = {21, 237,
  30, 380,
  31, 241,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_311 [9] = {21, 237,
  30, 381,
  31, 241,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_312 [9] = {21, 237,
  30, 382,
  31, 241,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_313 [9] = {21, 237,
  30, 383,
  31, 241,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_314 [9] = {21, 237,
  30, 384,
  31, 241,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_316 [7] = {21, 237,
  31, 385,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_317 [7] = {21, 237,
  31, 386,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_321 [3] = {77, 388, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_322 [5] = {21, 389,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_323 [5] = {32, 391,
  103, 392, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_324 [5] = {21, 393,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_329 [3] = {106, 398, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_330 [3] = {107, 400, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_332 [3] = {92, 403, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_334 [3] = {74, 405, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_337 [3] = {44, 408, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_340 [3] = {95, 411, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_341 [21] = {1, 341,
  22, 342,
  23, 343,
  24, 344,
  25, 345,
  26, 346,
  27, 347,
  46, 412,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_342 [21] = {1, 341,
  22, 342,
  23, 343,
  24, 344,
  25, 345,
  26, 346,
  27, 347,
  46, 413,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_343 [21] = {1, 341,
  22, 342,
  23, 343,
  24, 344,
  25, 345,
  26, 346,
  27, 347,
  46, 414,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_344 [21] = {1, 341,
  22, 342,
  23, 343,
  24, 344,
  25, 345,
  26, 346,
  27, 347,
  46, 415,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_345 [21] = {1, 341,
  22, 342,
  23, 343,
  24, 344,
  25, 345,
  26, 346,
  27, 347,
  46, 416,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_346 [21] = {1, 341,
  22, 342,
  23, 343,
  24, 344,
  25, 345,
  26, 346,
  27, 347,
  46, 417,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_347 [21] = {1, 341,
  22, 342,
  23, 343,
  24, 344,
  25, 345,
  26, 346,
  27, 347,
  46, 418,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_351 [3] = {55, 421, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_357 [5] = {11, 424,
  53, 425, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_371 [3] = {82, 432, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_372 [3] = {87, 434, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_373 [3] = {89, 436, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_376 [3] = {85, 439, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_378 [3] = {100, 441, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_385 [3] = {102, 442, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_386 [3] = {102, 443, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_389 [3] = {79, 444, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_391 [3] = {77, 446, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_393 [3] = {90, 447, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_397 [13] = {21, 237,
  28, 449,
  29, 239,
  30, 240,
  31, 241,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_402 [5] = {21, 454,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_405 [3] = {72, 457, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_410 [3] = {95, 460, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_423 [3] = {58, 467, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_424 [5] = {11, 424,
  53, 468, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_426 [3] = {62, 472, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_427 [5] = {16, 474,
  68, 475, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_428 [5] = {16, 476,
  68, 475, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_429 [3] = {14, 482, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_431 [3] = {83, 486, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_438 [3] = {86, 495, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_452 [3] = {108, 501, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_454 [3] = {92, 502, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_464 [5] = {10, 507,
  54, 162, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_467 [3] = {59, 510, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_470 [5] = {16, 511,
  68, 475, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_471 [5] = {16, 512,
  68, 475, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_477 [5] = {15, 518,
  65, 519, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_479 [5] = {16, 521,
  68, 475, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_480 [5] = {16, 522,
  68, 475, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_482 [17] = {12, 279,
  19, 280,
  22, 281,
  23, 282,
  27, 283,
  48, 524,
  91, 80,
  93, 81, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_497 [5] = {34, 529,
  114, 294, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_498 [5] = {34, 530,
  114, 294, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_504 [3] = {76, 533, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_505 [3] = {96, 535, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_506 [3] = {56, 536, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_507 [5] = {11, 424,
  53, 537, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_510 [3] = {57, 539, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_515 [7] = {13, 541,
  14, 542,
  63, 543, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_516 [7] = {13, 544,
  14, 542,
  63, 543, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_518 [3] = {64, 547, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_529 [3] = {104, 556, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_530 [3] = {107, 557, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_534 [3] = {97, 563, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_536 [3] = {55, 565, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_538 [3] = {58, 566, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_539 [3] = {60, 568, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_542 [5] = {14, 542,
  63, 571, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_546 [5] = {15, 574,
  65, 519, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_547 [5] = {20, 575,
  77, 185, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_549 [7] = {13, 576,
  14, 542,
  63, 543, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_550 [7] = {13, 577,
  14, 542,
  63, 543, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_558 [3] = {109, 582, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_566 [3] = {59, 586, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_573 [3] = {67, 595, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_574 [3] = {64, 596, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_581 [3] = {110, 602, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_586 [3] = {57, 604, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_595 [3] = {66, 608, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_600 [5] = {34, 609,
  114, 294, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_603 [3] = {76, 612, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_609 [3] = {104, 616, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_610 [3] = {111, 618, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_613 [3] = {61, 620, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_621 [3] = {67, 626, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_623 [5] = {33, 631,
  112, 632, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_626 [3] = {66, 634, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_628 [13] = {21, 237,
  28, 636,
  29, 239,
  30, 240,
  31, 241,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_629 [13] = {21, 237,
  28, 637,
  29, 239,
  30, 240,
  31, 241,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_630 [5] = {21, 638,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_631 [3] = {110, 639, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_635 [3] = {112, 641, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_636 [3] = {112, 642, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_637 [3] = {112, 643, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_638 [3] = {113, 645, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_640 [3] = {61, 646, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_644 [5] = {21, 647,
  81, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_645 [5] = {32, 648,
  103, 392, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_647 [3] = {113, 649, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_648 [3] = {112, 650, -1} ;

static const int16_t * gSuccessorTable_easyBindings_grammar [651] = {
gSuccessorTable_easyBindings_grammar_0, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_14, gSuccessorTable_easyBindings_grammar_15, 
  gSuccessorTable_easyBindings_grammar_16, gSuccessorTable_easyBindings_grammar_17, gSuccessorTable_easyBindings_grammar_18, gSuccessorTable_easyBindings_grammar_19, 
  gSuccessorTable_easyBindings_grammar_20, gSuccessorTable_easyBindings_grammar_21, gSuccessorTable_easyBindings_grammar_22, gSuccessorTable_easyBindings_grammar_23, 
  gSuccessorTable_easyBindings_grammar_24, NULL, gSuccessorTable_easyBindings_grammar_26, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_30, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_34, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_38, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_54, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_62, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_67, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_72, gSuccessorTable_easyBindings_grammar_73, gSuccessorTable_easyBindings_grammar_74, gSuccessorTable_easyBindings_grammar_75, 
  gSuccessorTable_easyBindings_grammar_76, gSuccessorTable_easyBindings_grammar_77, gSuccessorTable_easyBindings_grammar_78, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_87, 
  gSuccessorTable_easyBindings_grammar_88, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_94, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_98, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_103, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_119, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_124, gSuccessorTable_easyBindings_grammar_125, NULL, gSuccessorTable_easyBindings_grammar_127, 
  gSuccessorTable_easyBindings_grammar_128, gSuccessorTable_easyBindings_grammar_129, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_133, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_139, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_144, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_151, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_154, NULL, 
  gSuccessorTable_easyBindings_grammar_156, NULL, NULL, gSuccessorTable_easyBindings_grammar_159, 
  NULL, gSuccessorTable_easyBindings_grammar_161, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_164, gSuccessorTable_easyBindings_grammar_165, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_169, gSuccessorTable_easyBindings_grammar_170, gSuccessorTable_easyBindings_grammar_171, 
  gSuccessorTable_easyBindings_grammar_172, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_179, 
  gSuccessorTable_easyBindings_grammar_180, gSuccessorTable_easyBindings_grammar_181, NULL, gSuccessorTable_easyBindings_grammar_183, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_186, gSuccessorTable_easyBindings_grammar_187, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_197, gSuccessorTable_easyBindings_grammar_198, NULL, 
  gSuccessorTable_easyBindings_grammar_200, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_205, NULL, gSuccessorTable_easyBindings_grammar_207, 
  gSuccessorTable_easyBindings_grammar_208, gSuccessorTable_easyBindings_grammar_209, gSuccessorTable_easyBindings_grammar_210, gSuccessorTable_easyBindings_grammar_211, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_219, 
  NULL, gSuccessorTable_easyBindings_grammar_221, NULL, gSuccessorTable_easyBindings_grammar_223, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_226, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_231, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_236, NULL, gSuccessorTable_easyBindings_grammar_238, gSuccessorTable_easyBindings_grammar_239, 
  gSuccessorTable_easyBindings_grammar_240, gSuccessorTable_easyBindings_grammar_241, NULL, gSuccessorTable_easyBindings_grammar_243, 
  gSuccessorTable_easyBindings_grammar_244, gSuccessorTable_easyBindings_grammar_245, NULL, gSuccessorTable_easyBindings_grammar_247, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_252, NULL, gSuccessorTable_easyBindings_grammar_254, NULL, 
  gSuccessorTable_easyBindings_grammar_256, gSuccessorTable_easyBindings_grammar_257, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_262, gSuccessorTable_easyBindings_grammar_263, 
  NULL, gSuccessorTable_easyBindings_grammar_265, gSuccessorTable_easyBindings_grammar_266, gSuccessorTable_easyBindings_grammar_267, 
  gSuccessorTable_easyBindings_grammar_268, gSuccessorTable_easyBindings_grammar_269, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_279, 
  gSuccessorTable_easyBindings_grammar_280, gSuccessorTable_easyBindings_grammar_281, gSuccessorTable_easyBindings_grammar_282, gSuccessorTable_easyBindings_grammar_283, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_297, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_301, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_307, 
  NULL, gSuccessorTable_easyBindings_grammar_309, gSuccessorTable_easyBindings_grammar_310, gSuccessorTable_easyBindings_grammar_311, 
  gSuccessorTable_easyBindings_grammar_312, gSuccessorTable_easyBindings_grammar_313, gSuccessorTable_easyBindings_grammar_314, NULL, 
  gSuccessorTable_easyBindings_grammar_316, gSuccessorTable_easyBindings_grammar_317, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_321, gSuccessorTable_easyBindings_grammar_322, gSuccessorTable_easyBindings_grammar_323, 
  gSuccessorTable_easyBindings_grammar_324, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_329, gSuccessorTable_easyBindings_grammar_330, NULL, 
  gSuccessorTable_easyBindings_grammar_332, NULL, gSuccessorTable_easyBindings_grammar_334, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_337, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_340, gSuccessorTable_easyBindings_grammar_341, gSuccessorTable_easyBindings_grammar_342, gSuccessorTable_easyBindings_grammar_343, 
  gSuccessorTable_easyBindings_grammar_344, gSuccessorTable_easyBindings_grammar_345, gSuccessorTable_easyBindings_grammar_346, gSuccessorTable_easyBindings_grammar_347, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_351, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_357, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_371, 
  gSuccessorTable_easyBindings_grammar_372, gSuccessorTable_easyBindings_grammar_373, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_376, NULL, gSuccessorTable_easyBindings_grammar_378, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_385, gSuccessorTable_easyBindings_grammar_386, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_389, NULL, gSuccessorTable_easyBindings_grammar_391, 
  NULL, gSuccessorTable_easyBindings_grammar_393, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_397, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_402, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_405, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_410, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_423, 
  gSuccessorTable_easyBindings_grammar_424, NULL, gSuccessorTable_easyBindings_grammar_426, gSuccessorTable_easyBindings_grammar_427, 
  gSuccessorTable_easyBindings_grammar_428, gSuccessorTable_easyBindings_grammar_429, NULL, gSuccessorTable_easyBindings_grammar_431, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_438, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_452, NULL, gSuccessorTable_easyBindings_grammar_454, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_464, NULL, NULL, gSuccessorTable_easyBindings_grammar_467, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_470, gSuccessorTable_easyBindings_grammar_471, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_477, NULL, gSuccessorTable_easyBindings_grammar_479, 
  gSuccessorTable_easyBindings_grammar_480, NULL, gSuccessorTable_easyBindings_grammar_482, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_497, gSuccessorTable_easyBindings_grammar_498, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_504, gSuccessorTable_easyBindings_grammar_505, gSuccessorTable_easyBindings_grammar_506, gSuccessorTable_easyBindings_grammar_507, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_510, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_515, 
  gSuccessorTable_easyBindings_grammar_516, NULL, gSuccessorTable_easyBindings_grammar_518, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_529, gSuccessorTable_easyBindings_grammar_530, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_534, NULL, 
  gSuccessorTable_easyBindings_grammar_536, NULL, gSuccessorTable_easyBindings_grammar_538, gSuccessorTable_easyBindings_grammar_539, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_542, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_546, gSuccessorTable_easyBindings_grammar_547, 
  NULL, gSuccessorTable_easyBindings_grammar_549, gSuccessorTable_easyBindings_grammar_550, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_558, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_566, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_573, gSuccessorTable_easyBindings_grammar_574, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_581, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_586, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_595, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_600, NULL, NULL, gSuccessorTable_easyBindings_grammar_603, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_609, gSuccessorTable_easyBindings_grammar_610, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_613, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_621, NULL, gSuccessorTable_easyBindings_grammar_623, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_626, NULL, 
  gSuccessorTable_easyBindings_grammar_628, gSuccessorTable_easyBindings_grammar_629, gSuccessorTable_easyBindings_grammar_630, gSuccessorTable_easyBindings_grammar_631, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_635, 
  gSuccessorTable_easyBindings_grammar_636, gSuccessorTable_easyBindings_grammar_637, gSuccessorTable_easyBindings_grammar_638, NULL, 
  gSuccessorTable_easyBindings_grammar_640, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_644, gSuccessorTable_easyBindings_grammar_645, NULL, gSuccessorTable_easyBindings_grammar_647, 
  gSuccessorTable_easyBindings_grammar_648, NULL, NULL} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                          Production rules infos (left non terminal, size of right string)                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionsTable_easyBindings_grammar [292 * 2] = {
  0, 1,
  1, 3,
  2, 5,
  3, 5,
  4, 6,
  5, 9,
  6, 7,
  6, 9,
  7, 4,
  8, 3,
  9, 10,
  10, 1,
  11, 5,
  12, 5,
  12, 7,
  12, 7,
  13, 1,
  14, 2,
  14, 3,
  14, 5,
  15, 1,
  16, 1,
  14, 5,
  14, 5,
  17, 7,
  18, 9,
  19, 5,
  20, 1,
  21, 1,
  22, 7,
  22, 5,
  22, 8,
  23, 9,
  24, 7,
  25, 6,
  26, 6,
  27, 3,
  28, 2,
  29, 2,
  30, 2,
  31, 1,
  31, 2,
  31, 3,
  31, 1,
  32, 1,
  23, 8,
  23, 12,
  33, 1,
  23, 8,
  34, 1,
  35, 3,
  36, 5,
  37, 2,
  38, 0,
  38, 4,
  38, 2,
  38, 2,
  38, 2,
  38, 2,
  38, 2,
  38, 2,
  38, 2,
  38, 2,
  38, 2,
  38, 2,
  38, 2,
  39, 1,
  39, 1,
  40, 0,
  40, 3,
  41, 0,
  41, 1,
  42, 0,
  42, 1,
  43, 0,
  43, 4,
  44, 0,
  44, 3,
  45, 0,
  45, 2,
  46, 0,
  46, 2,
  46, 2,
  46, 2,
  46, 2,
  46, 2,
  46, 2,
  46, 2,
  47, 0,
  47, 2,
  47, 2,
  47, 2,
  47, 2,
  48, 0,
  48, 2,
  48, 2,
  48, 2,
  48, 2,
  48, 2,
  48, 5,
  49, 0,
  49, 2,
  49, 2,
  49, 2,
  49, 2,
  49, 2,
  49, 2,
  49, 2,
  50, 1,
  50, 0,
  51, 0,
  51, 2,
  52, 0,
  52, 2,
  52, 2,
  52, 2,
  52, 2,
  52, 2,
  53, 0,
  53, 4,
  53, 2,
  54, 0,
  54, 6,
  55, 0,
  55, 5,
  56, 1,
  56, 1,
  57, 0,
  57, 4,
  58, 1,
  58, 1,
  59, 1,
  59, 1,
  60, 0,
  60, 6,
  61, 0,
  61, 5,
  62, 2,
  62, 2,
  63, 0,
  63, 2,
  64, 0,
  64, 3,
  65, 0,
  65, 6,
  66, 0,
  66, 5,
  67, 1,
  67, 1,
  67, 1,
  67, 1,
  67, 2,
  67, 1,
  68, 0,
  68, 5,
  69, 1,
  69, 0,
  70, 0,
  70, 2,
  71, 0,
  71, 2,
  71, 2,
  71, 2,
  71, 2,
  71, 2,
  72, 0,
  72, 4,
  73, 1,
  73, 1,
  74, 1,
  74, 1,
  75, 0,
  75, 6,
  76, 0,
  76, 5,
  77, 0,
  77, 3,
  77, 4,
  77, 3,
  77, 3,
  77, 5,
  77, 4,
  78, 0,
  78, 2,
  79, 0,
  79, 3,
  80, 0,
  80, 2,
  81, 4,
  81, 2,
  81, 4,
  81, 3,
  81, 1,
  81, 1,
  81, 1,
  81, 5,
  82, 0,
  82, 2,
  83, 1,
  83, 3,
  83, 1,
  84, 0,
  84, 3,
  85, 0,
  85, 2,
  86, 3,
  86, 3,
  86, 1,
  86, 1,
  87, 0,
  87, 2,
  88, 3,
  88, 2,
  89, 0,
  89, 2,
  89, 4,
  90, 0,
  90, 3,
  91, 0,
  91, 1,
  92, 0,
  92, 3,
  93, 1,
  93, 1,
  94, 0,
  94, 2,
  95, 0,
  95, 2,
  96, 0,
  96, 2,
  97, 2,
  97, 2,
  98, 0,
  98, 2,
  99, 3,
  99, 4,
  99, 0,
  100, 0,
  100, 3,
  101, 0,
  101, 2,
  101, 2,
  101, 2,
  101, 2,
  101, 2,
  101, 2,
  102, 0,
  102, 3,
  102, 3,
  103, 0,
  103, 6,
  104, 0,
  104, 5,
  105, 1,
  105, 1,
  106, 0,
  106, 2,
  107, 0,
  107, 5,
  108, 1,
  108, 1,
  109, 1,
  109, 3,
  110, 0,
  110, 6,
  111, 0,
  111, 2,
  112, 0,
  112, 3,
  112, 3,
  112, 3,
  112, 5,
  113, 0,
  113, 3,
  114, 1,
  114, 1,
  114, 1,
  114, 2,
  114, 1,
  114, 1,
  114, 1,
  114, 3,
  115, 0,
  115, 3,
  116, 2,
  116, 1,
  116, 3,
  117, 0,
  117, 3,
  118, 2,
  118, 1,
  119, 1
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

void cGrammar_easyBindings_5F_grammar::nt_start_5F_symbol_ (GALGAS_astDeclarationStruct &  parameter_1,
                                GALGAS_location &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 0 :
      rule_easyBindings_5F_syntax_start_5F_symbol_i0_(parameter_1, parameter_2, inLexique) ;
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
                                GALGAS_astDeclarationStruct &  parameter_1,
                                GALGAS_location &  parameter_2
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
          grammar.nt_start_5F_symbol_ (parameter_1, parameter_2, scanner) ;
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
                                GALGAS_astDeclarationStruct &  parameter_1,
                                GALGAS_location &  parameter_2
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
        grammar.nt_start_5F_symbol_ (parameter_1, parameter_2, scanner) ;
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
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_class_5F_declaration_ (GALGAS_astDeclarationStruct &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 3 :
      rule_easyBindings_5F_syntax_class_5F_declaration_i3_(parameter_1, inLexique) ;
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

void cGrammar_easyBindings_5F_grammar::nt_enum_5F_declaration_ (GALGAS_astDeclarationStruct &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 4 :
      rule_easyBindings_5F_syntax_enum_5F_declaration_i4_(parameter_1, inLexique) ;
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
  case 5 :
      rule_easyBindings_5F_syntax_entity_5F_declaration_i5_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_entity_5F_declaration_ (GALGAS_astDeclarationStruct &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 5 :
      rule_easyBindings_5F_syntax_entity_5F_declaration_i5_(parameter_1, inLexique) ;
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
  case 6 :
      rule_easyBindings_5F_syntax_document_5F_declaration_i6_parse(inLexique) ;
    break ;
  case 7 :
      rule_easyBindings_5F_syntax_document_5F_declaration_i7_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_document_5F_declaration_ (GALGAS_astDeclarationStruct &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 6 :
      rule_easyBindings_5F_syntax_document_5F_declaration_i6_(parameter_1, inLexique) ;
    break ;
  case 7 :
      rule_easyBindings_5F_syntax_document_5F_declaration_i7_(parameter_1, inLexique) ;
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

void cGrammar_easyBindings_5F_grammar::nt_preferences_5F_declaration_ (GALGAS_astDeclarationStruct &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 8 :
      rule_easyBindings_5F_syntax_preferences_5F_declaration_i8_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                 'graphviz_declaration' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_graphviz_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_easyBindings_5F_syntax_graphviz_5F_declaration_i9_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_graphviz_5F_declaration_ (GALGAS_astDeclarationStruct &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 9 :
      rule_easyBindings_5F_syntax_graphviz_5F_declaration_i9_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                          'autolayout_view_class_declaration' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_autolayout_5F_view_5F_class_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 10 :
      rule_easyBindings_5F_syntax_autolayout_5F_view_5F_class_5F_declaration_i10_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_autolayout_5F_view_5F_class_5F_declaration_ (GALGAS_astDeclarationStruct &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 10 :
      rule_easyBindings_5F_syntax_autolayout_5F_view_5F_class_5F_declaration_i10_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'autolayout_formal_parameter_list' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_autolayout_5F_formal_5F_parameter_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 11 :
      rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i11_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_autolayout_5F_formal_5F_parameter_5F_list_ (GALGAS_autoLayoutClassParameterList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 11 :
      rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i11_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                        'auto_layout_view_binding_specification' non terminal implementation                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_auto_5F_layout_5F_view_5F_binding_5F_specification_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 12 :
      rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i12_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (const GALGAS_lstring  parameter_1,
                                GALGAS_autoLayoutViewClassBindingSpecificationList &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 12 :
      rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i12_(parameter_1, parameter_2, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   'view_declaration' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_view_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 13 :
      rule_easyBindings_5F_syntax_view_5F_declaration_i13_parse(inLexique) ;
    break ;
  case 14 :
      rule_easyBindings_5F_syntax_view_5F_declaration_i14_parse(inLexique) ;
    break ;
  case 15 :
      rule_easyBindings_5F_syntax_view_5F_declaration_i15_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_view_5F_declaration_ (GALGAS_astViewDeclarationList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 13 :
      rule_easyBindings_5F_syntax_view_5F_declaration_i13_(parameter_1, inLexique) ;
    break ;
  case 14 :
      rule_easyBindings_5F_syntax_view_5F_declaration_i14_(parameter_1, inLexique) ;
    break ;
  case 15 :
      rule_easyBindings_5F_syntax_view_5F_declaration_i15_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                'view_instruction_list' non terminal implementation                                   
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_view_5F_instruction_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 16 :
      rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i16_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_view_5F_instruction_5F_list_ (GALGAS_astViewInstructionList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 16 :
      rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i16_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                   'view_instruction' non terminal implementation                                     
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_view_5F_instruction_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 17 :
      rule_easyBindings_5F_syntax_view_5F_instruction_i17_parse(inLexique) ;
    break ;
  case 18 :
      rule_easyBindings_5F_syntax_view_5F_instruction_i18_parse(inLexique) ;
    break ;
  case 19 :
      rule_easyBindings_5F_syntax_view_5F_instruction_i19_parse(inLexique) ;
    break ;
  case 22 :
      rule_easyBindings_5F_syntax_view_5F_instruction_i22_parse(inLexique) ;
    break ;
  case 23 :
      rule_easyBindings_5F_syntax_view_5F_instruction_i23_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_view_5F_instruction_ (GALGAS_astAbstractViewInstructionDeclaration &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 17 :
      rule_easyBindings_5F_syntax_view_5F_instruction_i17_(parameter_1, inLexique) ;
    break ;
  case 18 :
      rule_easyBindings_5F_syntax_view_5F_instruction_i18_(parameter_1, inLexique) ;
    break ;
  case 19 :
      rule_easyBindings_5F_syntax_view_5F_instruction_i19_(parameter_1, inLexique) ;
    break ;
  case 22 :
      rule_easyBindings_5F_syntax_view_5F_instruction_i22_(parameter_1, inLexique) ;
    break ;
  case 23 :
      rule_easyBindings_5F_syntax_view_5F_instruction_i23_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                              'view_actual_parameter_list' non terminal implementation                                
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_view_5F_actual_5F_parameter_5F_list_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 20 :
      rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i20_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_view_5F_actual_5F_parameter_5F_list_ (GALGAS_astAutoLayoutViewInstructionParameterList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 20 :
      rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i20_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                        'margin' non terminal implementation                                          
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_margin_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 21 :
      rule_easyBindings_5F_syntax_margin_i21_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_margin_ (GALGAS_uint &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 21 :
      rule_easyBindings_5F_syntax_margin_i21_(parameter_1, inLexique) ;
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
  case 24 :
      rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i24_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_class_5F_declaration_ (GALGAS_astDeclarationStruct &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 24 :
      rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i24_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'outlet_binding_specification' non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_binding_5F_specification_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 25 :
      rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i25_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_binding_5F_specification_ (GALGAS_outletClassBindingSpecificationList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 25 :
      rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i25_(parameter_1, inLexique) ;
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
  case 26 :
      rule_easyBindings_5F_syntax_outlet_5F_declaration_i26_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_declaration_ (GALGAS_outletDeclarationList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 26 :
      rule_easyBindings_5F_syntax_outlet_5F_declaration_i26_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                    'outlet_binding' non terminal implementation                                      
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_binding_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 27 :
      rule_easyBindings_5F_syntax_outlet_5F_binding_i27_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_binding_ (GALGAS_tableValueBinding &  parameter_1,
                                GALGAS_runActionDescriptor &  parameter_2,
                                GALGAS_multipleBindingDescriptor &  parameter_3,
                                GALGAS_multipleBindingDescriptor &  parameter_4,
                                GALGAS_graphicController &  parameter_5,
                                GALGAS_regularBindingList &  parameter_6,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 27 :
      rule_easyBindings_5F_syntax_outlet_5F_binding_i27_(parameter_1, parameter_2, parameter_3, parameter_4, parameter_5, parameter_6, inLexique) ;
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
  case 28 :
      rule_easyBindings_5F_syntax_observable_5F_property_i28_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_observable_5F_property_ (GALGAS_observablePropertyAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 28 :
      rule_easyBindings_5F_syntax_observable_5F_property_i28_(parameter_1, inLexique) ;
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
  case 29 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i29_parse(inLexique) ;
    break ;
  case 30 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i30_parse(inLexique) ;
    break ;
  case 31 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i31_parse(inLexique) ;
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
  case 29 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i29_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 30 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i30_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 31 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i31_(parameter_1, parameter_2, parameter_3, inLexique) ;
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
  case 32 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i32_parse(inLexique) ;
    break ;
  case 45 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i45_parse(inLexique) ;
    break ;
  case 46 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i46_parse(inLexique) ;
    break ;
  case 48 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i48_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_controller_5F_declaration_ (const GALGAS_lstring  parameter_1,
                                const GALGAS_lstring  parameter_2,
                                GALGAS_arrayControllerBindingListAST &  parameter_3,
                                GALGAS_astDeclarationStruct &  parameter_4,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 32 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i32_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
    break ;
  case 45 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i45_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
    break ;
  case 46 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i46_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
    break ;
  case 48 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i48_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
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
  case 33 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i33_parse(inLexique) ;
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
  case 33 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i33_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
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
  case 34 :
      rule_easyBindings_5F_syntax_toOne_5F_relationship_i34_parse(inLexique) ;
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
  case 34 :
      rule_easyBindings_5F_syntax_toOne_5F_relationship_i34_(parameter_1, parameter_2, inLexique) ;
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
  case 35 :
      rule_easyBindings_5F_syntax_toMany_5F_relationship_i35_parse(inLexique) ;
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
  case 35 :
      rule_easyBindings_5F_syntax_toMany_5F_relationship_i35_(parameter_1, parameter_2, parameter_3, inLexique) ;
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
  case 36 :
      rule_easyBindings_5F_syntax_action_5F_declaration_i36_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_action_5F_declaration_ (GALGAS_lstringlist &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 36 :
      rule_easyBindings_5F_syntax_action_5F_declaration_i36_(parameter_1, inLexique) ;
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
  case 37 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i37_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingExpression_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 37 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i37_(parameter_1, inLexique) ;
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
  case 38 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i38_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingComparison_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 38 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i38_(parameter_1, inLexique) ;
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
  case 39 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i39_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingTerm_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 39 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i39_(parameter_1, inLexique) ;
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
  case 40 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i40_parse(inLexique) ;
    break ;
  case 41 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i41_parse(inLexique) ;
    break ;
  case 42 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i42_parse(inLexique) ;
    break ;
  case 43 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i43_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingOperand_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 40 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i40_(parameter_1, inLexique) ;
    break ;
  case 41 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i41_(parameter_1, inLexique) ;
    break ;
  case 42 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i42_(parameter_1, inLexique) ;
    break ;
  case 43 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i43_(parameter_1, inLexique) ;
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
  case 44 :
      rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i44_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_binding_5F_option_5F_list_ (GALGAS_bindingOptionList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 44 :
      rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i44_(parameter_1, inLexique) ;
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
  case 47 :
      rule_easyBindings_5F_syntax_column_5F_bindings_i47_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_column_5F_bindings_ (GALGAS_tableViewColumnBindingAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 47 :
      rule_easyBindings_5F_syntax_column_5F_bindings_i47_(parameter_1, inLexique) ;
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
  case 49 :
      rule_easyBindings_5F_syntax_explicit_5F_value_i49_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_explicit_5F_value_ (GALGAS_abstractDefaultValue &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 49 :
      rule_easyBindings_5F_syntax_explicit_5F_value_i49_(parameter_1, inLexique) ;
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
  case 50 :
      rule_easyBindings_5F_syntax_xcode_5F_project_i50_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_xcode_5F_project_ (GALGAS_lstring &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 50 :
      rule_easyBindings_5F_syntax_xcode_5F_project_i50_(parameter_1, inLexique) ;
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
  case 51 :
      rule_easyBindings_5F_syntax_main_5F_xib_i51_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_ (GALGAS_mainXibDescriptorList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 51 :
      rule_easyBindings_5F_syntax_main_5F_xib_i51_(parameter_1, inLexique) ;
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
  case 52 :
      rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i52_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_5F_line_ (GALGAS_mainXibLineDescriptorList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 52 :
      rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i52_(parameter_1, inLexique) ;
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
// Productions numbers : 53 54 55 56 57 58 59 60 61 62 63 64 65
  return inLexique->nextProductionIndex () - 52 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_1' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_1 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 66 67
  return inLexique->nextProductionIndex () - 65 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_2' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_2 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 68 69
  return inLexique->nextProductionIndex () - 67 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_3' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_3 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 70 71
  return inLexique->nextProductionIndex () - 69 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_4' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_4 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 72 73
  return inLexique->nextProductionIndex () - 71 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_5' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_5 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 74 75
  return inLexique->nextProductionIndex () - 73 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_6' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_6 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 76 77
  return inLexique->nextProductionIndex () - 75 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_7' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_7 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 78 79
  return inLexique->nextProductionIndex () - 77 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_8' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_8 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 80 81 82 83 84 85 86 87
  return inLexique->nextProductionIndex () - 79 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_9' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_9 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 88 89 90 91 92
  return inLexique->nextProductionIndex () - 87 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_10' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_10 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 93 94 95 96 97 98 99
  return inLexique->nextProductionIndex () - 92 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_11' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_11 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 100 101 102 103 104 105 106 107
  return inLexique->nextProductionIndex () - 99 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_12' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_12 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 108 109
  return inLexique->nextProductionIndex () - 107 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_13' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_13 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 110 111
  return inLexique->nextProductionIndex () - 109 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_14' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_14 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 112 113 114 115 116 117
  return inLexique->nextProductionIndex () - 111 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_15' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_15 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 118 119 120
  return inLexique->nextProductionIndex () - 117 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_16' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_16 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 121 122
  return inLexique->nextProductionIndex () - 120 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_17' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_17 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 123 124
  return inLexique->nextProductionIndex () - 122 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_18' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_18 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 125 126
  return inLexique->nextProductionIndex () - 124 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_19' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_19 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 127 128
  return inLexique->nextProductionIndex () - 126 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_20' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_20 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 129 130
  return inLexique->nextProductionIndex () - 128 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_21' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_21 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 131 132
  return inLexique->nextProductionIndex () - 130 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_22' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_22 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 133 134
  return inLexique->nextProductionIndex () - 132 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_23' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_23 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 135 136
  return inLexique->nextProductionIndex () - 134 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_24' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_24 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 137 138
  return inLexique->nextProductionIndex () - 136 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_25' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_25 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 139 140
  return inLexique->nextProductionIndex () - 138 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_26' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_26 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 141 142
  return inLexique->nextProductionIndex () - 140 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_27' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_27 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 143 144
  return inLexique->nextProductionIndex () - 142 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_28' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_28 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 145 146
  return inLexique->nextProductionIndex () - 144 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_29' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_29 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 147 148 149 150 151 152
  return inLexique->nextProductionIndex () - 146 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_30' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_30 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 153 154
  return inLexique->nextProductionIndex () - 152 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_31' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_31 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 155 156
  return inLexique->nextProductionIndex () - 154 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_32' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_32 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 157 158
  return inLexique->nextProductionIndex () - 156 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_33' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_33 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 159 160 161 162 163 164
  return inLexique->nextProductionIndex () - 158 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_34' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_34 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 165 166
  return inLexique->nextProductionIndex () - 164 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_35' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_35 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 167 168
  return inLexique->nextProductionIndex () - 166 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_36' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_36 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 169 170
  return inLexique->nextProductionIndex () - 168 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_37' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_37 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 171 172
  return inLexique->nextProductionIndex () - 170 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_38' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_38 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 173 174
  return inLexique->nextProductionIndex () - 172 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_39' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_39 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 175 176 177 178 179 180 181
  return inLexique->nextProductionIndex () - 174 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_40' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_40 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 182 183
  return inLexique->nextProductionIndex () - 181 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_41' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_41 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 184 185
  return inLexique->nextProductionIndex () - 183 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_42' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_42 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 186 187
  return inLexique->nextProductionIndex () - 185 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_43' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_43 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 188 189 190 191 192 193 194 195
  return inLexique->nextProductionIndex () - 187 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_44' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_44 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 196 197
  return inLexique->nextProductionIndex () - 195 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_45' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_45 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 198 199 200
  return inLexique->nextProductionIndex () - 197 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_46' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_46 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 201 202
  return inLexique->nextProductionIndex () - 200 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_47' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_47 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 203 204
  return inLexique->nextProductionIndex () - 202 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_48' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_48 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 205 206 207 208
  return inLexique->nextProductionIndex () - 204 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_49' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_49 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 209 210
  return inLexique->nextProductionIndex () - 208 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_50' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_50 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 211 212
  return inLexique->nextProductionIndex () - 210 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_51' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_51 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 213 214 215
  return inLexique->nextProductionIndex () - 212 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_52' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_52 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 216 217
  return inLexique->nextProductionIndex () - 215 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_53' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_53 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 218 219
  return inLexique->nextProductionIndex () - 217 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_54' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_54 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 220 221
  return inLexique->nextProductionIndex () - 219 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_55' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_55 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 222 223
  return inLexique->nextProductionIndex () - 221 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_56' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_56 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 224 225
  return inLexique->nextProductionIndex () - 223 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_57' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_57 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 226 227
  return inLexique->nextProductionIndex () - 225 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_58' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_58 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 228 229
  return inLexique->nextProductionIndex () - 227 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_59' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_59 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 230 231
  return inLexique->nextProductionIndex () - 229 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_60' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_60 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 232 233
  return inLexique->nextProductionIndex () - 231 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_61' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_61 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 234 235 236
  return inLexique->nextProductionIndex () - 233 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_62' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_62 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 237 238
  return inLexique->nextProductionIndex () - 236 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_63' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_63 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 239 240 241 242 243 244 245
  return inLexique->nextProductionIndex () - 238 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_64' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_64 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 246 247 248
  return inLexique->nextProductionIndex () - 245 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_65' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_65 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 249 250
  return inLexique->nextProductionIndex () - 248 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_66' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_66 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 251 252
  return inLexique->nextProductionIndex () - 250 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_67' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_67 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 253 254
  return inLexique->nextProductionIndex () - 252 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_68' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_68 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 255 256
  return inLexique->nextProductionIndex () - 254 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_69' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_69 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 257 258
  return inLexique->nextProductionIndex () - 256 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_70' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_70 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 259 260
  return inLexique->nextProductionIndex () - 258 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_71' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_71 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 261 262
  return inLexique->nextProductionIndex () - 260 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_72' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_72 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 263 264
  return inLexique->nextProductionIndex () - 262 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_73' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_73 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 265 266
  return inLexique->nextProductionIndex () - 264 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_74' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_74 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 267 268 269 270 271
  return inLexique->nextProductionIndex () - 266 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_75' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_75 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 272 273
  return inLexique->nextProductionIndex () - 271 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_76' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_76 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 274 275 276 277 278 279 280 281
  return inLexique->nextProductionIndex () - 273 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_77' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_77 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 282 283
  return inLexique->nextProductionIndex () - 281 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_78' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_78 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 284 285 286
  return inLexique->nextProductionIndex () - 283 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_79' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_79 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 287 288
  return inLexique->nextProductionIndex () - 286 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_80' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_80 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 289 290
  return inLexique->nextProductionIndex () - 288 ;
}

//---------------------------------------------------------------------------------------------------------------------*

