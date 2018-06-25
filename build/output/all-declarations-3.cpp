#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-3.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Class for element of '@BuildFileList' list                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_BuildFileList::cCollectionElement_BuildFileList (const GALGAS_string & in_mFileReference,
                                                                    const GALGAS_string & in_mFileName,
                                                                    const GALGAS_string & in_mBuildReference
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFileReference, in_mFileName, in_mBuildReference) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_BuildFileList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_BuildFileList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_BuildFileList (mObject.mProperty_mFileReference, mObject.mProperty_mFileName, mObject.mProperty_mBuildReference COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_BuildFileList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_BuildFileList * operand = (cCollectionElement_BuildFileList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_BuildFileList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList::GALGAS_BuildFileList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList::GALGAS_BuildFileList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList GALGAS_BuildFileList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_BuildFileList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList GALGAS_BuildFileList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_BuildFileList result = GALGAS_BuildFileList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_BuildFileList::plusAssign_operation (const GALGAS_BuildFileList inOperand,
                                                 C_Compiler * /* inCompiler */
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_BuildFileList::cEnumerator_BuildFileList (const GALGAS_BuildFileList & inEnumeratedObject,
                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_BuildFileList_2D_element cEnumerator_BuildFileList::current (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_BuildFileList::current_mFileReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mFileReference ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_BuildFileList::current_mFileName (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mFileName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_BuildFileList::current_mBuildReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mBuildReference ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                 @BuildFileList type                                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_BuildFileList ("BuildFileList",
                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_BuildFileList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_BuildFileList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_BuildFileList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Class for element of '@mainXibLineDescriptorList' list                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_mainXibLineDescriptorList::cCollectionElement_mainXibLineDescriptorList (const GALGAS_mainXibElement & in_mElement
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
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
  const GALGAS_mainXibDescriptorList temp_0 = inObject ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, temp_0.getter_length (SOURCE_FILE ("main-xib.galgas", 88)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    const GALGAS_mainXibDescriptorList temp_2 = inObject ;
    result_outResult = GALGAS_string ("    var y = OUTLET_HEIGHT * 1.5 * ").add_operation (temp_2.getter_length (SOURCE_FILE ("main-xib.galgas", 89)).getter_string (SOURCE_FILE ("main-xib.galgas", 89)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 89)).add_operation (GALGAS_string (".0\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 89)) ;
    result_outResult.plusAssign_operation(GALGAS_string ("    let view = NSView (frame:NSRect (x:0.0, y:0.0, width:10.0, height:10.0))\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 90)) ;
    GALGAS_uint var_idx_3349 = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_uint var_columnMax_3371 = GALGAS_uint ((uint32_t) 1U) ;
    const GALGAS_mainXibDescriptorList temp_3 = inObject ;
    cEnumerator_mainXibDescriptorList enumerator_3394 (temp_3, kENUMERATION_UP) ;
    while (enumerator_3394.hasCurrentObject ()) {
      GALGAS_uint var_column_3414 = GALGAS_uint ((uint32_t) 0U) ;
      result_outResult.plusAssign_operation(GALGAS_string ("    y -= OUTLET_HEIGHT\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 95)) ;
      cEnumerator_mainXibLineDescriptorList enumerator_3486 (enumerator_3394.current_mLine (HERE), kENUMERATION_UP) ;
      while (enumerator_3486.hasCurrentObject ()) {
        switch (enumerator_3486.current_mElement (HERE).enumValue ()) {
        case GALGAS_mainXibElement::kNotBuilt:
          break ;
        case GALGAS_mainXibElement::kEnum_text:
          {
            const cEnumAssociatedValues_mainXibElement_text * extractPtr_4235 = (const cEnumAssociatedValues_mainXibElement_text *) (enumerator_3486.current_mElement (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_t = extractPtr_4235->mAssociatedValue0 ;
            var_idx_3349.increment_operation (inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 99)) ;
            result_outResult.plusAssign_operation(GALGAS_string ("  //--- Text ").add_operation (extractedValue_t.getter_string (SOURCE_FILE ("main-xib.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 100)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 100)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 100)) ;
            result_outResult.plusAssign_operation(GALGAS_string ("  //  createTextFieldForText (").add_operation (extractedValue_t.getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("main-xib.galgas", 101)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 101)).add_operation (GALGAS_string (", y:&y, col:0, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 101)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 101)) ;
            result_outResult.plusAssign_operation(GALGAS_string ("    let tf").add_operation (var_idx_3349.getter_string (SOURCE_FILE ("main-xib.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 102)).add_operation (GALGAS_string (" = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 102)).add_operation (var_column_3414.getter_string (SOURCE_FILE ("main-xib.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 102)).add_operation (GALGAS_string (".0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 102)) ;
            result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3349.getter_string (SOURCE_FILE ("main-xib.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 103)).add_operation (GALGAS_string (".stringValue = "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 103)).add_operation (extractedValue_t.getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("main-xib.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 103)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 103)) ;
            result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3349.getter_string (SOURCE_FILE ("main-xib.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 104)).add_operation (GALGAS_string (".isEditable = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 104)) ;
            result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3349.getter_string (SOURCE_FILE ("main-xib.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 105)).add_operation (GALGAS_string (".drawsBackground = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 105)) ;
            result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3349.getter_string (SOURCE_FILE ("main-xib.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 106)).add_operation (GALGAS_string (".isBordered = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 106)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 106)) ;
            result_outResult.plusAssign_operation(GALGAS_string ("    view.addSubview (tf").add_operation (var_idx_3349.getter_string (SOURCE_FILE ("main-xib.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 107)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 107)) ;
          }
          break ;
        case GALGAS_mainXibElement::kEnum_outlet:
          {
            const cEnumAssociatedValues_mainXibElement_outlet * extractPtr_4706 = (const cEnumAssociatedValues_mainXibElement_outlet *) (enumerator_3486.current_mElement (HERE).unsafePointer ()) ;
            const GALGAS_lstring extractedValue_outletType = extractPtr_4706->mAssociatedValue0 ;
            const GALGAS_lstring extractedValue_outletName = extractPtr_4706->mAssociatedValue1 ;
            result_outResult.plusAssign_operation(GALGAS_string ("  //--- Outlet ").add_operation (extractedValue_outletName.getter_string (SOURCE_FILE ("main-xib.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 109)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 109)) ;
            result_outResult.plusAssign_operation(GALGAS_string ("    ").add_operation (extractedValue_outletName.getter_string (SOURCE_FILE ("main-xib.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (extractedValue_outletType.getter_string (SOURCE_FILE ("main-xib.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (GALGAS_string ("(frame:NSRect (x:10.0 + OUTLET_WIDTH * "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (var_column_3414.getter_string (SOURCE_FILE ("main-xib.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)).add_operation (GALGAS_string (".0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 110)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 110)) ;
            result_outResult.plusAssign_operation(GALGAS_string ("    ").add_operation (extractedValue_outletName.getter_string (SOURCE_FILE ("main-xib.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 111)).add_operation (GALGAS_string ("\?.setAccessibilityIdentifier ("), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 111)).add_operation (extractedValue_outletName.getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("main-xib.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 111)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 111)) ;
            result_outResult.plusAssign_operation(GALGAS_string ("    view.addSubview (").add_operation (extractedValue_outletName.getter_string (SOURCE_FILE ("main-xib.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 112)).add_operation (GALGAS_string ("!)\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 112)) ;
          }
          break ;
        }
        var_column_3414.increment_operation (inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 114)) ;
        enumerator_3486.gotoNextObject () ;
      }
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, var_column_3414.objectCompare (var_columnMax_3371)).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_columnMax_3371 = var_column_3414 ;
      }
      result_outResult.plusAssign_operation(GALGAS_string ("    y -= OUTLET_HEIGHT / 2.0\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 119)) ;
      enumerator_3394.gotoNextObject () ;
    }
    result_outResult.plusAssign_operation(GALGAS_string ("  //--- Set pref window content view\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 121)) ;
    const GALGAS_mainXibDescriptorList temp_5 = inObject ;
    result_outResult.plusAssign_operation(GALGAS_string ("    window\?.setContentSize (NSSize (width:20.0 + OUTLET_WIDTH * ").add_operation (var_columnMax_3371.getter_string (SOURCE_FILE ("main-xib.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 122)).add_operation (GALGAS_string (".0, height:OUTLET_HEIGHT * (1.5 * "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 122)).add_operation (temp_5.getter_length (SOURCE_FILE ("main-xib.galgas", 122)).getter_string (SOURCE_FILE ("main-xib.galgas", 122)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 122)).add_operation (GALGAS_string (".0 + 0.5)))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 122)) ;
    result_outResult.plusAssign_operation(GALGAS_string ("    window\?.contentView = view\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas", 123)) ;
  }
//---
  return result_outResult ;
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

GALGAS_enumListForGeneration_2D_element::GALGAS_enumListForGeneration_2D_element (void) :
mProperty_mEnumName (),
mProperty_mEnumConstantList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration_2D_element::~ GALGAS_enumListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration_2D_element::GALGAS_enumListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_lstringlist & inOperand1) :
mProperty_mEnumName (inOperand0),
mProperty_mEnumConstantList (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration_2D_element GALGAS_enumListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                  GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration_2D_element GALGAS_enumListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_lstringlist & inOperand1 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_enumListForGeneration_2D_element::objectCompare (const GALGAS_enumListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEnumName.objectCompare (inOperand.mProperty_mEnumName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEnumConstantList.objectCompare (inOperand.mProperty_mEnumConstantList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_enumListForGeneration_2D_element::isValid (void) const {
  return mProperty_mEnumName.isValid () && mProperty_mEnumConstantList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumListForGeneration_2D_element::drop (void) {
  mProperty_mEnumName.drop () ;
  mProperty_mEnumConstantList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_enumListForGeneration_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @enumListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEnumName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnumConstantList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_enumListForGeneration_2D_element::getter_mEnumName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_enumListForGeneration_2D_element::getter_mEnumConstantList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumConstantList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @enumListForGeneration-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumListForGeneration_2D_element ("enumListForGeneration-element",
                                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumListForGeneration_2D_element GALGAS_enumListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_enumListForGeneration_2D_element result ;
  const GALGAS_enumListForGeneration_2D_element * p = (const GALGAS_enumListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
mProperty_mDestinationEntityObservablePropertyMap () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration_2D_element::~ GALGAS_toOneEntityRelationshipListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration_2D_element::GALGAS_toOneEntityRelationshipListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                        const GALGAS_typeKind & inOperand1,
                                                                                                                        const GALGAS_string & inOperand2,
                                                                                                                        const GALGAS_propertyMultiplicity & inOperand3,
                                                                                                                        const GALGAS_observablePropertyMap & inOperand4) :
mProperty_mToOneRelationshipName (inOperand0),
mProperty_mRelationshipType (inOperand1),
mProperty_mOppositeRelationshipName (inOperand2),
mProperty_mInverseRelationMultiplicity (inOperand3),
mProperty_mDestinationEntityObservablePropertyMap (inOperand4) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration_2D_element GALGAS_toOneEntityRelationshipListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                        const GALGAS_typeKind & inOperand1,
                                                                                                                                        const GALGAS_string & inOperand2,
                                                                                                                                        const GALGAS_propertyMultiplicity & inOperand3,
                                                                                                                                        const GALGAS_observablePropertyMap & inOperand4 
                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toOneEntityRelationshipListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_toOneEntityRelationshipListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_toOneEntityRelationshipListForGeneration_2D_element::isValid (void) const {
  return mProperty_mToOneRelationshipName.isValid () && mProperty_mRelationshipType.isValid () && mProperty_mOppositeRelationshipName.isValid () && mProperty_mInverseRelationMultiplicity.isValid () && mProperty_mDestinationEntityObservablePropertyMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toOneEntityRelationshipListForGeneration_2D_element::drop (void) {
  mProperty_mToOneRelationshipName.drop () ;
  mProperty_mRelationshipType.drop () ;
  mProperty_mOppositeRelationshipName.drop () ;
  mProperty_mInverseRelationMultiplicity.drop () ;
  mProperty_mDestinationEntityObservablePropertyMap.drop () ;
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
mProperty_mDestinationEntityObservablePropertyMap () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration_2D_element::~ GALGAS_toManyEntityRelationshipListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration_2D_element::GALGAS_toManyEntityRelationshipListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                          const GALGAS_typeKind & inOperand1,
                                                                                                                          const GALGAS_string & inOperand2,
                                                                                                                          const GALGAS_observablePropertyMap & inOperand3) :
mProperty_mToManyRelationshipName (inOperand0),
mProperty_mRelationshipType (inOperand1),
mProperty_mOppositeRelationshipName (inOperand2),
mProperty_mDestinationEntityObservablePropertyMap (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration_2D_element GALGAS_toManyEntityRelationshipListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                          const GALGAS_typeKind & inOperand1,
                                                                                                                                          const GALGAS_string & inOperand2,
                                                                                                                                          const GALGAS_observablePropertyMap & inOperand3 
                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toManyEntityRelationshipListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_toManyEntityRelationshipListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
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
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_toManyEntityRelationshipListForGeneration_2D_element::isValid (void) const {
  return mProperty_mToManyRelationshipName.isValid () && mProperty_mRelationshipType.isValid () && mProperty_mOppositeRelationshipName.isValid () && mProperty_mDestinationEntityObservablePropertyMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_toManyEntityRelationshipListForGeneration_2D_element::drop (void) {
  mProperty_mToManyRelationshipName.drop () ;
  mProperty_mRelationshipType.drop () ;
  mProperty_mOppositeRelationshipName.drop () ;
  mProperty_mDestinationEntityObservablePropertyMap.drop () ;
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

GALGAS_classListForGeneration_2D_element::GALGAS_classListForGeneration_2D_element (void) :
mProperty_mClassName (),
mProperty_mSimpleStoredPropertyListForGeneration (),
mProperty_mTransientListForGeneration (),
mProperty_mExternSwiftFunctionList (),
mProperty_mExternSwiftDelegateList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classListForGeneration_2D_element::~ GALGAS_classListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classListForGeneration_2D_element::GALGAS_classListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                    const GALGAS_simpleStoredPropertyListForGeneration & inOperand1,
                                                                                    const GALGAS_transientDefinitionListForGeneration & inOperand2,
                                                                                    const GALGAS_externSwiftFunctionList & inOperand3,
                                                                                    const GALGAS_externSwiftDelegateList & inOperand4) :
mProperty_mClassName (inOperand0),
mProperty_mSimpleStoredPropertyListForGeneration (inOperand1),
mProperty_mTransientListForGeneration (inOperand2),
mProperty_mExternSwiftFunctionList (inOperand3),
mProperty_mExternSwiftDelegateList (inOperand4) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classListForGeneration_2D_element GALGAS_classListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_classListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                   GALGAS_simpleStoredPropertyListForGeneration::constructor_emptyList (HERE),
                                                   GALGAS_transientDefinitionListForGeneration::constructor_emptyList (HERE),
                                                   GALGAS_externSwiftFunctionList::constructor_emptyList (HERE),
                                                   GALGAS_externSwiftDelegateList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classListForGeneration_2D_element GALGAS_classListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_simpleStoredPropertyListForGeneration & inOperand1,
                                                                                                    const GALGAS_transientDefinitionListForGeneration & inOperand2,
                                                                                                    const GALGAS_externSwiftFunctionList & inOperand3,
                                                                                                    const GALGAS_externSwiftDelegateList & inOperand4 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_classListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_classListForGeneration_2D_element::objectCompare (const GALGAS_classListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mClassName.objectCompare (inOperand.mProperty_mClassName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSimpleStoredPropertyListForGeneration.objectCompare (inOperand.mProperty_mSimpleStoredPropertyListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTransientListForGeneration.objectCompare (inOperand.mProperty_mTransientListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExternSwiftFunctionList.objectCompare (inOperand.mProperty_mExternSwiftFunctionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExternSwiftDelegateList.objectCompare (inOperand.mProperty_mExternSwiftDelegateList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_classListForGeneration_2D_element::isValid (void) const {
  return mProperty_mClassName.isValid () && mProperty_mSimpleStoredPropertyListForGeneration.isValid () && mProperty_mTransientListForGeneration.isValid () && mProperty_mExternSwiftFunctionList.isValid () && mProperty_mExternSwiftDelegateList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classListForGeneration_2D_element::drop (void) {
  mProperty_mClassName.drop () ;
  mProperty_mSimpleStoredPropertyListForGeneration.drop () ;
  mProperty_mTransientListForGeneration.drop () ;
  mProperty_mExternSwiftFunctionList.drop () ;
  mProperty_mExternSwiftDelegateList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_classListForGeneration_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @classListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSimpleStoredPropertyListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTransientListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExternSwiftDelegateList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_classListForGeneration_2D_element::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGeneration GALGAS_classListForGeneration_2D_element::getter_mSimpleStoredPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSimpleStoredPropertyListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGeneration GALGAS_classListForGeneration_2D_element::getter_mTransientListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_classListForGeneration_2D_element::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftFunctionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList GALGAS_classListForGeneration_2D_element::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftDelegateList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @classListForGeneration-element type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classListForGeneration_2D_element ("classListForGeneration-element",
                                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_classListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_classListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classListForGeneration_2D_element GALGAS_classListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_classListForGeneration_2D_element result ;
  const GALGAS_classListForGeneration_2D_element * p = (const GALGAS_classListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneration_2D_element::GALGAS_entityListForGeneration_2D_element (void) :
mProperty_mEntityName (),
mProperty_mSuperEntityName (),
mProperty_mSimpleStoredPropertyListForGeneration (),
mProperty_mDecoratedTransientListForGeneration (),
mProperty_mToOneEntityRelationshipList (),
mProperty_mToManyEntityRelationshipList (),
mProperty_mSignatureSet () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneration_2D_element::~ GALGAS_entityListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneration_2D_element::GALGAS_entityListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                      const GALGAS_string & inOperand1,
                                                                                      const GALGAS_simpleStoredPropertyListForGeneration & inOperand2,
                                                                                      const GALGAS_transientDefinitionListForGeneration & inOperand3,
                                                                                      const GALGAS_toOneEntityRelationshipListForGeneration & inOperand4,
                                                                                      const GALGAS_toManyEntityRelationshipListForGeneration & inOperand5,
                                                                                      const GALGAS_stringset & inOperand6) :
mProperty_mEntityName (inOperand0),
mProperty_mSuperEntityName (inOperand1),
mProperty_mSimpleStoredPropertyListForGeneration (inOperand2),
mProperty_mDecoratedTransientListForGeneration (inOperand3),
mProperty_mToOneEntityRelationshipList (inOperand4),
mProperty_mToManyEntityRelationshipList (inOperand5),
mProperty_mSignatureSet (inOperand6) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneration_2D_element GALGAS_entityListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_entityListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                    GALGAS_string::constructor_default (HERE),
                                                    GALGAS_simpleStoredPropertyListForGeneration::constructor_emptyList (HERE),
                                                    GALGAS_transientDefinitionListForGeneration::constructor_emptyList (HERE),
                                                    GALGAS_toOneEntityRelationshipListForGeneration::constructor_emptyList (HERE),
                                                    GALGAS_toManyEntityRelationshipListForGeneration::constructor_emptyList (HERE),
                                                    GALGAS_stringset::constructor_emptySet (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneration_2D_element GALGAS_entityListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                      const GALGAS_string & inOperand1,
                                                                                                      const GALGAS_simpleStoredPropertyListForGeneration & inOperand2,
                                                                                                      const GALGAS_transientDefinitionListForGeneration & inOperand3,
                                                                                                      const GALGAS_toOneEntityRelationshipListForGeneration & inOperand4,
                                                                                                      const GALGAS_toManyEntityRelationshipListForGeneration & inOperand5,
                                                                                                      const GALGAS_stringset & inOperand6 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_entityListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_entityListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_entityListForGeneration_2D_element::objectCompare (const GALGAS_entityListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEntityName.objectCompare (inOperand.mProperty_mEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSuperEntityName.objectCompare (inOperand.mProperty_mSuperEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSimpleStoredPropertyListForGeneration.objectCompare (inOperand.mProperty_mSimpleStoredPropertyListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDecoratedTransientListForGeneration.objectCompare (inOperand.mProperty_mDecoratedTransientListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mToOneEntityRelationshipList.objectCompare (inOperand.mProperty_mToOneEntityRelationshipList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mToManyEntityRelationshipList.objectCompare (inOperand.mProperty_mToManyEntityRelationshipList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSignatureSet.objectCompare (inOperand.mProperty_mSignatureSet) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_entityListForGeneration_2D_element::isValid (void) const {
  return mProperty_mEntityName.isValid () && mProperty_mSuperEntityName.isValid () && mProperty_mSimpleStoredPropertyListForGeneration.isValid () && mProperty_mDecoratedTransientListForGeneration.isValid () && mProperty_mToOneEntityRelationshipList.isValid () && mProperty_mToManyEntityRelationshipList.isValid () && mProperty_mSignatureSet.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneration_2D_element::drop (void) {
  mProperty_mEntityName.drop () ;
  mProperty_mSuperEntityName.drop () ;
  mProperty_mSimpleStoredPropertyListForGeneration.drop () ;
  mProperty_mDecoratedTransientListForGeneration.drop () ;
  mProperty_mToOneEntityRelationshipList.drop () ;
  mProperty_mToManyEntityRelationshipList.drop () ;
  mProperty_mSignatureSet.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_entityListForGeneration_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @entityListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSuperEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSimpleStoredPropertyListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDecoratedTransientListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mToOneEntityRelationshipList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mToManyEntityRelationshipList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSignatureSet.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_entityListForGeneration_2D_element::getter_mEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_entityListForGeneration_2D_element::getter_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSuperEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGeneration GALGAS_entityListForGeneration_2D_element::getter_mSimpleStoredPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSimpleStoredPropertyListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGeneration GALGAS_entityListForGeneration_2D_element::getter_mDecoratedTransientListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDecoratedTransientListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneEntityRelationshipListForGeneration GALGAS_entityListForGeneration_2D_element::getter_mToOneEntityRelationshipList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToOneEntityRelationshipList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyEntityRelationshipListForGeneration GALGAS_entityListForGeneration_2D_element::getter_mToManyEntityRelationshipList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToManyEntityRelationshipList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_entityListForGeneration_2D_element::getter_mSignatureSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignatureSet ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @entityListForGeneration-element type                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityListForGeneration_2D_element ("entityListForGeneration-element",
                                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_entityListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_entityListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityListForGeneration_2D_element GALGAS_entityListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_entityListForGeneration_2D_element result ;
  const GALGAS_entityListForGeneration_2D_element * p = (const GALGAS_entityListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentListForGeneration_2D_element::GALGAS_documentListForGeneration_2D_element (void) :
mProperty_mDocumentName (),
mProperty_mRootEntityName (),
mProperty_mSimpleStoredPropertyListForGeneration (),
mProperty_mTransientListForGeneration (),
mProperty_mOutletMap (),
mProperty_mTargetActionList (),
mProperty_mRegularBindingsGenerationList (),
mProperty_multipleBindingGenerationList (),
mProperty_mDocumentArrayControllerForGeneration (),
mProperty_mTableViewBindingGenerationList (),
mProperty_mSelectionControllerListForGeneration (),
mProperty_mCustomObjectControllerListForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentListForGeneration_2D_element::~ GALGAS_documentListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentListForGeneration_2D_element::GALGAS_documentListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                          const GALGAS_string & inOperand1,
                                                                                          const GALGAS_simpleStoredPropertyListForGeneration & inOperand2,
                                                                                          const GALGAS_transientDefinitionListForGeneration & inOperand3,
                                                                                          const GALGAS_decoratedOutletMap & inOperand4,
                                                                                          const GALGAS_actionBindingListForGeneration & inOperand5,
                                                                                          const GALGAS_regularBindingsGenerationList & inOperand6,
                                                                                          const GALGAS_multipleBindingGenerationList & inOperand7,
                                                                                          const GALGAS_arrayControllerForGeneration & inOperand8,
                                                                                          const GALGAS_tableViewBindingGenerationList & inOperand9,
                                                                                          const GALGAS_selectionControllerForGeneration & inOperand10,
                                                                                          const GALGAS_customObjectControllerForGeneration & inOperand11) :
mProperty_mDocumentName (inOperand0),
mProperty_mRootEntityName (inOperand1),
mProperty_mSimpleStoredPropertyListForGeneration (inOperand2),
mProperty_mTransientListForGeneration (inOperand3),
mProperty_mOutletMap (inOperand4),
mProperty_mTargetActionList (inOperand5),
mProperty_mRegularBindingsGenerationList (inOperand6),
mProperty_multipleBindingGenerationList (inOperand7),
mProperty_mDocumentArrayControllerForGeneration (inOperand8),
mProperty_mTableViewBindingGenerationList (inOperand9),
mProperty_mSelectionControllerListForGeneration (inOperand10),
mProperty_mCustomObjectControllerListForGeneration (inOperand11) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentListForGeneration_2D_element GALGAS_documentListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_documentListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                      GALGAS_string::constructor_default (HERE),
                                                      GALGAS_simpleStoredPropertyListForGeneration::constructor_emptyList (HERE),
                                                      GALGAS_transientDefinitionListForGeneration::constructor_emptyList (HERE),
                                                      GALGAS_decoratedOutletMap::constructor_emptyMap (HERE),
                                                      GALGAS_actionBindingListForGeneration::constructor_emptyList (HERE),
                                                      GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE),
                                                      GALGAS_multipleBindingGenerationList::constructor_emptyList (HERE),
                                                      GALGAS_arrayControllerForGeneration::constructor_emptyList (HERE),
                                                      GALGAS_tableViewBindingGenerationList::constructor_emptyList (HERE),
                                                      GALGAS_selectionControllerForGeneration::constructor_emptyList (HERE),
                                                      GALGAS_customObjectControllerForGeneration::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentListForGeneration_2D_element GALGAS_documentListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                          const GALGAS_string & inOperand1,
                                                                                                          const GALGAS_simpleStoredPropertyListForGeneration & inOperand2,
                                                                                                          const GALGAS_transientDefinitionListForGeneration & inOperand3,
                                                                                                          const GALGAS_decoratedOutletMap & inOperand4,
                                                                                                          const GALGAS_actionBindingListForGeneration & inOperand5,
                                                                                                          const GALGAS_regularBindingsGenerationList & inOperand6,
                                                                                                          const GALGAS_multipleBindingGenerationList & inOperand7,
                                                                                                          const GALGAS_arrayControllerForGeneration & inOperand8,
                                                                                                          const GALGAS_tableViewBindingGenerationList & inOperand9,
                                                                                                          const GALGAS_selectionControllerForGeneration & inOperand10,
                                                                                                          const GALGAS_customObjectControllerForGeneration & inOperand11 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_documentListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid ()) {
    result = GALGAS_documentListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11) ;
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
    result = mProperty_mSimpleStoredPropertyListForGeneration.objectCompare (inOperand.mProperty_mSimpleStoredPropertyListForGeneration) ;
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
    result = mProperty_mDocumentArrayControllerForGeneration.objectCompare (inOperand.mProperty_mDocumentArrayControllerForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTableViewBindingGenerationList.objectCompare (inOperand.mProperty_mTableViewBindingGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelectionControllerListForGeneration.objectCompare (inOperand.mProperty_mSelectionControllerListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCustomObjectControllerListForGeneration.objectCompare (inOperand.mProperty_mCustomObjectControllerListForGeneration) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_documentListForGeneration_2D_element::isValid (void) const {
  return mProperty_mDocumentName.isValid () && mProperty_mRootEntityName.isValid () && mProperty_mSimpleStoredPropertyListForGeneration.isValid () && mProperty_mTransientListForGeneration.isValid () && mProperty_mOutletMap.isValid () && mProperty_mTargetActionList.isValid () && mProperty_mRegularBindingsGenerationList.isValid () && mProperty_multipleBindingGenerationList.isValid () && mProperty_mDocumentArrayControllerForGeneration.isValid () && mProperty_mTableViewBindingGenerationList.isValid () && mProperty_mSelectionControllerListForGeneration.isValid () && mProperty_mCustomObjectControllerListForGeneration.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_documentListForGeneration_2D_element::drop (void) {
  mProperty_mDocumentName.drop () ;
  mProperty_mRootEntityName.drop () ;
  mProperty_mSimpleStoredPropertyListForGeneration.drop () ;
  mProperty_mTransientListForGeneration.drop () ;
  mProperty_mOutletMap.drop () ;
  mProperty_mTargetActionList.drop () ;
  mProperty_mRegularBindingsGenerationList.drop () ;
  mProperty_multipleBindingGenerationList.drop () ;
  mProperty_mDocumentArrayControllerForGeneration.drop () ;
  mProperty_mTableViewBindingGenerationList.drop () ;
  mProperty_mSelectionControllerListForGeneration.drop () ;
  mProperty_mCustomObjectControllerListForGeneration.drop () ;
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
    mProperty_mSimpleStoredPropertyListForGeneration.description (ioString, inIndentation+1) ;
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
    mProperty_mDocumentArrayControllerForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTableViewBindingGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelectionControllerListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCustomObjectControllerListForGeneration.description (ioString, inIndentation+1) ;
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

GALGAS_simpleStoredPropertyListForGeneration GALGAS_documentListForGeneration_2D_element::getter_mSimpleStoredPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSimpleStoredPropertyListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGeneration GALGAS_documentListForGeneration_2D_element::getter_mTransientListForGeneration (UNUSED_LOCATION_ARGS) const {
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

GALGAS_arrayControllerForGeneration GALGAS_documentListForGeneration_2D_element::getter_mDocumentArrayControllerForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDocumentArrayControllerForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_documentListForGeneration_2D_element::getter_mTableViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableViewBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_selectionControllerForGeneration GALGAS_documentListForGeneration_2D_element::getter_mSelectionControllerListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionControllerListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_customObjectControllerForGeneration GALGAS_documentListForGeneration_2D_element::getter_mCustomObjectControllerListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCustomObjectControllerListForGeneration ;
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

GALGAS_bindingSpecificationListMap_2D_element::GALGAS_bindingSpecificationListMap_2D_element (void) :
mProperty_key (),
mProperty_mList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationListMap_2D_element::~ GALGAS_bindingSpecificationListMap_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationListMap_2D_element::GALGAS_bindingSpecificationListMap_2D_element (const GALGAS_string & inOperand0,
                                                                                              const GALGAS_outletClassBindingSpecificationList & inOperand1) :
mProperty_key (inOperand0),
mProperty_mList (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationListMap_2D_element GALGAS_bindingSpecificationListMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_bindingSpecificationListMap_2D_element (GALGAS_string::constructor_default (HERE),
                                                        GALGAS_outletClassBindingSpecificationList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationListMap_2D_element GALGAS_bindingSpecificationListMap_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                              const GALGAS_outletClassBindingSpecificationList & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bindingSpecificationListMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_bindingSpecificationListMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_bindingSpecificationListMap_2D_element::objectCompare (const GALGAS_bindingSpecificationListMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_key.objectCompare (inOperand.mProperty_key) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mList.objectCompare (inOperand.mProperty_mList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_bindingSpecificationListMap_2D_element::isValid (void) const {
  return mProperty_key.isValid () && mProperty_mList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingSpecificationListMap_2D_element::drop (void) {
  mProperty_key.drop () ;
  mProperty_mList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingSpecificationListMap_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @bindingSpecificationListMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_key.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_bindingSpecificationListMap_2D_element::getter_key (UNUSED_LOCATION_ARGS) const {
  return mProperty_key ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList GALGAS_bindingSpecificationListMap_2D_element::getter_mList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @bindingSpecificationListMap-element type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bindingSpecificationListMap_2D_element ("bindingSpecificationListMap-element",
                                                               NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_bindingSpecificationListMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingSpecificationListMap_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_bindingSpecificationListMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bindingSpecificationListMap_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationListMap_2D_element GALGAS_bindingSpecificationListMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_bindingSpecificationListMap_2D_element result ;
  const GALGAS_bindingSpecificationListMap_2D_element * p = (const GALGAS_bindingSpecificationListMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bindingSpecificationListMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingSpecificationListMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
mProperty_mModelType (),
mProperty_mKind (),
mProperty_mErrorLocation () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingModelList_2D_element::~ GALGAS_outletBindingModelList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingModelList_2D_element::GALGAS_outletBindingModelList_2D_element (const GALGAS_typeKind & inOperand0,
                                                                                    const GALGAS_propertyKind & inOperand1,
                                                                                    const GALGAS_location & inOperand2) :
mProperty_mModelType (inOperand0),
mProperty_mKind (inOperand1),
mProperty_mErrorLocation (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingModelList_2D_element GALGAS_outletBindingModelList_2D_element::constructor_new (const GALGAS_typeKind & inOperand0,
                                                                                                    const GALGAS_propertyKind & inOperand1,
                                                                                                    const GALGAS_location & inOperand2 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingModelList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_outletBindingModelList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_outletBindingModelList_2D_element::objectCompare (const GALGAS_outletBindingModelList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mModelType.objectCompare (inOperand.mProperty_mModelType) ;
  }
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
  return mProperty_mModelType.isValid () && mProperty_mKind.isValid () && mProperty_mErrorLocation.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingModelList_2D_element::drop (void) {
  mProperty_mModelType.drop () ;
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
    mProperty_mModelType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mErrorLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_outletBindingModelList_2D_element::getter_mModelType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelType ;
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

GALGAS_regularBindingsGenerationList_2D_element::GALGAS_regularBindingsGenerationList_2D_element (void) :
mProperty_mOutletName (),
mProperty_mBindingName (),
mProperty_mBoundObjectStringList (),
mProperty_mBindingOptionsString () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList_2D_element::~ GALGAS_regularBindingsGenerationList_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList_2D_element::GALGAS_regularBindingsGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_string & inOperand1,
                                                                                                  const GALGAS_stringlist & inOperand2,
                                                                                                  const GALGAS_string & inOperand3) :
mProperty_mOutletName (inOperand0),
mProperty_mBindingName (inOperand1),
mProperty_mBoundObjectStringList (inOperand2),
mProperty_mBindingOptionsString (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList_2D_element GALGAS_regularBindingsGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_regularBindingsGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                          GALGAS_string::constructor_default (HERE),
                                                          GALGAS_stringlist::constructor_emptyList (HERE),
                                                          GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList_2D_element GALGAS_regularBindingsGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                  const GALGAS_string & inOperand1,
                                                                                                                  const GALGAS_stringlist & inOperand2,
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
    result = mProperty_mBoundObjectStringList.objectCompare (inOperand.mProperty_mBoundObjectStringList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingOptionsString.objectCompare (inOperand.mProperty_mBindingOptionsString) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_regularBindingsGenerationList_2D_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mBindingName.isValid () && mProperty_mBoundObjectStringList.isValid () && mProperty_mBindingOptionsString.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList_2D_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectStringList.drop () ;
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
    mProperty_mBoundObjectStringList.description (ioString, inIndentation+1) ;
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

GALGAS_stringlist GALGAS_regularBindingsGenerationList_2D_element::getter_mBoundObjectStringList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mBoundObjectStringList ;
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

GALGAS_transientDefinitionListForGeneration_2D_element::GALGAS_transientDefinitionListForGeneration_2D_element (void) :
mProperty_mOwnerName (),
mProperty_mTransientName (),
mProperty_mIsArray (),
mProperty_mTransientType (),
mProperty_mDependencyList (),
mProperty_mIsCopy () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGeneration_2D_element::~ GALGAS_transientDefinitionListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGeneration_2D_element::GALGAS_transientDefinitionListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                const GALGAS_bool & inOperand2,
                                                                                                                const GALGAS_typeKind & inOperand3,
                                                                                                                const GALGAS_transientDependencyListForGeneration & inOperand4,
                                                                                                                const GALGAS_bool & inOperand5) :
mProperty_mOwnerName (inOperand0),
mProperty_mTransientName (inOperand1),
mProperty_mIsArray (inOperand2),
mProperty_mTransientType (inOperand3),
mProperty_mDependencyList (inOperand4),
mProperty_mIsCopy (inOperand5) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGeneration_2D_element GALGAS_transientDefinitionListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                                const GALGAS_bool & inOperand2,
                                                                                                                                const GALGAS_typeKind & inOperand3,
                                                                                                                                const GALGAS_transientDependencyListForGeneration & inOperand4,
                                                                                                                                const GALGAS_bool & inOperand5 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientDefinitionListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_transientDefinitionListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_transientDefinitionListForGeneration_2D_element::objectCompare (const GALGAS_transientDefinitionListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOwnerName.objectCompare (inOperand.mProperty_mOwnerName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTransientName.objectCompare (inOperand.mProperty_mTransientName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsArray.objectCompare (inOperand.mProperty_mIsArray) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTransientType.objectCompare (inOperand.mProperty_mTransientType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDependencyList.objectCompare (inOperand.mProperty_mDependencyList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mIsCopy.objectCompare (inOperand.mProperty_mIsCopy) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_transientDefinitionListForGeneration_2D_element::isValid (void) const {
  return mProperty_mOwnerName.isValid () && mProperty_mTransientName.isValid () && mProperty_mIsArray.isValid () && mProperty_mTransientType.isValid () && mProperty_mDependencyList.isValid () && mProperty_mIsCopy.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDefinitionListForGeneration_2D_element::drop (void) {
  mProperty_mOwnerName.drop () ;
  mProperty_mTransientName.drop () ;
  mProperty_mIsArray.drop () ;
  mProperty_mTransientType.drop () ;
  mProperty_mDependencyList.drop () ;
  mProperty_mIsCopy.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_transientDefinitionListForGeneration_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @transientDefinitionListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOwnerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTransientName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsArray.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTransientType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDependencyList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mIsCopy.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_transientDefinitionListForGeneration_2D_element::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_transientDefinitionListForGeneration_2D_element::getter_mTransientName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_transientDefinitionListForGeneration_2D_element::getter_mIsArray (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsArray ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_transientDefinitionListForGeneration_2D_element::getter_mTransientType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration GALGAS_transientDefinitionListForGeneration_2D_element::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependencyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_transientDefinitionListForGeneration_2D_element::getter_mIsCopy (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsCopy ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @transientDefinitionListForGeneration-element type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientDefinitionListForGeneration_2D_element ("transientDefinitionListForGeneration-element",
                                                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transientDefinitionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDefinitionListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transientDefinitionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientDefinitionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGeneration_2D_element GALGAS_transientDefinitionListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_transientDefinitionListForGeneration_2D_element result ;
  const GALGAS_transientDefinitionListForGeneration_2D_element * p = (const GALGAS_transientDefinitionListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientDefinitionListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDefinitionListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_simpleStoredPropertyListForGeneration_2D_element::GALGAS_simpleStoredPropertyListForGeneration_2D_element (void) :
mProperty_mType (),
mProperty_mStoredPropertyName (),
mProperty_mDefaultValueInSwift (),
mProperty_mNeedsValidation () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGeneration_2D_element::~ GALGAS_simpleStoredPropertyListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGeneration_2D_element::GALGAS_simpleStoredPropertyListForGeneration_2D_element (const GALGAS_typeKind & inOperand0,
                                                                                                                  const GALGAS_string & inOperand1,
                                                                                                                  const GALGAS_string & inOperand2,
                                                                                                                  const GALGAS_bool & inOperand3) :
mProperty_mType (inOperand0),
mProperty_mStoredPropertyName (inOperand1),
mProperty_mDefaultValueInSwift (inOperand2),
mProperty_mNeedsValidation (inOperand3) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGeneration_2D_element GALGAS_simpleStoredPropertyListForGeneration_2D_element::constructor_new (const GALGAS_typeKind & inOperand0,
                                                                                                                                  const GALGAS_string & inOperand1,
                                                                                                                                  const GALGAS_string & inOperand2,
                                                                                                                                  const GALGAS_bool & inOperand3 
                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_simpleStoredPropertyListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_simpleStoredPropertyListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_simpleStoredPropertyListForGeneration_2D_element::objectCompare (const GALGAS_simpleStoredPropertyListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStoredPropertyName.objectCompare (inOperand.mProperty_mStoredPropertyName) ;
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

bool GALGAS_simpleStoredPropertyListForGeneration_2D_element::isValid (void) const {
  return mProperty_mType.isValid () && mProperty_mStoredPropertyName.isValid () && mProperty_mDefaultValueInSwift.isValid () && mProperty_mNeedsValidation.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyListForGeneration_2D_element::drop (void) {
  mProperty_mType.drop () ;
  mProperty_mStoredPropertyName.drop () ;
  mProperty_mDefaultValueInSwift.drop () ;
  mProperty_mNeedsValidation.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_simpleStoredPropertyListForGeneration_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @simpleStoredPropertyListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStoredPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDefaultValueInSwift.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mNeedsValidation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_simpleStoredPropertyListForGeneration_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_simpleStoredPropertyListForGeneration_2D_element::getter_mStoredPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStoredPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_simpleStoredPropertyListForGeneration_2D_element::getter_mDefaultValueInSwift (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultValueInSwift ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_simpleStoredPropertyListForGeneration_2D_element::getter_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNeedsValidation ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @simpleStoredPropertyListForGeneration-element type                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_simpleStoredPropertyListForGeneration_2D_element ("simpleStoredPropertyListForGeneration-element",
                                                                         NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_simpleStoredPropertyListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleStoredPropertyListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_simpleStoredPropertyListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_simpleStoredPropertyListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGeneration_2D_element GALGAS_simpleStoredPropertyListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_simpleStoredPropertyListForGeneration_2D_element result ;
  const GALGAS_simpleStoredPropertyListForGeneration_2D_element * p = (const GALGAS_simpleStoredPropertyListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_simpleStoredPropertyListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleStoredPropertyListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListForGeneration_2D_element::GALGAS_storedArrayPropertyListForGeneration_2D_element (void) :
mProperty_mElementClassName (),
mProperty_mStoredPropertyName () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListForGeneration_2D_element::~ GALGAS_storedArrayPropertyListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListForGeneration_2D_element::GALGAS_storedArrayPropertyListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS_string & inOperand1) :
mProperty_mElementClassName (inOperand0),
mProperty_mStoredPropertyName (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListForGeneration_2D_element GALGAS_storedArrayPropertyListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_storedArrayPropertyListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                 GALGAS_string::constructor_default (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListForGeneration_2D_element GALGAS_storedArrayPropertyListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                const GALGAS_string & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_storedArrayPropertyListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_storedArrayPropertyListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_storedArrayPropertyListForGeneration_2D_element::objectCompare (const GALGAS_storedArrayPropertyListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mElementClassName.objectCompare (inOperand.mProperty_mElementClassName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStoredPropertyName.objectCompare (inOperand.mProperty_mStoredPropertyName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_storedArrayPropertyListForGeneration_2D_element::isValid (void) const {
  return mProperty_mElementClassName.isValid () && mProperty_mStoredPropertyName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListForGeneration_2D_element::drop (void) {
  mProperty_mElementClassName.drop () ;
  mProperty_mStoredPropertyName.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListForGeneration_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @storedArrayPropertyListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mElementClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStoredPropertyName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_storedArrayPropertyListForGeneration_2D_element::getter_mElementClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_storedArrayPropertyListForGeneration_2D_element::getter_mStoredPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStoredPropertyName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @storedArrayPropertyListForGeneration-element type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storedArrayPropertyListForGeneration_2D_element ("storedArrayPropertyListForGeneration-element",
                                                                        NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_storedArrayPropertyListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storedArrayPropertyListForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_storedArrayPropertyListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storedArrayPropertyListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListForGeneration_2D_element GALGAS_storedArrayPropertyListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_storedArrayPropertyListForGeneration_2D_element result ;
  const GALGAS_storedArrayPropertyListForGeneration_2D_element * p = (const GALGAS_storedArrayPropertyListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storedArrayPropertyListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storedArrayPropertyListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_arrayControllerForGeneration_2D_element::GALGAS_arrayControllerForGeneration_2D_element (void) :
mProperty_mOwnerName (),
mProperty_mControllerName (),
mProperty_mArrayControllerFilterListForGeneration (),
mProperty_mModelString (),
mProperty_mArrayControllerBoundColumnListForGeneration (),
mProperty_mArrayControllerSortedColumnListForGeneration (),
mProperty_mModelTypeName (),
mProperty_mModelTypeName_32_ (),
mProperty_mModelKind (),
mProperty_mElementTypeName (),
mProperty_mAttributeListForGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGeneration_2D_element::~ GALGAS_arrayControllerForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGeneration_2D_element::GALGAS_arrayControllerForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                const GALGAS_string & inOperand1,
                                                                                                const GALGAS_arrayControllerFilterListForGeneration & inOperand2,
                                                                                                const GALGAS_string & inOperand3,
                                                                                                const GALGAS_arrayControllerBoundColumnListForGeneration & inOperand4,
                                                                                                const GALGAS_arrayControllerSortedColumnListForGeneration & inOperand5,
                                                                                                const GALGAS_string & inOperand6,
                                                                                                const GALGAS_string & inOperand7,
                                                                                                const GALGAS_arrayControllerModelKind & inOperand8,
                                                                                                const GALGAS_string & inOperand9,
                                                                                                const GALGAS__32_stringlist & inOperand10) :
mProperty_mOwnerName (inOperand0),
mProperty_mControllerName (inOperand1),
mProperty_mArrayControllerFilterListForGeneration (inOperand2),
mProperty_mModelString (inOperand3),
mProperty_mArrayControllerBoundColumnListForGeneration (inOperand4),
mProperty_mArrayControllerSortedColumnListForGeneration (inOperand5),
mProperty_mModelTypeName (inOperand6),
mProperty_mModelTypeName_32_ (inOperand7),
mProperty_mModelKind (inOperand8),
mProperty_mElementTypeName (inOperand9),
mProperty_mAttributeListForGeneration (inOperand10) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGeneration_2D_element GALGAS_arrayControllerForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                const GALGAS_arrayControllerFilterListForGeneration & inOperand2,
                                                                                                                const GALGAS_string & inOperand3,
                                                                                                                const GALGAS_arrayControllerBoundColumnListForGeneration & inOperand4,
                                                                                                                const GALGAS_arrayControllerSortedColumnListForGeneration & inOperand5,
                                                                                                                const GALGAS_string & inOperand6,
                                                                                                                const GALGAS_string & inOperand7,
                                                                                                                const GALGAS_arrayControllerModelKind & inOperand8,
                                                                                                                const GALGAS_string & inOperand9,
                                                                                                                const GALGAS__32_stringlist & inOperand10 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_arrayControllerForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_arrayControllerForGeneration_2D_element::objectCompare (const GALGAS_arrayControllerForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOwnerName.objectCompare (inOperand.mProperty_mOwnerName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mControllerName.objectCompare (inOperand.mProperty_mControllerName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArrayControllerFilterListForGeneration.objectCompare (inOperand.mProperty_mArrayControllerFilterListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModelString.objectCompare (inOperand.mProperty_mModelString) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArrayControllerBoundColumnListForGeneration.objectCompare (inOperand.mProperty_mArrayControllerBoundColumnListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArrayControllerSortedColumnListForGeneration.objectCompare (inOperand.mProperty_mArrayControllerSortedColumnListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModelTypeName.objectCompare (inOperand.mProperty_mModelTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModelTypeName_32_.objectCompare (inOperand.mProperty_mModelTypeName_32_) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mModelKind.objectCompare (inOperand.mProperty_mModelKind) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mElementTypeName.objectCompare (inOperand.mProperty_mElementTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAttributeListForGeneration.objectCompare (inOperand.mProperty_mAttributeListForGeneration) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_arrayControllerForGeneration_2D_element::isValid (void) const {
  return mProperty_mOwnerName.isValid () && mProperty_mControllerName.isValid () && mProperty_mArrayControllerFilterListForGeneration.isValid () && mProperty_mModelString.isValid () && mProperty_mArrayControllerBoundColumnListForGeneration.isValid () && mProperty_mArrayControllerSortedColumnListForGeneration.isValid () && mProperty_mModelTypeName.isValid () && mProperty_mModelTypeName_32_.isValid () && mProperty_mModelKind.isValid () && mProperty_mElementTypeName.isValid () && mProperty_mAttributeListForGeneration.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerForGeneration_2D_element::drop (void) {
  mProperty_mOwnerName.drop () ;
  mProperty_mControllerName.drop () ;
  mProperty_mArrayControllerFilterListForGeneration.drop () ;
  mProperty_mModelString.drop () ;
  mProperty_mArrayControllerBoundColumnListForGeneration.drop () ;
  mProperty_mArrayControllerSortedColumnListForGeneration.drop () ;
  mProperty_mModelTypeName.drop () ;
  mProperty_mModelTypeName_32_.drop () ;
  mProperty_mModelKind.drop () ;
  mProperty_mElementTypeName.drop () ;
  mProperty_mAttributeListForGeneration.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerForGeneration_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @arrayControllerForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOwnerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mControllerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArrayControllerFilterListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModelString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArrayControllerBoundColumnListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArrayControllerSortedColumnListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModelTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModelTypeName_32_.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mModelKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mElementTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAttributeListForGeneration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerForGeneration_2D_element::getter_mArrayControllerFilterListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerFilterListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::getter_mModelString (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelString ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerForGeneration_2D_element::getter_mArrayControllerBoundColumnListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerBoundColumnListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration GALGAS_arrayControllerForGeneration_2D_element::getter_mArrayControllerSortedColumnListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerSortedColumnListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::getter_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::getter_mModelTypeName_32_ (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelTypeName_32_ ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerModelKind GALGAS_arrayControllerForGeneration_2D_element::getter_mModelKind (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mElementTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS__32_stringlist GALGAS_arrayControllerForGeneration_2D_element::getter_mAttributeListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mAttributeListForGeneration ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @arrayControllerForGeneration-element type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerForGeneration_2D_element ("arrayControllerForGeneration-element",
                                                                NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_arrayControllerForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_arrayControllerForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGeneration_2D_element GALGAS_arrayControllerForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerForGeneration_2D_element result ;
  const GALGAS_arrayControllerForGeneration_2D_element * p = (const GALGAS_arrayControllerForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration_2D_element::GALGAS_arrayControllerFilterListForGeneration_2D_element (void) :
mProperty_mFilterPropertyName (),
mProperty_mFilterPropertyType () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration_2D_element::~ GALGAS_arrayControllerFilterListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration_2D_element::GALGAS_arrayControllerFilterListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_typeKind & inOperand1) :
mProperty_mFilterPropertyName (inOperand0),
mProperty_mFilterPropertyType (inOperand1) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerFilterListForGeneration_2D_element GALGAS_arrayControllerFilterListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                    const GALGAS_typeKind & inOperand1 
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
    result = mProperty_mFilterPropertyType.objectCompare (inOperand.mProperty_mFilterPropertyType) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_arrayControllerFilterListForGeneration_2D_element::isValid (void) const {
  return mProperty_mFilterPropertyName.isValid () && mProperty_mFilterPropertyType.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerFilterListForGeneration_2D_element::drop (void) {
  mProperty_mFilterPropertyName.drop () ;
  mProperty_mFilterPropertyType.drop () ;
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
    mProperty_mFilterPropertyType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_arrayControllerFilterListForGeneration_2D_element::getter_mFilterPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilterPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_arrayControllerFilterListForGeneration_2D_element::getter_mFilterPropertyType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilterPropertyType ;
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
mProperty_mSortPropertyType (),
mProperty_mObservablePropertyForSorting () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::~ GALGAS_arrayControllerSortedColumnListForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::GALGAS_arrayControllerSortedColumnListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                const GALGAS_typeKind & inOperand1,
                                                                                                                                const GALGAS_string & inOperand2) :
mProperty_mColumnName (inOperand0),
mProperty_mSortPropertyType (inOperand1),
mProperty_mObservablePropertyForSorting (inOperand2) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerSortedColumnListForGeneration_2D_element GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                const GALGAS_typeKind & inOperand1,
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
    result = mProperty_mSortPropertyType.objectCompare (inOperand.mProperty_mSortPropertyType) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mObservablePropertyForSorting.objectCompare (inOperand.mProperty_mObservablePropertyForSorting) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::isValid (void) const {
  return mProperty_mColumnName.isValid () && mProperty_mSortPropertyType.isValid () && mProperty_mObservablePropertyForSorting.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::drop (void) {
  mProperty_mColumnName.drop () ;
  mProperty_mSortPropertyType.drop () ;
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
    mProperty_mSortPropertyType.description (ioString, inIndentation+1) ;
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

GALGAS_typeKind GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::getter_mSortPropertyType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSortPropertyType ;
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

GALGAS_customObjectControllerForGeneration_2D_element::GALGAS_customObjectControllerForGeneration_2D_element (void) :
mProperty_mOwnerName (),
mProperty_mCustomObjectControllerName (),
mProperty_mClassNameForSwift (),
mProperty_mEntityTypeName (),
mProperty_mSelectionObservablePropertyMap () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_customObjectControllerForGeneration_2D_element::~ GALGAS_customObjectControllerForGeneration_2D_element (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_customObjectControllerForGeneration_2D_element::GALGAS_customObjectControllerForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                              const GALGAS_string & inOperand1,
                                                                                                              const GALGAS_string & inOperand2,
                                                                                                              const GALGAS_string & inOperand3,
                                                                                                              const GALGAS_observablePropertyMap & inOperand4) :
mProperty_mOwnerName (inOperand0),
mProperty_mCustomObjectControllerName (inOperand1),
mProperty_mClassNameForSwift (inOperand2),
mProperty_mEntityTypeName (inOperand3),
mProperty_mSelectionObservablePropertyMap (inOperand4) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_customObjectControllerForGeneration_2D_element GALGAS_customObjectControllerForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_customObjectControllerForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                GALGAS_string::constructor_default (HERE),
                                                                GALGAS_string::constructor_default (HERE),
                                                                GALGAS_string::constructor_default (HERE),
                                                                GALGAS_observablePropertyMap::constructor_emptyMap (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_customObjectControllerForGeneration_2D_element GALGAS_customObjectControllerForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                              const GALGAS_string & inOperand1,
                                                                                                                              const GALGAS_string & inOperand2,
                                                                                                                              const GALGAS_string & inOperand3,
                                                                                                                              const GALGAS_observablePropertyMap & inOperand4 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_customObjectControllerForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_customObjectControllerForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_customObjectControllerForGeneration_2D_element::objectCompare (const GALGAS_customObjectControllerForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOwnerName.objectCompare (inOperand.mProperty_mOwnerName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCustomObjectControllerName.objectCompare (inOperand.mProperty_mCustomObjectControllerName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mClassNameForSwift.objectCompare (inOperand.mProperty_mClassNameForSwift) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEntityTypeName.objectCompare (inOperand.mProperty_mEntityTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelectionObservablePropertyMap.objectCompare (inOperand.mProperty_mSelectionObservablePropertyMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_customObjectControllerForGeneration_2D_element::isValid (void) const {
  return mProperty_mOwnerName.isValid () && mProperty_mCustomObjectControllerName.isValid () && mProperty_mClassNameForSwift.isValid () && mProperty_mEntityTypeName.isValid () && mProperty_mSelectionObservablePropertyMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_customObjectControllerForGeneration_2D_element::drop (void) {
  mProperty_mOwnerName.drop () ;
  mProperty_mCustomObjectControllerName.drop () ;
  mProperty_mClassNameForSwift.drop () ;
  mProperty_mEntityTypeName.drop () ;
  mProperty_mSelectionObservablePropertyMap.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_customObjectControllerForGeneration_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @customObjectControllerForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOwnerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCustomObjectControllerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mClassNameForSwift.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEntityTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelectionObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_customObjectControllerForGeneration_2D_element::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_customObjectControllerForGeneration_2D_element::getter_mCustomObjectControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCustomObjectControllerName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_customObjectControllerForGeneration_2D_element::getter_mClassNameForSwift (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassNameForSwift ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_customObjectControllerForGeneration_2D_element::getter_mEntityTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEntityTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_customObjectControllerForGeneration_2D_element::getter_mSelectionObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionObservablePropertyMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  @customObjectControllerForGeneration-element type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_customObjectControllerForGeneration_2D_element ("customObjectControllerForGeneration-element",
                                                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_customObjectControllerForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_customObjectControllerForGeneration_2D_element ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_customObjectControllerForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_customObjectControllerForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_customObjectControllerForGeneration_2D_element GALGAS_customObjectControllerForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_customObjectControllerForGeneration_2D_element result ;
  const GALGAS_customObjectControllerForGeneration_2D_element * p = (const GALGAS_customObjectControllerForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_customObjectControllerForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("customObjectControllerForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

static const char * gNonTerminalNames_easyBindings_grammar [80] = {
  "<start_symbol>",// Index 0
  "<extern_swift_delegate>",// Index 1
  "<extern_swift_func>",// Index 2
  "<class_declaration>",// Index 3
  "<enum_declaration>",// Index 4
  "<toMany_relationship>",// Index 5
  "<toOne_relationship>",// Index 6
  "<entity_declaration>",// Index 7
  "<document_declaration>",// Index 8
  "<preferences_declaration>",// Index 9
  "<outlet_class_declaration>",// Index 10
  "<binding_specification>",// Index 11
  "<outlet_declaration>",// Index 12
  "<observable_property>",// Index 13
  "<transient_declaration>",// Index 14
  "<simple_stored_declaration>",// Index 15
  "<stored_array_declaration>",// Index 16
  "<action_declaration>",// Index 17
  "<booleanMultipleBindingExpression>",// Index 18
  "<booleanMultipleBindingComparison>",// Index 19
  "<booleanMultipleBindingTerm>",// Index 20
  "<booleanMultipleBindingOperand>",// Index 21
  "<binding_option_list>",// Index 22
  "<array_controller_declaration>",// Index 23
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
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (37)
, END
// State S1 (index = 27)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (24)
, END
// State S2 (index = 30)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (25)
, END
// State S3 (index = 33)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (26)
, END
// State S4 (index = 36)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (27)
, END
// State S5 (index = 39)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (28)
, END
// State S6 (index = 42)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (29)
, END
// State S7 (index = 45)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (30)
, END
// State S8 (index = 48)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (31)
, END
// State S9 (index = 51)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (32)
, END
// State S10 (index = 54)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (33)
, END
// State S11 (index = 57)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (34)
, END
// State S12 (index = 60)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (35)
, END
// State S13 (index = 63)
, C_Lexique_easyBindings_5F_lexique::kToken_, ACCEPT
, END
// State S14 (index = 66)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (37)
, END
// State S15 (index = 93)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (37)
, END
// State S16 (index = 120)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (37)
, END
// State S17 (index = 147)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (37)
, END
// State S18 (index = 174)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (37)
, END
// State S19 (index = 201)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (37)
, END
// State S20 (index = 228)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (37)
, END
// State S21 (index = 255)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (37)
, END
// State S22 (index = 282)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (37)
, END
// State S23 (index = 309)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (0)
, END
// State S24 (index = 312)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (45)
, END
// State S25 (index = 315)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (46)
, END
// State S26 (index = 318)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (47)
, END
// State S27 (index = 321)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (48)
, END
// State S28 (index = 324)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (49)
, END
// State S29 (index = 327)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (62)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (50)
, END
// State S30 (index = 332)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (52)
, END
// State S31 (index = 335)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (76)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (62)
, END
// State S32 (index = 360)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (72)
, END
// State S33 (index = 363)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (73)
, END
// State S34 (index = 366)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (74)
, END
// State S35 (index = 369)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (75)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (76)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (77)
, END
// State S36 (index = 376)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (41)
, END
// State S37 (index = 379)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (39)
, END
// State S38 (index = 382)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (40)
, END
// State S39 (index = 385)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (43)
, END
// State S40 (index = 388)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (42)
, END
// State S41 (index = 391)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (44)
, END
// State S42 (index = 394)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (45)
, END
// State S43 (index = 397)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (46)
, END
// State S44 (index = 400)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (47)
, END
// State S45 (index = 403)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (37)
, END
// State S46 (index = 430)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (80)
, END
// State S47 (index = 433)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (81)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (56)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, END
// State S48 (index = 450)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (88)
, END
// State S49 (index = 453)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (89)
, END
// State S50 (index = 456)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (90)
, END
// State S51 (index = 459)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (91)
, END
// State S52 (index = 462)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (92)
, END
// State S53 (index = 465)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (93)
, END
// State S54 (index = 468)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (127)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (94)
, END
// State S55 (index = 473)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (134)
, END
// State S56 (index = 476)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (96)
, END
// State S57 (index = 479)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (97)
, END
// State S58 (index = 482)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (98)
, END
// State S59 (index = 485)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (99)
, END
// State S60 (index = 488)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (100)
, END
// State S61 (index = 491)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (101)
, END
// State S62 (index = 494)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (102)
, END
// State S63 (index = 497)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (76)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (62)
, END
// State S64 (index = 522)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (76)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (62)
, END
// State S65 (index = 547)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (76)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (62)
, END
// State S66 (index = 572)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (76)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (62)
, END
// State S67 (index = 597)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (76)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (62)
, END
// State S68 (index = 622)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (76)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (62)
, END
// State S69 (index = 647)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (76)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (62)
, END
// State S70 (index = 672)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (110)
, END
// State S71 (index = 675)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (111)
, END
// State S72 (index = 678)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (112)
, END
// State S73 (index = 681)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (113)
, END
// State S74 (index = 684)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (34)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S75 (index = 711)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (180)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (180)
, END
// State S76 (index = 716)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (114)
, END
// State S77 (index = 719)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (115)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (116)
, END
// State S78 (index = 724)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (119)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (177)
, END
// State S79 (index = 729)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (38)
, END
// State S80 (index = 732)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (121)
, END
// State S81 (index = 735)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (122)
, END
// State S82 (index = 738)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (81)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (56)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, END
// State S83 (index = 755)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (81)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (56)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, END
// State S84 (index = 772)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (81)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (56)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, END
// State S85 (index = 789)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (81)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (56)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, END
// State S86 (index = 806)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (81)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (56)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, END
// State S87 (index = 823)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (128)
, END
// State S88 (index = 826)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (129)
, END
// State S89 (index = 829)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (130)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (50)
, END
// State S90 (index = 834)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (63)
, END
// State S91 (index = 837)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (64)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (132)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (133)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, END
// State S92 (index = 854)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (141)
, END
// State S93 (index = 857)
, C_Lexique_easyBindings_5F_lexique::kToken_calledBy, SHIFT (142)
, END
// State S94 (index = 860)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (128)
, END
// State S95 (index = 863)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (143)
, END
// State S96 (index = 866)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (144)
, END
// State S97 (index = 869)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (145)
, END
// State S98 (index = 872)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (131)
, C_Lexique_easyBindings_5F_lexique::kToken_array, SHIFT (146)
, END
// State S99 (index = 877)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (148)
, END
// State S100 (index = 880)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (149)
, END
// State S101 (index = 883)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (150)
, END
// State S102 (index = 886)
, C_Lexique_easyBindings_5F_lexique::kToken_classForSwift, SHIFT (151)
, END
// State S103 (index = 889)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (81)
, END
// State S104 (index = 892)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (79)
, END
// State S105 (index = 895)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (80)
, END
// State S106 (index = 898)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (78)
, END
// State S107 (index = 901)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (82)
, END
// State S108 (index = 904)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (77)
, END
// State S109 (index = 907)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (83)
, END
// State S110 (index = 910)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (11)
, END
// State S111 (index = 937)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken_validates, SHIFT (152)
, END
// State S112 (index = 942)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (154)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (155)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (156)
, END
// State S113 (index = 951)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (158)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (159)
, END
// State S114 (index = 956)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (179)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (179)
, END
// State S115 (index = 961)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (185)
, END
// State S116 (index = 966)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (161)
, END
// State S117 (index = 969)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (162)
, END
// State S118 (index = 972)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (163)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (182)
, END
// State S119 (index = 977)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (75)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (76)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (77)
, END
// State S120 (index = 984)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (166)
, END
// State S121 (index = 987)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (48)
, END
// State S122 (index = 992)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (169)
, END
// State S123 (index = 995)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (60)
, END
// State S124 (index = 998)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (59)
, END
// State S125 (index = 1001)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (58)
, END
// State S126 (index = 1004)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (57)
, END
// State S127 (index = 1007)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (61)
, END
// State S128 (index = 1010)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (8)
, END
// State S129 (index = 1037)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (4)
, END
// State S130 (index = 1064)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (170)
, END
// State S131 (index = 1067)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (171)
, END
// State S132 (index = 1070)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (134)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (53)
, END
// State S133 (index = 1075)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (172)
, END
// State S134 (index = 1078)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (64)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (132)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (133)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, END
// State S135 (index = 1095)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (64)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (132)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (133)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, END
// State S136 (index = 1112)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (64)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (132)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (133)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, END
// State S137 (index = 1129)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (64)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (132)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (133)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, END
// State S138 (index = 1146)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (64)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (132)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (52)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (133)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, END
// State S139 (index = 1163)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (178)
, END
// State S140 (index = 1166)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (179)
, END
// State S141 (index = 1169)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (62)
, END
// State S142 (index = 1190)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (186)
, END
// State S143 (index = 1193)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (187)
, END
// State S144 (index = 1196)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (98)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (188)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (189)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (190)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (191)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (192)
, END
// State S145 (index = 1209)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (194)
, END
// State S146 (index = 1212)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (132)
, END
// State S147 (index = 1215)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (195)
, END
// State S148 (index = 1218)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, REDUCE (20)
, END
// State S149 (index = 1249)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (196)
, END
// State S150 (index = 1252)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (197)
, END
// State S151 (index = 1255)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (198)
, END
// State S152 (index = 1258)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (136)
, END
// State S153 (index = 1261)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (199)
, END
// State S154 (index = 1264)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (154)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (155)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (156)
, END
// State S155 (index = 1273)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (154)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (155)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (156)
, END
// State S156 (index = 1282)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (84)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (154)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (155)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (156)
, END
// State S157 (index = 1291)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (203)
, END
// State S158 (index = 1294)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (90)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (90)
, END
// State S159 (index = 1299)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (91)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (91)
, END
// State S160 (index = 1304)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (205)
, END
// State S161 (index = 1309)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (184)
, END
// State S162 (index = 1314)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (181)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (181)
, END
// State S163 (index = 1319)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (115)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (116)
, END
// State S164 (index = 1324)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (36)
, END
// State S165 (index = 1327)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (119)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (177)
, END
// State S166 (index = 1332)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (35)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (35)
, END
// State S167 (index = 1359)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (209)
, END
// State S168 (index = 1362)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (210)
, END
// State S169 (index = 1365)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (1)
, END
// State S170 (index = 1382)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (130)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (50)
, END
// State S171 (index = 1387)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (5)
, END
// State S172 (index = 1414)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (212)
, END
// State S173 (index = 1417)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (67)
, END
// State S174 (index = 1420)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (68)
, END
// State S175 (index = 1423)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (66)
, END
// State S176 (index = 1426)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (65)
, END
// State S177 (index = 1429)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (69)
, END
// State S178 (index = 1432)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (213)
, END
// State S179 (index = 1435)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (9)
, END
// State S180 (index = 1462)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (62)
, END
// State S181 (index = 1483)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (62)
, END
// State S182 (index = 1504)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (62)
, END
// State S183 (index = 1525)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (62)
, END
// State S184 (index = 1546)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (133)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (70)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, SHIFT (58)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (59)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (60)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (61)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, SHIFT (62)
, END
// State S185 (index = 1567)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (219)
, END
// State S186 (index = 1570)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (220)
, END
// State S187 (index = 1573)
, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom, SHIFT (221)
, END
// State S188 (index = 1576)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (222)
, END
// State S189 (index = 1579)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (223)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (224)
, END
// State S190 (index = 1584)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (235)
, END
// State S191 (index = 1605)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (233)
, END
// State S192 (index = 1620)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (235)
, END
// State S193 (index = 1641)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (244)
, END
// State S194 (index = 1644)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, REDUCE (19)
, END
// State S195 (index = 1669)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (245)
, END
// State S196 (index = 1672)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (246)
, END
// State S197 (index = 1675)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (247)
, END
// State S198 (index = 1678)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (248)
, END
// State S199 (index = 1681)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (249)
, END
// State S200 (index = 1684)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (85)
, END
// State S201 (index = 1687)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (86)
, END
// State S202 (index = 1690)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (87)
, END
// State S203 (index = 1693)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (12)
, END
// State S204 (index = 1720)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (92)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (92)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (92)
, END
// State S205 (index = 1727)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (93)
, END
// State S206 (index = 1734)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (88)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (88)
, END
// State S207 (index = 1741)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (163)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (182)
, END
// State S208 (index = 1746)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (178)
, END
// State S209 (index = 1749)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (48)
, END
// State S210 (index = 1754)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (254)
, END
// State S211 (index = 1757)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (51)
, END
// State S212 (index = 1760)
, C_Lexique_easyBindings_5F_lexique::kToken_inverse, SHIFT (255)
, END
// State S213 (index = 1763)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (256)
, END
// State S214 (index = 1766)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (74)
, END
// State S215 (index = 1769)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (73)
, END
// State S216 (index = 1772)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (71)
, END
// State S217 (index = 1775)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (72)
, END
// State S218 (index = 1778)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, END
// State S219 (index = 1781)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (10)
, END
// State S220 (index = 1808)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (2)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, REDUCE (2)
, END
// State S221 (index = 1835)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (233)
, END
// State S222 (index = 1850)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (98)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (188)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (189)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (190)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (191)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (192)
, END
// State S223 (index = 1863)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (105)
, END
// State S224 (index = 1866)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (104)
, END
// State S225 (index = 1869)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (259)
, END
// State S226 (index = 1872)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (260)
, END
// State S227 (index = 1875)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (235)
, END
// State S228 (index = 1896)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (112)
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
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (112)
, END
// State S229 (index = 1927)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (262)
, END
// State S230 (index = 1930)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (263)
, END
// State S231 (index = 1933)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (264)
, END
// State S232 (index = 1936)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (113)
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
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (113)
, END
// State S233 (index = 1967)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (114)
, END
// State S234 (index = 1998)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (235)
, END
// State S235 (index = 2019)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (27)
, END
// State S236 (index = 2046)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (24)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (24)
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
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (24)
, END
// State S237 (index = 2073)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (98)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (188)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (189)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (190)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (191)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (192)
, END
// State S238 (index = 2086)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, SHIFT (267)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (137)
, END
// State S239 (index = 2107)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, SHIFT (269)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (139)
, END
// State S240 (index = 2130)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (271)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (272)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (141)
, END
// State S241 (index = 2157)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (15)
, END
// State S242 (index = 2188)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (274)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (106)
, END
// State S243 (index = 2205)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (98)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (188)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (189)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (190)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (191)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (192)
, END
// State S244 (index = 2218)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (14)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, REDUCE (14)
, END
// State S245 (index = 2243)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (277)
, END
// State S246 (index = 2246)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (278)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (279)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (280)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (281)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (282)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (283)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (284)
, END
// State S247 (index = 2261)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (287)
, END
// State S248 (index = 2264)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (288)
, END
// State S249 (index = 2267)
, C_Lexique_easyBindings_5F_lexique::kToken_default, SHIFT (289)
, END
// State S250 (index = 2270)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (158)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (159)
, END
// State S251 (index = 2275)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (94)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (291)
, END
// State S252 (index = 2280)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (183)
, END
// State S253 (index = 2283)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (49)
, END
// State S254 (index = 2286)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (3)
, END
// State S255 (index = 2313)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (293)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (294)
, END
// State S256 (index = 2318)
, C_Lexique_easyBindings_5F_lexique::kToken_inverse, SHIFT (296)
, END
// State S257 (index = 2321)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (297)
, END
// State S258 (index = 2326)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (99)
, END
// State S259 (index = 2329)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (299)
, END
// State S260 (index = 2332)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (300)
, END
// State S261 (index = 2335)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (301)
, END
// State S262 (index = 2338)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (302)
, END
// State S263 (index = 2341)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (303)
, END
// State S264 (index = 2344)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (304)
, END
// State S265 (index = 2347)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (25)
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
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (25)
, END
// State S266 (index = 2374)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (101)
, END
// State S267 (index = 2377)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (235)
, END
// State S268 (index = 2398)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (21)
, END
// State S269 (index = 2417)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (235)
, END
// State S270 (index = 2438)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (22)
, END
// State S271 (index = 2459)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (235)
, END
// State S272 (index = 2480)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (235)
, END
// State S273 (index = 2501)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (23)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (23)
, END
// State S274 (index = 2524)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (233)
, END
// State S275 (index = 2539)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (310)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (144)
, END
// State S276 (index = 2558)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (102)
, END
// State S277 (index = 2561)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (233)
, END
// State S278 (index = 2576)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (172)
, END
// State S279 (index = 2585)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (173)
, END
// State S280 (index = 2594)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (278)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (279)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (280)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (281)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (282)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (283)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (284)
, END
// State S281 (index = 2609)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (170)
, END
// State S282 (index = 2618)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (168)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (168)
, END
// State S283 (index = 2627)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (169)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (169)
, END
// State S284 (index = 2636)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (171)
, END
// State S285 (index = 2645)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (315)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (148)
, END
// State S286 (index = 2650)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (33)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (33)
, END
// State S287 (index = 2659)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (317)
, END
// State S288 (index = 2662)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (318)
, END
// State S289 (index = 2665)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (278)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (279)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (280)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (281)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (282)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (283)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (284)
, END
// State S290 (index = 2680)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (204)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (205)
, END
// State S291 (index = 2685)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (321)
, END
// State S292 (index = 2688)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (322)
, END
// State S293 (index = 2691)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, REDUCE (55)
, END
// State S294 (index = 2694)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, REDUCE (54)
, END
// State S295 (index = 2697)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (323)
, END
// State S296 (index = 2700)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (324)
, END
// State S297 (index = 2703)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (233)
, END
// State S298 (index = 2718)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (326)
, END
// State S299 (index = 2721)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (98)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (188)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (189)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (190)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (191)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (192)
, END
// State S300 (index = 2734)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (328)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (125)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (125)
, END
// State S301 (index = 2767)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (26)
, END
// State S302 (index = 2794)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (330)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (115)
, END
// State S303 (index = 2827)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (332)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (123)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (123)
, END
// State S304 (index = 2860)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (334)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (119)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (119)
, END
// State S305 (index = 2893)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, SHIFT (267)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (137)
, END
// State S306 (index = 2914)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (140)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (140)
, END
// State S307 (index = 2935)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (271)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (272)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (141)
, END
// State S308 (index = 2962)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (141)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (271)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (272)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (141)
, END
// State S309 (index = 2989)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (274)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (106)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (106)
, END
// State S310 (index = 3006)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (340)
, END
// State S311 (index = 3009)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (98)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (188)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (189)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (190)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (191)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (192)
, END
// State S312 (index = 3022)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (28)
, END
// State S313 (index = 3039)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (342)
, END
// State S314 (index = 3042)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (343)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (175)
, END
// State S315 (index = 3047)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (345)
, END
// State S316 (index = 3050)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (346)
, END
// State S317 (index = 3053)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, REDUCE (31)
, END
// State S318 (index = 3078)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, REDUCE (32)
, END
// State S319 (index = 3103)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (347)
, END
// State S320 (index = 3106)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (88)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (250)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (88)
, END
// State S321 (index = 3113)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (349)
, END
// State S322 (index = 3116)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_class, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (13)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (13)
, END
// State S323 (index = 3143)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (350)
, END
// State S324 (index = 3146)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (351)
, END
// State S325 (index = 3149)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (129)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (297)
, END
// State S326 (index = 3154)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, REDUCE (16)
, END
// State S327 (index = 3185)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (100)
, END
// State S328 (index = 3188)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (353)
, END
// State S329 (index = 3191)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (111)
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
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (111)
, END
// State S330 (index = 3222)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (354)
, C_Lexique_easyBindings_5F_lexique::kToken_all, SHIFT (355)
, END
// State S331 (index = 3227)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (108)
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
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (108)
, END
// State S332 (index = 3258)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (357)
, END
// State S333 (index = 3261)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (110)
, END
// State S334 (index = 3292)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (358)
, C_Lexique_easyBindings_5F_lexique::kToken_all, SHIFT (359)
, END
// State S335 (index = 3297)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (109)
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
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (109)
, END
// State S336 (index = 3328)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (138)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (138)
, END
// State S337 (index = 3347)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (142)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (142)
, END
// State S338 (index = 3370)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (143)
, END
// State S339 (index = 3393)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (107)
, END
// State S340 (index = 3408)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (361)
, END
// State S341 (index = 3411)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (103)
, END
// State S342 (index = 3414)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, REDUCE (17)
, END
// State S343 (index = 3445)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (278)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (279)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (280)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (281)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (282)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (283)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (284)
, END
// State S344 (index = 3460)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (363)
, END
// State S345 (index = 3463)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (364)
, END
// State S346 (index = 3466)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (365)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (366)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (367)
, END
// State S347 (index = 3473)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, REDUCE (18)
, END
// State S348 (index = 3504)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (89)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (89)
, END
// State S349 (index = 3509)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (369)
, END
// State S350 (index = 3512)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (7)
, END
// State S351 (index = 3529)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (370)
, END
// State S352 (index = 3532)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (130)
, END
// State S353 (index = 3535)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (126)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (126)
, END
// State S354 (index = 3566)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (117)
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
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (117)
, END
// State S355 (index = 3597)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (371)
, END
// State S356 (index = 3600)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (116)
, END
// State S357 (index = 3631)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (124)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (124)
, END
// State S358 (index = 3662)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (122)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (122)
, END
// State S359 (index = 3693)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (372)
, END
// State S360 (index = 3696)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (120)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (120)
, END
// State S361 (index = 3727)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (278)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (279)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (280)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (281)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (282)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (283)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (284)
, END
// State S362 (index = 3742)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (343)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (175)
, END
// State S363 (index = 3747)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (174)
, END
// State S364 (index = 3756)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (278)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (279)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (280)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (281)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (282)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (283)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (284)
, END
// State S365 (index = 3771)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (376)
, END
// State S366 (index = 3774)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (377)
, END
// State S367 (index = 3777)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (378)
, END
// State S368 (index = 3780)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_filter, SHIFT (379)
, END
// State S369 (index = 3785)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (381)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (96)
, END
// State S370 (index = 3790)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (6)
, END
// State S371 (index = 3807)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (383)
, END
// State S372 (index = 3810)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (384)
, END
// State S373 (index = 3813)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (385)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (146)
, END
// State S374 (index = 3818)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (176)
, END
// State S375 (index = 3821)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (315)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (148)
, END
// State S376 (index = 3826)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (388)
, END
// State S377 (index = 3829)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (389)
, END
// State S378 (index = 3832)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (390)
, END
// State S379 (index = 3835)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (391)
, END
// State S380 (index = 3838)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (392)
, END
// State S381 (index = 3841)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (393)
, END
// State S382 (index = 3844)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (394)
, END
// State S383 (index = 3847)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (118)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (118)
, END
// State S384 (index = 3878)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (121)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (121)
, END
// State S385 (index = 3909)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (395)
, END
// State S386 (index = 3912)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (396)
, END
// State S387 (index = 3915)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (149)
, END
// State S388 (index = 3918)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken_filter, REDUCE (152)
, END
// State S389 (index = 3923)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken_filter, REDUCE (150)
, END
// State S390 (index = 3928)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (151)
, C_Lexique_easyBindings_5F_lexique::kToken_filter, REDUCE (151)
, END
// State S391 (index = 3933)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (397)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (155)
, END
// State S392 (index = 3938)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_column, SHIFT (399)
, END
// State S393 (index = 3943)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (401)
, END
// State S394 (index = 3946)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (95)
, END
// State S395 (index = 3949)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (402)
, END
// State S396 (index = 3952)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (145)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (145)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (145)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (145)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (145)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (145)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (145)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (145)
, END
// State S397 (index = 3969)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (403)
, END
// State S398 (index = 3972)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (154)
, END
// State S399 (index = 3975)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (404)
, END
// State S400 (index = 3978)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (405)
, END
// State S401 (index = 3981)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (406)
, END
// State S402 (index = 3984)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (278)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (279)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (280)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (281)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (282)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (283)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (284)
, END
// State S403 (index = 3999)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (397)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (155)
, END
// State S404 (index = 4004)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_sort, SHIFT (409)
, END
// State S405 (index = 4009)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_array, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_copy, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (29)
, C_Lexique_easyBindings_5F_lexique::kToken_customObjectController, REDUCE (29)
, END
// State S406 (index = 4034)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (381)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (96)
, END
// State S407 (index = 4039)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (385)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (146)
, END
// State S408 (index = 4044)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (156)
, END
// State S409 (index = 4047)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (413)
, END
// State S410 (index = 4050)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (414)
, END
// State S411 (index = 4053)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (97)
, END
// State S412 (index = 4056)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (147)
, END
// State S413 (index = 4059)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (160)
, END
// State S414 (index = 4062)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (415)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (416)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (417)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (418)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (161)
, END
// State S415 (index = 4075)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (421)
, END
// State S416 (index = 4078)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (235)
, END
// State S417 (index = 4099)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (233)
, END
// State S418 (index = 4114)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (227)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (235)
, END
// State S419 (index = 4135)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_column, SHIFT (399)
, END
// State S420 (index = 4140)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (30)
, END
// State S421 (index = 4145)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (426)
, END
// State S422 (index = 4148)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (415)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (416)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (417)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (418)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (161)
, END
// State S423 (index = 4161)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (428)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (166)
, END
// State S424 (index = 4178)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (415)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (416)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (417)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (418)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (161)
, END
// State S425 (index = 4191)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (158)
, END
// State S426 (index = 4194)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (431)
, END
// State S427 (index = 4197)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (163)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (163)
, END
// State S428 (index = 4202)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (226)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (229)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (230)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (231)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (232)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (233)
, END
// State S429 (index = 4217)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (310)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (144)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (144)
, END
// State S430 (index = 4236)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (164)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (164)
, END
// State S431 (index = 4241)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (415)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (416)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (417)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (418)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (161)
, END
// State S432 (index = 4254)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (428)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (166)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (166)
, END
// State S433 (index = 4271)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (415)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (416)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (417)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (418)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (161)
, END
// State S434 (index = 4284)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (162)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (162)
, END
// State S435 (index = 4289)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (167)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (167)
, END
// State S436 (index = 4304)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (165)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (165)
, END} ;

static const uint32_t gActionTableIndex_easyBindings_grammar [437] = {
  0  // S0
, 27  // S1
, 30  // S2
, 33  // S3
, 36  // S4
, 39  // S5
, 42  // S6
, 45  // S7
, 48  // S8
, 51  // S9
, 54  // S10
, 57  // S11
, 60  // S12
, 63  // S13
, 66  // S14
, 93  // S15
, 120  // S16
, 147  // S17
, 174  // S18
, 201  // S19
, 228  // S20
, 255  // S21
, 282  // S22
, 309  // S23
, 312  // S24
, 315  // S25
, 318  // S26
, 321  // S27
, 324  // S28
, 327  // S29
, 332  // S30
, 335  // S31
, 360  // S32
, 363  // S33
, 366  // S34
, 369  // S35
, 376  // S36
, 379  // S37
, 382  // S38
, 385  // S39
, 388  // S40
, 391  // S41
, 394  // S42
, 397  // S43
, 400  // S44
, 403  // S45
, 430  // S46
, 433  // S47
, 450  // S48
, 453  // S49
, 456  // S50
, 459  // S51
, 462  // S52
, 465  // S53
, 468  // S54
, 473  // S55
, 476  // S56
, 479  // S57
, 482  // S58
, 485  // S59
, 488  // S60
, 491  // S61
, 494  // S62
, 497  // S63
, 522  // S64
, 547  // S65
, 572  // S66
, 597  // S67
, 622  // S68
, 647  // S69
, 672  // S70
, 675  // S71
, 678  // S72
, 681  // S73
, 684  // S74
, 711  // S75
, 716  // S76
, 719  // S77
, 724  // S78
, 729  // S79
, 732  // S80
, 735  // S81
, 738  // S82
, 755  // S83
, 772  // S84
, 789  // S85
, 806  // S86
, 823  // S87
, 826  // S88
, 829  // S89
, 834  // S90
, 837  // S91
, 854  // S92
, 857  // S93
, 860  // S94
, 863  // S95
, 866  // S96
, 869  // S97
, 872  // S98
, 877  // S99
, 880  // S100
, 883  // S101
, 886  // S102
, 889  // S103
, 892  // S104
, 895  // S105
, 898  // S106
, 901  // S107
, 904  // S108
, 907  // S109
, 910  // S110
, 937  // S111
, 942  // S112
, 951  // S113
, 956  // S114
, 961  // S115
, 966  // S116
, 969  // S117
, 972  // S118
, 977  // S119
, 984  // S120
, 987  // S121
, 992  // S122
, 995  // S123
, 998  // S124
, 1001  // S125
, 1004  // S126
, 1007  // S127
, 1010  // S128
, 1037  // S129
, 1064  // S130
, 1067  // S131
, 1070  // S132
, 1075  // S133
, 1078  // S134
, 1095  // S135
, 1112  // S136
, 1129  // S137
, 1146  // S138
, 1163  // S139
, 1166  // S140
, 1169  // S141
, 1190  // S142
, 1193  // S143
, 1196  // S144
, 1209  // S145
, 1212  // S146
, 1215  // S147
, 1218  // S148
, 1249  // S149
, 1252  // S150
, 1255  // S151
, 1258  // S152
, 1261  // S153
, 1264  // S154
, 1273  // S155
, 1282  // S156
, 1291  // S157
, 1294  // S158
, 1299  // S159
, 1304  // S160
, 1309  // S161
, 1314  // S162
, 1319  // S163
, 1324  // S164
, 1327  // S165
, 1332  // S166
, 1359  // S167
, 1362  // S168
, 1365  // S169
, 1382  // S170
, 1387  // S171
, 1414  // S172
, 1417  // S173
, 1420  // S174
, 1423  // S175
, 1426  // S176
, 1429  // S177
, 1432  // S178
, 1435  // S179
, 1462  // S180
, 1483  // S181
, 1504  // S182
, 1525  // S183
, 1546  // S184
, 1567  // S185
, 1570  // S186
, 1573  // S187
, 1576  // S188
, 1579  // S189
, 1584  // S190
, 1605  // S191
, 1620  // S192
, 1641  // S193
, 1644  // S194
, 1669  // S195
, 1672  // S196
, 1675  // S197
, 1678  // S198
, 1681  // S199
, 1684  // S200
, 1687  // S201
, 1690  // S202
, 1693  // S203
, 1720  // S204
, 1727  // S205
, 1734  // S206
, 1741  // S207
, 1746  // S208
, 1749  // S209
, 1754  // S210
, 1757  // S211
, 1760  // S212
, 1763  // S213
, 1766  // S214
, 1769  // S215
, 1772  // S216
, 1775  // S217
, 1778  // S218
, 1781  // S219
, 1808  // S220
, 1835  // S221
, 1850  // S222
, 1863  // S223
, 1866  // S224
, 1869  // S225
, 1872  // S226
, 1875  // S227
, 1896  // S228
, 1927  // S229
, 1930  // S230
, 1933  // S231
, 1936  // S232
, 1967  // S233
, 1998  // S234
, 2019  // S235
, 2046  // S236
, 2073  // S237
, 2086  // S238
, 2107  // S239
, 2130  // S240
, 2157  // S241
, 2188  // S242
, 2205  // S243
, 2218  // S244
, 2243  // S245
, 2246  // S246
, 2261  // S247
, 2264  // S248
, 2267  // S249
, 2270  // S250
, 2275  // S251
, 2280  // S252
, 2283  // S253
, 2286  // S254
, 2313  // S255
, 2318  // S256
, 2321  // S257
, 2326  // S258
, 2329  // S259
, 2332  // S260
, 2335  // S261
, 2338  // S262
, 2341  // S263
, 2344  // S264
, 2347  // S265
, 2374  // S266
, 2377  // S267
, 2398  // S268
, 2417  // S269
, 2438  // S270
, 2459  // S271
, 2480  // S272
, 2501  // S273
, 2524  // S274
, 2539  // S275
, 2558  // S276
, 2561  // S277
, 2576  // S278
, 2585  // S279
, 2594  // S280
, 2609  // S281
, 2618  // S282
, 2627  // S283
, 2636  // S284
, 2645  // S285
, 2650  // S286
, 2659  // S287
, 2662  // S288
, 2665  // S289
, 2680  // S290
, 2685  // S291
, 2688  // S292
, 2691  // S293
, 2694  // S294
, 2697  // S295
, 2700  // S296
, 2703  // S297
, 2718  // S298
, 2721  // S299
, 2734  // S300
, 2767  // S301
, 2794  // S302
, 2827  // S303
, 2860  // S304
, 2893  // S305
, 2914  // S306
, 2935  // S307
, 2962  // S308
, 2989  // S309
, 3006  // S310
, 3009  // S311
, 3022  // S312
, 3039  // S313
, 3042  // S314
, 3047  // S315
, 3050  // S316
, 3053  // S317
, 3078  // S318
, 3103  // S319
, 3106  // S320
, 3113  // S321
, 3116  // S322
, 3143  // S323
, 3146  // S324
, 3149  // S325
, 3154  // S326
, 3185  // S327
, 3188  // S328
, 3191  // S329
, 3222  // S330
, 3227  // S331
, 3258  // S332
, 3261  // S333
, 3292  // S334
, 3297  // S335
, 3328  // S336
, 3347  // S337
, 3370  // S338
, 3393  // S339
, 3408  // S340
, 3411  // S341
, 3414  // S342
, 3445  // S343
, 3460  // S344
, 3463  // S345
, 3466  // S346
, 3473  // S347
, 3504  // S348
, 3509  // S349
, 3512  // S350
, 3529  // S351
, 3532  // S352
, 3535  // S353
, 3566  // S354
, 3597  // S355
, 3600  // S356
, 3631  // S357
, 3662  // S358
, 3693  // S359
, 3696  // S360
, 3727  // S361
, 3742  // S362
, 3747  // S363
, 3756  // S364
, 3771  // S365
, 3774  // S366
, 3777  // S367
, 3780  // S368
, 3785  // S369
, 3790  // S370
, 3807  // S371
, 3810  // S372
, 3813  // S373
, 3818  // S374
, 3821  // S375
, 3826  // S376
, 3829  // S377
, 3832  // S378
, 3835  // S379
, 3838  // S380
, 3841  // S381
, 3844  // S382
, 3847  // S383
, 3878  // S384
, 3909  // S385
, 3912  // S386
, 3915  // S387
, 3918  // S388
, 3923  // S389
, 3928  // S390
, 3933  // S391
, 3938  // S392
, 3943  // S393
, 3946  // S394
, 3949  // S395
, 3952  // S396
, 3969  // S397
, 3972  // S398
, 3975  // S399
, 3978  // S400
, 3981  // S401
, 3984  // S402
, 3999  // S403
, 4004  // S404
, 4009  // S405
, 4034  // S406
, 4039  // S407
, 4044  // S408
, 4047  // S409
, 4050  // S410
, 4053  // S411
, 4056  // S412
, 4059  // S413
, 4062  // S414
, 4075  // S415
, 4078  // S416
, 4099  // S417
, 4114  // S418
, 4135  // S419
, 4140  // S420
, 4145  // S421
, 4148  // S422
, 4161  // S423
, 4178  // S424
, 4191  // S425
, 4194  // S426
, 4197  // S427
, 4202  // S428
, 4217  // S429
, 4236  // S430
, 4241  // S431
, 4254  // S432
, 4271  // S433
, 4284  // S434
, 4289  // S435
, 4304  // S436
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                            SLR states successors table                                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int16_t gSuccessorTable_easyBindings_grammar_0 [23] = {0, 13,
  3, 14,
  4, 15,
  7, 16,
  8, 17,
  9, 18,
  10, 19,
  11, 20,
  26, 21,
  27, 22,
  29, 23, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_14 [21] = {3, 14,
  4, 15,
  7, 16,
  8, 17,
  9, 18,
  10, 19,
  11, 20,
  26, 21,
  27, 22,
  29, 36, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_15 [21] = {3, 14,
  4, 15,
  7, 16,
  8, 17,
  9, 18,
  10, 19,
  11, 20,
  26, 21,
  27, 22,
  29, 37, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_16 [21] = {3, 14,
  4, 15,
  7, 16,
  8, 17,
  9, 18,
  10, 19,
  11, 20,
  26, 21,
  27, 22,
  29, 38, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_17 [21] = {3, 14,
  4, 15,
  7, 16,
  8, 17,
  9, 18,
  10, 19,
  11, 20,
  26, 21,
  27, 22,
  29, 39, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_18 [21] = {3, 14,
  4, 15,
  7, 16,
  8, 17,
  9, 18,
  10, 19,
  11, 20,
  26, 21,
  27, 22,
  29, 40, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_19 [21] = {3, 14,
  4, 15,
  7, 16,
  8, 17,
  9, 18,
  10, 19,
  11, 20,
  26, 21,
  27, 22,
  29, 41, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_20 [21] = {3, 14,
  4, 15,
  7, 16,
  8, 17,
  9, 18,
  10, 19,
  11, 20,
  26, 21,
  27, 22,
  29, 42, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_21 [21] = {3, 14,
  4, 15,
  7, 16,
  8, 17,
  9, 18,
  10, 19,
  11, 20,
  26, 21,
  27, 22,
  29, 43, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_22 [21] = {3, 14,
  4, 15,
  7, 16,
  8, 17,
  9, 18,
  10, 19,
  11, 20,
  26, 21,
  27, 22,
  29, 44, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_29 [3] = {35, 51, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_31 [19] = {2, 63,
  12, 64,
  14, 65,
  15, 66,
  16, 67,
  17, 68,
  23, 69,
  38, 70,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_35 [3] = {76, 78, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_45 [21] = {3, 14,
  4, 15,
  7, 16,
  8, 17,
  9, 18,
  10, 19,
  11, 20,
  26, 21,
  27, 22,
  29, 79, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_47 [15] = {1, 82,
  2, 83,
  14, 84,
  15, 85,
  17, 86,
  34, 87,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_54 [3] = {55, 95, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_63 [19] = {2, 63,
  12, 64,
  14, 65,
  15, 66,
  16, 67,
  17, 68,
  23, 69,
  38, 103,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_64 [19] = {2, 63,
  12, 64,
  14, 65,
  15, 66,
  16, 67,
  17, 68,
  23, 69,
  38, 104,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_65 [19] = {2, 63,
  12, 64,
  14, 65,
  15, 66,
  16, 67,
  17, 68,
  23, 69,
  38, 105,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_66 [19] = {2, 63,
  12, 64,
  14, 65,
  15, 66,
  16, 67,
  17, 68,
  23, 69,
  38, 106,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_67 [19] = {2, 63,
  12, 64,
  14, 65,
  15, 66,
  16, 67,
  17, 68,
  23, 69,
  38, 107,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_68 [19] = {2, 63,
  12, 64,
  14, 65,
  15, 66,
  16, 67,
  17, 68,
  23, 69,
  38, 108,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_69 [19] = {2, 63,
  12, 64,
  14, 65,
  15, 66,
  16, 67,
  17, 68,
  23, 69,
  38, 109,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_77 [5] = {28, 117,
  78, 118, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_78 [3] = {75, 120, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_82 [15] = {1, 82,
  2, 83,
  14, 84,
  15, 85,
  17, 86,
  34, 123,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_83 [15] = {1, 82,
  2, 83,
  14, 84,
  15, 85,
  17, 86,
  34, 124,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_84 [15] = {1, 82,
  2, 83,
  14, 84,
  15, 85,
  17, 86,
  34, 125,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_85 [15] = {1, 82,
  2, 83,
  14, 84,
  15, 85,
  17, 86,
  34, 126,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_86 [15] = {1, 82,
  2, 83,
  14, 84,
  15, 85,
  17, 86,
  34, 127,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_89 [3] = {31, 131, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_91 [17] = {5, 134,
  6, 135,
  14, 136,
  15, 137,
  17, 138,
  32, 139,
  36, 140,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_98 [3] = {57, 147, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_111 [3] = {59, 153, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_112 [3] = {39, 157, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_113 [3] = {41, 160, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_118 [3] = {77, 164, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_119 [3] = {76, 165, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_121 [3] = {30, 168, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_134 [17] = {5, 134,
  6, 135,
  14, 136,
  15, 137,
  17, 138,
  32, 139,
  36, 173,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_135 [17] = {5, 134,
  6, 135,
  14, 136,
  15, 137,
  17, 138,
  32, 139,
  36, 174,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_136 [17] = {5, 134,
  6, 135,
  14, 136,
  15, 137,
  17, 138,
  32, 139,
  36, 175,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_137 [17] = {5, 134,
  6, 135,
  14, 136,
  15, 137,
  17, 138,
  32, 139,
  36, 176,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_138 [17] = {5, 134,
  6, 135,
  14, 136,
  15, 137,
  17, 138,
  32, 139,
  36, 177,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_141 [15] = {12, 180,
  14, 181,
  15, 182,
  17, 183,
  23, 184,
  37, 185,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_144 [3] = {45, 193, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_154 [3] = {39, 200, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_155 [3] = {39, 201, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_156 [3] = {39, 202, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_160 [3] = {42, 206, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_163 [3] = {78, 207, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_165 [3] = {75, 208, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_170 [3] = {31, 211, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_180 [15] = {12, 180,
  14, 181,
  15, 182,
  17, 183,
  23, 184,
  37, 214,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_181 [15] = {12, 180,
  14, 181,
  15, 182,
  17, 183,
  23, 184,
  37, 215,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_182 [15] = {12, 180,
  14, 181,
  15, 182,
  17, 183,
  23, 184,
  37, 216,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_183 [15] = {12, 180,
  14, 181,
  15, 182,
  17, 183,
  23, 184,
  37, 217,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_184 [15] = {12, 180,
  14, 181,
  15, 182,
  17, 183,
  23, 184,
  37, 218,
  58, 71, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_189 [3] = {46, 225, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_190 [13] = {13, 236,
  18, 237,
  19, 238,
  20, 239,
  21, 240,
  48, 241, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_191 [5] = {13, 242,
  48, 241, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_192 [13] = {13, 236,
  18, 243,
  19, 238,
  20, 239,
  21, 240,
  48, 241, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_206 [3] = {40, 251, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_207 [3] = {77, 252, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_209 [3] = {30, 253, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_221 [5] = {13, 257,
  48, 241, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_222 [3] = {45, 258, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_227 [13] = {13, 236,
  18, 261,
  19, 238,
  20, 239,
  21, 240,
  48, 241, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_234 [7] = {13, 236,
  21, 265,
  48, 241, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_237 [3] = {45, 266, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_238 [3] = {60, 268, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_239 [3] = {61, 270, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_240 [3] = {62, 273, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_242 [3] = {47, 275, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_243 [3] = {45, 276, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_246 [5] = {25, 285,
  73, 286, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_250 [3] = {41, 290, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_251 [3] = {43, 292, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_255 [3] = {33, 295, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_257 [3] = {56, 298, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_267 [11] = {13, 236,
  19, 305,
  20, 239,
  21, 240,
  48, 241, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_269 [9] = {13, 236,
  20, 306,
  21, 240,
  48, 241, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_271 [7] = {13, 236,
  21, 307,
  48, 241, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_272 [7] = {13, 236,
  21, 308,
  48, 241, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_274 [5] = {13, 309,
  48, 241, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_275 [5] = {22, 311,
  63, 312, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_277 [5] = {13, 313,
  48, 241, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_280 [5] = {25, 314,
  73, 286, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_285 [3] = {65, 316, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_289 [5] = {25, 319,
  73, 286, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_290 [3] = {42, 320, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_297 [5] = {13, 325,
  48, 241, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_299 [3] = {45, 327, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_300 [3] = {54, 329, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_302 [3] = {49, 331, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_303 [3] = {53, 333, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_304 [3] = {51, 335, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_305 [3] = {60, 336, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_307 [3] = {62, 337, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_308 [3] = {62, 338, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_309 [3] = {47, 339, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_311 [3] = {45, 341, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_314 [3] = {74, 344, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_320 [3] = {40, 348, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_325 [3] = {56, 352, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_330 [3] = {50, 356, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_334 [3] = {52, 360, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_343 [5] = {25, 362,
  73, 286, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_346 [3] = {66, 368, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_361 [5] = {25, 373,
  73, 286, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_362 [3] = {74, 374, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_364 [5] = {25, 375,
  73, 286, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_368 [3] = {67, 380, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_369 [3] = {44, 382, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_373 [3] = {64, 386, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_375 [3] = {65, 387, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_391 [3] = {68, 398, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_392 [3] = {69, 400, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_402 [5] = {25, 407,
  73, 286, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_403 [3] = {68, 408, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_404 [3] = {70, 410, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_406 [3] = {44, 411, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_407 [3] = {64, 412, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_414 [5] = {24, 419,
  71, 420, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_416 [13] = {13, 236,
  18, 422,
  19, 238,
  20, 239,
  21, 240,
  48, 241, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_417 [5] = {13, 423,
  48, 241, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_418 [13] = {13, 236,
  18, 424,
  19, 238,
  20, 239,
  21, 240,
  48, 241, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_419 [3] = {69, 425, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_422 [3] = {71, 427, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_423 [3] = {72, 429, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_424 [3] = {71, 430, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_428 [5] = {13, 432,
  48, 241, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_429 [5] = {22, 433,
  63, 312, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_431 [3] = {71, 434, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_432 [3] = {72, 435, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_433 [3] = {71, 436, -1} ;

static const int16_t * gSuccessorTable_easyBindings_grammar [437] = {
gSuccessorTable_easyBindings_grammar_0, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_14, gSuccessorTable_easyBindings_grammar_15, 
  gSuccessorTable_easyBindings_grammar_16, gSuccessorTable_easyBindings_grammar_17, gSuccessorTable_easyBindings_grammar_18, gSuccessorTable_easyBindings_grammar_19, 
  gSuccessorTable_easyBindings_grammar_20, gSuccessorTable_easyBindings_grammar_21, gSuccessorTable_easyBindings_grammar_22, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_29, NULL, gSuccessorTable_easyBindings_grammar_31, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_35, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_45, NULL, gSuccessorTable_easyBindings_grammar_47, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_54, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_63, 
  gSuccessorTable_easyBindings_grammar_64, gSuccessorTable_easyBindings_grammar_65, gSuccessorTable_easyBindings_grammar_66, gSuccessorTable_easyBindings_grammar_67, 
  gSuccessorTable_easyBindings_grammar_68, gSuccessorTable_easyBindings_grammar_69, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_77, gSuccessorTable_easyBindings_grammar_78, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_82, gSuccessorTable_easyBindings_grammar_83, 
  gSuccessorTable_easyBindings_grammar_84, gSuccessorTable_easyBindings_grammar_85, gSuccessorTable_easyBindings_grammar_86, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_89, NULL, gSuccessorTable_easyBindings_grammar_91, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_98, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_111, 
  gSuccessorTable_easyBindings_grammar_112, gSuccessorTable_easyBindings_grammar_113, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_118, gSuccessorTable_easyBindings_grammar_119, 
  NULL, gSuccessorTable_easyBindings_grammar_121, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_134, gSuccessorTable_easyBindings_grammar_135, 
  gSuccessorTable_easyBindings_grammar_136, gSuccessorTable_easyBindings_grammar_137, gSuccessorTable_easyBindings_grammar_138, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_141, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_144, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_154, gSuccessorTable_easyBindings_grammar_155, 
  gSuccessorTable_easyBindings_grammar_156, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_160, NULL, NULL, gSuccessorTable_easyBindings_grammar_163, 
  NULL, gSuccessorTable_easyBindings_grammar_165, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_170, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_180, gSuccessorTable_easyBindings_grammar_181, gSuccessorTable_easyBindings_grammar_182, gSuccessorTable_easyBindings_grammar_183, 
  gSuccessorTable_easyBindings_grammar_184, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_189, gSuccessorTable_easyBindings_grammar_190, gSuccessorTable_easyBindings_grammar_191, 
  gSuccessorTable_easyBindings_grammar_192, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_206, gSuccessorTable_easyBindings_grammar_207, 
  NULL, gSuccessorTable_easyBindings_grammar_209, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_221, gSuccessorTable_easyBindings_grammar_222, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_227, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_234, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_237, gSuccessorTable_easyBindings_grammar_238, gSuccessorTable_easyBindings_grammar_239, 
  gSuccessorTable_easyBindings_grammar_240, NULL, gSuccessorTable_easyBindings_grammar_242, gSuccessorTable_easyBindings_grammar_243, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_246, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_250, gSuccessorTable_easyBindings_grammar_251, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_255, 
  NULL, gSuccessorTable_easyBindings_grammar_257, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_267, 
  NULL, gSuccessorTable_easyBindings_grammar_269, NULL, gSuccessorTable_easyBindings_grammar_271, 
  gSuccessorTable_easyBindings_grammar_272, NULL, gSuccessorTable_easyBindings_grammar_274, gSuccessorTable_easyBindings_grammar_275, 
  NULL, gSuccessorTable_easyBindings_grammar_277, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_280, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_285, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_289, gSuccessorTable_easyBindings_grammar_290, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_297, NULL, gSuccessorTable_easyBindings_grammar_299, 
  gSuccessorTable_easyBindings_grammar_300, NULL, gSuccessorTable_easyBindings_grammar_302, gSuccessorTable_easyBindings_grammar_303, 
  gSuccessorTable_easyBindings_grammar_304, gSuccessorTable_easyBindings_grammar_305, NULL, gSuccessorTable_easyBindings_grammar_307, 
  gSuccessorTable_easyBindings_grammar_308, gSuccessorTable_easyBindings_grammar_309, NULL, gSuccessorTable_easyBindings_grammar_311, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_314, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_320, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_325, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_330, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_334, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_343, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_346, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_361, gSuccessorTable_easyBindings_grammar_362, NULL, 
  gSuccessorTable_easyBindings_grammar_364, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_368, gSuccessorTable_easyBindings_grammar_369, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_373, NULL, gSuccessorTable_easyBindings_grammar_375, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_391, 
  gSuccessorTable_easyBindings_grammar_392, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_402, gSuccessorTable_easyBindings_grammar_403, 
  gSuccessorTable_easyBindings_grammar_404, NULL, gSuccessorTable_easyBindings_grammar_406, gSuccessorTable_easyBindings_grammar_407, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_414, NULL, 
  gSuccessorTable_easyBindings_grammar_416, gSuccessorTable_easyBindings_grammar_417, gSuccessorTable_easyBindings_grammar_418, gSuccessorTable_easyBindings_grammar_419, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_422, gSuccessorTable_easyBindings_grammar_423, 
  gSuccessorTable_easyBindings_grammar_424, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_428, gSuccessorTable_easyBindings_grammar_429, NULL, gSuccessorTable_easyBindings_grammar_431, 
  gSuccessorTable_easyBindings_grammar_432, gSuccessorTable_easyBindings_grammar_433, NULL, NULL, 
  NULL} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                          Production rules infos (left non terminal, size of right string)                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionsTable_easyBindings_grammar [187 * 2] = {
  0, 1,
  1, 3,
  2, 5,
  3, 8,
  3, 5,
  4, 6,
  5, 8,
  6, 7,
  3, 5,
  7, 6,
  8, 7,
  9, 4,
  10, 6,
  11, 9,
  12, 5,
  13, 1,
  14, 8,
  14, 8,
  15, 8,
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
  23, 7,
  23, 7,
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
  30, 0,
  30, 3,
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
  51, 0,
  51, 2,
  52, 3,
  52, 1,
  53, 0,
  53, 2,
  54, 0,
  54, 2,
  55, 0,
  55, 1,
  56, 0,
  56, 3,
  57, 0,
  57, 1,
  58, 0,
  58, 1,
  59, 0,
  59, 1,
  60, 0,
  60, 3,
  61, 0,
  61, 2,
  62, 0,
  62, 3,
  62, 3,
  63, 0,
  63, 6,
  64, 0,
  64, 5,
  65, 0,
  65, 5,
  66, 3,
  66, 3,
  66, 3,
  67, 0,
  67, 3,
  68, 0,
  68, 3,
  69, 0,
  69, 6,
  70, 0,
  70, 2,
  71, 0,
  71, 5,
  71, 3,
  71, 3,
  71, 5,
  72, 0,
  72, 3,
  73, 1,
  73, 1,
  73, 1,
  73, 1,
  73, 1,
  73, 1,
  73, 4,
  74, 0,
  74, 3,
  75, 0,
  75, 3,
  76, 2,
  76, 1,
  76, 3,
  77, 0,
  77, 3,
  78, 2,
  78, 1,
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
  case 4 :
      rule_easyBindings_5F_syntax_class_5F_declaration_i4_parse(inLexique) ;
    break ;
  case 8 :
      rule_easyBindings_5F_syntax_class_5F_declaration_i8_parse(inLexique) ;
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
  case 4 :
      rule_easyBindings_5F_syntax_class_5F_declaration_i4_(parameter_1, parameter_2, inLexique) ;
    break ;
  case 8 :
      rule_easyBindings_5F_syntax_class_5F_declaration_i8_(parameter_1, parameter_2, inLexique) ;
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
  case 5 :
      rule_easyBindings_5F_syntax_enum_5F_declaration_i5_parse(inLexique) ;
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
  case 5 :
      rule_easyBindings_5F_syntax_enum_5F_declaration_i5_(parameter_1, parameter_2, inLexique) ;
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
  case 6 :
      rule_easyBindings_5F_syntax_toMany_5F_relationship_i6_parse(inLexique) ;
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
  case 6 :
      rule_easyBindings_5F_syntax_toMany_5F_relationship_i6_(parameter_1, parameter_2, inLexique) ;
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
  case 7 :
      rule_easyBindings_5F_syntax_toOne_5F_relationship_i7_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_toOne_5F_relationship_ (GALGAS_toOneRelationshipList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 7 :
      rule_easyBindings_5F_syntax_toOne_5F_relationship_i7_(parameter_1, inLexique) ;
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
  case 9 :
      rule_easyBindings_5F_syntax_entity_5F_declaration_i9_parse(inLexique) ;
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
  case 9 :
      rule_easyBindings_5F_syntax_entity_5F_declaration_i9_(parameter_1, parameter_2, inLexique) ;
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
  case 10 :
      rule_easyBindings_5F_syntax_document_5F_declaration_i10_parse(inLexique) ;
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
  case 10 :
      rule_easyBindings_5F_syntax_document_5F_declaration_i10_(parameter_1, parameter_2, inLexique) ;
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
  case 11 :
      rule_easyBindings_5F_syntax_preferences_5F_declaration_i11_parse(inLexique) ;
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
  case 11 :
      rule_easyBindings_5F_syntax_preferences_5F_declaration_i11_(parameter_1, parameter_2, inLexique) ;
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
  case 12 :
      rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i12_parse(inLexique) ;
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
  case 12 :
      rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i12_(parameter_1, parameter_2, inLexique) ;
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
  case 13 :
      rule_easyBindings_5F_syntax_binding_5F_specification_i13_parse(inLexique) ;
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
  case 13 :
      rule_easyBindings_5F_syntax_binding_5F_specification_i13_(parameter_1, parameter_2, inLexique) ;
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
  case 14 :
      rule_easyBindings_5F_syntax_outlet_5F_declaration_i14_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_declaration_ (GALGAS_outletDeclarationList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 14 :
      rule_easyBindings_5F_syntax_outlet_5F_declaration_i14_(parameter_1, inLexique) ;
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
  case 15 :
      rule_easyBindings_5F_syntax_observable_5F_property_i15_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_observable_5F_property_ (GALGAS_observablePropertyAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 15 :
      rule_easyBindings_5F_syntax_observable_5F_property_i15_(parameter_1, inLexique) ;
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
  case 16 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i16_parse(inLexique) ;
    break ;
  case 17 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i17_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_transient_5F_declaration_ (GALGAS_secondaryPropertyList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 16 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i16_(parameter_1, inLexique) ;
    break ;
  case 17 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i17_(parameter_1, inLexique) ;
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
  case 18 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i18_parse(inLexique) ;
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
  case 18 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i18_(parameter_1, parameter_2, inLexique) ;
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
  case 19 :
      rule_easyBindings_5F_syntax_stored_5F_array_5F_declaration_i19_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_stored_5F_array_5F_declaration_ (GALGAS_storedArrayPropertyList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 19 :
      rule_easyBindings_5F_syntax_stored_5F_array_5F_declaration_i19_(parameter_1, inLexique) ;
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
  case 20 :
      rule_easyBindings_5F_syntax_action_5F_declaration_i20_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_action_5F_declaration_ (GALGAS_lstringlist &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 20 :
      rule_easyBindings_5F_syntax_action_5F_declaration_i20_(parameter_1, inLexique) ;
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
  case 21 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i21_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingExpression_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 21 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i21_(parameter_1, inLexique) ;
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
  case 22 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i22_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingComparison_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 22 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i22_(parameter_1, inLexique) ;
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
  case 23 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i23_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingTerm_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 23 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i23_(parameter_1, inLexique) ;
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
  case 24 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_parse(inLexique) ;
    break ;
  case 25 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i25_parse(inLexique) ;
    break ;
  case 26 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i26_parse(inLexique) ;
    break ;
  case 27 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i27_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingOperand_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 24 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_(parameter_1, inLexique) ;
    break ;
  case 25 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i25_(parameter_1, inLexique) ;
    break ;
  case 26 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i26_(parameter_1, inLexique) ;
    break ;
  case 27 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i27_(parameter_1, inLexique) ;
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
  case 28 :
      rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i28_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_binding_5F_option_5F_list_ (GALGAS_bindingOptionList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 28 :
      rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i28_(parameter_1, inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                             'array_controller_declaration' non terminal implementation                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

void cGrammar_easyBindings_5F_grammar::nt_array_5F_controller_5F_declaration_parse (C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 29 :
      rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i29_parse(inLexique) ;
    break ;
  case 31 :
      rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i31_parse(inLexique) ;
    break ;
  case 32 :
      rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i32_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_array_5F_controller_5F_declaration_ (GALGAS_secondaryPropertyList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 29 :
      rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i29_(parameter_1, inLexique) ;
    break ;
  case 31 :
      rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i31_(parameter_1, inLexique) ;
    break ;
  case 32 :
      rule_easyBindings_5F_syntax_array_5F_controller_5F_declaration_i32_(parameter_1, inLexique) ;
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

void cGrammar_easyBindings_5F_grammar::nt_column_5F_bindings_ (GALGAS_columnBindingAST &  parameter_1,
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
  case 33 :
      rule_easyBindings_5F_syntax_explicit_5F_value_i33_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_explicit_5F_value_ (GALGAS_abstractDefaultValue &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 33 :
      rule_easyBindings_5F_syntax_explicit_5F_value_i33_(parameter_1, inLexique) ;
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
  case 34 :
      rule_easyBindings_5F_syntax_xcode_5F_project_i34_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_xcode_5F_project_ (GALGAS_lstring &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 34 :
      rule_easyBindings_5F_syntax_xcode_5F_project_i34_(parameter_1, inLexique) ;
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
  case 35 :
      rule_easyBindings_5F_syntax_main_5F_xib_i35_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_ (GALGAS_mainXibDescriptorList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 35 :
      rule_easyBindings_5F_syntax_main_5F_xib_i35_(parameter_1, inLexique) ;
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
  case 36 :
      rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i36_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_5F_line_ (GALGAS_mainXibLineDescriptorList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 36 :
      rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i36_(parameter_1, inLexique) ;
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
// Productions numbers : 37 38 39 40 41 42 43 44 45 46 47
  return inLexique->nextProductionIndex () - 36 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_1' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_1 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 48 49
  return inLexique->nextProductionIndex () - 47 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_2' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_2 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 50 51
  return inLexique->nextProductionIndex () - 49 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_3' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_3 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 52 53
  return inLexique->nextProductionIndex () - 51 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_4' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_4 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 54 55
  return inLexique->nextProductionIndex () - 53 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_5' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_5 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 56 57 58 59 60 61
  return inLexique->nextProductionIndex () - 55 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_6' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_6 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 62 63
  return inLexique->nextProductionIndex () - 61 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_7' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_7 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 64 65 66 67 68 69
  return inLexique->nextProductionIndex () - 63 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_8' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_8 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 70 71 72 73 74 75
  return inLexique->nextProductionIndex () - 69 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_9' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_9 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 76 77 78 79 80 81 82 83
  return inLexique->nextProductionIndex () - 75 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_10' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_10 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 84 85 86 87
  return inLexique->nextProductionIndex () - 83 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_11' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_11 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 88 89
  return inLexique->nextProductionIndex () - 87 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_12' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_12 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 90 91
  return inLexique->nextProductionIndex () - 89 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_13' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_13 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 92 93
  return inLexique->nextProductionIndex () - 91 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_14' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_14 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 94 95
  return inLexique->nextProductionIndex () - 93 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_15' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_15 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 96 97
  return inLexique->nextProductionIndex () - 95 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_16' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_16 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 98 99 100 101 102 103
  return inLexique->nextProductionIndex () - 97 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_17' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_17 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 104 105
  return inLexique->nextProductionIndex () - 103 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_18' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_18 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 106 107
  return inLexique->nextProductionIndex () - 105 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_19' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_19 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 108 109 110 111 112 113 114
  return inLexique->nextProductionIndex () - 107 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_20' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_20 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 115 116
  return inLexique->nextProductionIndex () - 114 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_21' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_21 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 117 118
  return inLexique->nextProductionIndex () - 116 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_22' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_22 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 119 120
  return inLexique->nextProductionIndex () - 118 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_23' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_23 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 121 122
  return inLexique->nextProductionIndex () - 120 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_24' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_24 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 123 124
  return inLexique->nextProductionIndex () - 122 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_25' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_25 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 125 126
  return inLexique->nextProductionIndex () - 124 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_26' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_26 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 127 128
  return inLexique->nextProductionIndex () - 126 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_27' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_27 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 129 130
  return inLexique->nextProductionIndex () - 128 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_28' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_28 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 131 132
  return inLexique->nextProductionIndex () - 130 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_29' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_29 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 133 134
  return inLexique->nextProductionIndex () - 132 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_30' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_30 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 135 136
  return inLexique->nextProductionIndex () - 134 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_31' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_31 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 137 138
  return inLexique->nextProductionIndex () - 136 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_32' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_32 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 139 140
  return inLexique->nextProductionIndex () - 138 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_33' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_33 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 141 142 143
  return inLexique->nextProductionIndex () - 140 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_34' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_34 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 144 145
  return inLexique->nextProductionIndex () - 143 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_35' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_35 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 146 147
  return inLexique->nextProductionIndex () - 145 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_36' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_36 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 148 149
  return inLexique->nextProductionIndex () - 147 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_37' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_37 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 150 151 152
  return inLexique->nextProductionIndex () - 149 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_38' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_38 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 153 154
  return inLexique->nextProductionIndex () - 152 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_39' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_39 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 155 156
  return inLexique->nextProductionIndex () - 154 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_40' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_40 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 157 158
  return inLexique->nextProductionIndex () - 156 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_41' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_41 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 159 160
  return inLexique->nextProductionIndex () - 158 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_42' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_42 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 161 162 163 164 165
  return inLexique->nextProductionIndex () - 160 ;
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
// Productions numbers : 168 169 170 171 172 173 174
  return inLexique->nextProductionIndex () - 167 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_45' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_45 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 175 176
  return inLexique->nextProductionIndex () - 174 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_46' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_46 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 177 178
  return inLexique->nextProductionIndex () - 176 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_47' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_47 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 179 180 181
  return inLexique->nextProductionIndex () - 178 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_48' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_48 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 182 183
  return inLexique->nextProductionIndex () - 181 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_49' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_49 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 184 185
  return inLexique->nextProductionIndex () - 183 ;
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

GALGAS_bindingSpecificationListMap::GALGAS_bindingSpecificationListMap (void) :
AC_GALGAS_listmap () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationListMap GALGAS_bindingSpecificationListMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_bindingSpecificationListMap result ;
  result.makeNewEmptyListMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList GALGAS_bindingSpecificationListMap::getter_listForKey (const GALGAS_string & inKey
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  return GALGAS_outletClassBindingSpecificationList (listForKey (inKey)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_bindingSpecificationListMap::cEnumerator_bindingSpecificationListMap (const GALGAS_bindingSpecificationListMap & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingSpecificationListMap_2D_element cEnumerator_bindingSpecificationListMap::current (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_bindingSpecificationListMap_2D_element (p->mKey, p->mSharedListMapList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_bindingSpecificationListMap::current_key (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_string (p->mKey) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationList cEnumerator_bindingSpecificationListMap::current_mList (LOCATION_ARGS) const {
  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cListMapElement) ;
  return GALGAS_outletClassBindingSpecificationList (p->mSharedListMapList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @bindingSpecificationListMap type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bindingSpecificationListMap ("bindingSpecificationListMap",
                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_bindingSpecificationListMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingSpecificationListMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_bindingSpecificationListMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bindingSpecificationListMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration::GALGAS_prefDeclaration (void) :
mProperty_mOutletDeclarationList (),
mProperty_mSimpleStoredAttributeList (),
mProperty_mActionDeclarationList (),
mProperty_mSecondaryPropertyList (),
mProperty_mMainXibDescriptorList (),
mProperty_mExternSwiftFunctionList (),
mProperty_mStoredArrayList (),
mProperty_mArrayControllerForGeneration (),
mProperty_mSignatureList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration::~ GALGAS_prefDeclaration (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration::GALGAS_prefDeclaration (const GALGAS_outletDeclarationList & inOperand0,
                                                const GALGAS_simpleStoredPropertyList & inOperand1,
                                                const GALGAS_lstringlist & inOperand2,
                                                const GALGAS_secondaryPropertyList & inOperand3,
                                                const GALGAS_mainXibDescriptorList & inOperand4,
                                                const GALGAS_externSwiftFunctionList & inOperand5,
                                                const GALGAS_storedArrayPropertyList & inOperand6,
                                                const GALGAS_arrayControllerForGeneration & inOperand7,
                                                const GALGAS_stringset & inOperand8) :
mProperty_mOutletDeclarationList (inOperand0),
mProperty_mSimpleStoredAttributeList (inOperand1),
mProperty_mActionDeclarationList (inOperand2),
mProperty_mSecondaryPropertyList (inOperand3),
mProperty_mMainXibDescriptorList (inOperand4),
mProperty_mExternSwiftFunctionList (inOperand5),
mProperty_mStoredArrayList (inOperand6),
mProperty_mArrayControllerForGeneration (inOperand7),
mProperty_mSignatureList (inOperand8) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration GALGAS_prefDeclaration::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_prefDeclaration (GALGAS_outletDeclarationList::constructor_emptyList (HERE),
                                 GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                 GALGAS_lstringlist::constructor_emptyList (HERE),
                                 GALGAS_secondaryPropertyList::constructor_emptyList (HERE),
                                 GALGAS_mainXibDescriptorList::constructor_emptyList (HERE),
                                 GALGAS_externSwiftFunctionList::constructor_emptyList (HERE),
                                 GALGAS_storedArrayPropertyList::constructor_emptyList (HERE),
                                 GALGAS_arrayControllerForGeneration::constructor_emptyList (HERE),
                                 GALGAS_stringset::constructor_emptySet (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration GALGAS_prefDeclaration::constructor_new (const GALGAS_outletDeclarationList & inOperand0,
                                                                const GALGAS_simpleStoredPropertyList & inOperand1,
                                                                const GALGAS_lstringlist & inOperand2,
                                                                const GALGAS_secondaryPropertyList & inOperand3,
                                                                const GALGAS_mainXibDescriptorList & inOperand4,
                                                                const GALGAS_externSwiftFunctionList & inOperand5,
                                                                const GALGAS_storedArrayPropertyList & inOperand6,
                                                                const GALGAS_arrayControllerForGeneration & inOperand7,
                                                                const GALGAS_stringset & inOperand8 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefDeclaration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid ()) {
    result = GALGAS_prefDeclaration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8) ;
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
    result = mProperty_mSecondaryPropertyList.objectCompare (inOperand.mProperty_mSecondaryPropertyList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMainXibDescriptorList.objectCompare (inOperand.mProperty_mMainXibDescriptorList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExternSwiftFunctionList.objectCompare (inOperand.mProperty_mExternSwiftFunctionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStoredArrayList.objectCompare (inOperand.mProperty_mStoredArrayList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArrayControllerForGeneration.objectCompare (inOperand.mProperty_mArrayControllerForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSignatureList.objectCompare (inOperand.mProperty_mSignatureList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_prefDeclaration::isValid (void) const {
  return mProperty_mOutletDeclarationList.isValid () && mProperty_mSimpleStoredAttributeList.isValid () && mProperty_mActionDeclarationList.isValid () && mProperty_mSecondaryPropertyList.isValid () && mProperty_mMainXibDescriptorList.isValid () && mProperty_mExternSwiftFunctionList.isValid () && mProperty_mStoredArrayList.isValid () && mProperty_mArrayControllerForGeneration.isValid () && mProperty_mSignatureList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_prefDeclaration::drop (void) {
  mProperty_mOutletDeclarationList.drop () ;
  mProperty_mSimpleStoredAttributeList.drop () ;
  mProperty_mActionDeclarationList.drop () ;
  mProperty_mSecondaryPropertyList.drop () ;
  mProperty_mMainXibDescriptorList.drop () ;
  mProperty_mExternSwiftFunctionList.drop () ;
  mProperty_mStoredArrayList.drop () ;
  mProperty_mArrayControllerForGeneration.drop () ;
  mProperty_mSignatureList.drop () ;
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
    mProperty_mSecondaryPropertyList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMainXibDescriptorList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStoredArrayList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArrayControllerForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSignatureList.description (ioString, inIndentation+1) ;
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

GALGAS_secondaryPropertyList GALGAS_prefDeclaration::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSecondaryPropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibDescriptorList GALGAS_prefDeclaration::getter_mMainXibDescriptorList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMainXibDescriptorList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_prefDeclaration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftFunctionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyList GALGAS_prefDeclaration::getter_mStoredArrayList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStoredArrayList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGeneration GALGAS_prefDeclaration::getter_mArrayControllerForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_prefDeclaration::getter_mSignatureList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignatureList ;
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
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_propertyClassDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_propertyClassDeclaration * p = (const cPtr_propertyClassDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_propertyClassDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (p->mProperty_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassPropertyName.objectCompare (p->mProperty_mClassPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDefaultValues.objectCompare (p->mProperty_mDefaultValues) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_propertyClassDeclaration::objectCompare (const GALGAS_propertyClassDeclaration & inOperand) const {
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

GALGAS_propertyClassDeclaration::GALGAS_propertyClassDeclaration (void) :
GALGAS_astDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyClassDeclaration::GALGAS_propertyClassDeclaration (const cPtr_propertyClassDeclaration * inSourcePtr) :
GALGAS_astDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_propertyClassDeclaration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyClassDeclaration GALGAS_propertyClassDeclaration::constructor_new (const GALGAS_bool & inAttribute_mUserDefined,
                                                                                  const GALGAS_lstring & inAttribute_mClassPropertyName,
                                                                                  const GALGAS_propertyClassDefaultValues & inAttribute_mDefaultValues
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_propertyClassDeclaration result ;
  if (inAttribute_mUserDefined.isValid () && inAttribute_mClassPropertyName.isValid () && inAttribute_mDefaultValues.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_propertyClassDeclaration (inAttribute_mUserDefined, inAttribute_mClassPropertyName, inAttribute_mDefaultValues COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_propertyClassDeclaration::getter_mClassPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_propertyClassDeclaration * p = (const cPtr_propertyClassDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_propertyClassDeclaration) ;
    result = p->mProperty_mClassPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_propertyClassDeclaration::getter_mClassPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyClassDefaultValues GALGAS_propertyClassDeclaration::getter_mDefaultValues (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyClassDefaultValues result ;
  if (NULL != mObjectPtr) {
    const cPtr_propertyClassDeclaration * p = (const cPtr_propertyClassDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_propertyClassDeclaration) ;
    result = p->mProperty_mDefaultValues ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyClassDefaultValues cPtr_propertyClassDeclaration::getter_mDefaultValues (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultValues ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @propertyClassDeclaration class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_propertyClassDeclaration::cPtr_propertyClassDeclaration (const GALGAS_bool & in_mUserDefined,
                                                              const GALGAS_lstring & in_mClassPropertyName,
                                                              const GALGAS_propertyClassDefaultValues & in_mDefaultValues
                                                              COMMA_LOCATION_ARGS) :
cPtr_astDeclaration (in_mUserDefined COMMA_THERE),
mProperty_mClassPropertyName (in_mClassPropertyName),
mProperty_mDefaultValues (in_mDefaultValues) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_propertyClassDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyClassDeclaration ;
}

void cPtr_propertyClassDeclaration::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@propertyClassDeclaration:" ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDefaultValues.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_propertyClassDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_propertyClassDeclaration (mProperty_mUserDefined, mProperty_mClassPropertyName, mProperty_mDefaultValues COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @propertyClassDeclaration type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyClassDeclaration ("propertyClassDeclaration",
                                                 & kTypeDescriptor_GALGAS_astDeclaration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_propertyClassDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyClassDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_propertyClassDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyClassDeclaration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyClassDeclaration GALGAS_propertyClassDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_propertyClassDeclaration result ;
  const GALGAS_propertyClassDeclaration * p = (const GALGAS_propertyClassDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyClassDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyClassDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_transientPropertyClassDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_transientPropertyClassDeclaration * p = (const cPtr_transientPropertyClassDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_transientPropertyClassDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (p->mProperty_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassPropertyName.objectCompare (p->mProperty_mClassPropertyName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_transientPropertyClassDeclaration::objectCompare (const GALGAS_transientPropertyClassDeclaration & inOperand) const {
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

GALGAS_transientPropertyClassDeclaration::GALGAS_transientPropertyClassDeclaration (void) :
GALGAS_astDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyClassDeclaration GALGAS_transientPropertyClassDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_transientPropertyClassDeclaration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyClassDeclaration::GALGAS_transientPropertyClassDeclaration (const cPtr_transientPropertyClassDeclaration * inSourcePtr) :
GALGAS_astDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientPropertyClassDeclaration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyClassDeclaration GALGAS_transientPropertyClassDeclaration::constructor_new (const GALGAS_bool & inAttribute_mUserDefined,
                                                                                                    const GALGAS_lstring & inAttribute_mClassPropertyName
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_transientPropertyClassDeclaration result ;
  if (inAttribute_mUserDefined.isValid () && inAttribute_mClassPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_transientPropertyClassDeclaration (inAttribute_mUserDefined, inAttribute_mClassPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_transientPropertyClassDeclaration::getter_mClassPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientPropertyClassDeclaration * p = (const cPtr_transientPropertyClassDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyClassDeclaration) ;
    result = p->mProperty_mClassPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_transientPropertyClassDeclaration::getter_mClassPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                             Pointer class for @transientPropertyClassDeclaration class                              *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_transientPropertyClassDeclaration::cPtr_transientPropertyClassDeclaration (const GALGAS_bool & in_mUserDefined,
                                                                                const GALGAS_lstring & in_mClassPropertyName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_astDeclaration (in_mUserDefined COMMA_THERE),
mProperty_mClassPropertyName (in_mClassPropertyName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_transientPropertyClassDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyClassDeclaration ;
}

void cPtr_transientPropertyClassDeclaration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@transientPropertyClassDeclaration:" ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_transientPropertyClassDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_transientPropertyClassDeclaration (mProperty_mUserDefined, mProperty_mClassPropertyName COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       @transientPropertyClassDeclaration type                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientPropertyClassDeclaration ("transientPropertyClassDeclaration",
                                                          & kTypeDescriptor_GALGAS_astDeclaration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transientPropertyClassDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyClassDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transientPropertyClassDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientPropertyClassDeclaration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyClassDeclaration GALGAS_transientPropertyClassDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_transientPropertyClassDeclaration result ;
  const GALGAS_transientPropertyClassDeclaration * p = (const GALGAS_transientPropertyClassDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientPropertyClassDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyClassDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_enumDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumDeclaration * p = (const cPtr_enumDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (p->mProperty_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumTypeName.objectCompare (p->mProperty_mEnumTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumConstantNameList.objectCompare (p->mProperty_mEnumConstantNameList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_enumDeclaration::objectCompare (const GALGAS_enumDeclaration & inOperand) const {
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

GALGAS_enumDeclaration::GALGAS_enumDeclaration (void) :
GALGAS_astDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumDeclaration GALGAS_enumDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumDeclaration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                  GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_lstringlist::constructor_emptyList (HERE)
                                                  COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumDeclaration::GALGAS_enumDeclaration (const cPtr_enumDeclaration * inSourcePtr) :
GALGAS_astDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumDeclaration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumDeclaration GALGAS_enumDeclaration::constructor_new (const GALGAS_bool & inAttribute_mUserDefined,
                                                                const GALGAS_lstring & inAttribute_mEnumTypeName,
                                                                const GALGAS_lstringlist & inAttribute_mEnumConstantNameList
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_enumDeclaration result ;
  if (inAttribute_mUserDefined.isValid () && inAttribute_mEnumTypeName.isValid () && inAttribute_mEnumConstantNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumDeclaration (inAttribute_mUserDefined, inAttribute_mEnumTypeName, inAttribute_mEnumConstantNameList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_enumDeclaration::getter_mEnumTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumDeclaration * p = (const cPtr_enumDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclaration) ;
    result = p->mProperty_mEnumTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_enumDeclaration::getter_mEnumTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_enumDeclaration::getter_mEnumConstantNameList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumDeclaration * p = (const cPtr_enumDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclaration) ;
    result = p->mProperty_mEnumConstantNameList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_enumDeclaration::getter_mEnumConstantNameList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumConstantNameList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                      Pointer class for @enumDeclaration class                                       *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_enumDeclaration::cPtr_enumDeclaration (const GALGAS_bool & in_mUserDefined,
                                            const GALGAS_lstring & in_mEnumTypeName,
                                            const GALGAS_lstringlist & in_mEnumConstantNameList
                                            COMMA_LOCATION_ARGS) :
cPtr_astDeclaration (in_mUserDefined COMMA_THERE),
mProperty_mEnumTypeName (in_mEnumTypeName),
mProperty_mEnumConstantNameList (in_mEnumConstantNameList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_enumDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclaration ;
}

void cPtr_enumDeclaration::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@enumDeclaration:" ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumConstantNameList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_enumDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumDeclaration (mProperty_mUserDefined, mProperty_mEnumTypeName, mProperty_mEnumConstantNameList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                                @enumDeclaration type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumDeclaration ("enumDeclaration",
                                        & kTypeDescriptor_GALGAS_astDeclaration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_enumDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_enumDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumDeclaration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_enumDeclaration GALGAS_enumDeclaration::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumDeclaration result ;
  const GALGAS_enumDeclaration * p = (const GALGAS_enumDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_classDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_classDeclaration * p = (const cPtr_classDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_classDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (p->mProperty_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSimpleStoredAttributeList.objectCompare (p->mProperty_mSimpleStoredAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSecondaryPropertyList.objectCompare (p->mProperty_mSecondaryPropertyList) ;
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


typeComparisonResult GALGAS_classDeclaration::objectCompare (const GALGAS_classDeclaration & inOperand) const {
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

GALGAS_classDeclaration::GALGAS_classDeclaration (void) :
GALGAS_astDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classDeclaration GALGAS_classDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_classDeclaration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                                   GALGAS_secondaryPropertyList::constructor_emptyList (HERE),
                                                   GALGAS_externSwiftFunctionList::constructor_emptyList (HERE),
                                                   GALGAS_externSwiftDelegateList::constructor_emptyList (HERE),
                                                   GALGAS_lstringlist::constructor_emptyList (HERE)
                                                   COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classDeclaration::GALGAS_classDeclaration (const cPtr_classDeclaration * inSourcePtr) :
GALGAS_astDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classDeclaration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classDeclaration GALGAS_classDeclaration::constructor_new (const GALGAS_bool & inAttribute_mUserDefined,
                                                                  const GALGAS_lstring & inAttribute_mClassName,
                                                                  const GALGAS_simpleStoredPropertyList & inAttribute_mSimpleStoredAttributeList,
                                                                  const GALGAS_secondaryPropertyList & inAttribute_mSecondaryPropertyList,
                                                                  const GALGAS_externSwiftFunctionList & inAttribute_mExternSwiftFunctionList,
                                                                  const GALGAS_externSwiftDelegateList & inAttribute_mExternSwiftDelegateList,
                                                                  const GALGAS_lstringlist & inAttribute_mActionDeclarationList
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_classDeclaration result ;
  if (inAttribute_mUserDefined.isValid () && inAttribute_mClassName.isValid () && inAttribute_mSimpleStoredAttributeList.isValid () && inAttribute_mSecondaryPropertyList.isValid () && inAttribute_mExternSwiftFunctionList.isValid () && inAttribute_mExternSwiftDelegateList.isValid () && inAttribute_mActionDeclarationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_classDeclaration (inAttribute_mUserDefined, inAttribute_mClassName, inAttribute_mSimpleStoredAttributeList, inAttribute_mSecondaryPropertyList, inAttribute_mExternSwiftFunctionList, inAttribute_mExternSwiftDelegateList, inAttribute_mActionDeclarationList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_classDeclaration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclaration * p = (const cPtr_classDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclaration) ;
    result = p->mProperty_mClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_classDeclaration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList GALGAS_classDeclaration::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclaration * p = (const cPtr_classDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclaration) ;
    result = p->mProperty_mSimpleStoredAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList cPtr_classDeclaration::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSimpleStoredAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList GALGAS_classDeclaration::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_secondaryPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclaration * p = (const cPtr_classDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclaration) ;
    result = p->mProperty_mSecondaryPropertyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList cPtr_classDeclaration::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSecondaryPropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_classDeclaration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftFunctionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclaration * p = (const cPtr_classDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclaration) ;
    result = p->mProperty_mExternSwiftFunctionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList cPtr_classDeclaration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftFunctionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList GALGAS_classDeclaration::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftDelegateList result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclaration * p = (const cPtr_classDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclaration) ;
    result = p->mProperty_mExternSwiftDelegateList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList cPtr_classDeclaration::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftDelegateList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_classDeclaration::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclaration * p = (const cPtr_classDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclaration) ;
    result = p->mProperty_mActionDeclarationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_classDeclaration::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                      Pointer class for @classDeclaration class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_classDeclaration::cPtr_classDeclaration (const GALGAS_bool & in_mUserDefined,
                                              const GALGAS_lstring & in_mClassName,
                                              const GALGAS_simpleStoredPropertyList & in_mSimpleStoredAttributeList,
                                              const GALGAS_secondaryPropertyList & in_mSecondaryPropertyList,
                                              const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                              const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                              const GALGAS_lstringlist & in_mActionDeclarationList
                                              COMMA_LOCATION_ARGS) :
cPtr_astDeclaration (in_mUserDefined COMMA_THERE),
mProperty_mClassName (in_mClassName),
mProperty_mSimpleStoredAttributeList (in_mSimpleStoredAttributeList),
mProperty_mSecondaryPropertyList (in_mSecondaryPropertyList),
mProperty_mExternSwiftFunctionList (in_mExternSwiftFunctionList),
mProperty_mExternSwiftDelegateList (in_mExternSwiftDelegateList),
mProperty_mActionDeclarationList (in_mActionDeclarationList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_classDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclaration ;
}

void cPtr_classDeclaration::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@classDeclaration:" ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSimpleStoredAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSecondaryPropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternSwiftDelegateList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_classDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_classDeclaration (mProperty_mUserDefined, mProperty_mClassName, mProperty_mSimpleStoredAttributeList, mProperty_mSecondaryPropertyList, mProperty_mExternSwiftFunctionList, mProperty_mExternSwiftDelegateList, mProperty_mActionDeclarationList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @classDeclaration type                                                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classDeclaration ("classDeclaration",
                                         & kTypeDescriptor_GALGAS_astDeclaration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_classDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_classDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classDeclaration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_classDeclaration GALGAS_classDeclaration::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_classDeclaration result ;
  const GALGAS_classDeclaration * p = (const GALGAS_classDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_entityDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_entityDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (p->mProperty_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEntityName.objectCompare (p->mProperty_mEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperEntityName.objectCompare (p->mProperty_mSuperEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSimpleStoredAttributeList.objectCompare (p->mProperty_mSimpleStoredAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToOneRelationshipList.objectCompare (p->mProperty_mToOneRelationshipList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToManyRelationshipList.objectCompare (p->mProperty_mToManyRelationshipList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSecondaryPropertyList.objectCompare (p->mProperty_mSecondaryPropertyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSignatureList.objectCompare (p->mProperty_mSignatureList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionDeclarationList.objectCompare (p->mProperty_mActionDeclarationList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_entityDeclaration::objectCompare (const GALGAS_entityDeclaration & inOperand) const {
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

GALGAS_entityDeclaration::GALGAS_entityDeclaration (void) :
GALGAS_astDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityDeclaration GALGAS_entityDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_entityDeclaration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                                    GALGAS_toOneRelationshipList::constructor_emptyList (HERE),
                                                    GALGAS_toManyRelationshipList::constructor_emptyList (HERE),
                                                    GALGAS_secondaryPropertyList::constructor_emptyList (HERE),
                                                    GALGAS_stringset::constructor_emptySet (HERE),
                                                    GALGAS_lstringlist::constructor_emptyList (HERE)
                                                    COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityDeclaration::GALGAS_entityDeclaration (const cPtr_entityDeclaration * inSourcePtr) :
GALGAS_astDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_entityDeclaration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityDeclaration GALGAS_entityDeclaration::constructor_new (const GALGAS_bool & inAttribute_mUserDefined,
                                                                    const GALGAS_lstring & inAttribute_mEntityName,
                                                                    const GALGAS_lstring & inAttribute_mSuperEntityName,
                                                                    const GALGAS_simpleStoredPropertyList & inAttribute_mSimpleStoredAttributeList,
                                                                    const GALGAS_toOneRelationshipList & inAttribute_mToOneRelationshipList,
                                                                    const GALGAS_toManyRelationshipList & inAttribute_mToManyRelationshipList,
                                                                    const GALGAS_secondaryPropertyList & inAttribute_mSecondaryPropertyList,
                                                                    const GALGAS_stringset & inAttribute_mSignatureList,
                                                                    const GALGAS_lstringlist & inAttribute_mActionDeclarationList
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_entityDeclaration result ;
  if (inAttribute_mUserDefined.isValid () && inAttribute_mEntityName.isValid () && inAttribute_mSuperEntityName.isValid () && inAttribute_mSimpleStoredAttributeList.isValid () && inAttribute_mToOneRelationshipList.isValid () && inAttribute_mToManyRelationshipList.isValid () && inAttribute_mSecondaryPropertyList.isValid () && inAttribute_mSignatureList.isValid () && inAttribute_mActionDeclarationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_entityDeclaration (inAttribute_mUserDefined, inAttribute_mEntityName, inAttribute_mSuperEntityName, inAttribute_mSimpleStoredAttributeList, inAttribute_mToOneRelationshipList, inAttribute_mToManyRelationshipList, inAttribute_mSecondaryPropertyList, inAttribute_mSignatureList, inAttribute_mActionDeclarationList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_entityDeclaration::getter_mEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclaration) ;
    result = p->mProperty_mEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_entityDeclaration::getter_mEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_entityDeclaration::getter_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclaration) ;
    result = p->mProperty_mSuperEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_entityDeclaration::getter_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSuperEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList GALGAS_entityDeclaration::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclaration) ;
    result = p->mProperty_mSimpleStoredAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList cPtr_entityDeclaration::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSimpleStoredAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipList GALGAS_entityDeclaration::getter_mToOneRelationshipList (UNUSED_LOCATION_ARGS) const {
  GALGAS_toOneRelationshipList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclaration) ;
    result = p->mProperty_mToOneRelationshipList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipList cPtr_entityDeclaration::getter_mToOneRelationshipList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToOneRelationshipList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipList GALGAS_entityDeclaration::getter_mToManyRelationshipList (UNUSED_LOCATION_ARGS) const {
  GALGAS_toManyRelationshipList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclaration) ;
    result = p->mProperty_mToManyRelationshipList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipList cPtr_entityDeclaration::getter_mToManyRelationshipList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToManyRelationshipList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList GALGAS_entityDeclaration::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_secondaryPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclaration) ;
    result = p->mProperty_mSecondaryPropertyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList cPtr_entityDeclaration::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSecondaryPropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_entityDeclaration::getter_mSignatureList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringset result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclaration) ;
    result = p->mProperty_mSignatureList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset cPtr_entityDeclaration::getter_mSignatureList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignatureList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_entityDeclaration::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclaration) ;
    result = p->mProperty_mActionDeclarationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_entityDeclaration::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                     Pointer class for @entityDeclaration class                                      *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_entityDeclaration::cPtr_entityDeclaration (const GALGAS_bool & in_mUserDefined,
                                                const GALGAS_lstring & in_mEntityName,
                                                const GALGAS_lstring & in_mSuperEntityName,
                                                const GALGAS_simpleStoredPropertyList & in_mSimpleStoredAttributeList,
                                                const GALGAS_toOneRelationshipList & in_mToOneRelationshipList,
                                                const GALGAS_toManyRelationshipList & in_mToManyRelationshipList,
                                                const GALGAS_secondaryPropertyList & in_mSecondaryPropertyList,
                                                const GALGAS_stringset & in_mSignatureList,
                                                const GALGAS_lstringlist & in_mActionDeclarationList
                                                COMMA_LOCATION_ARGS) :
cPtr_astDeclaration (in_mUserDefined COMMA_THERE),
mProperty_mEntityName (in_mEntityName),
mProperty_mSuperEntityName (in_mSuperEntityName),
mProperty_mSimpleStoredAttributeList (in_mSimpleStoredAttributeList),
mProperty_mToOneRelationshipList (in_mToOneRelationshipList),
mProperty_mToManyRelationshipList (in_mToManyRelationshipList),
mProperty_mSecondaryPropertyList (in_mSecondaryPropertyList),
mProperty_mSignatureList (in_mSignatureList),
mProperty_mActionDeclarationList (in_mActionDeclarationList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_entityDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclaration ;
}

void cPtr_entityDeclaration::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@entityDeclaration:" ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSimpleStoredAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToOneRelationshipList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToManyRelationshipList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSecondaryPropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSignatureList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_entityDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_entityDeclaration (mProperty_mUserDefined, mProperty_mEntityName, mProperty_mSuperEntityName, mProperty_mSimpleStoredAttributeList, mProperty_mToOneRelationshipList, mProperty_mToManyRelationshipList, mProperty_mSecondaryPropertyList, mProperty_mSignatureList, mProperty_mActionDeclarationList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @entityDeclaration type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityDeclaration ("entityDeclaration",
                                          & kTypeDescriptor_GALGAS_astDeclaration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_entityDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_entityDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityDeclaration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityDeclaration GALGAS_entityDeclaration::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_entityDeclaration result ;
  const GALGAS_entityDeclaration * p = (const GALGAS_entityDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_documentDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_documentDeclaration * p = (const cPtr_documentDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_documentDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (p->mProperty_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDocumentName.objectCompare (p->mProperty_mDocumentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletDeclarationList.objectCompare (p->mProperty_mOutletDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSimpleStoredAttributeList.objectCompare (p->mProperty_mSimpleStoredAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionDeclarationList.objectCompare (p->mProperty_mActionDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSecondaryPropertyList.objectCompare (p->mProperty_mSecondaryPropertyList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_documentDeclaration::objectCompare (const GALGAS_documentDeclaration & inOperand) const {
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

GALGAS_documentDeclaration::GALGAS_documentDeclaration (void) :
GALGAS_astDeclaration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentDeclaration GALGAS_documentDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_documentDeclaration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_outletDeclarationList::constructor_emptyList (HERE),
                                                      GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                                      GALGAS_lstringlist::constructor_emptyList (HERE),
                                                      GALGAS_secondaryPropertyList::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentDeclaration::GALGAS_documentDeclaration (const cPtr_documentDeclaration * inSourcePtr) :
GALGAS_astDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_documentDeclaration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentDeclaration GALGAS_documentDeclaration::constructor_new (const GALGAS_bool & inAttribute_mUserDefined,
                                                                        const GALGAS_lstring & inAttribute_mDocumentName,
                                                                        const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                        const GALGAS_outletDeclarationList & inAttribute_mOutletDeclarationList,
                                                                        const GALGAS_simpleStoredPropertyList & inAttribute_mSimpleStoredAttributeList,
                                                                        const GALGAS_lstringlist & inAttribute_mActionDeclarationList,
                                                                        const GALGAS_secondaryPropertyList & inAttribute_mSecondaryPropertyList
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_documentDeclaration result ;
  if (inAttribute_mUserDefined.isValid () && inAttribute_mDocumentName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mOutletDeclarationList.isValid () && inAttribute_mSimpleStoredAttributeList.isValid () && inAttribute_mActionDeclarationList.isValid () && inAttribute_mSecondaryPropertyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_documentDeclaration (inAttribute_mUserDefined, inAttribute_mDocumentName, inAttribute_mRootEntityName, inAttribute_mOutletDeclarationList, inAttribute_mSimpleStoredAttributeList, inAttribute_mActionDeclarationList, inAttribute_mSecondaryPropertyList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_documentDeclaration::getter_mDocumentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclaration * p = (const cPtr_documentDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclaration) ;
    result = p->mProperty_mDocumentName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_documentDeclaration::getter_mDocumentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDocumentName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_documentDeclaration::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclaration * p = (const cPtr_documentDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclaration) ;
    result = p->mProperty_mRootEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_documentDeclaration::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRootEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_documentDeclaration::getter_mOutletDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclaration * p = (const cPtr_documentDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclaration) ;
    result = p->mProperty_mOutletDeclarationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList cPtr_documentDeclaration::getter_mOutletDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList GALGAS_documentDeclaration::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclaration * p = (const cPtr_documentDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclaration) ;
    result = p->mProperty_mSimpleStoredAttributeList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyList cPtr_documentDeclaration::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSimpleStoredAttributeList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist GALGAS_documentDeclaration::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclaration * p = (const cPtr_documentDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclaration) ;
    result = p->mProperty_mActionDeclarationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstringlist cPtr_documentDeclaration::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList GALGAS_documentDeclaration::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_secondaryPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclaration * p = (const cPtr_documentDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclaration) ;
    result = p->mProperty_mSecondaryPropertyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_secondaryPropertyList cPtr_documentDeclaration::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSecondaryPropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @documentDeclaration class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_documentDeclaration::cPtr_documentDeclaration (const GALGAS_bool & in_mUserDefined,
                                                    const GALGAS_lstring & in_mDocumentName,
                                                    const GALGAS_lstring & in_mRootEntityName,
                                                    const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                                    const GALGAS_simpleStoredPropertyList & in_mSimpleStoredAttributeList,
                                                    const GALGAS_lstringlist & in_mActionDeclarationList,
                                                    const GALGAS_secondaryPropertyList & in_mSecondaryPropertyList
                                                    COMMA_LOCATION_ARGS) :
cPtr_astDeclaration (in_mUserDefined COMMA_THERE),
mProperty_mDocumentName (in_mDocumentName),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mOutletDeclarationList (in_mOutletDeclarationList),
mProperty_mSimpleStoredAttributeList (in_mSimpleStoredAttributeList),
mProperty_mActionDeclarationList (in_mActionDeclarationList),
mProperty_mSecondaryPropertyList (in_mSecondaryPropertyList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_documentDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentDeclaration ;
}

void cPtr_documentDeclaration::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@documentDeclaration:" ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDocumentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutletDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSimpleStoredAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSecondaryPropertyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_documentDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_documentDeclaration (mProperty_mUserDefined, mProperty_mDocumentName, mProperty_mRootEntityName, mProperty_mOutletDeclarationList, mProperty_mSimpleStoredAttributeList, mProperty_mActionDeclarationList, mProperty_mSecondaryPropertyList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @documentDeclaration type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_documentDeclaration ("documentDeclaration",
                                            & kTypeDescriptor_GALGAS_astDeclaration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_documentDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentDeclaration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_documentDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_documentDeclaration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentDeclaration GALGAS_documentDeclaration::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_documentDeclaration result ;
  const GALGAS_documentDeclaration * p = (const GALGAS_documentDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_documentDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("documentDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                  Extension method '@prefDeclaration typeInventory'                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_typeInventory (const GALGAS_prefDeclaration inObject,
                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  extensionMethod_typeInventory (inObject.mProperty_mSimpleStoredAttributeList, ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 65)) ;
  cEnumerator_secondaryPropertyList enumerator_2985 (inObject.mProperty_mSecondaryPropertyList, kENUMERATION_UP) ;
  while (enumerator_2985.hasCurrentObject ()) {
    callExtensionMethod_typeInventory ((const cPtr_abstractSecondaryProperty *) enumerator_2985.current_mSecondaryProperty (HERE).ptr (), ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 67)) ;
    enumerator_2985.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Extension method '@prefDeclaration solveSecondaryProperty'                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_solveSecondaryProperty (const GALGAS_prefDeclaration /* inObject */,
                                             GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                             const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                             const GALGAS_secondaryPropertyList constinArgument_inPropertiesToSolve,
                                             GALGAS_secondaryPropertyList & outArgument_outUnsolvedProperties,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnsolvedProperties.drop () ; // Release 'out' argument
  outArgument_outUnsolvedProperties = GALGAS_secondaryPropertyList::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 81)) ;
  GALGAS_observablePropertyMap var_preferencesObservablePropertyMap_3475 = ioArgument_ioSemanticContext.getter_mPreferencesObservablePropertyMap (HERE) ;
  cEnumerator_secondaryPropertyList enumerator_3569 (constinArgument_inPropertiesToSolve, kENUMERATION_UP) ;
  while (enumerator_3569.hasCurrentObject ()) {
    callExtensionMethod_tryToSolveSecondaryProperty ((const cPtr_abstractSecondaryProperty *) enumerator_3569.current_mSecondaryProperty (HERE).ptr (), ioArgument_ioSemanticContext, GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.galgas", 86)), var_preferencesObservablePropertyMap_3475, outArgument_outUnsolvedProperties, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 84)) ;
    enumerator_3569.gotoNextObject () ;
  }
  ioArgument_ioSemanticContext.mProperty_mPreferencesObservablePropertyMap = var_preferencesObservablePropertyMap_3475 ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Extension method '@prefDeclaration buildObservablePropertyMapsFromStoredProperties'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_buildObservablePropertyMapsFromStoredProperties (const GALGAS_prefDeclaration inObject,
                                                                      const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                      GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  extensionMethod_buildObservablePropertyMap (inObject.mProperty_mSimpleStoredAttributeList, constinArgument_inUnifiedTypeMap, ioArgument_ioSemanticContext.mProperty_mPreferencesObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 103)) ;
  extensionMethod_buildObservablePropertyMap (inObject.mProperty_mStoredArrayList, constinArgument_inUnifiedTypeMap, ioArgument_ioSemanticContext.mProperty_mPreferencesObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 108)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                Extension method '@prefDeclaration semanticAnalysis'                                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_semanticAnalysis (const GALGAS_prefDeclaration inObject,
                                       const GALGAS_externSwiftFunctionList constinArgument_inExternSwiftFunctionList,
                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                       GALGAS_structForGeneration & ioArgument_ioGeneration,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("preferences.galgas", 122)) ;
  temp_0.addAssign_operation (GALGAS_string ("awakeFromNib")  COMMA_SOURCE_FILE ("preferences.galgas", 122)) ;
  temp_0.addAssign_operation (GALGAS_string ("init")  COMMA_SOURCE_FILE ("preferences.galgas", 122)) ;
  GALGAS_stringset var_availableCallers_5076 = temp_0 ;
  GALGAS_externFunctionMap var_externFunctionMap_5144 = GALGAS_externFunctionMap::constructor_emptyMap (SOURCE_FILE ("preferences.galgas", 123)) ;
  cEnumerator_externSwiftFunctionList enumerator_5187 (constinArgument_inExternSwiftFunctionList, kENUMERATION_UP) ;
  while (enumerator_5187.hasCurrentObject ()) {
    {
    var_externFunctionMap_5144.setter_insertKey (enumerator_5187.current_mExternSwiftFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 125)) ;
    }
    const enumGalgasBool test_1 = var_availableCallers_5076.getter_hasKey (enumerator_5187.current_mCallerName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("preferences.galgas", 126)).operator_not (SOURCE_FILE ("preferences.galgas", 126)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_s_5326 = GALGAS_string ("invalid caller; available callers:") ;
      cEnumerator_stringset enumerator_5401 (var_availableCallers_5076, kENUMERATION_UP) ;
      while (enumerator_5401.hasCurrentObject ()) {
        var_s_5326.plusAssign_operation(GALGAS_string ("\n"
          "  - ").add_operation (enumerator_5401.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 129)), inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 129)) ;
        enumerator_5401.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (enumerator_5187.current_mCallerName (HERE).getter_location (SOURCE_FILE ("preferences.galgas", 131)), var_s_5326, fixItArray2  COMMA_SOURCE_FILE ("preferences.galgas", 131)) ;
    }
    enumerator_5187.gotoNextObject () ;
  }
  GALGAS_simpleStoredPropertyListForGeneration var_simpleStoredPropertyListForGeneration_5797 ;
  extensionMethod_simpleStoredPropertySemanticAnalysis (inObject.mProperty_mSimpleStoredAttributeList, function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 136)), constinArgument_inSemanticContext.getter_mUnifiedTypeMap (HERE), ioArgument_ioGeneration.mProperty_mValidationStubRoutineListForGeneration, var_simpleStoredPropertyListForGeneration_5797, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 135)) ;
  GALGAS_storedArrayPropertyListForGeneration var_storedArrayPropertyListForGeneration_6017 ;
  extensionMethod_storedArrayPropertySemanticAnalysis (inObject.mProperty_mStoredArrayList, constinArgument_inSemanticContext.getter_mUnifiedTypeMap (HERE), var_storedArrayPropertyListForGeneration_6017, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 142)) ;
  GALGAS_transientDefinitionListForGeneration var_transientDefinitionListForGeneration_6122 = GALGAS_transientDefinitionListForGeneration::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 147)) ;
  GALGAS_arrayControllerForGeneration var_arrayControllerListForGeneration_6283 = GALGAS_arrayControllerForGeneration::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 149)) ;
  cEnumerator_secondaryPropertyList enumerator_6327 (inObject.mProperty_mSecondaryPropertyList, kENUMERATION_UP) ;
  while (enumerator_6327.hasCurrentObject ()) {
    GALGAS_selectionControllerForGeneration joker_6688 = GALGAS_selectionControllerForGeneration::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 160)) ;
    GALGAS_customObjectControllerForGeneration joker_6724 = GALGAS_customObjectControllerForGeneration::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 161)) ;
    callExtensionMethod_secondaryPropertySemanticAnalysis ((const cPtr_abstractSecondaryProperty *) enumerator_6327.current_mSecondaryProperty (HERE).ptr (), function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 152)), GALGAS_string::makeEmptyString (), GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.galgas", 154)), constinArgument_inSemanticContext, constinArgument_inSemanticContext.getter_mPreferencesObservablePropertyMap (HERE), var_transientDefinitionListForGeneration_6122, var_arrayControllerListForGeneration_6283, joker_6688, joker_6724, ioArgument_ioGeneration.mProperty_mNeededOutletClasses, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 151)) ;
    enumerator_6327.gotoNextObject () ;
  }
  ioArgument_ioGeneration.mProperty_mTransientListForGeneration.plusAssign_operation(var_transientDefinitionListForGeneration_6122, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 165)) ;
  ioArgument_ioGeneration.mProperty_mAllArrayControllerForGeneration.plusAssign_operation(var_arrayControllerListForGeneration_6283, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 166)) ;
  GALGAS_actionMap var_actionMap_7066 ;
  {
  routine_buildActionMap (inObject.mProperty_mActionDeclarationList, var_actionMap_7066, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 168)) ;
  }
  cEnumerator_actionMap enumerator_7089 (var_actionMap_7066, kENUMERATION_UP) ;
  while (enumerator_7089.hasCurrentObject ()) {
    ioArgument_ioGeneration.mProperty_mActionListForGeneration.addAssign_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 171)), enumerator_7089.current_lkey (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("preferences.galgas", 170)) ;
    enumerator_7089.gotoNextObject () ;
  }
  GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList_7502 ;
  GALGAS_multipleBindingGenerationList var_multipleBindingGenerationList_7572 ;
  GALGAS_actionBindingListForGeneration var_actionBindingListForGeneration_7644 ;
  GALGAS_decoratedOutletMap var_outletMap_7683 ;
  GALGAS_tableViewBindingGenerationList var_tableViewBindingGenerationList_7755 ;
  {
  routine_analyzeOutlets (GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.galgas", 176)), constinArgument_inSemanticContext, inObject.mProperty_mOutletDeclarationList, constinArgument_inSemanticContext.getter_mPreferencesObservablePropertyMap (HERE), var_actionMap_7066, function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 181)), ioArgument_ioGeneration, var_regularBindingsGenerationList_7502, var_multipleBindingGenerationList_7572, var_actionBindingListForGeneration_7644, var_outletMap_7683, var_tableViewBindingGenerationList_7755, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 175)) ;
  }
  ioArgument_ioGeneration.mProperty_mPreferencesForGeneration.mProperty_mSimpleStoredPropertyListForGeneration = var_simpleStoredPropertyListForGeneration_5797 ;
  ioArgument_ioGeneration.mProperty_mPreferencesForGeneration.mProperty_mTransientDefinitionListForGeneration = var_transientDefinitionListForGeneration_6122 ;
  ioArgument_ioGeneration.mProperty_mPreferencesForGeneration.mProperty_mRegularBindingsGenerationList = var_regularBindingsGenerationList_7502 ;
  ioArgument_ioGeneration.mProperty_mPreferencesForGeneration.mProperty_mActionBindingListForGeneration = var_actionBindingListForGeneration_7644 ;
  ioArgument_ioGeneration.mProperty_mPreferencesForGeneration.mProperty_mMultipleBindingGenerationList = var_multipleBindingGenerationList_7572 ;
  ioArgument_ioGeneration.mProperty_mPreferencesForGeneration.mProperty_mOutletMap = var_outletMap_7683 ;
  ioArgument_ioGeneration.mProperty_mPreferencesForGeneration.mProperty_mMainXibDescriptorList = inObject.mProperty_mMainXibDescriptorList ;
  ioArgument_ioGeneration.mProperty_mPreferencesForGeneration.mProperty_mExternSwiftFunctionList = constinArgument_inExternSwiftFunctionList ;
  ioArgument_ioGeneration.mProperty_mPreferencesForGeneration.mProperty_mStoredArrayPropertyListForGeneration = var_storedArrayPropertyListForGeneration_6017 ;
  ioArgument_ioGeneration.mProperty_mPreferencesForGeneration.mProperty_mArrayControllerForGeneration = var_arrayControllerListForGeneration_6283 ;
  ioArgument_ioGeneration.mProperty_mPreferencesForGeneration.mProperty_mTableViewBindingGenerationList = var_tableViewBindingGenerationList_7755 ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_preferencesForGeneration::GALGAS_preferencesForGeneration (void) :
mProperty_mSimpleStoredPropertyListForGeneration (),
mProperty_mTransientDefinitionListForGeneration (),
mProperty_mRegularBindingsGenerationList (),
mProperty_mMultipleBindingGenerationList (),
mProperty_mActionBindingListForGeneration (),
mProperty_mOutletMap (),
mProperty_mMainXibDescriptorList (),
mProperty_mExternSwiftFunctionList (),
mProperty_mStoredArrayPropertyListForGeneration (),
mProperty_mArrayControllerForGeneration (),
mProperty_mTableViewBindingGenerationList () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_preferencesForGeneration::~ GALGAS_preferencesForGeneration (void) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_preferencesForGeneration::GALGAS_preferencesForGeneration (const GALGAS_simpleStoredPropertyListForGeneration & inOperand0,
                                                                  const GALGAS_transientDefinitionListForGeneration & inOperand1,
                                                                  const GALGAS_regularBindingsGenerationList & inOperand2,
                                                                  const GALGAS_multipleBindingGenerationList & inOperand3,
                                                                  const GALGAS_actionBindingListForGeneration & inOperand4,
                                                                  const GALGAS_decoratedOutletMap & inOperand5,
                                                                  const GALGAS_mainXibDescriptorList & inOperand6,
                                                                  const GALGAS_externSwiftFunctionList & inOperand7,
                                                                  const GALGAS_storedArrayPropertyListForGeneration & inOperand8,
                                                                  const GALGAS_arrayControllerForGeneration & inOperand9,
                                                                  const GALGAS_tableViewBindingGenerationList & inOperand10) :
mProperty_mSimpleStoredPropertyListForGeneration (inOperand0),
mProperty_mTransientDefinitionListForGeneration (inOperand1),
mProperty_mRegularBindingsGenerationList (inOperand2),
mProperty_mMultipleBindingGenerationList (inOperand3),
mProperty_mActionBindingListForGeneration (inOperand4),
mProperty_mOutletMap (inOperand5),
mProperty_mMainXibDescriptorList (inOperand6),
mProperty_mExternSwiftFunctionList (inOperand7),
mProperty_mStoredArrayPropertyListForGeneration (inOperand8),
mProperty_mArrayControllerForGeneration (inOperand9),
mProperty_mTableViewBindingGenerationList (inOperand10) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_preferencesForGeneration GALGAS_preferencesForGeneration::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_preferencesForGeneration (GALGAS_simpleStoredPropertyListForGeneration::constructor_emptyList (HERE),
                                          GALGAS_transientDefinitionListForGeneration::constructor_emptyList (HERE),
                                          GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE),
                                          GALGAS_multipleBindingGenerationList::constructor_emptyList (HERE),
                                          GALGAS_actionBindingListForGeneration::constructor_emptyList (HERE),
                                          GALGAS_decoratedOutletMap::constructor_emptyMap (HERE),
                                          GALGAS_mainXibDescriptorList::constructor_emptyList (HERE),
                                          GALGAS_externSwiftFunctionList::constructor_emptyList (HERE),
                                          GALGAS_storedArrayPropertyListForGeneration::constructor_emptyList (HERE),
                                          GALGAS_arrayControllerForGeneration::constructor_emptyList (HERE),
                                          GALGAS_tableViewBindingGenerationList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_preferencesForGeneration GALGAS_preferencesForGeneration::constructor_new (const GALGAS_simpleStoredPropertyListForGeneration & inOperand0,
                                                                                  const GALGAS_transientDefinitionListForGeneration & inOperand1,
                                                                                  const GALGAS_regularBindingsGenerationList & inOperand2,
                                                                                  const GALGAS_multipleBindingGenerationList & inOperand3,
                                                                                  const GALGAS_actionBindingListForGeneration & inOperand4,
                                                                                  const GALGAS_decoratedOutletMap & inOperand5,
                                                                                  const GALGAS_mainXibDescriptorList & inOperand6,
                                                                                  const GALGAS_externSwiftFunctionList & inOperand7,
                                                                                  const GALGAS_storedArrayPropertyListForGeneration & inOperand8,
                                                                                  const GALGAS_arrayControllerForGeneration & inOperand9,
                                                                                  const GALGAS_tableViewBindingGenerationList & inOperand10 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_preferencesForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_preferencesForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult GALGAS_preferencesForGeneration::objectCompare (const GALGAS_preferencesForGeneration & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSimpleStoredPropertyListForGeneration.objectCompare (inOperand.mProperty_mSimpleStoredPropertyListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTransientDefinitionListForGeneration.objectCompare (inOperand.mProperty_mTransientDefinitionListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegularBindingsGenerationList.objectCompare (inOperand.mProperty_mRegularBindingsGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMultipleBindingGenerationList.objectCompare (inOperand.mProperty_mMultipleBindingGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mActionBindingListForGeneration.objectCompare (inOperand.mProperty_mActionBindingListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOutletMap.objectCompare (inOperand.mProperty_mOutletMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMainXibDescriptorList.objectCompare (inOperand.mProperty_mMainXibDescriptorList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExternSwiftFunctionList.objectCompare (inOperand.mProperty_mExternSwiftFunctionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStoredArrayPropertyListForGeneration.objectCompare (inOperand.mProperty_mStoredArrayPropertyListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArrayControllerForGeneration.objectCompare (inOperand.mProperty_mArrayControllerForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTableViewBindingGenerationList.objectCompare (inOperand.mProperty_mTableViewBindingGenerationList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_preferencesForGeneration::isValid (void) const {
  return mProperty_mSimpleStoredPropertyListForGeneration.isValid () && mProperty_mTransientDefinitionListForGeneration.isValid () && mProperty_mRegularBindingsGenerationList.isValid () && mProperty_mMultipleBindingGenerationList.isValid () && mProperty_mActionBindingListForGeneration.isValid () && mProperty_mOutletMap.isValid () && mProperty_mMainXibDescriptorList.isValid () && mProperty_mExternSwiftFunctionList.isValid () && mProperty_mStoredArrayPropertyListForGeneration.isValid () && mProperty_mArrayControllerForGeneration.isValid () && mProperty_mTableViewBindingGenerationList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_preferencesForGeneration::drop (void) {
  mProperty_mSimpleStoredPropertyListForGeneration.drop () ;
  mProperty_mTransientDefinitionListForGeneration.drop () ;
  mProperty_mRegularBindingsGenerationList.drop () ;
  mProperty_mMultipleBindingGenerationList.drop () ;
  mProperty_mActionBindingListForGeneration.drop () ;
  mProperty_mOutletMap.drop () ;
  mProperty_mMainXibDescriptorList.drop () ;
  mProperty_mExternSwiftFunctionList.drop () ;
  mProperty_mStoredArrayPropertyListForGeneration.drop () ;
  mProperty_mArrayControllerForGeneration.drop () ;
  mProperty_mTableViewBindingGenerationList.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_preferencesForGeneration::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @preferencesForGeneration:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSimpleStoredPropertyListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTransientDefinitionListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMultipleBindingGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mActionBindingListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOutletMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMainXibDescriptorList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStoredArrayPropertyListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArrayControllerForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTableViewBindingGenerationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_simpleStoredPropertyListForGeneration GALGAS_preferencesForGeneration::getter_mSimpleStoredPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSimpleStoredPropertyListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDefinitionListForGeneration GALGAS_preferencesForGeneration::getter_mTransientDefinitionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientDefinitionListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_preferencesForGeneration::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularBindingsGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_preferencesForGeneration::getter_mMultipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMultipleBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_preferencesForGeneration::getter_mActionBindingListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionBindingListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap GALGAS_preferencesForGeneration::getter_mOutletMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_mainXibDescriptorList GALGAS_preferencesForGeneration::getter_mMainXibDescriptorList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMainXibDescriptorList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_preferencesForGeneration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftFunctionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListForGeneration GALGAS_preferencesForGeneration::getter_mStoredArrayPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStoredArrayPropertyListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_arrayControllerForGeneration GALGAS_preferencesForGeneration::getter_mArrayControllerForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_preferencesForGeneration::getter_mTableViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableViewBindingGenerationList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @preferencesForGeneration type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_preferencesForGeneration ("preferencesForGeneration",
                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_preferencesForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_preferencesForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_preferencesForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_preferencesForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_preferencesForGeneration GALGAS_preferencesForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_preferencesForGeneration result ;
  const GALGAS_preferencesForGeneration * p = (const GALGAS_preferencesForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_preferencesForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("preferencesForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

