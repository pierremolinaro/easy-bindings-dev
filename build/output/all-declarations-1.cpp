#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@outletDeclarationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_outletDeclarationList : public cCollectionElement {
  public : GALGAS_outletDeclarationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_outletDeclarationList (const GALGAS_lstring & in_mOutletTypeName,
                                                     const GALGAS_lstring & in_mOutletName,
                                                     const GALGAS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                     const GALGAS_runActionDescriptor & in_mRunDescriptor,
                                                     const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                     const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                     const GALGAS_regularBindingList & in_mRegularBindingList,
                                                     const GALGAS_graphicController & in_mGraphicController
                                                     COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_outletDeclarationList (const GALGAS_outletDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_outletDeclarationList::cCollectionElement_outletDeclarationList (const GALGAS_lstring & in_mOutletTypeName,
                                                                                    const GALGAS_lstring & in_mOutletName,
                                                                                    const GALGAS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                                                    const GALGAS_runActionDescriptor & in_mRunDescriptor,
                                                                                    const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                                                    const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                                                    const GALGAS_regularBindingList & in_mRegularBindingList,
                                                                                    const GALGAS_graphicController & in_mGraphicController
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletTypeName, in_mOutletName, in_mTableValueBindingDescriptor, in_mRunDescriptor, in_mEnabledBindingDescriptor, in_mHiddenBindingDescriptor, in_mRegularBindingList, in_mGraphicController) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_outletDeclarationList::cCollectionElement_outletDeclarationList (const GALGAS_outletDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletTypeName, inElement.mProperty_mOutletName, inElement.mProperty_mTableValueBindingDescriptor, inElement.mProperty_mRunDescriptor, inElement.mProperty_mEnabledBindingDescriptor, inElement.mProperty_mHiddenBindingDescriptor, inElement.mProperty_mRegularBindingList, inElement.mProperty_mGraphicController) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_outletDeclarationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_outletDeclarationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_outletDeclarationList (mObject.mProperty_mOutletTypeName, mObject.mProperty_mOutletName, mObject.mProperty_mTableValueBindingDescriptor, mObject.mProperty_mRunDescriptor, mObject.mProperty_mEnabledBindingDescriptor, mObject.mProperty_mHiddenBindingDescriptor, mObject.mProperty_mRegularBindingList, mObject.mProperty_mGraphicController COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_outletDeclarationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletTypeName" ":" ;
  mObject.mProperty_mOutletTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletName" ":" ;
  mObject.mProperty_mOutletName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTableValueBindingDescriptor" ":" ;
  mObject.mProperty_mTableValueBindingDescriptor.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRunDescriptor" ":" ;
  mObject.mProperty_mRunDescriptor.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEnabledBindingDescriptor" ":" ;
  mObject.mProperty_mEnabledBindingDescriptor.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHiddenBindingDescriptor" ":" ;
  mObject.mProperty_mHiddenBindingDescriptor.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mRegularBindingList" ":" ;
  mObject.mProperty_mRegularBindingList.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mGraphicController" ":" ;
  mObject.mProperty_mGraphicController.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_outletDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_outletDeclarationList * operand = (cCollectionElement_outletDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_outletDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList::GALGAS_outletDeclarationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList::GALGAS_outletDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletDeclarationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1,
                                                                                      const GALGAS_tableValueBinding & inOperand2,
                                                                                      const GALGAS_runActionDescriptor & inOperand3,
                                                                                      const GALGAS_multipleBindingDescriptor & inOperand4,
                                                                                      const GALGAS_multipleBindingDescriptor & inOperand5,
                                                                                      const GALGAS_regularBindingList & inOperand6,
                                                                                      const GALGAS_graphicController & inOperand7
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_outletDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_outletDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_outletDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_lstring & in_mOutletTypeName,
                                                              const GALGAS_lstring & in_mOutletName,
                                                              const GALGAS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                              const GALGAS_runActionDescriptor & in_mRunDescriptor,
                                                              const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                              const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                              const GALGAS_regularBindingList & in_mRegularBindingList,
                                                              const GALGAS_graphicController & in_mGraphicController
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = NULL ;
  macroMyNew (p, cCollectionElement_outletDeclarationList (in_mOutletTypeName,
                                                           in_mOutletName,
                                                           in_mTableValueBindingDescriptor,
                                                           in_mRunDescriptor,
                                                           in_mEnabledBindingDescriptor,
                                                           in_mHiddenBindingDescriptor,
                                                           in_mRegularBindingList,
                                                           in_mGraphicController COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                        const GALGAS_lstring & inOperand1,
                                                        const GALGAS_tableValueBinding & inOperand2,
                                                        const GALGAS_runActionDescriptor & inOperand3,
                                                        const GALGAS_multipleBindingDescriptor & inOperand4,
                                                        const GALGAS_multipleBindingDescriptor & inOperand5,
                                                        const GALGAS_regularBindingList & inOperand6,
                                                        const GALGAS_graphicController & inOperand7
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_append (GALGAS_outletDeclarationList_2D_element inElement,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletDeclarationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                         const GALGAS_lstring inOperand1,
                                                         const GALGAS_tableValueBinding inOperand2,
                                                         const GALGAS_runActionDescriptor inOperand3,
                                                         const GALGAS_multipleBindingDescriptor inOperand4,
                                                         const GALGAS_multipleBindingDescriptor inOperand5,
                                                         const GALGAS_regularBindingList inOperand6,
                                                         const GALGAS_graphicController inOperand7,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletDeclarationList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         GALGAS_tableValueBinding & outOperand2,
                                                         GALGAS_runActionDescriptor & outOperand3,
                                                         GALGAS_multipleBindingDescriptor & outOperand4,
                                                         GALGAS_multipleBindingDescriptor & outOperand5,
                                                         GALGAS_regularBindingList & outOperand6,
                                                         GALGAS_graphicController & outOperand7,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
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
      macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
      outOperand0 = p->mObject.mProperty_mOutletTypeName ;
      outOperand1 = p->mObject.mProperty_mOutletName ;
      outOperand2 = p->mObject.mProperty_mTableValueBindingDescriptor ;
      outOperand3 = p->mObject.mProperty_mRunDescriptor ;
      outOperand4 = p->mObject.mProperty_mEnabledBindingDescriptor ;
      outOperand5 = p->mObject.mProperty_mHiddenBindingDescriptor ;
      outOperand6 = p->mObject.mProperty_mRegularBindingList ;
      outOperand7 = p->mObject.mProperty_mGraphicController ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                    GALGAS_lstring & outOperand1,
                                                    GALGAS_tableValueBinding & outOperand2,
                                                    GALGAS_runActionDescriptor & outOperand3,
                                                    GALGAS_multipleBindingDescriptor & outOperand4,
                                                    GALGAS_multipleBindingDescriptor & outOperand5,
                                                    GALGAS_regularBindingList & outOperand6,
                                                    GALGAS_graphicController & outOperand7,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
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
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mOutletTypeName ;
    outOperand1 = p->mObject.mProperty_mOutletName ;
    outOperand2 = p->mObject.mProperty_mTableValueBindingDescriptor ;
    outOperand3 = p->mObject.mProperty_mRunDescriptor ;
    outOperand4 = p->mObject.mProperty_mEnabledBindingDescriptor ;
    outOperand5 = p->mObject.mProperty_mHiddenBindingDescriptor ;
    outOperand6 = p->mObject.mProperty_mRegularBindingList ;
    outOperand7 = p->mObject.mProperty_mGraphicController ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_popLast (GALGAS_lstring & outOperand0,
                                                   GALGAS_lstring & outOperand1,
                                                   GALGAS_tableValueBinding & outOperand2,
                                                   GALGAS_runActionDescriptor & outOperand3,
                                                   GALGAS_multipleBindingDescriptor & outOperand4,
                                                   GALGAS_multipleBindingDescriptor & outOperand5,
                                                   GALGAS_regularBindingList & outOperand6,
                                                   GALGAS_graphicController & outOperand7,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
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
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mOutletTypeName ;
    outOperand1 = p->mObject.mProperty_mOutletName ;
    outOperand2 = p->mObject.mProperty_mTableValueBindingDescriptor ;
    outOperand3 = p->mObject.mProperty_mRunDescriptor ;
    outOperand4 = p->mObject.mProperty_mEnabledBindingDescriptor ;
    outOperand5 = p->mObject.mProperty_mHiddenBindingDescriptor ;
    outOperand6 = p->mObject.mProperty_mRegularBindingList ;
    outOperand7 = p->mObject.mProperty_mGraphicController ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::method_first (GALGAS_lstring & outOperand0,
                                                 GALGAS_lstring & outOperand1,
                                                 GALGAS_tableValueBinding & outOperand2,
                                                 GALGAS_runActionDescriptor & outOperand3,
                                                 GALGAS_multipleBindingDescriptor & outOperand4,
                                                 GALGAS_multipleBindingDescriptor & outOperand5,
                                                 GALGAS_regularBindingList & outOperand6,
                                                 GALGAS_graphicController & outOperand7,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
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
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mOutletTypeName ;
    outOperand1 = p->mObject.mProperty_mOutletName ;
    outOperand2 = p->mObject.mProperty_mTableValueBindingDescriptor ;
    outOperand3 = p->mObject.mProperty_mRunDescriptor ;
    outOperand4 = p->mObject.mProperty_mEnabledBindingDescriptor ;
    outOperand5 = p->mObject.mProperty_mHiddenBindingDescriptor ;
    outOperand6 = p->mObject.mProperty_mRegularBindingList ;
    outOperand7 = p->mObject.mProperty_mGraphicController ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::method_last (GALGAS_lstring & outOperand0,
                                                GALGAS_lstring & outOperand1,
                                                GALGAS_tableValueBinding & outOperand2,
                                                GALGAS_runActionDescriptor & outOperand3,
                                                GALGAS_multipleBindingDescriptor & outOperand4,
                                                GALGAS_multipleBindingDescriptor & outOperand5,
                                                GALGAS_regularBindingList & outOperand6,
                                                GALGAS_graphicController & outOperand7,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
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
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mOutletTypeName ;
    outOperand1 = p->mObject.mProperty_mOutletName ;
    outOperand2 = p->mObject.mProperty_mTableValueBindingDescriptor ;
    outOperand3 = p->mObject.mProperty_mRunDescriptor ;
    outOperand4 = p->mObject.mProperty_mEnabledBindingDescriptor ;
    outOperand5 = p->mObject.mProperty_mHiddenBindingDescriptor ;
    outOperand6 = p->mObject.mProperty_mRegularBindingList ;
    outOperand7 = p->mObject.mProperty_mGraphicController ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::add_operation (const GALGAS_outletDeclarationList & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result = GALGAS_outletDeclarationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result = GALGAS_outletDeclarationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result = GALGAS_outletDeclarationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::plusAssign_operation (const GALGAS_outletDeclarationList inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_setMOutletTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                     GALGAS_uint inIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOutletTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_outletDeclarationList::getter_mOutletTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mOutletTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_setMOutletNameAtIndex (GALGAS_lstring inOperand,
                                                                 GALGAS_uint inIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOutletName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_outletDeclarationList::getter_mOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mOutletName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_setMTableValueBindingDescriptorAtIndex (GALGAS_tableValueBinding inOperand,
                                                                                  GALGAS_uint inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTableValueBindingDescriptor = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableValueBinding GALGAS_outletDeclarationList::getter_mTableValueBindingDescriptorAtIndex (const GALGAS_uint & inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_tableValueBinding result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mTableValueBindingDescriptor ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_setMRunDescriptorAtIndex (GALGAS_runActionDescriptor inOperand,
                                                                    GALGAS_uint inIndex,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRunDescriptor = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_runActionDescriptor GALGAS_outletDeclarationList::getter_mRunDescriptorAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_runActionDescriptor result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mRunDescriptor ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_setMEnabledBindingDescriptorAtIndex (GALGAS_multipleBindingDescriptor inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEnabledBindingDescriptor = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor GALGAS_outletDeclarationList::getter_mEnabledBindingDescriptorAtIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_multipleBindingDescriptor result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mEnabledBindingDescriptor ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_setMHiddenBindingDescriptorAtIndex (GALGAS_multipleBindingDescriptor inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mHiddenBindingDescriptor = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor GALGAS_outletDeclarationList::getter_mHiddenBindingDescriptorAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_multipleBindingDescriptor result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mHiddenBindingDescriptor ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_setMRegularBindingListAtIndex (GALGAS_regularBindingList inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mRegularBindingList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingList GALGAS_outletDeclarationList::getter_mRegularBindingListAtIndex (const GALGAS_uint & inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_regularBindingList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mRegularBindingList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletDeclarationList::setter_setMGraphicControllerAtIndex (GALGAS_graphicController inOperand,
                                                                        GALGAS_uint inIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGraphicController = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphicController GALGAS_outletDeclarationList::getter_mGraphicControllerAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) attributes.ptr () ;
  GALGAS_graphicController result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    result = p->mObject.mProperty_mGraphicController ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_outletDeclarationList::cEnumerator_outletDeclarationList (const GALGAS_outletDeclarationList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList_2D_element cEnumerator_outletDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_outletDeclarationList::current_mOutletTypeName (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mOutletTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_outletDeclarationList::current_mOutletName (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mOutletName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableValueBinding cEnumerator_outletDeclarationList::current_mTableValueBindingDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mTableValueBindingDescriptor ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_runActionDescriptor cEnumerator_outletDeclarationList::current_mRunDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mRunDescriptor ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor cEnumerator_outletDeclarationList::current_mEnabledBindingDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mEnabledBindingDescriptor ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor cEnumerator_outletDeclarationList::current_mHiddenBindingDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mHiddenBindingDescriptor ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingList cEnumerator_outletDeclarationList::current_mRegularBindingList (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mRegularBindingList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_graphicController cEnumerator_outletDeclarationList::current_mGraphicController (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mGraphicController ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@outletDeclarationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletDeclarationList ("outletDeclarationList",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outletDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletDeclarationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outletDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletDeclarationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_outletDeclarationList result ;
  const GALGAS_outletDeclarationList * p = (const GALGAS_outletDeclarationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@arrayControllerBindingListAST' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_arrayControllerBindingListAST : public cCollectionElement {
  public : GALGAS_arrayControllerBindingListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_arrayControllerBindingListAST (const GALGAS_lstring & in_mControllerName,
                                                             const GALGAS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor
                                                             COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_arrayControllerBindingListAST (const GALGAS_arrayControllerBindingListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_arrayControllerBindingListAST::cCollectionElement_arrayControllerBindingListAST (const GALGAS_lstring & in_mControllerName,
                                                                                                    const GALGAS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mControllerName, in_mHiddenSelectionViewBindingDescriptor) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_arrayControllerBindingListAST::cCollectionElement_arrayControllerBindingListAST (const GALGAS_arrayControllerBindingListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mControllerName, inElement.mProperty_mHiddenSelectionViewBindingDescriptor) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_arrayControllerBindingListAST::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_arrayControllerBindingListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_arrayControllerBindingListAST (mObject.mProperty_mControllerName, mObject.mProperty_mHiddenSelectionViewBindingDescriptor COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_arrayControllerBindingListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mControllerName" ":" ;
  mObject.mProperty_mControllerName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mHiddenSelectionViewBindingDescriptor" ":" ;
  mObject.mProperty_mHiddenSelectionViewBindingDescriptor.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_arrayControllerBindingListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_arrayControllerBindingListAST * operand = (cCollectionElement_arrayControllerBindingListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_arrayControllerBindingListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST::GALGAS_arrayControllerBindingListAST (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST::GALGAS_arrayControllerBindingListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST GALGAS_arrayControllerBindingListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_arrayControllerBindingListAST  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST GALGAS_arrayControllerBindingListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_multipleBindingDescriptor & inOperand1
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBindingListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_arrayControllerBindingListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_arrayControllerBindingListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_lstring & in_mControllerName,
                                                                      const GALGAS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerBindingListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_arrayControllerBindingListAST (in_mControllerName,
                                                                   in_mHiddenSelectionViewBindingDescriptor COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                const GALGAS_multipleBindingDescriptor & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerBindingListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::setter_append (GALGAS_arrayControllerBindingListAST_2D_element inElement,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerBindingListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                 const GALGAS_multipleBindingDescriptor inOperand1,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_arrayControllerBindingListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                 GALGAS_multipleBindingDescriptor & outOperand1,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
      outOperand0 = p->mObject.mProperty_mControllerName ;
      outOperand1 = p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                            GALGAS_multipleBindingDescriptor & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    outOperand0 = p->mObject.mProperty_mControllerName ;
    outOperand1 = p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                           GALGAS_multipleBindingDescriptor & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    outOperand0 = p->mObject.mProperty_mControllerName ;
    outOperand1 = p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::method_first (GALGAS_lstring & outOperand0,
                                                         GALGAS_multipleBindingDescriptor & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    outOperand0 = p->mObject.mProperty_mControllerName ;
    outOperand1 = p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::method_last (GALGAS_lstring & outOperand0,
                                                        GALGAS_multipleBindingDescriptor & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    outOperand0 = p->mObject.mProperty_mControllerName ;
    outOperand1 = p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST GALGAS_arrayControllerBindingListAST::add_operation (const GALGAS_arrayControllerBindingListAST & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerBindingListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST GALGAS_arrayControllerBindingListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBindingListAST result = GALGAS_arrayControllerBindingListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST GALGAS_arrayControllerBindingListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBindingListAST result = GALGAS_arrayControllerBindingListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST GALGAS_arrayControllerBindingListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_arrayControllerBindingListAST result = GALGAS_arrayControllerBindingListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::plusAssign_operation (const GALGAS_arrayControllerBindingListAST inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::setter_setMControllerNameAtIndex (GALGAS_lstring inOperand,
                                                                             GALGAS_uint inIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mControllerName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_arrayControllerBindingListAST::getter_mControllerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    result = p->mObject.mProperty_mControllerName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_arrayControllerBindingListAST::setter_setMHiddenSelectionViewBindingDescriptorAtIndex (GALGAS_multipleBindingDescriptor inOperand,
                                                                                                   GALGAS_uint inIndex,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor GALGAS_arrayControllerBindingListAST::getter_mHiddenSelectionViewBindingDescriptorAtIndex (const GALGAS_uint & inIndex,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) attributes.ptr () ;
  GALGAS_multipleBindingDescriptor result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    result = p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_arrayControllerBindingListAST::cEnumerator_arrayControllerBindingListAST (const GALGAS_arrayControllerBindingListAST & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST_2D_element cEnumerator_arrayControllerBindingListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBindingListAST * p = (const cCollectionElement_arrayControllerBindingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_arrayControllerBindingListAST::current_mControllerName (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBindingListAST * p = (const cCollectionElement_arrayControllerBindingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
  return p->mObject.mProperty_mControllerName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor cEnumerator_arrayControllerBindingListAST::current_mHiddenSelectionViewBindingDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_arrayControllerBindingListAST * p = (const cCollectionElement_arrayControllerBindingListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
  return p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@arrayControllerBindingListAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerBindingListAST ("arrayControllerBindingListAST",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_arrayControllerBindingListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBindingListAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_arrayControllerBindingListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerBindingListAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST GALGAS_arrayControllerBindingListAST::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBindingListAST result ;
  const GALGAS_arrayControllerBindingListAST * p = (const GALGAS_arrayControllerBindingListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerBindingListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBindingListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_decoratedOutletMap::cMapElement_decoratedOutletMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_string & in_mOutletTypeName
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mOutletTypeName (in_mOutletTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_decoratedOutletMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletTypeName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_decoratedOutletMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_decoratedOutletMap (mProperty_lkey, mProperty_mOutletTypeName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_decoratedOutletMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletTypeName" ":" ;
  mProperty_mOutletTypeName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_decoratedOutletMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_decoratedOutletMap * operand = (cMapElement_decoratedOutletMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mOutletTypeName.objectCompare (operand->mProperty_mOutletTypeName) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap::GALGAS_decoratedOutletMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap::GALGAS_decoratedOutletMap (const GALGAS_decoratedOutletMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap & GALGAS_decoratedOutletMap::operator = (const GALGAS_decoratedOutletMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap GALGAS_decoratedOutletMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_decoratedOutletMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap GALGAS_decoratedOutletMap::constructor_mapWithMapToOverride (const GALGAS_decoratedOutletMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_decoratedOutletMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap GALGAS_decoratedOutletMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedOutletMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedOutletMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                     const GALGAS_string & inArgument0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_decoratedOutletMap * p = NULL ;
  macroMyNew (p, cMapElement_decoratedOutletMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@decoratedOutletMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedOutletMap::setter_insertKey (GALGAS_lstring inKey,
                                                  GALGAS_string inArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  cMapElement_decoratedOutletMap * p = NULL ;
  macroMyNew (p, cMapElement_decoratedOutletMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' outlet is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_decoratedOutletMap_searchKey = "the '%K' outlet is not declared" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedOutletMap::method_searchKey (GALGAS_lstring inKey,
                                                  GALGAS_string & outArgument0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  const cMapElement_decoratedOutletMap * p = (const cMapElement_decoratedOutletMap *) performSearch (inKey,
                                                                                                     inCompiler,
                                                                                                     kSearchErrorMessage_decoratedOutletMap_searchKey
                                                                                                     COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
    outArgument0 = p->mProperty_mOutletTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_decoratedOutletMap::getter_mOutletTypeNameForKey (const GALGAS_string & inKey,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_decoratedOutletMap * p = (const cMapElement_decoratedOutletMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
    result = p->mProperty_mOutletTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_decoratedOutletMap::setter_setMOutletTypeNameForKey (GALGAS_string inAttributeValue,
                                                                 GALGAS_string inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_decoratedOutletMap * p = (cMapElement_decoratedOutletMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
    p->mProperty_mOutletTypeName = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_decoratedOutletMap * GALGAS_decoratedOutletMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_decoratedOutletMap * result = (cMapElement_decoratedOutletMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_decoratedOutletMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_decoratedOutletMap::cEnumerator_decoratedOutletMap (const GALGAS_decoratedOutletMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap_2D_element cEnumerator_decoratedOutletMap::current (LOCATION_ARGS) const {
  const cMapElement_decoratedOutletMap * p = (const cMapElement_decoratedOutletMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
  return GALGAS_decoratedOutletMap_2D_element (p->mProperty_lkey, p->mProperty_mOutletTypeName) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_decoratedOutletMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_decoratedOutletMap::current_mOutletTypeName (LOCATION_ARGS) const {
  const cMapElement_decoratedOutletMap * p = (const cMapElement_decoratedOutletMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
  return p->mProperty_mOutletTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_decoratedOutletMap::optional_searchKey (const GALGAS_string & inKey,
                                                    GALGAS_string & outArgument0) const {
  const cMapElement_decoratedOutletMap * p = (const cMapElement_decoratedOutletMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
    outArgument0 = p->mProperty_mOutletTypeName ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@decoratedOutletMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedOutletMap ("decoratedOutletMap",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_decoratedOutletMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedOutletMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_decoratedOutletMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedOutletMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap GALGAS_decoratedOutletMap::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_decoratedOutletMap result ;
  const GALGAS_decoratedOutletMap * p = (const GALGAS_decoratedOutletMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedOutletMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedOutletMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@actionBindingListForGeneration' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_actionBindingListForGeneration : public cCollectionElement {
  public : GALGAS_actionBindingListForGeneration_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_actionBindingListForGeneration (const GALGAS_string & in_mOutletName,
                                                              const GALGAS_string & in_mTargetName,
                                                              const GALGAS_string & in_mActionName,
                                                              const GALGAS_string & in_mTargetTypeName
                                                              COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_actionBindingListForGeneration (const GALGAS_actionBindingListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_actionBindingListForGeneration::cCollectionElement_actionBindingListForGeneration (const GALGAS_string & in_mOutletName,
                                                                                                      const GALGAS_string & in_mTargetName,
                                                                                                      const GALGAS_string & in_mActionName,
                                                                                                      const GALGAS_string & in_mTargetTypeName
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletName, in_mTargetName, in_mActionName, in_mTargetTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_actionBindingListForGeneration::cCollectionElement_actionBindingListForGeneration (const GALGAS_actionBindingListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletName, inElement.mProperty_mTargetName, inElement.mProperty_mActionName, inElement.mProperty_mTargetTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_actionBindingListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_actionBindingListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_actionBindingListForGeneration (mObject.mProperty_mOutletName, mObject.mProperty_mTargetName, mObject.mProperty_mActionName, mObject.mProperty_mTargetTypeName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_actionBindingListForGeneration::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletName" ":" ;
  mObject.mProperty_mOutletName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetName" ":" ;
  mObject.mProperty_mTargetName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionName" ":" ;
  mObject.mProperty_mActionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTargetTypeName" ":" ;
  mObject.mProperty_mTargetTypeName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_actionBindingListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_actionBindingListForGeneration * operand = (cCollectionElement_actionBindingListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_actionBindingListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration::GALGAS_actionBindingListForGeneration (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration::GALGAS_actionBindingListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_actionBindingListForGeneration  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                        const GALGAS_string & inOperand1,
                                                                                                        const GALGAS_string & inOperand2,
                                                                                                        const GALGAS_string & inOperand3
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_actionBindingListForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_actionBindingListForGeneration (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_actionBindingListForGeneration::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_string & in_mOutletName,
                                                                       const GALGAS_string & in_mTargetName,
                                                                       const GALGAS_string & in_mActionName,
                                                                       const GALGAS_string & in_mTargetTypeName
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_actionBindingListForGeneration * p = NULL ;
  macroMyNew (p, cCollectionElement_actionBindingListForGeneration (in_mOutletName,
                                                                    in_mTargetName,
                                                                    in_mActionName,
                                                                    in_mTargetTypeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::addAssign_operation (const GALGAS_string & inOperand0,
                                                                 const GALGAS_string & inOperand1,
                                                                 const GALGAS_string & inOperand2,
                                                                 const GALGAS_string & inOperand3
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_actionBindingListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::setter_append (GALGAS_actionBindingListForGeneration_2D_element inElement,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_actionBindingListForGeneration (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                  const GALGAS_string inOperand1,
                                                                  const GALGAS_string inOperand2,
                                                                  const GALGAS_string inOperand3,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_actionBindingListForGeneration (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                  GALGAS_string & outOperand1,
                                                                  GALGAS_string & outOperand2,
                                                                  GALGAS_string & outOperand3,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
      outOperand0 = p->mObject.mProperty_mOutletName ;
      outOperand1 = p->mObject.mProperty_mTargetName ;
      outOperand2 = p->mObject.mProperty_mActionName ;
      outOperand3 = p->mObject.mProperty_mTargetTypeName ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::setter_popFirst (GALGAS_string & outOperand0,
                                                             GALGAS_string & outOperand1,
                                                             GALGAS_string & outOperand2,
                                                             GALGAS_string & outOperand3,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mActionName ;
    outOperand3 = p->mObject.mProperty_mTargetTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::setter_popLast (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            GALGAS_string & outOperand2,
                                                            GALGAS_string & outOperand3,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mActionName ;
    outOperand3 = p->mObject.mProperty_mTargetTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::method_first (GALGAS_string & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          GALGAS_string & outOperand2,
                                                          GALGAS_string & outOperand3,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mActionName ;
    outOperand3 = p->mObject.mProperty_mTargetTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::method_last (GALGAS_string & outOperand0,
                                                         GALGAS_string & outOperand1,
                                                         GALGAS_string & outOperand2,
                                                         GALGAS_string & outOperand3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mActionName ;
    outOperand3 = p->mObject.mProperty_mTargetTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::add_operation (const GALGAS_actionBindingListForGeneration & inOperand,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result = GALGAS_actionBindingListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result = GALGAS_actionBindingListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result = GALGAS_actionBindingListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::plusAssign_operation (const GALGAS_actionBindingListForGeneration inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::setter_setMOutletNameAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOutletName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_actionBindingListForGeneration::getter_mOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    result = p->mObject.mProperty_mOutletName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::setter_setMTargetNameAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_actionBindingListForGeneration::getter_mTargetNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    result = p->mObject.mProperty_mTargetName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::setter_setMActionNameAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mActionName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_actionBindingListForGeneration::getter_mActionNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    result = p->mObject.mProperty_mActionName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration::setter_setMTargetTypeNameAtIndex (GALGAS_string inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_actionBindingListForGeneration::getter_mTargetTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    result = p->mObject.mProperty_mTargetTypeName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_actionBindingListForGeneration::cEnumerator_actionBindingListForGeneration (const GALGAS_actionBindingListForGeneration & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration_2D_element cEnumerator_actionBindingListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_actionBindingListForGeneration::current_mOutletName (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject.mProperty_mOutletName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_actionBindingListForGeneration::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject.mProperty_mTargetName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_actionBindingListForGeneration::current_mActionName (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject.mProperty_mActionName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_actionBindingListForGeneration::current_mTargetTypeName (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject.mProperty_mTargetTypeName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@actionBindingListForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionBindingListForGeneration ("actionBindingListForGeneration",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actionBindingListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionBindingListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actionBindingListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionBindingListForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_actionBindingListForGeneration result ;
  const GALGAS_actionBindingListForGeneration * p = (const GALGAS_actionBindingListForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actionBindingListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionBindingListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@regularBindingsGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_regularBindingsGenerationList : public cCollectionElement {
  public : GALGAS_regularBindingsGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_regularBindingsGenerationList (const GALGAS_string & in_mOutletName,
                                                             const GALGAS_string & in_mBindingName,
                                                             const GALGAS_boundObjectList & in_mBoundObjectList,
                                                             const GALGAS_string & in_mBindingOptionsString
                                                             COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_regularBindingsGenerationList (const GALGAS_regularBindingsGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_regularBindingsGenerationList::cCollectionElement_regularBindingsGenerationList (const GALGAS_string & in_mOutletName,
                                                                                                    const GALGAS_string & in_mBindingName,
                                                                                                    const GALGAS_boundObjectList & in_mBoundObjectList,
                                                                                                    const GALGAS_string & in_mBindingOptionsString
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletName, in_mBindingName, in_mBoundObjectList, in_mBindingOptionsString) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_regularBindingsGenerationList::cCollectionElement_regularBindingsGenerationList (const GALGAS_regularBindingsGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletName, inElement.mProperty_mBindingName, inElement.mProperty_mBoundObjectList, inElement.mProperty_mBindingOptionsString) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_regularBindingsGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_regularBindingsGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_regularBindingsGenerationList (mObject.mProperty_mOutletName, mObject.mProperty_mBindingName, mObject.mProperty_mBoundObjectList, mObject.mProperty_mBindingOptionsString COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_regularBindingsGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletName" ":" ;
  mObject.mProperty_mOutletName.description (ioString, inIndentation) ;
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

typeComparisonResult cCollectionElement_regularBindingsGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_regularBindingsGenerationList * operand = (cCollectionElement_regularBindingsGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_regularBindingsGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList::GALGAS_regularBindingsGenerationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList::GALGAS_regularBindingsGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_regularBindingsGenerationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                      const GALGAS_string & inOperand1,
                                                                                                      const GALGAS_boundObjectList & inOperand2,
                                                                                                      const GALGAS_string & inOperand3
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_regularBindingsGenerationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_regularBindingsGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_regularBindingsGenerationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_string & in_mOutletName,
                                                                      const GALGAS_string & in_mBindingName,
                                                                      const GALGAS_boundObjectList & in_mBoundObjectList,
                                                                      const GALGAS_string & in_mBindingOptionsString
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_regularBindingsGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_regularBindingsGenerationList (in_mOutletName,
                                                                   in_mBindingName,
                                                                   in_mBoundObjectList,
                                                                   in_mBindingOptionsString COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                                const GALGAS_string & inOperand1,
                                                                const GALGAS_boundObjectList & inOperand2,
                                                                const GALGAS_string & inOperand3
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_regularBindingsGenerationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::setter_append (GALGAS_regularBindingsGenerationList_2D_element inElement,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_regularBindingsGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                 const GALGAS_string inOperand1,
                                                                 const GALGAS_boundObjectList inOperand2,
                                                                 const GALGAS_string inOperand3,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_regularBindingsGenerationList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                 GALGAS_string & outOperand1,
                                                                 GALGAS_boundObjectList & outOperand2,
                                                                 GALGAS_string & outOperand3,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
      outOperand3.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
      outOperand0 = p->mObject.mProperty_mOutletName ;
      outOperand1 = p->mObject.mProperty_mBindingName ;
      outOperand2 = p->mObject.mProperty_mBoundObjectList ;
      outOperand3 = p->mObject.mProperty_mBindingOptionsString ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::setter_popFirst (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            GALGAS_boundObjectList & outOperand2,
                                                            GALGAS_string & outOperand3,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectList ;
    outOperand3 = p->mObject.mProperty_mBindingOptionsString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::setter_popLast (GALGAS_string & outOperand0,
                                                           GALGAS_string & outOperand1,
                                                           GALGAS_boundObjectList & outOperand2,
                                                           GALGAS_string & outOperand3,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectList ;
    outOperand3 = p->mObject.mProperty_mBindingOptionsString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::method_first (GALGAS_string & outOperand0,
                                                         GALGAS_string & outOperand1,
                                                         GALGAS_boundObjectList & outOperand2,
                                                         GALGAS_string & outOperand3,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectList ;
    outOperand3 = p->mObject.mProperty_mBindingOptionsString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::method_last (GALGAS_string & outOperand0,
                                                        GALGAS_string & outOperand1,
                                                        GALGAS_boundObjectList & outOperand2,
                                                        GALGAS_string & outOperand3,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectList ;
    outOperand3 = p->mObject.mProperty_mBindingOptionsString ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::add_operation (const GALGAS_regularBindingsGenerationList & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result = GALGAS_regularBindingsGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result = GALGAS_regularBindingsGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result = GALGAS_regularBindingsGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::plusAssign_operation (const GALGAS_regularBindingsGenerationList inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::setter_setMOutletNameAtIndex (GALGAS_string inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOutletName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_regularBindingsGenerationList::getter_mOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    result = p->mObject.mProperty_mOutletName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::setter_setMBindingNameAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBindingName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_regularBindingsGenerationList::getter_mBindingNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    result = p->mObject.mProperty_mBindingName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::setter_setMBoundObjectListAtIndex (GALGAS_boundObjectList inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBoundObjectList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList GALGAS_regularBindingsGenerationList::getter_mBoundObjectListAtIndex (const GALGAS_uint & inIndex,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  GALGAS_boundObjectList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    result = p->mObject.mProperty_mBoundObjectList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList::setter_setMBindingOptionsStringAtIndex (GALGAS_string inOperand,
                                                                                   GALGAS_uint inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBindingOptionsString = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_regularBindingsGenerationList::getter_mBindingOptionsStringAtIndex (const GALGAS_uint & inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    result = p->mObject.mProperty_mBindingOptionsString ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_regularBindingsGenerationList::cEnumerator_regularBindingsGenerationList (const GALGAS_regularBindingsGenerationList & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList_2D_element cEnumerator_regularBindingsGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_regularBindingsGenerationList::current_mOutletName (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject.mProperty_mOutletName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_regularBindingsGenerationList::current_mBindingName (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject.mProperty_mBindingName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList cEnumerator_regularBindingsGenerationList::current_mBoundObjectList (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject.mProperty_mBoundObjectList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_regularBindingsGenerationList::current_mBindingOptionsString (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject.mProperty_mBindingOptionsString ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@regularBindingsGenerationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_regularBindingsGenerationList ("regularBindingsGenerationList",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_regularBindingsGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingsGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_regularBindingsGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularBindingsGenerationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_regularBindingsGenerationList result ;
  const GALGAS_regularBindingsGenerationList * p = (const GALGAS_regularBindingsGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_regularBindingsGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularBindingsGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@multipleBindingGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_multipleBindingGenerationList : public cCollectionElement {
  public : GALGAS_multipleBindingGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_multipleBindingGenerationList (const GALGAS_string & in_mOutletName,
                                                             const GALGAS_string & in_mBindingName,
                                                             const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                             COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_multipleBindingGenerationList (const GALGAS_multipleBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_multipleBindingGenerationList::cCollectionElement_multipleBindingGenerationList (const GALGAS_string & in_mOutletName,
                                                                                                    const GALGAS_string & in_mBindingName,
                                                                                                    const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletName, in_mBindingName, in_mBoundObjectExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_multipleBindingGenerationList::cCollectionElement_multipleBindingGenerationList (const GALGAS_multipleBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletName, inElement.mProperty_mBindingName, inElement.mProperty_mBoundObjectExpression) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_multipleBindingGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_multipleBindingGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_multipleBindingGenerationList (mObject.mProperty_mOutletName, mObject.mProperty_mBindingName, mObject.mProperty_mBoundObjectExpression COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_multipleBindingGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletName" ":" ;
  mObject.mProperty_mOutletName.description (ioString, inIndentation) ;
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

typeComparisonResult cCollectionElement_multipleBindingGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_multipleBindingGenerationList * operand = (cCollectionElement_multipleBindingGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_multipleBindingGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList::GALGAS_multipleBindingGenerationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList::GALGAS_multipleBindingGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_multipleBindingGenerationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                      const GALGAS_string & inOperand1,
                                                                                                      const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_multipleBindingGenerationList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_multipleBindingGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_multipleBindingGenerationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                      const GALGAS_string & in_mOutletName,
                                                                      const GALGAS_string & in_mBindingName,
                                                                      const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_multipleBindingGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_multipleBindingGenerationList (in_mOutletName,
                                                                   in_mBindingName,
                                                                   in_mBoundObjectExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                                const GALGAS_string & inOperand1,
                                                                const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_multipleBindingGenerationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::setter_append (GALGAS_multipleBindingGenerationList_2D_element inElement,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_multipleBindingGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                 const GALGAS_string inOperand1,
                                                                 const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inOperand2,
                                                                 const GALGAS_uint inInsertionIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_multipleBindingGenerationList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                 GALGAS_string & outOperand1,
                                                                 GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                                 const GALGAS_uint inRemoveIndex,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
      outOperand0 = p->mObject.mProperty_mOutletName ;
      outOperand1 = p->mObject.mProperty_mBindingName ;
      outOperand2 = p->mObject.mProperty_mBoundObjectExpression ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::setter_popFirst (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::setter_popLast (GALGAS_string & outOperand0,
                                                           GALGAS_string & outOperand1,
                                                           GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::method_first (GALGAS_string & outOperand0,
                                                         GALGAS_string & outOperand1,
                                                         GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::method_last (GALGAS_string & outOperand0,
                                                        GALGAS_string & outOperand1,
                                                        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mOutletName ;
    outOperand1 = p->mObject.mProperty_mBindingName ;
    outOperand2 = p->mObject.mProperty_mBoundObjectExpression ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::add_operation (const GALGAS_multipleBindingGenerationList & inOperand,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result = GALGAS_multipleBindingGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result = GALGAS_multipleBindingGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result = GALGAS_multipleBindingGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::plusAssign_operation (const GALGAS_multipleBindingGenerationList inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::setter_setMOutletNameAtIndex (GALGAS_string inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOutletName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_multipleBindingGenerationList::getter_mOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    result = p->mObject.mProperty_mOutletName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::setter_setMBindingNameAtIndex (GALGAS_string inOperand,
                                                                          GALGAS_uint inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBindingName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_multipleBindingGenerationList::getter_mBindingNameAtIndex (const GALGAS_uint & inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    result = p->mObject.mProperty_mBindingName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList::setter_setMBoundObjectExpressionAtIndex (GALGAS_abstractBooleanMultipleBindingExpressionForGeneration inOperand,
                                                                                    GALGAS_uint inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBoundObjectExpression = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_multipleBindingGenerationList::getter_mBoundObjectExpressionAtIndex (const GALGAS_uint & inIndex,
                                                                                                                                         C_Compiler * inCompiler
                                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) attributes.ptr () ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    result = p->mObject.mProperty_mBoundObjectExpression ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_multipleBindingGenerationList::cEnumerator_multipleBindingGenerationList (const GALGAS_multipleBindingGenerationList & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList_2D_element cEnumerator_multipleBindingGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_multipleBindingGenerationList * p = (const cCollectionElement_multipleBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_multipleBindingGenerationList::current_mOutletName (LOCATION_ARGS) const {
  const cCollectionElement_multipleBindingGenerationList * p = (const cCollectionElement_multipleBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
  return p->mObject.mProperty_mOutletName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_multipleBindingGenerationList::current_mBindingName (LOCATION_ARGS) const {
  const cCollectionElement_multipleBindingGenerationList * p = (const cCollectionElement_multipleBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
  return p->mObject.mProperty_mBindingName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cEnumerator_multipleBindingGenerationList::current_mBoundObjectExpression (LOCATION_ARGS) const {
  const cCollectionElement_multipleBindingGenerationList * p = (const cCollectionElement_multipleBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
  return p->mObject.mProperty_mBoundObjectExpression ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@multipleBindingGenerationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleBindingGenerationList ("multipleBindingGenerationList",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_multipleBindingGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_multipleBindingGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingGenerationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_multipleBindingGenerationList result ;
  const GALGAS_multipleBindingGenerationList * p = (const GALGAS_multipleBindingGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_multipleBindingGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleBindingGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@tableViewBindingGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_tableViewBindingGenerationList : public cCollectionElement {
  public : GALGAS_tableViewBindingGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_tableViewBindingGenerationList (const GALGAS_string & in_mTableValueBindingOutletName,
                                                              const GALGAS_string & in_mTableValueBindingControllerName
                                                              COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_tableViewBindingGenerationList (const GALGAS_tableViewBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_tableViewBindingGenerationList::cCollectionElement_tableViewBindingGenerationList (const GALGAS_string & in_mTableValueBindingOutletName,
                                                                                                      const GALGAS_string & in_mTableValueBindingControllerName
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTableValueBindingOutletName, in_mTableValueBindingControllerName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_tableViewBindingGenerationList::cCollectionElement_tableViewBindingGenerationList (const GALGAS_tableViewBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTableValueBindingOutletName, inElement.mProperty_mTableValueBindingControllerName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_tableViewBindingGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_tableViewBindingGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_tableViewBindingGenerationList (mObject.mProperty_mTableValueBindingOutletName, mObject.mProperty_mTableValueBindingControllerName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_tableViewBindingGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTableValueBindingOutletName" ":" ;
  mObject.mProperty_mTableValueBindingOutletName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mTableValueBindingControllerName" ":" ;
  mObject.mProperty_mTableValueBindingControllerName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_tableViewBindingGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_tableViewBindingGenerationList * operand = (cCollectionElement_tableViewBindingGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_tableViewBindingGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList::GALGAS_tableViewBindingGenerationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList::GALGAS_tableViewBindingGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_tableViewBindingGenerationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                        const GALGAS_string & inOperand1
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_tableViewBindingGenerationList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_tableViewBindingGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_tableViewBindingGenerationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GALGAS_string & in_mTableValueBindingOutletName,
                                                                       const GALGAS_string & in_mTableValueBindingControllerName
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewBindingGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_tableViewBindingGenerationList (in_mTableValueBindingOutletName,
                                                                    in_mTableValueBindingControllerName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                                 const GALGAS_string & inOperand1
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_tableViewBindingGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::setter_append (GALGAS_tableViewBindingGenerationList_2D_element inElement,
                                                           C_Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_tableViewBindingGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                  const GALGAS_string inOperand1,
                                                                  const GALGAS_uint inInsertionIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_tableViewBindingGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                  GALGAS_string & outOperand1,
                                                                  const GALGAS_uint inRemoveIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
      outOperand0 = p->mObject.mProperty_mTableValueBindingOutletName ;
      outOperand1 = p->mObject.mProperty_mTableValueBindingControllerName ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::setter_popFirst (GALGAS_string & outOperand0,
                                                             GALGAS_string & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mTableValueBindingOutletName ;
    outOperand1 = p->mObject.mProperty_mTableValueBindingControllerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::setter_popLast (GALGAS_string & outOperand0,
                                                            GALGAS_string & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mTableValueBindingOutletName ;
    outOperand1 = p->mObject.mProperty_mTableValueBindingControllerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::method_first (GALGAS_string & outOperand0,
                                                          GALGAS_string & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mTableValueBindingOutletName ;
    outOperand1 = p->mObject.mProperty_mTableValueBindingControllerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::method_last (GALGAS_string & outOperand0,
                                                         GALGAS_string & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mTableValueBindingOutletName ;
    outOperand1 = p->mObject.mProperty_mTableValueBindingControllerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::add_operation (const GALGAS_tableViewBindingGenerationList & inOperand,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result = GALGAS_tableViewBindingGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result = GALGAS_tableViewBindingGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result = GALGAS_tableViewBindingGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::plusAssign_operation (const GALGAS_tableViewBindingGenerationList inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::setter_setMTableValueBindingOutletNameAtIndex (GALGAS_string inOperand,
                                                                                           GALGAS_uint inIndex,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTableValueBindingOutletName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewBindingGenerationList::getter_mTableValueBindingOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    result = p->mObject.mProperty_mTableValueBindingOutletName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList::setter_setMTableValueBindingControllerNameAtIndex (GALGAS_string inOperand,
                                                                                               GALGAS_uint inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTableValueBindingControllerName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_tableViewBindingGenerationList::getter_mTableValueBindingControllerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    result = p->mObject.mProperty_mTableValueBindingControllerName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_tableViewBindingGenerationList::cEnumerator_tableViewBindingGenerationList (const GALGAS_tableViewBindingGenerationList & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList_2D_element cEnumerator_tableViewBindingGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_tableViewBindingGenerationList * p = (const cCollectionElement_tableViewBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_tableViewBindingGenerationList::current_mTableValueBindingOutletName (LOCATION_ARGS) const {
  const cCollectionElement_tableViewBindingGenerationList * p = (const cCollectionElement_tableViewBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
  return p->mObject.mProperty_mTableValueBindingOutletName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_tableViewBindingGenerationList::current_mTableValueBindingControllerName (LOCATION_ARGS) const {
  const cCollectionElement_tableViewBindingGenerationList * p = (const cCollectionElement_tableViewBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
  return p->mObject.mProperty_mTableValueBindingControllerName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewBindingGenerationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewBindingGenerationList ("tableViewBindingGenerationList",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewBindingGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewBindingGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewBindingGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewBindingGenerationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_tableViewBindingGenerationList result ;
  const GALGAS_tableViewBindingGenerationList * p = (const GALGAS_tableViewBindingGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_tableViewBindingGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewBindingGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@ebViewGraphicControllerBindingGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_ebViewGraphicControllerBindingGenerationList : public cCollectionElement {
  public : GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_ebViewGraphicControllerBindingGenerationList (const GALGAS_string & in_mEBViewOutletName,
                                                                            const GALGAS_string & in_mArrayControllerControllerName
                                                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_ebViewGraphicControllerBindingGenerationList (const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_ebViewGraphicControllerBindingGenerationList::cCollectionElement_ebViewGraphicControllerBindingGenerationList (const GALGAS_string & in_mEBViewOutletName,
                                                                                                                                  const GALGAS_string & in_mArrayControllerControllerName
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEBViewOutletName, in_mArrayControllerControllerName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_ebViewGraphicControllerBindingGenerationList::cCollectionElement_ebViewGraphicControllerBindingGenerationList (const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEBViewOutletName, inElement.mProperty_mArrayControllerControllerName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_ebViewGraphicControllerBindingGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ebViewGraphicControllerBindingGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_ebViewGraphicControllerBindingGenerationList (mObject.mProperty_mEBViewOutletName, mObject.mProperty_mArrayControllerControllerName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_ebViewGraphicControllerBindingGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mEBViewOutletName" ":" ;
  mObject.mProperty_mEBViewOutletName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mArrayControllerControllerName" ":" ;
  mObject.mProperty_mArrayControllerControllerName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_ebViewGraphicControllerBindingGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * operand = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList::GALGAS_ebViewGraphicControllerBindingGenerationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList::GALGAS_ebViewGraphicControllerBindingGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_ebViewGraphicControllerBindingGenerationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                                                                    const GALGAS_string & inOperand1
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_ebViewGraphicControllerBindingGenerationList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ebViewGraphicControllerBindingGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_ebViewGraphicControllerBindingGenerationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                     const GALGAS_string & in_mEBViewOutletName,
                                                                                     const GALGAS_string & in_mArrayControllerControllerName
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList (in_mEBViewOutletName,
                                                                                  in_mArrayControllerControllerName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                                               const GALGAS_string & inOperand1
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_append (GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element inElement,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                                                const GALGAS_string inOperand1,
                                                                                const GALGAS_uint inInsertionIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                                                GALGAS_string & outOperand1,
                                                                                const GALGAS_uint inRemoveIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
      outOperand0 = p->mObject.mProperty_mEBViewOutletName ;
      outOperand1 = p->mObject.mProperty_mArrayControllerControllerName ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_popFirst (GALGAS_string & outOperand0,
                                                                           GALGAS_string & outOperand1,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mEBViewOutletName ;
    outOperand1 = p->mObject.mProperty_mArrayControllerControllerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_popLast (GALGAS_string & outOperand0,
                                                                          GALGAS_string & outOperand1,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mEBViewOutletName ;
    outOperand1 = p->mObject.mProperty_mArrayControllerControllerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::method_first (GALGAS_string & outOperand0,
                                                                        GALGAS_string & outOperand1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mEBViewOutletName ;
    outOperand1 = p->mObject.mProperty_mArrayControllerControllerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::method_last (GALGAS_string & outOperand0,
                                                                       GALGAS_string & outOperand1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    outOperand0 = p->mObject.mProperty_mEBViewOutletName ;
    outOperand1 = p->mObject.mProperty_mArrayControllerControllerName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::add_operation (const GALGAS_ebViewGraphicControllerBindingGenerationList & inOperand,
                                                                                                                        C_Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result = GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result = GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result = GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::plusAssign_operation (const GALGAS_ebViewGraphicControllerBindingGenerationList inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_setMEBViewOutletNameAtIndex (GALGAS_string inOperand,
                                                                                              GALGAS_uint inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mEBViewOutletName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_ebViewGraphicControllerBindingGenerationList::getter_mEBViewOutletNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    result = p->mObject.mProperty_mEBViewOutletName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList::setter_setMArrayControllerControllerNameAtIndex (GALGAS_string inOperand,
                                                                                                           GALGAS_uint inIndex,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mArrayControllerControllerName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_ebViewGraphicControllerBindingGenerationList::getter_mArrayControllerControllerNameAtIndex (const GALGAS_uint & inIndex,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    result = p->mObject.mProperty_mArrayControllerControllerName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_ebViewGraphicControllerBindingGenerationList::cEnumerator_ebViewGraphicControllerBindingGenerationList (const GALGAS_ebViewGraphicControllerBindingGenerationList & inEnumeratedObject,
                                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element cEnumerator_ebViewGraphicControllerBindingGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (const cCollectionElement_ebViewGraphicControllerBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_ebViewGraphicControllerBindingGenerationList::current_mEBViewOutletName (LOCATION_ARGS) const {
  const cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (const cCollectionElement_ebViewGraphicControllerBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
  return p->mObject.mProperty_mEBViewOutletName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_ebViewGraphicControllerBindingGenerationList::current_mArrayControllerControllerName (LOCATION_ARGS) const {
  const cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (const cCollectionElement_ebViewGraphicControllerBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
  return p->mObject.mProperty_mArrayControllerControllerName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@ebViewGraphicControllerBindingGenerationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList ("ebViewGraphicControllerBindingGenerationList",
                                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ebViewGraphicControllerBindingGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ebViewGraphicControllerBindingGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ebViewGraphicControllerBindingGenerationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_ebViewGraphicControllerBindingGenerationList result ;
  const GALGAS_ebViewGraphicControllerBindingGenerationList * p = (const GALGAS_ebViewGraphicControllerBindingGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_ebViewGraphicControllerBindingGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ebViewGraphicControllerBindingGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@astViewDeclarationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_astViewDeclarationList : public cCollectionElement {
  public : GALGAS_astViewDeclarationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_astViewDeclarationList (const GALGAS_lstring & in_mViewName,
                                                      const GALGAS_astAbstractViewDeclaration & in_mView
                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_astViewDeclarationList (const GALGAS_astViewDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_astViewDeclarationList::cCollectionElement_astViewDeclarationList (const GALGAS_lstring & in_mViewName,
                                                                                      const GALGAS_astAbstractViewDeclaration & in_mView
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mViewName, in_mView) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_astViewDeclarationList::cCollectionElement_astViewDeclarationList (const GALGAS_astViewDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mViewName, inElement.mProperty_mView) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_astViewDeclarationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_astViewDeclarationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_astViewDeclarationList (mObject.mProperty_mViewName, mObject.mProperty_mView COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_astViewDeclarationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mViewName" ":" ;
  mObject.mProperty_mViewName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mView" ":" ;
  mObject.mProperty_mView.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_astViewDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_astViewDeclarationList * operand = (cCollectionElement_astViewDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_astViewDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList::GALGAS_astViewDeclarationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList::GALGAS_astViewDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList GALGAS_astViewDeclarationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_astViewDeclarationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList GALGAS_astViewDeclarationList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_astAbstractViewDeclaration & inOperand1
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astViewDeclarationList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_astViewDeclarationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_astViewDeclarationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_lstring & in_mViewName,
                                                               const GALGAS_astAbstractViewDeclaration & in_mView
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_astViewDeclarationList * p = NULL ;
  macroMyNew (p, cCollectionElement_astViewDeclarationList (in_mViewName,
                                                            in_mView COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                         const GALGAS_astAbstractViewDeclaration & inOperand1
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_astViewDeclarationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::setter_append (GALGAS_astViewDeclarationList_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_astViewDeclarationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                          const GALGAS_astAbstractViewDeclaration inOperand1,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_astViewDeclarationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                          GALGAS_astAbstractViewDeclaration & outOperand1,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
      outOperand0 = p->mObject.mProperty_mViewName ;
      outOperand1 = p->mObject.mProperty_mView ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                     GALGAS_astAbstractViewDeclaration & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mViewName ;
    outOperand1 = p->mObject.mProperty_mView ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::setter_popLast (GALGAS_lstring & outOperand0,
                                                    GALGAS_astAbstractViewDeclaration & outOperand1,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mViewName ;
    outOperand1 = p->mObject.mProperty_mView ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::method_first (GALGAS_lstring & outOperand0,
                                                  GALGAS_astAbstractViewDeclaration & outOperand1,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mViewName ;
    outOperand1 = p->mObject.mProperty_mView ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::method_last (GALGAS_lstring & outOperand0,
                                                 GALGAS_astAbstractViewDeclaration & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    outOperand0 = p->mObject.mProperty_mViewName ;
    outOperand1 = p->mObject.mProperty_mView ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList GALGAS_astViewDeclarationList::add_operation (const GALGAS_astViewDeclarationList & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_astViewDeclarationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList GALGAS_astViewDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_astViewDeclarationList result = GALGAS_astViewDeclarationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList GALGAS_astViewDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_astViewDeclarationList result = GALGAS_astViewDeclarationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList GALGAS_astViewDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_astViewDeclarationList result = GALGAS_astViewDeclarationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::plusAssign_operation (const GALGAS_astViewDeclarationList inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::setter_setMViewNameAtIndex (GALGAS_lstring inOperand,
                                                                GALGAS_uint inIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mViewName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astViewDeclarationList::getter_mViewNameAtIndex (const GALGAS_uint & inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    result = p->mObject.mProperty_mViewName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewDeclarationList::setter_setMViewAtIndex (GALGAS_astAbstractViewDeclaration inOperand,
                                                            GALGAS_uint inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mView = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewDeclaration GALGAS_astViewDeclarationList::getter_mViewAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) attributes.ptr () ;
  GALGAS_astAbstractViewDeclaration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    result = p->mObject.mProperty_mView ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_astViewDeclarationList::cEnumerator_astViewDeclarationList (const GALGAS_astViewDeclarationList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList_2D_element cEnumerator_astViewDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_astViewDeclarationList * p = (const cCollectionElement_astViewDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_astViewDeclarationList::current_mViewName (LOCATION_ARGS) const {
  const cCollectionElement_astViewDeclarationList * p = (const cCollectionElement_astViewDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
  return p->mObject.mProperty_mViewName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewDeclaration cEnumerator_astViewDeclarationList::current_mView (LOCATION_ARGS) const {
  const cCollectionElement_astViewDeclarationList * p = (const cCollectionElement_astViewDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
  return p->mObject.mProperty_mView ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@astViewDeclarationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astViewDeclarationList ("astViewDeclarationList",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astViewDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astViewDeclarationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astViewDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astViewDeclarationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList GALGAS_astViewDeclarationList::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_astViewDeclarationList result ;
  const GALGAS_astViewDeclarationList * p = (const GALGAS_astViewDeclarationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astViewDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astViewDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@astAutoLayoutToolbarItemList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_astAutoLayoutToolbarItemList : public cCollectionElement {
  public : GALGAS_astAutoLayoutToolbarItemList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_astAutoLayoutToolbarItemList (const GALGAS_astAutoLayoutToolbarItem & in_mItem
                                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_astAutoLayoutToolbarItemList (const GALGAS_astAutoLayoutToolbarItemList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_astAutoLayoutToolbarItemList::cCollectionElement_astAutoLayoutToolbarItemList (const GALGAS_astAutoLayoutToolbarItem & in_mItem
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mItem) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_astAutoLayoutToolbarItemList::cCollectionElement_astAutoLayoutToolbarItemList (const GALGAS_astAutoLayoutToolbarItemList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mItem) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_astAutoLayoutToolbarItemList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_astAutoLayoutToolbarItemList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_astAutoLayoutToolbarItemList (mObject.mProperty_mItem COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_astAutoLayoutToolbarItemList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mItem" ":" ;
  mObject.mProperty_mItem.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_astAutoLayoutToolbarItemList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_astAutoLayoutToolbarItemList * operand = (cCollectionElement_astAutoLayoutToolbarItemList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_astAutoLayoutToolbarItemList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList::GALGAS_astAutoLayoutToolbarItemList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList::GALGAS_astAutoLayoutToolbarItemList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList GALGAS_astAutoLayoutToolbarItemList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_astAutoLayoutToolbarItemList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList GALGAS_astAutoLayoutToolbarItemList::constructor_listWithValue (const GALGAS_astAutoLayoutToolbarItem & inOperand0
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutToolbarItemList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_astAutoLayoutToolbarItemList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_astAutoLayoutToolbarItemList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_astAutoLayoutToolbarItem & in_mItem
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutToolbarItemList * p = NULL ;
  macroMyNew (p, cCollectionElement_astAutoLayoutToolbarItemList (in_mItem COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList::addAssign_operation (const GALGAS_astAutoLayoutToolbarItem & inOperand0
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_astAutoLayoutToolbarItemList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList::setter_append (GALGAS_astAutoLayoutToolbarItemList_2D_element inElement,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_astAutoLayoutToolbarItemList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList::setter_insertAtIndex (const GALGAS_astAutoLayoutToolbarItem inOperand0,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_astAutoLayoutToolbarItemList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList::setter_removeAtIndex (GALGAS_astAutoLayoutToolbarItem & outOperand0,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_astAutoLayoutToolbarItemList * p = (cCollectionElement_astAutoLayoutToolbarItemList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_astAutoLayoutToolbarItemList) ;
      outOperand0 = p->mObject.mProperty_mItem ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList::setter_popFirst (GALGAS_astAutoLayoutToolbarItem & outOperand0,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutToolbarItemList * p = (cCollectionElement_astAutoLayoutToolbarItemList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutToolbarItemList) ;
    outOperand0 = p->mObject.mProperty_mItem ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList::setter_popLast (GALGAS_astAutoLayoutToolbarItem & outOperand0,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutToolbarItemList * p = (cCollectionElement_astAutoLayoutToolbarItemList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutToolbarItemList) ;
    outOperand0 = p->mObject.mProperty_mItem ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList::method_first (GALGAS_astAutoLayoutToolbarItem & outOperand0,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutToolbarItemList * p = (cCollectionElement_astAutoLayoutToolbarItemList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutToolbarItemList) ;
    outOperand0 = p->mObject.mProperty_mItem ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList::method_last (GALGAS_astAutoLayoutToolbarItem & outOperand0,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutToolbarItemList * p = (cCollectionElement_astAutoLayoutToolbarItemList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutToolbarItemList) ;
    outOperand0 = p->mObject.mProperty_mItem ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList GALGAS_astAutoLayoutToolbarItemList::add_operation (const GALGAS_astAutoLayoutToolbarItemList & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutToolbarItemList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList GALGAS_astAutoLayoutToolbarItemList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutToolbarItemList result = GALGAS_astAutoLayoutToolbarItemList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList GALGAS_astAutoLayoutToolbarItemList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutToolbarItemList result = GALGAS_astAutoLayoutToolbarItemList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList GALGAS_astAutoLayoutToolbarItemList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutToolbarItemList result = GALGAS_astAutoLayoutToolbarItemList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList::plusAssign_operation (const GALGAS_astAutoLayoutToolbarItemList inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList::setter_setMItemAtIndex (GALGAS_astAutoLayoutToolbarItem inOperand,
                                                                  GALGAS_uint inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutToolbarItemList * p = (cCollectionElement_astAutoLayoutToolbarItemList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutToolbarItemList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mItem = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItem GALGAS_astAutoLayoutToolbarItemList::getter_mItemAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutToolbarItemList * p = (cCollectionElement_astAutoLayoutToolbarItemList *) attributes.ptr () ;
  GALGAS_astAutoLayoutToolbarItem result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutToolbarItemList) ;
    result = p->mObject.mProperty_mItem ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_astAutoLayoutToolbarItemList::cEnumerator_astAutoLayoutToolbarItemList (const GALGAS_astAutoLayoutToolbarItemList & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList_2D_element cEnumerator_astAutoLayoutToolbarItemList::current (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutToolbarItemList * p = (const cCollectionElement_astAutoLayoutToolbarItemList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutToolbarItemList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItem cEnumerator_astAutoLayoutToolbarItemList::current_mItem (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutToolbarItemList * p = (const cCollectionElement_astAutoLayoutToolbarItemList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutToolbarItemList) ;
  return p->mObject.mProperty_mItem ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@astAutoLayoutToolbarItemList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astAutoLayoutToolbarItemList ("astAutoLayoutToolbarItemList",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAutoLayoutToolbarItemList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutToolbarItemList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAutoLayoutToolbarItemList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAutoLayoutToolbarItemList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList GALGAS_astAutoLayoutToolbarItemList::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutToolbarItemList result ;
  const GALGAS_astAutoLayoutToolbarItemList * p = (const GALGAS_astAutoLayoutToolbarItemList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astAutoLayoutToolbarItemList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutToolbarItemList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_astAutoLayoutToolbarItem_view::cEnumAssociatedValues_astAutoLayoutToolbarItem_view (const GALGAS_lstring & inAssociatedValue0,
                                                                                                          const GALGAS_astComputedViewInstruction & inAssociatedValue1
                                                                                                          COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_astAutoLayoutToolbarItem_view::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_astAutoLayoutToolbarItem_view::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_astAutoLayoutToolbarItem_view * ptr = dynamic_cast<const cEnumAssociatedValues_astAutoLayoutToolbarItem_view *> (inOperand) ;
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

GALGAS_astAutoLayoutToolbarItem::GALGAS_astAutoLayoutToolbarItem (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItem GALGAS_astAutoLayoutToolbarItem::constructor_view (const GALGAS_lstring & inAssociatedValue0,
                                                                                   const GALGAS_astComputedViewInstruction & inAssociatedValue1
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutToolbarItem result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_view ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_astAutoLayoutToolbarItem_view (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItem GALGAS_astAutoLayoutToolbarItem::constructor_space (UNUSED_LOCATION_ARGS) {
  GALGAS_astAutoLayoutToolbarItem result ;
  result.mEnum = kEnum_space ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItem::method_view (GALGAS_lstring & outAssociatedValue0,
                                                   GALGAS_astComputedViewInstruction & outAssociatedValue1,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_view) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @astAutoLayoutToolbarItem view invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_astAutoLayoutToolbarItem_view * ptr = (const cEnumAssociatedValues_astAutoLayoutToolbarItem_view *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_astAutoLayoutToolbarItem [3] = {
  "(not built)",
  "view",
  "space"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_astAutoLayoutToolbarItem::getter_isView (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_view == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_astAutoLayoutToolbarItem::getter_isSpace (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_space == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItem::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<enum @astAutoLayoutToolbarItem: " << gEnumNameArrayFor_astAutoLayoutToolbarItem [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_astAutoLayoutToolbarItem::objectCompare (const GALGAS_astAutoLayoutToolbarItem & inOperand) const {
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
//@astAutoLayoutToolbarItem type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astAutoLayoutToolbarItem ("astAutoLayoutToolbarItem",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAutoLayoutToolbarItem::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutToolbarItem ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAutoLayoutToolbarItem::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAutoLayoutToolbarItem (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItem GALGAS_astAutoLayoutToolbarItem::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutToolbarItem result ;
  const GALGAS_astAutoLayoutToolbarItem * p = (const GALGAS_astAutoLayoutToolbarItem *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astAutoLayoutToolbarItem *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutToolbarItem", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@viewGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_viewGenerationList : public cCollectionElement {
  public : GALGAS_viewGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_viewGenerationList (const GALGAS_string & in_mViewName,
                                                  const GALGAS_abstractViewGeneration & in_mView
                                                  COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_viewGenerationList (const GALGAS_viewGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_viewGenerationList::cCollectionElement_viewGenerationList (const GALGAS_string & in_mViewName,
                                                                              const GALGAS_abstractViewGeneration & in_mView
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mViewName, in_mView) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_viewGenerationList::cCollectionElement_viewGenerationList (const GALGAS_viewGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mViewName, inElement.mProperty_mView) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_viewGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_viewGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_viewGenerationList (mObject.mProperty_mViewName, mObject.mProperty_mView COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_viewGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mViewName" ":" ;
  mObject.mProperty_mViewName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mView" ":" ;
  mObject.mProperty_mView.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_viewGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_viewGenerationList * operand = (cCollectionElement_viewGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_viewGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList::GALGAS_viewGenerationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList::GALGAS_viewGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList GALGAS_viewGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_viewGenerationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList GALGAS_viewGenerationList::constructor_listWithValue (const GALGAS_string & inOperand0,
                                                                                const GALGAS_abstractViewGeneration & inOperand1
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_viewGenerationList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_viewGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_viewGenerationList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GALGAS_string & in_mViewName,
                                                           const GALGAS_abstractViewGeneration & in_mView
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_viewGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_viewGenerationList (in_mViewName,
                                                        in_mView COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::addAssign_operation (const GALGAS_string & inOperand0,
                                                     const GALGAS_abstractViewGeneration & inOperand1
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_viewGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::setter_append (GALGAS_viewGenerationList_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_viewGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::setter_insertAtIndex (const GALGAS_string inOperand0,
                                                      const GALGAS_abstractViewGeneration inOperand1,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_viewGenerationList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::setter_removeAtIndex (GALGAS_string & outOperand0,
                                                      GALGAS_abstractViewGeneration & outOperand1,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_viewGenerationList * p = (cCollectionElement_viewGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
      outOperand0 = p->mObject.mProperty_mViewName ;
      outOperand1 = p->mObject.mProperty_mView ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::setter_popFirst (GALGAS_string & outOperand0,
                                                 GALGAS_abstractViewGeneration & outOperand1,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_viewGenerationList * p = (cCollectionElement_viewGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
    outOperand0 = p->mObject.mProperty_mViewName ;
    outOperand1 = p->mObject.mProperty_mView ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::setter_popLast (GALGAS_string & outOperand0,
                                                GALGAS_abstractViewGeneration & outOperand1,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_viewGenerationList * p = (cCollectionElement_viewGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
    outOperand0 = p->mObject.mProperty_mViewName ;
    outOperand1 = p->mObject.mProperty_mView ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::method_first (GALGAS_string & outOperand0,
                                              GALGAS_abstractViewGeneration & outOperand1,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_viewGenerationList * p = (cCollectionElement_viewGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
    outOperand0 = p->mObject.mProperty_mViewName ;
    outOperand1 = p->mObject.mProperty_mView ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::method_last (GALGAS_string & outOperand0,
                                             GALGAS_abstractViewGeneration & outOperand1,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_viewGenerationList * p = (cCollectionElement_viewGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
    outOperand0 = p->mObject.mProperty_mViewName ;
    outOperand1 = p->mObject.mProperty_mView ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList GALGAS_viewGenerationList::add_operation (const GALGAS_viewGenerationList & inOperand,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_viewGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList GALGAS_viewGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_viewGenerationList result = GALGAS_viewGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList GALGAS_viewGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_viewGenerationList result = GALGAS_viewGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList GALGAS_viewGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_viewGenerationList result = GALGAS_viewGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::plusAssign_operation (const GALGAS_viewGenerationList inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::setter_setMViewNameAtIndex (GALGAS_string inOperand,
                                                            GALGAS_uint inIndex,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_viewGenerationList * p = (cCollectionElement_viewGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mViewName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_viewGenerationList::getter_mViewNameAtIndex (const GALGAS_uint & inIndex,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_viewGenerationList * p = (cCollectionElement_viewGenerationList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
    result = p->mObject.mProperty_mViewName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList::setter_setMViewAtIndex (GALGAS_abstractViewGeneration inOperand,
                                                        GALGAS_uint inIndex,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_viewGenerationList * p = (cCollectionElement_viewGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mView = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewGeneration GALGAS_viewGenerationList::getter_mViewAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_viewGenerationList * p = (cCollectionElement_viewGenerationList *) attributes.ptr () ;
  GALGAS_abstractViewGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
    result = p->mObject.mProperty_mView ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_viewGenerationList::cEnumerator_viewGenerationList (const GALGAS_viewGenerationList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList_2D_element cEnumerator_viewGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_viewGenerationList * p = (const cCollectionElement_viewGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cEnumerator_viewGenerationList::current_mViewName (LOCATION_ARGS) const {
  const cCollectionElement_viewGenerationList * p = (const cCollectionElement_viewGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
  return p->mObject.mProperty_mViewName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractViewGeneration cEnumerator_viewGenerationList::current_mView (LOCATION_ARGS) const {
  const cCollectionElement_viewGenerationList * p = (const cCollectionElement_viewGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
  return p->mObject.mProperty_mView ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@viewGenerationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_viewGenerationList ("viewGenerationList",
                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_viewGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_viewGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_viewGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_viewGenerationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList GALGAS_viewGenerationList::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_viewGenerationList result ;
  const GALGAS_viewGenerationList * p = (const GALGAS_viewGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_viewGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("viewGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutToolbarItemGenerationList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutToolbarItemGenerationList : public cCollectionElement {
  public : GALGAS_autoLayoutToolbarItemGenerationList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_autoLayoutToolbarItemGenerationList (const GALGAS_autoLayoutToolbarItemGeneration & in_mItem
                                                                   COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_autoLayoutToolbarItemGenerationList (const GALGAS_autoLayoutToolbarItemGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_autoLayoutToolbarItemGenerationList::cCollectionElement_autoLayoutToolbarItemGenerationList (const GALGAS_autoLayoutToolbarItemGeneration & in_mItem
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mItem) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutToolbarItemGenerationList::cCollectionElement_autoLayoutToolbarItemGenerationList (const GALGAS_autoLayoutToolbarItemGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mItem) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutToolbarItemGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutToolbarItemGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_autoLayoutToolbarItemGenerationList (mObject.mProperty_mItem COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutToolbarItemGenerationList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mItem" ":" ;
  mObject.mProperty_mItem.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_autoLayoutToolbarItemGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_autoLayoutToolbarItemGenerationList * operand = (cCollectionElement_autoLayoutToolbarItemGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_autoLayoutToolbarItemGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList::GALGAS_autoLayoutToolbarItemGenerationList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList::GALGAS_autoLayoutToolbarItemGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList GALGAS_autoLayoutToolbarItemGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutToolbarItemGenerationList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList GALGAS_autoLayoutToolbarItemGenerationList::constructor_listWithValue (const GALGAS_autoLayoutToolbarItemGeneration & inOperand0
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutToolbarItemGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_autoLayoutToolbarItemGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_autoLayoutToolbarItemGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutToolbarItemGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_autoLayoutToolbarItemGeneration & in_mItem
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutToolbarItemGenerationList * p = NULL ;
  macroMyNew (p, cCollectionElement_autoLayoutToolbarItemGenerationList (in_mItem COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutToolbarItemGenerationList::addAssign_operation (const GALGAS_autoLayoutToolbarItemGeneration & inOperand0
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_autoLayoutToolbarItemGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutToolbarItemGenerationList::setter_append (GALGAS_autoLayoutToolbarItemGenerationList_2D_element inElement,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_autoLayoutToolbarItemGenerationList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutToolbarItemGenerationList::setter_insertAtIndex (const GALGAS_autoLayoutToolbarItemGeneration inOperand0,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_autoLayoutToolbarItemGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutToolbarItemGenerationList::setter_removeAtIndex (GALGAS_autoLayoutToolbarItemGeneration & outOperand0,
                                                                       const GALGAS_uint inRemoveIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_autoLayoutToolbarItemGenerationList * p = (cCollectionElement_autoLayoutToolbarItemGenerationList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_autoLayoutToolbarItemGenerationList) ;
      outOperand0 = p->mObject.mProperty_mItem ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutToolbarItemGenerationList::setter_popFirst (GALGAS_autoLayoutToolbarItemGeneration & outOperand0,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutToolbarItemGenerationList * p = (cCollectionElement_autoLayoutToolbarItemGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutToolbarItemGenerationList) ;
    outOperand0 = p->mObject.mProperty_mItem ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutToolbarItemGenerationList::setter_popLast (GALGAS_autoLayoutToolbarItemGeneration & outOperand0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutToolbarItemGenerationList * p = (cCollectionElement_autoLayoutToolbarItemGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutToolbarItemGenerationList) ;
    outOperand0 = p->mObject.mProperty_mItem ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutToolbarItemGenerationList::method_first (GALGAS_autoLayoutToolbarItemGeneration & outOperand0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutToolbarItemGenerationList * p = (cCollectionElement_autoLayoutToolbarItemGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutToolbarItemGenerationList) ;
    outOperand0 = p->mObject.mProperty_mItem ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutToolbarItemGenerationList::method_last (GALGAS_autoLayoutToolbarItemGeneration & outOperand0,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutToolbarItemGenerationList * p = (cCollectionElement_autoLayoutToolbarItemGenerationList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutToolbarItemGenerationList) ;
    outOperand0 = p->mObject.mProperty_mItem ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList GALGAS_autoLayoutToolbarItemGenerationList::add_operation (const GALGAS_autoLayoutToolbarItemGenerationList & inOperand,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutToolbarItemGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList GALGAS_autoLayoutToolbarItemGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutToolbarItemGenerationList result = GALGAS_autoLayoutToolbarItemGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList GALGAS_autoLayoutToolbarItemGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutToolbarItemGenerationList result = GALGAS_autoLayoutToolbarItemGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList GALGAS_autoLayoutToolbarItemGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutToolbarItemGenerationList result = GALGAS_autoLayoutToolbarItemGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutToolbarItemGenerationList::plusAssign_operation (const GALGAS_autoLayoutToolbarItemGenerationList inOperand,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutToolbarItemGenerationList::setter_setMItemAtIndex (GALGAS_autoLayoutToolbarItemGeneration inOperand,
                                                                         GALGAS_uint inIndex,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutToolbarItemGenerationList * p = (cCollectionElement_autoLayoutToolbarItemGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutToolbarItemGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mItem = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGeneration GALGAS_autoLayoutToolbarItemGenerationList::getter_mItemAtIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutToolbarItemGenerationList * p = (cCollectionElement_autoLayoutToolbarItemGenerationList *) attributes.ptr () ;
  GALGAS_autoLayoutToolbarItemGeneration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutToolbarItemGenerationList) ;
    result = p->mObject.mProperty_mItem ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutToolbarItemGenerationList::cEnumerator_autoLayoutToolbarItemGenerationList (const GALGAS_autoLayoutToolbarItemGenerationList & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList_2D_element cEnumerator_autoLayoutToolbarItemGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutToolbarItemGenerationList * p = (const cCollectionElement_autoLayoutToolbarItemGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutToolbarItemGenerationList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGeneration cEnumerator_autoLayoutToolbarItemGenerationList::current_mItem (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutToolbarItemGenerationList * p = (const cCollectionElement_autoLayoutToolbarItemGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutToolbarItemGenerationList) ;
  return p->mObject.mProperty_mItem ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutToolbarItemGenerationList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutToolbarItemGenerationList ("autoLayoutToolbarItemGenerationList",
                                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutToolbarItemGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutToolbarItemGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutToolbarItemGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutToolbarItemGenerationList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList GALGAS_autoLayoutToolbarItemGenerationList::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutToolbarItemGenerationList result ;
  const GALGAS_autoLayoutToolbarItemGenerationList * p = (const GALGAS_autoLayoutToolbarItemGenerationList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutToolbarItemGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutToolbarItemGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_autoLayoutToolbarItemGeneration_view::cEnumAssociatedValues_autoLayoutToolbarItemGeneration_view (const GALGAS_string & inAssociatedValue0,
                                                                                                                        const GALGAS_abstractViewInstructionGeneration & inAssociatedValue1
                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//----------------------------------------------------------------------------------------------------------------------

void cEnumAssociatedValues_autoLayoutToolbarItemGeneration_view::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cEnumAssociatedValues_autoLayoutToolbarItemGeneration_view::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_autoLayoutToolbarItemGeneration_view * ptr = dynamic_cast<const cEnumAssociatedValues_autoLayoutToolbarItemGeneration_view *> (inOperand) ;
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

GALGAS_autoLayoutToolbarItemGeneration::GALGAS_autoLayoutToolbarItemGeneration (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGeneration GALGAS_autoLayoutToolbarItemGeneration::constructor_view (const GALGAS_string & inAssociatedValue0,
                                                                                                 const GALGAS_abstractViewInstructionGeneration & inAssociatedValue1
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutToolbarItemGeneration result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_view ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_autoLayoutToolbarItemGeneration_view (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGeneration GALGAS_autoLayoutToolbarItemGeneration::constructor_space (UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutToolbarItemGeneration result ;
  result.mEnum = kEnum_space ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutToolbarItemGeneration::method_view (GALGAS_string & outAssociatedValue0,
                                                          GALGAS_abstractViewInstructionGeneration & outAssociatedValue1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_view) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @autoLayoutToolbarItemGeneration view invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_autoLayoutToolbarItemGeneration_view * ptr = (const cEnumAssociatedValues_autoLayoutToolbarItemGeneration_view *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_autoLayoutToolbarItemGeneration [3] = {
  "(not built)",
  "view",
  "space"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutToolbarItemGeneration::getter_isView (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_view == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutToolbarItemGeneration::getter_isSpace (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_space == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutToolbarItemGeneration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<enum @autoLayoutToolbarItemGeneration: " << gEnumNameArrayFor_autoLayoutToolbarItemGeneration [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutToolbarItemGeneration::objectCompare (const GALGAS_autoLayoutToolbarItemGeneration & inOperand) const {
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
//@autoLayoutToolbarItemGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutToolbarItemGeneration ("autoLayoutToolbarItemGeneration",
                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutToolbarItemGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutToolbarItemGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutToolbarItemGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutToolbarItemGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGeneration GALGAS_autoLayoutToolbarItemGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutToolbarItemGeneration result ;
  const GALGAS_autoLayoutToolbarItemGeneration * p = (const GALGAS_autoLayoutToolbarItemGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutToolbarItemGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutToolbarItemGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@mainXibDescriptorList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_mainXibDescriptorList : public cCollectionElement {
  public : GALGAS_mainXibDescriptorList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_mainXibDescriptorList (const GALGAS_mainXibLineDescriptorList & in_mLine
                                                     COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_mainXibDescriptorList (const GALGAS_mainXibDescriptorList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_mainXibDescriptorList::cCollectionElement_mainXibDescriptorList (const GALGAS_mainXibLineDescriptorList & in_mLine
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLine) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_mainXibDescriptorList::cCollectionElement_mainXibDescriptorList (const GALGAS_mainXibDescriptorList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLine) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_mainXibDescriptorList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mainXibDescriptorList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_mainXibDescriptorList (mObject.mProperty_mLine COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_mainXibDescriptorList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mLine" ":" ;
  mObject.mProperty_mLine.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_mainXibDescriptorList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_mainXibDescriptorList * operand = (cCollectionElement_mainXibDescriptorList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_mainXibDescriptorList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList::GALGAS_mainXibDescriptorList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList::GALGAS_mainXibDescriptorList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList GALGAS_mainXibDescriptorList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_mainXibDescriptorList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList GALGAS_mainXibDescriptorList::constructor_listWithValue (const GALGAS_mainXibLineDescriptorList & inOperand0
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_mainXibDescriptorList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_mainXibDescriptorList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_mainXibDescriptorList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GALGAS_mainXibLineDescriptorList & in_mLine
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_mainXibDescriptorList * p = NULL ;
  macroMyNew (p, cCollectionElement_mainXibDescriptorList (in_mLine COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList::addAssign_operation (const GALGAS_mainXibLineDescriptorList & inOperand0
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mainXibDescriptorList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList::setter_append (GALGAS_mainXibDescriptorList_2D_element inElement,
                                                  C_Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mainXibDescriptorList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList::setter_insertAtIndex (const GALGAS_mainXibLineDescriptorList inOperand0,
                                                         const GALGAS_uint inInsertionIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_mainXibDescriptorList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList::setter_removeAtIndex (GALGAS_mainXibLineDescriptorList & outOperand0,
                                                         const GALGAS_uint inRemoveIndex,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_mainXibDescriptorList * p = (cCollectionElement_mainXibDescriptorList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_mainXibDescriptorList) ;
      outOperand0 = p->mObject.mProperty_mLine ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList::setter_popFirst (GALGAS_mainXibLineDescriptorList & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibDescriptorList * p = (cCollectionElement_mainXibDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mLine ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList::setter_popLast (GALGAS_mainXibLineDescriptorList & outOperand0,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibDescriptorList * p = (cCollectionElement_mainXibDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mLine ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList::method_first (GALGAS_mainXibLineDescriptorList & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibDescriptorList * p = (cCollectionElement_mainXibDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mLine ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList::method_last (GALGAS_mainXibLineDescriptorList & outOperand0,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibDescriptorList * p = (cCollectionElement_mainXibDescriptorList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mLine ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList GALGAS_mainXibDescriptorList::add_operation (const GALGAS_mainXibDescriptorList & inOperand,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_mainXibDescriptorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList GALGAS_mainXibDescriptorList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_mainXibDescriptorList result = GALGAS_mainXibDescriptorList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList GALGAS_mainXibDescriptorList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_mainXibDescriptorList result = GALGAS_mainXibDescriptorList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList GALGAS_mainXibDescriptorList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_mainXibDescriptorList result = GALGAS_mainXibDescriptorList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList::plusAssign_operation (const GALGAS_mainXibDescriptorList inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList::setter_setMLineAtIndex (GALGAS_mainXibLineDescriptorList inOperand,
                                                           GALGAS_uint inIndex,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_mainXibDescriptorList * p = (cCollectionElement_mainXibDescriptorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mainXibDescriptorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mLine = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList GALGAS_mainXibDescriptorList::getter_mLineAtIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibDescriptorList * p = (cCollectionElement_mainXibDescriptorList *) attributes.ptr () ;
  GALGAS_mainXibLineDescriptorList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_mainXibDescriptorList) ;
    result = p->mObject.mProperty_mLine ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_mainXibDescriptorList::cEnumerator_mainXibDescriptorList (const GALGAS_mainXibDescriptorList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList_2D_element cEnumerator_mainXibDescriptorList::current (LOCATION_ARGS) const {
  const cCollectionElement_mainXibDescriptorList * p = (const cCollectionElement_mainXibDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mainXibDescriptorList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList cEnumerator_mainXibDescriptorList::current_mLine (LOCATION_ARGS) const {
  const cCollectionElement_mainXibDescriptorList * p = (const cCollectionElement_mainXibDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mainXibDescriptorList) ;
  return p->mObject.mProperty_mLine ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@mainXibDescriptorList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibDescriptorList ("mainXibDescriptorList",
                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mainXibDescriptorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibDescriptorList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mainXibDescriptorList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibDescriptorList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList GALGAS_mainXibDescriptorList::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_mainXibDescriptorList result ;
  const GALGAS_mainXibDescriptorList * p = (const GALGAS_mainXibDescriptorList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_mainXibDescriptorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibDescriptorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_preferencesForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyListForGeneration.objectCompare (p->mProperty_mPropertyListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMainXibDescriptorList.objectCompare (p->mProperty_mMainXibDescriptorList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegularBindingsGenerationList.objectCompare (p->mProperty_mRegularBindingsGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMultipleBindingGenerationList.objectCompare (p->mProperty_mMultipleBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionBindingListForGeneration.objectCompare (p->mProperty_mActionBindingListForGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletMap.objectCompare (p->mProperty_mOutletMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternSwiftFunctionList.objectCompare (p->mProperty_mExternSwiftFunctionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewBindingGenerationList.objectCompare (p->mProperty_mTableViewBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEBViewBindingGenerationList.objectCompare (p->mProperty_mEBViewBindingGenerationList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_preferencesForGeneration::objectCompare (const GALGAS_preferencesForGeneration & inOperand) const {
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

GALGAS_preferencesForGeneration::GALGAS_preferencesForGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_preferencesForGeneration GALGAS_preferencesForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_preferencesForGeneration::constructor_new (GALGAS_propertyGenerationList::constructor_emptyList (HERE),
                                                           GALGAS_mainXibDescriptorList::constructor_emptyList (HERE),
                                                           GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE),
                                                           GALGAS_multipleBindingGenerationList::constructor_emptyList (HERE),
                                                           GALGAS_actionBindingListForGeneration::constructor_emptyList (HERE),
                                                           GALGAS_decoratedOutletMap::constructor_emptyMap (HERE),
                                                           GALGAS_externSwiftFunctionList::constructor_emptyList (HERE),
                                                           GALGAS_tableViewBindingGenerationList::constructor_emptyList (HERE),
                                                           GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_preferencesForGeneration::GALGAS_preferencesForGeneration (const cPtr_preferencesForGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_preferencesForGeneration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_preferencesForGeneration GALGAS_preferencesForGeneration::constructor_new (const GALGAS_propertyGenerationList & inAttribute_mPropertyListForGeneration,
                                                                                  const GALGAS_mainXibDescriptorList & inAttribute_mMainXibDescriptorList,
                                                                                  const GALGAS_regularBindingsGenerationList & inAttribute_mRegularBindingsGenerationList,
                                                                                  const GALGAS_multipleBindingGenerationList & inAttribute_mMultipleBindingGenerationList,
                                                                                  const GALGAS_actionBindingListForGeneration & inAttribute_mActionBindingListForGeneration,
                                                                                  const GALGAS_decoratedOutletMap & inAttribute_mOutletMap,
                                                                                  const GALGAS_externSwiftFunctionList & inAttribute_mExternSwiftFunctionList,
                                                                                  const GALGAS_tableViewBindingGenerationList & inAttribute_mTableViewBindingGenerationList,
                                                                                  const GALGAS_ebViewGraphicControllerBindingGenerationList & inAttribute_mEBViewBindingGenerationList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_preferencesForGeneration result ;
  if (inAttribute_mPropertyListForGeneration.isValid () && inAttribute_mMainXibDescriptorList.isValid () && inAttribute_mRegularBindingsGenerationList.isValid () && inAttribute_mMultipleBindingGenerationList.isValid () && inAttribute_mActionBindingListForGeneration.isValid () && inAttribute_mOutletMap.isValid () && inAttribute_mExternSwiftFunctionList.isValid () && inAttribute_mTableViewBindingGenerationList.isValid () && inAttribute_mEBViewBindingGenerationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_preferencesForGeneration (inAttribute_mPropertyListForGeneration, inAttribute_mMainXibDescriptorList, inAttribute_mRegularBindingsGenerationList, inAttribute_mMultipleBindingGenerationList, inAttribute_mActionBindingListForGeneration, inAttribute_mOutletMap, inAttribute_mExternSwiftFunctionList, inAttribute_mTableViewBindingGenerationList, inAttribute_mEBViewBindingGenerationList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_preferencesForGeneration::getter_mPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mPropertyListForGeneration ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList cPtr_preferencesForGeneration::getter_mPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList GALGAS_preferencesForGeneration::getter_mMainXibDescriptorList (UNUSED_LOCATION_ARGS) const {
  GALGAS_mainXibDescriptorList result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mMainXibDescriptorList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList cPtr_preferencesForGeneration::getter_mMainXibDescriptorList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMainXibDescriptorList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_preferencesForGeneration::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mRegularBindingsGenerationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList cPtr_preferencesForGeneration::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularBindingsGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_preferencesForGeneration::getter_mMultipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mMultipleBindingGenerationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList cPtr_preferencesForGeneration::getter_mMultipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMultipleBindingGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_preferencesForGeneration::getter_mActionBindingListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mActionBindingListForGeneration ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration cPtr_preferencesForGeneration::getter_mActionBindingListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionBindingListForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap GALGAS_preferencesForGeneration::getter_mOutletMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedOutletMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mOutletMap ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap cPtr_preferencesForGeneration::getter_mOutletMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletMap ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftFunctionList GALGAS_preferencesForGeneration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftFunctionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mExternSwiftFunctionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftFunctionList cPtr_preferencesForGeneration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftFunctionList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_preferencesForGeneration::getter_mTableViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mTableViewBindingGenerationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList cPtr_preferencesForGeneration::getter_mTableViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableViewBindingGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_preferencesForGeneration::getter_mEBViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mEBViewBindingGenerationList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList cPtr_preferencesForGeneration::getter_mEBViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEBViewBindingGenerationList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_preferencesForGeneration::setter_setMPropertyListForGeneration (GALGAS_propertyGenerationList inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    p->mProperty_mPropertyListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_preferencesForGeneration::setter_setMPropertyListForGeneration (GALGAS_propertyGenerationList inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mPropertyListForGeneration = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_preferencesForGeneration::setter_setMMainXibDescriptorList (GALGAS_mainXibDescriptorList inValue
                                                                        COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    p->mProperty_mMainXibDescriptorList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_preferencesForGeneration::setter_setMMainXibDescriptorList (GALGAS_mainXibDescriptorList inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMainXibDescriptorList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_preferencesForGeneration::setter_setMRegularBindingsGenerationList (GALGAS_regularBindingsGenerationList inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    p->mProperty_mRegularBindingsGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_preferencesForGeneration::setter_setMRegularBindingsGenerationList (GALGAS_regularBindingsGenerationList inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mRegularBindingsGenerationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_preferencesForGeneration::setter_setMMultipleBindingGenerationList (GALGAS_multipleBindingGenerationList inValue
                                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    p->mProperty_mMultipleBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_preferencesForGeneration::setter_setMMultipleBindingGenerationList (GALGAS_multipleBindingGenerationList inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMultipleBindingGenerationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_preferencesForGeneration::setter_setMActionBindingListForGeneration (GALGAS_actionBindingListForGeneration inValue
                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    p->mProperty_mActionBindingListForGeneration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_preferencesForGeneration::setter_setMActionBindingListForGeneration (GALGAS_actionBindingListForGeneration inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mActionBindingListForGeneration = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_preferencesForGeneration::setter_setMOutletMap (GALGAS_decoratedOutletMap inValue
                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    p->mProperty_mOutletMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_preferencesForGeneration::setter_setMOutletMap (GALGAS_decoratedOutletMap inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mOutletMap = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_preferencesForGeneration::setter_setMExternSwiftFunctionList (GALGAS_externSwiftFunctionList inValue
                                                                          COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    p->mProperty_mExternSwiftFunctionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_preferencesForGeneration::setter_setMExternSwiftFunctionList (GALGAS_externSwiftFunctionList inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mExternSwiftFunctionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_preferencesForGeneration::setter_setMTableViewBindingGenerationList (GALGAS_tableViewBindingGenerationList inValue
                                                                                 COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    p->mProperty_mTableViewBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_preferencesForGeneration::setter_setMTableViewBindingGenerationList (GALGAS_tableViewBindingGenerationList inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mTableViewBindingGenerationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_preferencesForGeneration::setter_setMEBViewBindingGenerationList (GALGAS_ebViewGraphicControllerBindingGenerationList inValue
                                                                              COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    p->mProperty_mEBViewBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_preferencesForGeneration::setter_setMEBViewBindingGenerationList (GALGAS_ebViewGraphicControllerBindingGenerationList inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mEBViewBindingGenerationList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @preferencesForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_preferencesForGeneration::cPtr_preferencesForGeneration (const GALGAS_propertyGenerationList & in_mPropertyListForGeneration,
                                                              const GALGAS_mainXibDescriptorList & in_mMainXibDescriptorList,
                                                              const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                              const GALGAS_multipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                              const GALGAS_actionBindingListForGeneration & in_mActionBindingListForGeneration,
                                                              const GALGAS_decoratedOutletMap & in_mOutletMap,
                                                              const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                                              const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                              const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList
                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mPropertyListForGeneration (in_mPropertyListForGeneration),
mProperty_mMainXibDescriptorList (in_mMainXibDescriptorList),
mProperty_mRegularBindingsGenerationList (in_mRegularBindingsGenerationList),
mProperty_mMultipleBindingGenerationList (in_mMultipleBindingGenerationList),
mProperty_mActionBindingListForGeneration (in_mActionBindingListForGeneration),
mProperty_mOutletMap (in_mOutletMap),
mProperty_mExternSwiftFunctionList (in_mExternSwiftFunctionList),
mProperty_mTableViewBindingGenerationList (in_mTableViewBindingGenerationList),
mProperty_mEBViewBindingGenerationList (in_mEBViewBindingGenerationList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_preferencesForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_preferencesForGeneration ;
}

void cPtr_preferencesForGeneration::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@preferencesForGeneration:" ;
  mProperty_mPropertyListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMainXibDescriptorList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMultipleBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionBindingListForGeneration.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutletMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEBViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_preferencesForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_preferencesForGeneration (mProperty_mPropertyListForGeneration, mProperty_mMainXibDescriptorList, mProperty_mRegularBindingsGenerationList, mProperty_mMultipleBindingGenerationList, mProperty_mActionBindingListForGeneration, mProperty_mOutletMap, mProperty_mExternSwiftFunctionList, mProperty_mTableViewBindingGenerationList, mProperty_mEBViewBindingGenerationList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@preferencesForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_preferencesForGeneration ("preferencesForGeneration",
                                                 & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_preferencesForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_preferencesForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_preferencesForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_preferencesForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@autoLayoutClassParameterList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutClassParameterList : public cCollectionElement {
  public : GALGAS_autoLayoutClassParameterList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_autoLayoutClassParameterList (const GALGAS_lstring & in_mParameterName,
                                                            const GALGAS_autoLayoutClassParameterType & in_mParameterType
                                                            COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_autoLayoutClassParameterList (const GALGAS_autoLayoutClassParameterList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_autoLayoutClassParameterList::cCollectionElement_autoLayoutClassParameterList (const GALGAS_lstring & in_mParameterName,
                                                                                                  const GALGAS_autoLayoutClassParameterType & in_mParameterType
                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mParameterName, in_mParameterType) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutClassParameterList::cCollectionElement_autoLayoutClassParameterList (const GALGAS_autoLayoutClassParameterList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mParameterName, inElement.mProperty_mParameterType) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutClassParameterList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutClassParameterList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_autoLayoutClassParameterList (mObject.mProperty_mParameterName, mObject.mProperty_mParameterType COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_autoLayoutClassParameterList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterName" ":" ;
  mObject.mProperty_mParameterName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterType" ":" ;
  mObject.mProperty_mParameterType.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_autoLayoutClassParameterList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_autoLayoutClassParameterList * operand = (cCollectionElement_autoLayoutClassParameterList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_autoLayoutClassParameterList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList::GALGAS_autoLayoutClassParameterList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList::GALGAS_autoLayoutClassParameterList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList GALGAS_autoLayoutClassParameterList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutClassParameterList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList GALGAS_autoLayoutClassParameterList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_autoLayoutClassParameterType & inOperand1
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutClassParameterList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_autoLayoutClassParameterList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_autoLayoutClassParameterList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                     const GALGAS_lstring & in_mParameterName,
                                                                     const GALGAS_autoLayoutClassParameterType & in_mParameterType
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutClassParameterList * p = NULL ;
  macroMyNew (p, cCollectionElement_autoLayoutClassParameterList (in_mParameterName,
                                                                  in_mParameterType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                               const GALGAS_autoLayoutClassParameterType & inOperand1
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_autoLayoutClassParameterList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::setter_append (GALGAS_autoLayoutClassParameterList_2D_element inElement,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_autoLayoutClassParameterList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                const GALGAS_autoLayoutClassParameterType inOperand1,
                                                                const GALGAS_uint inInsertionIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_autoLayoutClassParameterList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                GALGAS_autoLayoutClassParameterType & outOperand1,
                                                                const GALGAS_uint inRemoveIndex,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_autoLayoutClassParameterList * p = (cCollectionElement_autoLayoutClassParameterList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
      outOperand0 = p->mObject.mProperty_mParameterName ;
      outOperand1 = p->mObject.mProperty_mParameterType ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                           GALGAS_autoLayoutClassParameterType & outOperand1,
                                                           C_Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutClassParameterList * p = (cCollectionElement_autoLayoutClassParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::setter_popLast (GALGAS_lstring & outOperand0,
                                                          GALGAS_autoLayoutClassParameterType & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutClassParameterList * p = (cCollectionElement_autoLayoutClassParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::method_first (GALGAS_lstring & outOperand0,
                                                        GALGAS_autoLayoutClassParameterType & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutClassParameterList * p = (cCollectionElement_autoLayoutClassParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::method_last (GALGAS_lstring & outOperand0,
                                                       GALGAS_autoLayoutClassParameterType & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutClassParameterList * p = (cCollectionElement_autoLayoutClassParameterList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
    outOperand0 = p->mObject.mProperty_mParameterName ;
    outOperand1 = p->mObject.mProperty_mParameterType ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList GALGAS_autoLayoutClassParameterList::add_operation (const GALGAS_autoLayoutClassParameterList & inOperand,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_autoLayoutClassParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList GALGAS_autoLayoutClassParameterList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutClassParameterList result = GALGAS_autoLayoutClassParameterList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList GALGAS_autoLayoutClassParameterList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutClassParameterList result = GALGAS_autoLayoutClassParameterList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList GALGAS_autoLayoutClassParameterList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutClassParameterList result = GALGAS_autoLayoutClassParameterList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::plusAssign_operation (const GALGAS_autoLayoutClassParameterList inOperand,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::setter_setMParameterNameAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutClassParameterList * p = (cCollectionElement_autoLayoutClassParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameterName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutClassParameterList::getter_mParameterNameAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutClassParameterList * p = (cCollectionElement_autoLayoutClassParameterList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
    result = p->mObject.mProperty_mParameterName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterList::setter_setMParameterTypeAtIndex (GALGAS_autoLayoutClassParameterType inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutClassParameterList * p = (cCollectionElement_autoLayoutClassParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameterType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType GALGAS_autoLayoutClassParameterList::getter_mParameterTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_autoLayoutClassParameterList * p = (cCollectionElement_autoLayoutClassParameterList *) attributes.ptr () ;
  GALGAS_autoLayoutClassParameterType result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
    result = p->mObject.mProperty_mParameterType ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutClassParameterList::cEnumerator_autoLayoutClassParameterList (const GALGAS_autoLayoutClassParameterList & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList_2D_element cEnumerator_autoLayoutClassParameterList::current (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutClassParameterList * p = (const cCollectionElement_autoLayoutClassParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autoLayoutClassParameterList::current_mParameterName (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutClassParameterList * p = (const cCollectionElement_autoLayoutClassParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
  return p->mObject.mProperty_mParameterName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType cEnumerator_autoLayoutClassParameterList::current_mParameterType (LOCATION_ARGS) const {
  const cCollectionElement_autoLayoutClassParameterList * p = (const cCollectionElement_autoLayoutClassParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_autoLayoutClassParameterList) ;
  return p->mObject.mProperty_mParameterType ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutClassParameterList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutClassParameterList ("autoLayoutClassParameterList",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutClassParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutClassParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutClassParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutClassParameterList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList GALGAS_autoLayoutClassParameterList::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutClassParameterList result ;
  const GALGAS_autoLayoutClassParameterList * p = (const GALGAS_autoLayoutClassParameterList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutClassParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutClassParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_astAutoLayoutViewFunctionMap::cMapElement_astAutoLayoutViewFunctionMap (const GALGAS_lstring & inKey,
                                                                                    const GALGAS_autoLayoutClassParameterList & in_mFomalParameterList
                                                                                    COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mFomalParameterList (in_mFomalParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_astAutoLayoutViewFunctionMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mFomalParameterList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_astAutoLayoutViewFunctionMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_astAutoLayoutViewFunctionMap (mProperty_lkey, mProperty_mFomalParameterList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_astAutoLayoutViewFunctionMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFomalParameterList" ":" ;
  mProperty_mFomalParameterList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cMapElement_astAutoLayoutViewFunctionMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_astAutoLayoutViewFunctionMap * operand = (cMapElement_astAutoLayoutViewFunctionMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mFomalParameterList.objectCompare (operand->mProperty_mFomalParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap::GALGAS_astAutoLayoutViewFunctionMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap::GALGAS_astAutoLayoutViewFunctionMap (const GALGAS_astAutoLayoutViewFunctionMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap & GALGAS_astAutoLayoutViewFunctionMap::operator = (const GALGAS_astAutoLayoutViewFunctionMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap GALGAS_astAutoLayoutViewFunctionMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewFunctionMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap GALGAS_astAutoLayoutViewFunctionMap::constructor_mapWithMapToOverride (const GALGAS_astAutoLayoutViewFunctionMap & inMapToOverride
                                                                                                           COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewFunctionMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap GALGAS_astAutoLayoutViewFunctionMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutViewFunctionMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                               const GALGAS_autoLayoutClassParameterList & inArgument0,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cMapElement_astAutoLayoutViewFunctionMap * p = NULL ;
  macroMyNew (p, cMapElement_astAutoLayoutViewFunctionMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@astAutoLayoutViewFunctionMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionMap::setter_insertKey (GALGAS_lstring inKey,
                                                            GALGAS_autoLayoutClassParameterList inArgument0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cMapElement_astAutoLayoutViewFunctionMap * p = NULL ;
  macroMyNew (p, cMapElement_astAutoLayoutViewFunctionMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' function is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_astAutoLayoutViewFunctionMap_searchKey = "there is no '%K' function" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionMap::method_searchKey (GALGAS_lstring inKey,
                                                            GALGAS_autoLayoutClassParameterList & outArgument0,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  const cMapElement_astAutoLayoutViewFunctionMap * p = (const cMapElement_astAutoLayoutViewFunctionMap *) performSearch (inKey,
                                                                                                                         inCompiler,
                                                                                                                         kSearchErrorMessage_astAutoLayoutViewFunctionMap_searchKey
                                                                                                                         COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_astAutoLayoutViewFunctionMap) ;
    outArgument0 = p->mProperty_mFomalParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList GALGAS_astAutoLayoutViewFunctionMap::getter_mFomalParameterListForKey (const GALGAS_string & inKey,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_astAutoLayoutViewFunctionMap * p = (const cMapElement_astAutoLayoutViewFunctionMap *) attributes ;
  GALGAS_autoLayoutClassParameterList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_astAutoLayoutViewFunctionMap) ;
    result = p->mProperty_mFomalParameterList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionMap::setter_setMFomalParameterListForKey (GALGAS_autoLayoutClassParameterList inAttributeValue,
                                                                               GALGAS_string inKey,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_astAutoLayoutViewFunctionMap * p = (cMapElement_astAutoLayoutViewFunctionMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_astAutoLayoutViewFunctionMap) ;
    p->mProperty_mFomalParameterList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_astAutoLayoutViewFunctionMap * GALGAS_astAutoLayoutViewFunctionMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                   const GALGAS_string & inKey
                                                                                                                   COMMA_LOCATION_ARGS) {
  cMapElement_astAutoLayoutViewFunctionMap * result = (cMapElement_astAutoLayoutViewFunctionMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_astAutoLayoutViewFunctionMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_astAutoLayoutViewFunctionMap::cEnumerator_astAutoLayoutViewFunctionMap (const GALGAS_astAutoLayoutViewFunctionMap & inEnumeratedObject,
                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap_2D_element cEnumerator_astAutoLayoutViewFunctionMap::current (LOCATION_ARGS) const {
  const cMapElement_astAutoLayoutViewFunctionMap * p = (const cMapElement_astAutoLayoutViewFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_astAutoLayoutViewFunctionMap) ;
  return GALGAS_astAutoLayoutViewFunctionMap_2D_element (p->mProperty_lkey, p->mProperty_mFomalParameterList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_astAutoLayoutViewFunctionMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList cEnumerator_astAutoLayoutViewFunctionMap::current_mFomalParameterList (LOCATION_ARGS) const {
  const cMapElement_astAutoLayoutViewFunctionMap * p = (const cMapElement_astAutoLayoutViewFunctionMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_astAutoLayoutViewFunctionMap) ;
  return p->mProperty_mFomalParameterList ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_astAutoLayoutViewFunctionMap::optional_searchKey (const GALGAS_string & inKey,
                                                              GALGAS_autoLayoutClassParameterList & outArgument0) const {
  const cMapElement_astAutoLayoutViewFunctionMap * p = (const cMapElement_astAutoLayoutViewFunctionMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_astAutoLayoutViewFunctionMap) ;
    outArgument0 = p->mProperty_mFomalParameterList ;
  }else{
    outArgument0.drop () ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@astAutoLayoutViewFunctionMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap ("astAutoLayoutViewFunctionMap",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAutoLayoutViewFunctionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAutoLayoutViewFunctionMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAutoLayoutViewFunctionMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap GALGAS_astAutoLayoutViewFunctionMap::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewFunctionMap result ;
  const GALGAS_astAutoLayoutViewFunctionMap * p = (const GALGAS_astAutoLayoutViewFunctionMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astAutoLayoutViewFunctionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewFunctionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType::GALGAS_autoLayoutClassParameterType (void) :
mEnum (kNotBuilt) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType GALGAS_autoLayoutClassParameterType::constructor_typeString (UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutClassParameterType result ;
  result.mEnum = kEnum_typeString ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType GALGAS_autoLayoutClassParameterType::constructor_typeInt (UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutClassParameterType result ;
  result.mEnum = kEnum_typeInt ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType GALGAS_autoLayoutClassParameterType::constructor_typeBool (UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutClassParameterType result ;
  result.mEnum = kEnum_typeBool ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType GALGAS_autoLayoutClassParameterType::constructor_typeView (UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutClassParameterType result ;
  result.mEnum = kEnum_typeView ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_autoLayoutClassParameterType [5] = {
  "(not built)",
  "typeString",
  "typeInt",
  "typeBool",
  "typeView"
} ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutClassParameterType::getter_isTypeString (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_typeString == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutClassParameterType::getter_isTypeInt (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_typeInt == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutClassParameterType::getter_isTypeBool (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_typeBool == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutClassParameterType::getter_isTypeView (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_typeView == mEnum) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutClassParameterType::description (C_String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString << "<enum @autoLayoutClassParameterType: " << gEnumNameArrayFor_autoLayoutClassParameterType [mEnum] ;
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutClassParameterType::objectCompare (const GALGAS_autoLayoutClassParameterType & inOperand) const {
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
//@autoLayoutClassParameterType type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutClassParameterType ("autoLayoutClassParameterType",
                                                     NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutClassParameterType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutClassParameterType ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutClassParameterType::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutClassParameterType (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterType GALGAS_autoLayoutClassParameterType::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutClassParameterType result ;
  const GALGAS_autoLayoutClassParameterType * p = (const GALGAS_autoLayoutClassParameterType *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutClassParameterType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutClassParameterType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@autoLayoutClassParameterType string'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_string (const GALGAS_autoLayoutClassParameterType & inObject,
                                      C_Compiler * /* inCompiler */
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_autoLayoutClassParameterType temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_autoLayoutClassParameterType::kNotBuilt:
    break ;
  case GALGAS_autoLayoutClassParameterType::kEnum_typeString:
    {
      result_result = GALGAS_string ("String") ;
    }
    break ;
  case GALGAS_autoLayoutClassParameterType::kEnum_typeInt:
    {
      result_result = GALGAS_string ("Int") ;
    }
    break ;
  case GALGAS_autoLayoutClassParameterType::kEnum_typeBool:
    {
      result_result = GALGAS_string ("Bool") ;
    }
    break ;
  case GALGAS_autoLayoutClassParameterType::kEnum_typeView:
    {
      result_result = GALGAS_string ("a view") ;
    }
    break ;
  }
//---
  return result_result ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@outletClassBindingSpecificationModelList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_outletClassBindingSpecificationModelList : public cCollectionElement {
  public : GALGAS_outletClassBindingSpecificationModelList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_outletClassBindingSpecificationModelList (const GALGAS_lstring & in_mModelTypeName,
                                                                        const GALGAS_bool & in_mModelShouldBeWritableProperty
                                                                        COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_outletClassBindingSpecificationModelList (const GALGAS_outletClassBindingSpecificationModelList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_outletClassBindingSpecificationModelList::cCollectionElement_outletClassBindingSpecificationModelList (const GALGAS_lstring & in_mModelTypeName,
                                                                                                                          const GALGAS_bool & in_mModelShouldBeWritableProperty
                                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mModelTypeName, in_mModelShouldBeWritableProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_outletClassBindingSpecificationModelList::cCollectionElement_outletClassBindingSpecificationModelList (const GALGAS_outletClassBindingSpecificationModelList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mModelTypeName, inElement.mProperty_mModelShouldBeWritableProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_outletClassBindingSpecificationModelList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_outletClassBindingSpecificationModelList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_outletClassBindingSpecificationModelList (mObject.mProperty_mModelTypeName, mObject.mProperty_mModelShouldBeWritableProperty COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_outletClassBindingSpecificationModelList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModelTypeName" ":" ;
  mObject.mProperty_mModelTypeName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModelShouldBeWritableProperty" ":" ;
  mObject.mProperty_mModelShouldBeWritableProperty.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_outletClassBindingSpecificationModelList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_outletClassBindingSpecificationModelList * operand = (cCollectionElement_outletClassBindingSpecificationModelList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_outletClassBindingSpecificationModelList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList::GALGAS_outletClassBindingSpecificationModelList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList::GALGAS_outletClassBindingSpecificationModelList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassBindingSpecificationModelList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                                            const GALGAS_bool & inOperand1
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationModelList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletClassBindingSpecificationModelList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_outletClassBindingSpecificationModelList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                 const GALGAS_lstring & in_mModelTypeName,
                                                                                 const GALGAS_bool & in_mModelShouldBeWritableProperty
                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_outletClassBindingSpecificationModelList * p = NULL ;
  macroMyNew (p, cCollectionElement_outletClassBindingSpecificationModelList (in_mModelTypeName,
                                                                              in_mModelShouldBeWritableProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                           const GALGAS_bool & inOperand1
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletClassBindingSpecificationModelList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::setter_append (GALGAS_outletClassBindingSpecificationModelList_2D_element inElement,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletClassBindingSpecificationModelList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                            const GALGAS_bool inOperand1,
                                                                            const GALGAS_uint inInsertionIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletClassBindingSpecificationModelList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                            GALGAS_bool & outOperand1,
                                                                            const GALGAS_uint inRemoveIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
      outOperand0 = p->mObject.mProperty_mModelTypeName ;
      outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                       GALGAS_bool & outOperand1,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelTypeName ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::setter_popLast (GALGAS_lstring & outOperand0,
                                                                      GALGAS_bool & outOperand1,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelTypeName ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::method_first (GALGAS_lstring & outOperand0,
                                                                    GALGAS_bool & outOperand1,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelTypeName ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::method_last (GALGAS_lstring & outOperand0,
                                                                   GALGAS_bool & outOperand1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelTypeName ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::add_operation (const GALGAS_outletClassBindingSpecificationModelList & inOperand,
                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationModelList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationModelList result = GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationModelList result = GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationModelList result = GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::plusAssign_operation (const GALGAS_outletClassBindingSpecificationModelList inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::setter_setMModelTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                                       GALGAS_uint inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mModelTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_outletClassBindingSpecificationModelList::getter_mModelTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
    result = p->mObject.mProperty_mModelTypeName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletClassBindingSpecificationModelList::setter_setMModelShouldBeWritablePropertyAtIndex (GALGAS_bool inOperand,
                                                                                                       GALGAS_uint inIndex,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mModelShouldBeWritableProperty = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassBindingSpecificationModelList::getter_mModelShouldBeWritablePropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletClassBindingSpecificationModelList * p = (cCollectionElement_outletClassBindingSpecificationModelList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
    result = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_outletClassBindingSpecificationModelList::cEnumerator_outletClassBindingSpecificationModelList (const GALGAS_outletClassBindingSpecificationModelList & inEnumeratedObject,
                                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList_2D_element cEnumerator_outletClassBindingSpecificationModelList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationModelList * p = (const cCollectionElement_outletClassBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_outletClassBindingSpecificationModelList::current_mModelTypeName (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationModelList * p = (const cCollectionElement_outletClassBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
  return p->mObject.mProperty_mModelTypeName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_outletClassBindingSpecificationModelList::current_mModelShouldBeWritableProperty (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationModelList * p = (const cCollectionElement_outletClassBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
  return p->mObject.mProperty_mModelShouldBeWritableProperty ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@outletClassBindingSpecificationModelList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList ("outletClassBindingSpecificationModelList",
                                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outletClassBindingSpecificationModelList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outletClassBindingSpecificationModelList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassBindingSpecificationModelList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationModelList result ;
  const GALGAS_outletClassBindingSpecificationModelList * p = (const GALGAS_outletClassBindingSpecificationModelList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassBindingSpecificationModelList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassBindingSpecificationModelList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@controllerBindingOptionList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_controllerBindingOptionList : public cCollectionElement {
  public : GALGAS_controllerBindingOptionList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_controllerBindingOptionList (const GALGAS_lstring & in_mOptionName,
                                                           const GALGAS_lstring & in_mOptionTypeName
                                                           COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_controllerBindingOptionList (const GALGAS_controllerBindingOptionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_controllerBindingOptionList::cCollectionElement_controllerBindingOptionList (const GALGAS_lstring & in_mOptionName,
                                                                                                const GALGAS_lstring & in_mOptionTypeName
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionName, in_mOptionTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_controllerBindingOptionList::cCollectionElement_controllerBindingOptionList (const GALGAS_controllerBindingOptionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionName, inElement.mProperty_mOptionTypeName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_controllerBindingOptionList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_controllerBindingOptionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_controllerBindingOptionList (mObject.mProperty_mOptionName, mObject.mProperty_mOptionTypeName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_controllerBindingOptionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionName" ":" ;
  mObject.mProperty_mOptionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionTypeName" ":" ;
  mObject.mProperty_mOptionTypeName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_controllerBindingOptionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controllerBindingOptionList * operand = (cCollectionElement_controllerBindingOptionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controllerBindingOptionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList::GALGAS_controllerBindingOptionList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList::GALGAS_controllerBindingOptionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_controllerBindingOptionList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controllerBindingOptionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_controllerBindingOptionList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GALGAS_lstring & in_mOptionName,
                                                                    const GALGAS_lstring & in_mOptionTypeName
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_controllerBindingOptionList * p = NULL ;
  macroMyNew (p, cCollectionElement_controllerBindingOptionList (in_mOptionName,
                                                                 in_mOptionTypeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_lstring & inOperand1
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controllerBindingOptionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::setter_append (GALGAS_controllerBindingOptionList_2D_element inElement,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controllerBindingOptionList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                               const GALGAS_lstring inOperand1,
                                                               const GALGAS_uint inInsertionIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controllerBindingOptionList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               const GALGAS_uint inRemoveIndex,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
      outOperand0 = p->mObject.mProperty_mOptionName ;
      outOperand1 = p->mObject.mProperty_mOptionTypeName ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                          GALGAS_lstring & outOperand1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::setter_popLast (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::method_first (GALGAS_lstring & outOperand0,
                                                       GALGAS_lstring & outOperand1,
                                                       C_Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::method_last (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
    outOperand0 = p->mObject.mProperty_mOptionName ;
    outOperand1 = p->mObject.mProperty_mOptionTypeName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::add_operation (const GALGAS_controllerBindingOptionList & inOperand,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionList result = GALGAS_controllerBindingOptionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionList result = GALGAS_controllerBindingOptionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionList result = GALGAS_controllerBindingOptionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::plusAssign_operation (const GALGAS_controllerBindingOptionList inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::setter_setMOptionNameAtIndex (GALGAS_lstring inOperand,
                                                                       GALGAS_uint inIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_controllerBindingOptionList::getter_mOptionNameAtIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
    result = p->mObject.mProperty_mOptionName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionList::setter_setMOptionTypeNameAtIndex (GALGAS_lstring inOperand,
                                                                           GALGAS_uint inIndex,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionTypeName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_controllerBindingOptionList::getter_mOptionTypeNameAtIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionList * p = (cCollectionElement_controllerBindingOptionList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
    result = p->mObject.mProperty_mOptionTypeName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_controllerBindingOptionList::cEnumerator_controllerBindingOptionList (const GALGAS_controllerBindingOptionList & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList_2D_element cEnumerator_controllerBindingOptionList::current (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionList * p = (const cCollectionElement_controllerBindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_controllerBindingOptionList::current_mOptionName (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionList * p = (const cCollectionElement_controllerBindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
  return p->mObject.mProperty_mOptionName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_controllerBindingOptionList::current_mOptionTypeName (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionList * p = (const cCollectionElement_controllerBindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
  return p->mObject.mProperty_mOptionTypeName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@controllerBindingOptionList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controllerBindingOptionList ("controllerBindingOptionList",
                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controllerBindingOptionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controllerBindingOptionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controllerBindingOptionList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionList result ;
  const GALGAS_controllerBindingOptionList * p = (const GALGAS_controllerBindingOptionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controllerBindingOptionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controllerBindingOptionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_autoLayoutViewBindingSpecificationMap::cMapElement_autoLayoutViewBindingSpecificationMap (const GALGAS_lstring & inKey,
                                                                                                      const GALGAS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                                                                      const GALGAS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionList
                                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mOutletBindingSpecificationModelList (in_mOutletBindingSpecificationModelList),
mProperty_mControllerBindingOptionList (in_mControllerBindingOptionList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cMapElement_autoLayoutViewBindingSpecificationMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletBindingSpecificationModelList.isValid () && mProperty_mControllerBindingOptionList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement * cMapElement_autoLayoutViewBindingSpecificationMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_autoLayoutViewBindingSpecificationMap (mProperty_lkey, mProperty_mOutletBindingSpecificationModelList, mProperty_mControllerBindingOptionList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cMapElement_autoLayoutViewBindingSpecificationMap::description (C_String & ioString, const int32_t inIndentation) const {
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

typeComparisonResult cMapElement_autoLayoutViewBindingSpecificationMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_autoLayoutViewBindingSpecificationMap * operand = (cMapElement_autoLayoutViewBindingSpecificationMap *) inOperand ;
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

GALGAS_autoLayoutViewBindingSpecificationMap::GALGAS_autoLayoutViewBindingSpecificationMap (void) :
AC_GALGAS_map (true) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap::GALGAS_autoLayoutViewBindingSpecificationMap (const GALGAS_autoLayoutViewBindingSpecificationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap & GALGAS_autoLayoutViewBindingSpecificationMap::operator = (const GALGAS_autoLayoutViewBindingSpecificationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap GALGAS_autoLayoutViewBindingSpecificationMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_autoLayoutViewBindingSpecificationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap GALGAS_autoLayoutViewBindingSpecificationMap::constructor_mapWithMapToOverride (const GALGAS_autoLayoutViewBindingSpecificationMap & inMapToOverride
                                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewBindingSpecificationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap GALGAS_autoLayoutViewBindingSpecificationMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_autoLayoutViewBindingSpecificationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewBindingSpecificationMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                        const GALGAS_outletBindingSpecificationModelList & inArgument0,
                                                                        const GALGAS_controllerBindingOptionDecoratedList & inArgument1,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cMapElement_autoLayoutViewBindingSpecificationMap * p = NULL ;
  macroMyNew (p, cMapElement_autoLayoutViewBindingSpecificationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@autoLayoutViewBindingSpecificationMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewBindingSpecificationMap::setter_insertKey (GALGAS_lstring inKey,
                                                                     GALGAS_outletBindingSpecificationModelList inArgument0,
                                                                     GALGAS_controllerBindingOptionDecoratedList inArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_autoLayoutViewBindingSpecificationMap * p = NULL ;
  macroMyNew (p, cMapElement_autoLayoutViewBindingSpecificationMap (inKey, inArgument0, inArgument1 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' binding is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

const char * kSearchErrorMessage_autoLayoutViewBindingSpecificationMap_searchKey = "there is no '%K' binding" ;

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewBindingSpecificationMap::method_searchKey (GALGAS_lstring inKey,
                                                                     GALGAS_outletBindingSpecificationModelList & outArgument0,
                                                                     GALGAS_controllerBindingOptionDecoratedList & outArgument1,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_autoLayoutViewBindingSpecificationMap * p = (const cMapElement_autoLayoutViewBindingSpecificationMap *) performSearch (inKey,
                                                                                                                                           inCompiler,
                                                                                                                                           kSearchErrorMessage_autoLayoutViewBindingSpecificationMap_searchKey
                                                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_autoLayoutViewBindingSpecificationMap) ;
    outArgument0 = p->mProperty_mOutletBindingSpecificationModelList ;
    outArgument1 = p->mProperty_mControllerBindingOptionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList GALGAS_autoLayoutViewBindingSpecificationMap::getter_mOutletBindingSpecificationModelListForKey (const GALGAS_string & inKey,
                                                                                                                                            C_Compiler * inCompiler
                                                                                                                                            COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autoLayoutViewBindingSpecificationMap * p = (const cMapElement_autoLayoutViewBindingSpecificationMap *) attributes ;
  GALGAS_outletBindingSpecificationModelList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autoLayoutViewBindingSpecificationMap) ;
    result = p->mProperty_mOutletBindingSpecificationModelList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList GALGAS_autoLayoutViewBindingSpecificationMap::getter_mControllerBindingOptionListForKey (const GALGAS_string & inKey,
                                                                                                                                     C_Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_autoLayoutViewBindingSpecificationMap * p = (const cMapElement_autoLayoutViewBindingSpecificationMap *) attributes ;
  GALGAS_controllerBindingOptionDecoratedList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autoLayoutViewBindingSpecificationMap) ;
    result = p->mProperty_mControllerBindingOptionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewBindingSpecificationMap::setter_setMOutletBindingSpecificationModelListForKey (GALGAS_outletBindingSpecificationModelList inAttributeValue,
                                                                                                         GALGAS_string inKey,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autoLayoutViewBindingSpecificationMap * p = (cMapElement_autoLayoutViewBindingSpecificationMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autoLayoutViewBindingSpecificationMap) ;
    p->mProperty_mOutletBindingSpecificationModelList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewBindingSpecificationMap::setter_setMControllerBindingOptionListForKey (GALGAS_controllerBindingOptionDecoratedList inAttributeValue,
                                                                                                 GALGAS_string inKey,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_autoLayoutViewBindingSpecificationMap * p = (cMapElement_autoLayoutViewBindingSpecificationMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_autoLayoutViewBindingSpecificationMap) ;
    p->mProperty_mControllerBindingOptionList = inAttributeValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

cMapElement_autoLayoutViewBindingSpecificationMap * GALGAS_autoLayoutViewBindingSpecificationMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                                     const GALGAS_string & inKey
                                                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_autoLayoutViewBindingSpecificationMap * result = (cMapElement_autoLayoutViewBindingSpecificationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_autoLayoutViewBindingSpecificationMap) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumerator_autoLayoutViewBindingSpecificationMap::cEnumerator_autoLayoutViewBindingSpecificationMap (const GALGAS_autoLayoutViewBindingSpecificationMap & inEnumeratedObject,
                                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap_2D_element cEnumerator_autoLayoutViewBindingSpecificationMap::current (LOCATION_ARGS) const {
  const cMapElement_autoLayoutViewBindingSpecificationMap * p = (const cMapElement_autoLayoutViewBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autoLayoutViewBindingSpecificationMap) ;
  return GALGAS_autoLayoutViewBindingSpecificationMap_2D_element (p->mProperty_lkey, p->mProperty_mOutletBindingSpecificationModelList, p->mProperty_mControllerBindingOptionList) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_autoLayoutViewBindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList cEnumerator_autoLayoutViewBindingSpecificationMap::current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const {
  const cMapElement_autoLayoutViewBindingSpecificationMap * p = (const cMapElement_autoLayoutViewBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autoLayoutViewBindingSpecificationMap) ;
  return p->mProperty_mOutletBindingSpecificationModelList ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList cEnumerator_autoLayoutViewBindingSpecificationMap::current_mControllerBindingOptionList (LOCATION_ARGS) const {
  const cMapElement_autoLayoutViewBindingSpecificationMap * p = (const cMapElement_autoLayoutViewBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_autoLayoutViewBindingSpecificationMap) ;
  return p->mProperty_mControllerBindingOptionList ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutViewBindingSpecificationMap::optional_searchKey (const GALGAS_string & inKey,
                                                                       GALGAS_outletBindingSpecificationModelList & outArgument0,
                                                                       GALGAS_controllerBindingOptionDecoratedList & outArgument1) const {
  const cMapElement_autoLayoutViewBindingSpecificationMap * p = (const cMapElement_autoLayoutViewBindingSpecificationMap *) searchForKey (inKey) ;
  const bool result = NULL != p ;
  if (result) {
    macroValidSharedObject (p, cMapElement_autoLayoutViewBindingSpecificationMap) ;
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
//@autoLayoutViewBindingSpecificationMap type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap ("autoLayoutViewBindingSpecificationMap",
                                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewBindingSpecificationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewBindingSpecificationMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewBindingSpecificationMap (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewBindingSpecificationMap GALGAS_autoLayoutViewBindingSpecificationMap::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewBindingSpecificationMap result ;
  const GALGAS_autoLayoutViewBindingSpecificationMap * p = (const GALGAS_autoLayoutViewBindingSpecificationMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutViewBindingSpecificationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewBindingSpecificationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@outletBindingSpecificationModelList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_outletBindingSpecificationModelList : public cCollectionElement {
  public : GALGAS_outletBindingSpecificationModelList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_outletBindingSpecificationModelList (const GALGAS_typeKind & in_mModelType,
                                                                   const GALGAS_bool & in_mModelShouldBeWritableProperty
                                                                   COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_outletBindingSpecificationModelList (const GALGAS_outletBindingSpecificationModelList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_outletBindingSpecificationModelList::cCollectionElement_outletBindingSpecificationModelList (const GALGAS_typeKind & in_mModelType,
                                                                                                                const GALGAS_bool & in_mModelShouldBeWritableProperty
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mModelType, in_mModelShouldBeWritableProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_outletBindingSpecificationModelList::cCollectionElement_outletBindingSpecificationModelList (const GALGAS_outletBindingSpecificationModelList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mModelType, inElement.mProperty_mModelShouldBeWritableProperty) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_outletBindingSpecificationModelList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_outletBindingSpecificationModelList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_outletBindingSpecificationModelList (mObject.mProperty_mModelType, mObject.mProperty_mModelShouldBeWritableProperty COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_outletBindingSpecificationModelList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModelType" ":" ;
  mObject.mProperty_mModelType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mModelShouldBeWritableProperty" ":" ;
  mObject.mProperty_mModelShouldBeWritableProperty.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_outletBindingSpecificationModelList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_outletBindingSpecificationModelList * operand = (cCollectionElement_outletBindingSpecificationModelList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_outletBindingSpecificationModelList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList::GALGAS_outletBindingSpecificationModelList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList::GALGAS_outletBindingSpecificationModelList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletBindingSpecificationModelList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::constructor_listWithValue (const GALGAS_typeKind & inOperand0,
                                                                                                                  const GALGAS_bool & inOperand1
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationModelList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletBindingSpecificationModelList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_outletBindingSpecificationModelList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                            const GALGAS_typeKind & in_mModelType,
                                                                            const GALGAS_bool & in_mModelShouldBeWritableProperty
                                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_outletBindingSpecificationModelList * p = NULL ;
  macroMyNew (p, cCollectionElement_outletBindingSpecificationModelList (in_mModelType,
                                                                         in_mModelShouldBeWritableProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::addAssign_operation (const GALGAS_typeKind & inOperand0,
                                                                      const GALGAS_bool & inOperand1
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletBindingSpecificationModelList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::setter_append (GALGAS_outletBindingSpecificationModelList_2D_element inElement,
                                                                C_Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletBindingSpecificationModelList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::setter_insertAtIndex (const GALGAS_typeKind inOperand0,
                                                                       const GALGAS_bool inOperand1,
                                                                       const GALGAS_uint inInsertionIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_outletBindingSpecificationModelList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::setter_removeAtIndex (GALGAS_typeKind & outOperand0,
                                                                       GALGAS_bool & outOperand1,
                                                                       const GALGAS_uint inRemoveIndex,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
      outOperand0 = p->mObject.mProperty_mModelType ;
      outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::setter_popFirst (GALGAS_typeKind & outOperand0,
                                                                  GALGAS_bool & outOperand1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelType ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::setter_popLast (GALGAS_typeKind & outOperand0,
                                                                 GALGAS_bool & outOperand1,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelType ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::method_first (GALGAS_typeKind & outOperand0,
                                                               GALGAS_bool & outOperand1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelType ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::method_last (GALGAS_typeKind & outOperand0,
                                                              GALGAS_bool & outOperand1,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
    outOperand0 = p->mObject.mProperty_mModelType ;
    outOperand1 = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::add_operation (const GALGAS_outletBindingSpecificationModelList & inOperand,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_outletBindingSpecificationModelList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_outletBindingSpecificationModelList result = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_outletBindingSpecificationModelList result = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_outletBindingSpecificationModelList result = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::plusAssign_operation (const GALGAS_outletBindingSpecificationModelList inOperand,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::setter_setMModelTypeAtIndex (GALGAS_typeKind inOperand,
                                                                              GALGAS_uint inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mModelType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_outletBindingSpecificationModelList::getter_mModelTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
    result = p->mObject.mProperty_mModelType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList::setter_setMModelShouldBeWritablePropertyAtIndex (GALGAS_bool inOperand,
                                                                                                  GALGAS_uint inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mModelShouldBeWritableProperty = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletBindingSpecificationModelList::getter_mModelShouldBeWritablePropertyAtIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_outletBindingSpecificationModelList * p = (cCollectionElement_outletBindingSpecificationModelList *) attributes.ptr () ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
    result = p->mObject.mProperty_mModelShouldBeWritableProperty ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_outletBindingSpecificationModelList::cEnumerator_outletBindingSpecificationModelList (const GALGAS_outletBindingSpecificationModelList & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList_2D_element cEnumerator_outletBindingSpecificationModelList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingSpecificationModelList * p = (const cCollectionElement_outletBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind cEnumerator_outletBindingSpecificationModelList::current_mModelType (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingSpecificationModelList * p = (const cCollectionElement_outletBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
  return p->mObject.mProperty_mModelType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cEnumerator_outletBindingSpecificationModelList::current_mModelShouldBeWritableProperty (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingSpecificationModelList * p = (const cCollectionElement_outletBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
  return p->mObject.mProperty_mModelShouldBeWritableProperty ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@outletBindingSpecificationModelList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingSpecificationModelList ("outletBindingSpecificationModelList",
                                                            NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outletBindingSpecificationModelList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationModelList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outletBindingSpecificationModelList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingSpecificationModelList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationModelList result ;
  const GALGAS_outletBindingSpecificationModelList * p = (const GALGAS_outletBindingSpecificationModelList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletBindingSpecificationModelList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingSpecificationModelList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@controllerBindingOptionDecoratedList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_controllerBindingOptionDecoratedList : public cCollectionElement {
  public : GALGAS_controllerBindingOptionDecoratedList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_controllerBindingOptionDecoratedList (const GALGAS_typeKind & in_mOptionType,
                                                                    const GALGAS_lstring & in_mOptionName
                                                                    COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_controllerBindingOptionDecoratedList (const GALGAS_controllerBindingOptionDecoratedList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_controllerBindingOptionDecoratedList::cCollectionElement_controllerBindingOptionDecoratedList (const GALGAS_typeKind & in_mOptionType,
                                                                                                                  const GALGAS_lstring & in_mOptionName
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionType, in_mOptionName) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_controllerBindingOptionDecoratedList::cCollectionElement_controllerBindingOptionDecoratedList (const GALGAS_controllerBindingOptionDecoratedList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionType, inElement.mProperty_mOptionName) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_controllerBindingOptionDecoratedList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_controllerBindingOptionDecoratedList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_controllerBindingOptionDecoratedList (mObject.mProperty_mOptionType, mObject.mProperty_mOptionName COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_controllerBindingOptionDecoratedList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionType" ":" ;
  mObject.mProperty_mOptionType.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOptionName" ":" ;
  mObject.mProperty_mOptionName.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_controllerBindingOptionDecoratedList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controllerBindingOptionDecoratedList * operand = (cCollectionElement_controllerBindingOptionDecoratedList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controllerBindingOptionDecoratedList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList::GALGAS_controllerBindingOptionDecoratedList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList::GALGAS_controllerBindingOptionDecoratedList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_controllerBindingOptionDecoratedList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::constructor_listWithValue (const GALGAS_typeKind & inOperand0,
                                                                                                                    const GALGAS_lstring & inOperand1
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionDecoratedList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controllerBindingOptionDecoratedList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_controllerBindingOptionDecoratedList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GALGAS_typeKind & in_mOptionType,
                                                                             const GALGAS_lstring & in_mOptionName
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_controllerBindingOptionDecoratedList * p = NULL ;
  macroMyNew (p, cCollectionElement_controllerBindingOptionDecoratedList (in_mOptionType,
                                                                          in_mOptionName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::addAssign_operation (const GALGAS_typeKind & inOperand0,
                                                                       const GALGAS_lstring & inOperand1
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controllerBindingOptionDecoratedList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::setter_append (GALGAS_controllerBindingOptionDecoratedList_2D_element inElement,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controllerBindingOptionDecoratedList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::setter_insertAtIndex (const GALGAS_typeKind inOperand0,
                                                                        const GALGAS_lstring inOperand1,
                                                                        const GALGAS_uint inInsertionIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_controllerBindingOptionDecoratedList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::setter_removeAtIndex (GALGAS_typeKind & outOperand0,
                                                                        GALGAS_lstring & outOperand1,
                                                                        const GALGAS_uint inRemoveIndex,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
      outOperand0 = p->mObject.mProperty_mOptionType ;
      outOperand1 = p->mObject.mProperty_mOptionName ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::setter_popFirst (GALGAS_typeKind & outOperand0,
                                                                   GALGAS_lstring & outOperand1,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
    outOperand0 = p->mObject.mProperty_mOptionType ;
    outOperand1 = p->mObject.mProperty_mOptionName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::setter_popLast (GALGAS_typeKind & outOperand0,
                                                                  GALGAS_lstring & outOperand1,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
    outOperand0 = p->mObject.mProperty_mOptionType ;
    outOperand1 = p->mObject.mProperty_mOptionName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::method_first (GALGAS_typeKind & outOperand0,
                                                                GALGAS_lstring & outOperand1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
    outOperand0 = p->mObject.mProperty_mOptionType ;
    outOperand1 = p->mObject.mProperty_mOptionName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::method_last (GALGAS_typeKind & outOperand0,
                                                               GALGAS_lstring & outOperand1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
    outOperand0 = p->mObject.mProperty_mOptionType ;
    outOperand1 = p->mObject.mProperty_mOptionName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::add_operation (const GALGAS_controllerBindingOptionDecoratedList & inOperand,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionDecoratedList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionDecoratedList result = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionDecoratedList result = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionDecoratedList result = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::plusAssign_operation (const GALGAS_controllerBindingOptionDecoratedList inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::setter_setMOptionTypeAtIndex (GALGAS_typeKind inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionType = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_controllerBindingOptionDecoratedList::getter_mOptionTypeAtIndex (const GALGAS_uint & inIndex,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) attributes.ptr () ;
  GALGAS_typeKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
    result = p->mObject.mProperty_mOptionType ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_controllerBindingOptionDecoratedList::setter_setMOptionNameAtIndex (GALGAS_lstring inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mOptionName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_controllerBindingOptionDecoratedList::getter_mOptionNameAtIndex (const GALGAS_uint & inIndex,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_controllerBindingOptionDecoratedList * p = (cCollectionElement_controllerBindingOptionDecoratedList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
    result = p->mObject.mProperty_mOptionName ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_controllerBindingOptionDecoratedList::cEnumerator_controllerBindingOptionDecoratedList (const GALGAS_controllerBindingOptionDecoratedList & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList_2D_element cEnumerator_controllerBindingOptionDecoratedList::current (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionDecoratedList * p = (const cCollectionElement_controllerBindingOptionDecoratedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind cEnumerator_controllerBindingOptionDecoratedList::current_mOptionType (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionDecoratedList * p = (const cCollectionElement_controllerBindingOptionDecoratedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
  return p->mObject.mProperty_mOptionType ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_controllerBindingOptionDecoratedList::current_mOptionName (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionDecoratedList * p = (const cCollectionElement_controllerBindingOptionDecoratedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
  return p->mObject.mProperty_mOptionName ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@controllerBindingOptionDecoratedList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList ("controllerBindingOptionDecoratedList",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_controllerBindingOptionDecoratedList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_controllerBindingOptionDecoratedList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controllerBindingOptionDecoratedList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::extractObject (const GALGAS_object & inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionDecoratedList result ;
  const GALGAS_controllerBindingOptionDecoratedList * p = (const GALGAS_controllerBindingOptionDecoratedList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controllerBindingOptionDecoratedList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controllerBindingOptionDecoratedList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_astAbstractViewDeclaration::objectCompare (const GALGAS_astAbstractViewDeclaration & inOperand) const {
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

GALGAS_astAbstractViewDeclaration::GALGAS_astAbstractViewDeclaration (void) :
AC_GALGAS_class (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewDeclaration::GALGAS_astAbstractViewDeclaration (const cPtr_astAbstractViewDeclaration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astAbstractViewDeclaration) ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @astAbstractViewDeclaration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_astAbstractViewDeclaration::cPtr_astAbstractViewDeclaration (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@astAbstractViewDeclaration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astAbstractViewDeclaration ("astAbstractViewDeclaration",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAbstractViewDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAbstractViewDeclaration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAbstractViewDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAbstractViewDeclaration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewDeclaration GALGAS_astAbstractViewDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_astAbstractViewDeclaration result ;
  const GALGAS_astAbstractViewDeclaration * p = (const GALGAS_astAbstractViewDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astAbstractViewDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAbstractViewDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_astVerticalStackViewDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_astVerticalStackViewDeclaration * p = (const cPtr_astVerticalStackViewDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astVerticalStackViewDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mMargin.objectCompare (p->mProperty_mMargin) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_astVerticalStackViewDeclaration::objectCompare (const GALGAS_astVerticalStackViewDeclaration & inOperand) const {
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

GALGAS_astVerticalStackViewDeclaration::GALGAS_astVerticalStackViewDeclaration (void) :
GALGAS_astAbstractViewDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astVerticalStackViewDeclaration GALGAS_astVerticalStackViewDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_astVerticalStackViewDeclaration::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                                  COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astVerticalStackViewDeclaration::GALGAS_astVerticalStackViewDeclaration (const cPtr_astVerticalStackViewDeclaration * inSourcePtr) :
GALGAS_astAbstractViewDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astVerticalStackViewDeclaration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astVerticalStackViewDeclaration GALGAS_astVerticalStackViewDeclaration::constructor_new (const GALGAS_uint & inAttribute_mMargin
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_astVerticalStackViewDeclaration result ;
  if (inAttribute_mMargin.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_astVerticalStackViewDeclaration (inAttribute_mMargin COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_astVerticalStackViewDeclaration::getter_mMargin (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_astVerticalStackViewDeclaration * p = (const cPtr_astVerticalStackViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astVerticalStackViewDeclaration) ;
    result = p->mProperty_mMargin ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_astVerticalStackViewDeclaration::getter_mMargin (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMargin ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astVerticalStackViewDeclaration::setter_setMMargin (GALGAS_uint inValue
                                                                COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_astVerticalStackViewDeclaration * p = (cPtr_astVerticalStackViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astVerticalStackViewDeclaration) ;
    p->mProperty_mMargin = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_astVerticalStackViewDeclaration::setter_setMMargin (GALGAS_uint inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMargin = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @astVerticalStackViewDeclaration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_astVerticalStackViewDeclaration::cPtr_astVerticalStackViewDeclaration (const GALGAS_uint & in_mMargin
                                                                            COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewDeclaration (THERE),
mProperty_mMargin (in_mMargin) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astVerticalStackViewDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astVerticalStackViewDeclaration ;
}

void cPtr_astVerticalStackViewDeclaration::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "[@astVerticalStackViewDeclaration:" ;
  mProperty_mMargin.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astVerticalStackViewDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_astVerticalStackViewDeclaration (mProperty_mMargin COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@astVerticalStackViewDeclaration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astVerticalStackViewDeclaration ("astVerticalStackViewDeclaration",
                                                        & kTypeDescriptor_GALGAS_astAbstractViewDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astVerticalStackViewDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astVerticalStackViewDeclaration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astVerticalStackViewDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astVerticalStackViewDeclaration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astVerticalStackViewDeclaration GALGAS_astVerticalStackViewDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_astVerticalStackViewDeclaration result ;
  const GALGAS_astVerticalStackViewDeclaration * p = (const GALGAS_astVerticalStackViewDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astVerticalStackViewDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astVerticalStackViewDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@astViewInstructionList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_astViewInstructionList : public cCollectionElement {
  public : GALGAS_astViewInstructionList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_astViewInstructionList (const GALGAS_astAbstractViewInstructionDeclaration & in_mInstruction
                                                      COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_astViewInstructionList (const GALGAS_astViewInstructionList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_astViewInstructionList::cCollectionElement_astViewInstructionList (const GALGAS_astAbstractViewInstructionDeclaration & in_mInstruction
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_astViewInstructionList::cCollectionElement_astViewInstructionList (const GALGAS_astViewInstructionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_astViewInstructionList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_astViewInstructionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_astViewInstructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_astViewInstructionList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInstruction" ":" ;
  mObject.mProperty_mInstruction.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_astViewInstructionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_astViewInstructionList * operand = (cCollectionElement_astViewInstructionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_astViewInstructionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList::GALGAS_astViewInstructionList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList::GALGAS_astViewInstructionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astViewInstructionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_astViewInstructionList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astViewInstructionList::constructor_listWithValue (const GALGAS_astAbstractViewInstructionDeclaration & inOperand0
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astViewInstructionList result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_astViewInstructionList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_astViewInstructionList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GALGAS_astAbstractViewInstructionDeclaration & in_mInstruction
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_astViewInstructionList * p = NULL ;
  macroMyNew (p, cCollectionElement_astViewInstructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList::addAssign_operation (const GALGAS_astAbstractViewInstructionDeclaration & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_astViewInstructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList::setter_append (GALGAS_astViewInstructionList_2D_element inElement,
                                                   C_Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_astViewInstructionList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList::setter_insertAtIndex (const GALGAS_astAbstractViewInstructionDeclaration inOperand0,
                                                          const GALGAS_uint inInsertionIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_astViewInstructionList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList::setter_removeAtIndex (GALGAS_astAbstractViewInstructionDeclaration & outOperand0,
                                                          const GALGAS_uint inRemoveIndex,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_astViewInstructionList * p = (cCollectionElement_astViewInstructionList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_astViewInstructionList) ;
      outOperand0 = p->mObject.mProperty_mInstruction ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList::setter_popFirst (GALGAS_astAbstractViewInstructionDeclaration & outOperand0,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewInstructionList * p = (cCollectionElement_astViewInstructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astViewInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList::setter_popLast (GALGAS_astAbstractViewInstructionDeclaration & outOperand0,
                                                    C_Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewInstructionList * p = (cCollectionElement_astViewInstructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astViewInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList::method_first (GALGAS_astAbstractViewInstructionDeclaration & outOperand0,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewInstructionList * p = (cCollectionElement_astViewInstructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astViewInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList::method_last (GALGAS_astAbstractViewInstructionDeclaration & outOperand0,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewInstructionList * p = (cCollectionElement_astViewInstructionList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astViewInstructionList) ;
    outOperand0 = p->mObject.mProperty_mInstruction ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astViewInstructionList::add_operation (const GALGAS_astViewInstructionList & inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_astViewInstructionList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astViewInstructionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_astViewInstructionList result = GALGAS_astViewInstructionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astViewInstructionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_astViewInstructionList result = GALGAS_astViewInstructionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astViewInstructionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_astViewInstructionList result = GALGAS_astViewInstructionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList::plusAssign_operation (const GALGAS_astViewInstructionList inOperand,
                                                          C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList::setter_setMInstructionAtIndex (GALGAS_astAbstractViewInstructionDeclaration inOperand,
                                                                   GALGAS_uint inIndex,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_astViewInstructionList * p = (cCollectionElement_astViewInstructionList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astViewInstructionList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInstruction = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewInstructionDeclaration GALGAS_astViewInstructionList::getter_mInstructionAtIndex (const GALGAS_uint & inIndex,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astViewInstructionList * p = (cCollectionElement_astViewInstructionList *) attributes.ptr () ;
  GALGAS_astAbstractViewInstructionDeclaration result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astViewInstructionList) ;
    result = p->mObject.mProperty_mInstruction ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_astViewInstructionList::cEnumerator_astViewInstructionList (const GALGAS_astViewInstructionList & inEnumeratedObject,
                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList_2D_element cEnumerator_astViewInstructionList::current (LOCATION_ARGS) const {
  const cCollectionElement_astViewInstructionList * p = (const cCollectionElement_astViewInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astViewInstructionList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewInstructionDeclaration cEnumerator_astViewInstructionList::current_mInstruction (LOCATION_ARGS) const {
  const cCollectionElement_astViewInstructionList * p = (const cCollectionElement_astViewInstructionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astViewInstructionList) ;
  return p->mObject.mProperty_mInstruction ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@astViewInstructionList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astViewInstructionList ("astViewInstructionList",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astViewInstructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astViewInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astViewInstructionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astViewInstructionList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astViewInstructionList::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_astViewInstructionList result ;
  const GALGAS_astViewInstructionList * p = (const GALGAS_astViewInstructionList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astViewInstructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astViewInstructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_astComputedVerticalViewDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_astComputedVerticalViewDeclaration * p = (const cPtr_astComputedVerticalViewDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astComputedVerticalViewDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mMargin.objectCompare (p->mProperty_mMargin) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_astComputedVerticalViewDeclaration::objectCompare (const GALGAS_astComputedVerticalViewDeclaration & inOperand) const {
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

GALGAS_astComputedVerticalViewDeclaration::GALGAS_astComputedVerticalViewDeclaration (void) :
GALGAS_astAbstractViewDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedVerticalViewDeclaration GALGAS_astComputedVerticalViewDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_astComputedVerticalViewDeclaration::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                     GALGAS_astViewInstructionList::constructor_emptyList (HERE)
                                                                     COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedVerticalViewDeclaration::GALGAS_astComputedVerticalViewDeclaration (const cPtr_astComputedVerticalViewDeclaration * inSourcePtr) :
GALGAS_astAbstractViewDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astComputedVerticalViewDeclaration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedVerticalViewDeclaration GALGAS_astComputedVerticalViewDeclaration::constructor_new (const GALGAS_uint & inAttribute_mMargin,
                                                                                                      const GALGAS_astViewInstructionList & inAttribute_mInstructionList
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_astComputedVerticalViewDeclaration result ;
  if (inAttribute_mMargin.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_astComputedVerticalViewDeclaration (inAttribute_mMargin, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_astComputedVerticalViewDeclaration::getter_mMargin (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_astComputedVerticalViewDeclaration * p = (const cPtr_astComputedVerticalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedVerticalViewDeclaration) ;
    result = p->mProperty_mMargin ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_astComputedVerticalViewDeclaration::getter_mMargin (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMargin ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astComputedVerticalViewDeclaration::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_astViewInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_astComputedVerticalViewDeclaration * p = (const cPtr_astComputedVerticalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedVerticalViewDeclaration) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList cPtr_astComputedVerticalViewDeclaration::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedVerticalViewDeclaration::setter_setMMargin (GALGAS_uint inValue
                                                                   COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_astComputedVerticalViewDeclaration * p = (cPtr_astComputedVerticalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedVerticalViewDeclaration) ;
    p->mProperty_mMargin = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_astComputedVerticalViewDeclaration::setter_setMMargin (GALGAS_uint inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMargin = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astComputedVerticalViewDeclaration::setter_setMInstructionList (GALGAS_astViewInstructionList inValue
                                                                            COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_astComputedVerticalViewDeclaration * p = (cPtr_astComputedVerticalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedVerticalViewDeclaration) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_astComputedVerticalViewDeclaration::setter_setMInstructionList (GALGAS_astViewInstructionList inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @astComputedVerticalViewDeclaration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_astComputedVerticalViewDeclaration::cPtr_astComputedVerticalViewDeclaration (const GALGAS_uint & in_mMargin,
                                                                                  const GALGAS_astViewInstructionList & in_mInstructionList
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewDeclaration (THERE),
mProperty_mMargin (in_mMargin),
mProperty_mInstructionList (in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astComputedVerticalViewDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration ;
}

void cPtr_astComputedVerticalViewDeclaration::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "[@astComputedVerticalViewDeclaration:" ;
  mProperty_mMargin.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astComputedVerticalViewDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_astComputedVerticalViewDeclaration (mProperty_mMargin, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@astComputedVerticalViewDeclaration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration ("astComputedVerticalViewDeclaration",
                                                           & kTypeDescriptor_GALGAS_astAbstractViewDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astComputedVerticalViewDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astComputedVerticalViewDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astComputedVerticalViewDeclaration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astComputedVerticalViewDeclaration GALGAS_astComputedVerticalViewDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_astComputedVerticalViewDeclaration result ;
  const GALGAS_astComputedVerticalViewDeclaration * p = (const GALGAS_astComputedVerticalViewDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astComputedVerticalViewDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedVerticalViewDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_astAbstractViewInstructionDeclaration::objectCompare (const GALGAS_astAbstractViewInstructionDeclaration & inOperand) const {
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

GALGAS_astAbstractViewInstructionDeclaration::GALGAS_astAbstractViewInstructionDeclaration (void) :
AC_GALGAS_class (false) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewInstructionDeclaration::GALGAS_astAbstractViewInstructionDeclaration (const cPtr_astAbstractViewInstructionDeclaration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astAbstractViewInstructionDeclaration) ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @astAbstractViewInstructionDeclaration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_astAbstractViewInstructionDeclaration::cPtr_astAbstractViewInstructionDeclaration (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@astAbstractViewInstructionDeclaration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration ("astAbstractViewInstructionDeclaration",
                                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAbstractViewInstructionDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAbstractViewInstructionDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAbstractViewInstructionDeclaration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAbstractViewInstructionDeclaration GALGAS_astAbstractViewInstructionDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_astAbstractViewInstructionDeclaration result ;
  const GALGAS_astAbstractViewInstructionDeclaration * p = (const GALGAS_astAbstractViewInstructionDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astAbstractViewInstructionDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAbstractViewInstructionDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_astHStackViewInstructionDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_astHStackViewInstructionDeclaration * p = (const cPtr_astHStackViewInstructionDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astHStackViewInstructionDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mMargin.objectCompare (p->mProperty_mMargin) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_astHStackViewInstructionDeclaration::objectCompare (const GALGAS_astHStackViewInstructionDeclaration & inOperand) const {
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

GALGAS_astHStackViewInstructionDeclaration::GALGAS_astHStackViewInstructionDeclaration (void) :
GALGAS_astAbstractViewInstructionDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astHStackViewInstructionDeclaration GALGAS_astHStackViewInstructionDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_astHStackViewInstructionDeclaration::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                      GALGAS_astViewInstructionList::constructor_emptyList (HERE)
                                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astHStackViewInstructionDeclaration::GALGAS_astHStackViewInstructionDeclaration (const cPtr_astHStackViewInstructionDeclaration * inSourcePtr) :
GALGAS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astHStackViewInstructionDeclaration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astHStackViewInstructionDeclaration GALGAS_astHStackViewInstructionDeclaration::constructor_new (const GALGAS_uint & inAttribute_mMargin,
                                                                                                        const GALGAS_astViewInstructionList & inAttribute_mInstructionList
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astHStackViewInstructionDeclaration result ;
  if (inAttribute_mMargin.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_astHStackViewInstructionDeclaration (inAttribute_mMargin, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_astHStackViewInstructionDeclaration::getter_mMargin (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_astHStackViewInstructionDeclaration * p = (const cPtr_astHStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astHStackViewInstructionDeclaration) ;
    result = p->mProperty_mMargin ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_astHStackViewInstructionDeclaration::getter_mMargin (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMargin ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astHStackViewInstructionDeclaration::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_astViewInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_astHStackViewInstructionDeclaration * p = (const cPtr_astHStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astHStackViewInstructionDeclaration) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList cPtr_astHStackViewInstructionDeclaration::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astHStackViewInstructionDeclaration::setter_setMMargin (GALGAS_uint inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_astHStackViewInstructionDeclaration * p = (cPtr_astHStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astHStackViewInstructionDeclaration) ;
    p->mProperty_mMargin = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_astHStackViewInstructionDeclaration::setter_setMMargin (GALGAS_uint inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMargin = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astHStackViewInstructionDeclaration::setter_setMInstructionList (GALGAS_astViewInstructionList inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_astHStackViewInstructionDeclaration * p = (cPtr_astHStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astHStackViewInstructionDeclaration) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_astHStackViewInstructionDeclaration::setter_setMInstructionList (GALGAS_astViewInstructionList inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @astHStackViewInstructionDeclaration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_astHStackViewInstructionDeclaration::cPtr_astHStackViewInstructionDeclaration (const GALGAS_uint & in_mMargin,
                                                                                    const GALGAS_astViewInstructionList & in_mInstructionList
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (THERE),
mProperty_mMargin (in_mMargin),
mProperty_mInstructionList (in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astHStackViewInstructionDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration ;
}

void cPtr_astHStackViewInstructionDeclaration::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@astHStackViewInstructionDeclaration:" ;
  mProperty_mMargin.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astHStackViewInstructionDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_astHStackViewInstructionDeclaration (mProperty_mMargin, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@astHStackViewInstructionDeclaration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration ("astHStackViewInstructionDeclaration",
                                                            & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astHStackViewInstructionDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astHStackViewInstructionDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astHStackViewInstructionDeclaration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astHStackViewInstructionDeclaration GALGAS_astHStackViewInstructionDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_astHStackViewInstructionDeclaration result ;
  const GALGAS_astHStackViewInstructionDeclaration * p = (const GALGAS_astHStackViewInstructionDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astHStackViewInstructionDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astHStackViewInstructionDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_astVStackViewInstructionDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_astVStackViewInstructionDeclaration * p = (const cPtr_astVStackViewInstructionDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astVStackViewInstructionDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mMargin.objectCompare (p->mProperty_mMargin) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_astVStackViewInstructionDeclaration::objectCompare (const GALGAS_astVStackViewInstructionDeclaration & inOperand) const {
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

GALGAS_astVStackViewInstructionDeclaration::GALGAS_astVStackViewInstructionDeclaration (void) :
GALGAS_astAbstractViewInstructionDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astVStackViewInstructionDeclaration GALGAS_astVStackViewInstructionDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_astVStackViewInstructionDeclaration::constructor_new (GALGAS_uint::constructor_default (HERE),
                                                                      GALGAS_astViewInstructionList::constructor_emptyList (HERE)
                                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astVStackViewInstructionDeclaration::GALGAS_astVStackViewInstructionDeclaration (const cPtr_astVStackViewInstructionDeclaration * inSourcePtr) :
GALGAS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astVStackViewInstructionDeclaration) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astVStackViewInstructionDeclaration GALGAS_astVStackViewInstructionDeclaration::constructor_new (const GALGAS_uint & inAttribute_mMargin,
                                                                                                        const GALGAS_astViewInstructionList & inAttribute_mInstructionList
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astVStackViewInstructionDeclaration result ;
  if (inAttribute_mMargin.isValid () && inAttribute_mInstructionList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_astVStackViewInstructionDeclaration (inAttribute_mMargin, inAttribute_mInstructionList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint GALGAS_astVStackViewInstructionDeclaration::getter_mMargin (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_astVStackViewInstructionDeclaration * p = (const cPtr_astVStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astVStackViewInstructionDeclaration) ;
    result = p->mProperty_mMargin ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_astVStackViewInstructionDeclaration::getter_mMargin (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMargin ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astVStackViewInstructionDeclaration::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_astViewInstructionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_astVStackViewInstructionDeclaration * p = (const cPtr_astVStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astVStackViewInstructionDeclaration) ;
    result = p->mProperty_mInstructionList ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList cPtr_astVStackViewInstructionDeclaration::getter_mInstructionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInstructionList ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astVStackViewInstructionDeclaration::setter_setMMargin (GALGAS_uint inValue
                                                                    COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_astVStackViewInstructionDeclaration * p = (cPtr_astVStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astVStackViewInstructionDeclaration) ;
    p->mProperty_mMargin = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_astVStackViewInstructionDeclaration::setter_setMMargin (GALGAS_uint inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mMargin = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astVStackViewInstructionDeclaration::setter_setMInstructionList (GALGAS_astViewInstructionList inValue
                                                                             COMMA_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    insulate (THERE) ;
    cPtr_astVStackViewInstructionDeclaration * p = (cPtr_astVStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astVStackViewInstructionDeclaration) ;
    p->mProperty_mInstructionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void cPtr_astVStackViewInstructionDeclaration::setter_setMInstructionList (GALGAS_astViewInstructionList inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mProperty_mInstructionList = inValue ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @astVStackViewInstructionDeclaration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_astVStackViewInstructionDeclaration::cPtr_astVStackViewInstructionDeclaration (const GALGAS_uint & in_mMargin,
                                                                                    const GALGAS_astViewInstructionList & in_mInstructionList
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (THERE),
mProperty_mMargin (in_mMargin),
mProperty_mInstructionList (in_mInstructionList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astVStackViewInstructionDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration ;
}

void cPtr_astVStackViewInstructionDeclaration::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "[@astVStackViewInstructionDeclaration:" ;
  mProperty_mMargin.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astVStackViewInstructionDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_astVStackViewInstructionDeclaration (mProperty_mMargin, mProperty_mInstructionList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@astVStackViewInstructionDeclaration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration ("astVStackViewInstructionDeclaration",
                                                            & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astVStackViewInstructionDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astVStackViewInstructionDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astVStackViewInstructionDeclaration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astVStackViewInstructionDeclaration GALGAS_astVStackViewInstructionDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_astVStackViewInstructionDeclaration result ;
  const GALGAS_astVStackViewInstructionDeclaration * p = (const GALGAS_astVStackViewInstructionDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astVStackViewInstructionDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astVStackViewInstructionDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//   Object comparison                                                                           
//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_astSpaceViewInstruction::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {
  return kOperandEqual ;
}

//----------------------------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_astSpaceViewInstruction::objectCompare (const GALGAS_astSpaceViewInstruction & inOperand) const {
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

GALGAS_astSpaceViewInstruction::GALGAS_astSpaceViewInstruction (void) :
GALGAS_astAbstractViewInstructionDeclaration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astSpaceViewInstruction GALGAS_astSpaceViewInstruction::constructor_default (LOCATION_ARGS) {
  return GALGAS_astSpaceViewInstruction::constructor_new (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astSpaceViewInstruction::GALGAS_astSpaceViewInstruction (const cPtr_astSpaceViewInstruction * inSourcePtr) :
GALGAS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astSpaceViewInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astSpaceViewInstruction GALGAS_astSpaceViewInstruction::constructor_new (LOCATION_ARGS) {
  GALGAS_astSpaceViewInstruction result ;
  macroMyNew (result.mObjectPtr, cPtr_astSpaceViewInstruction (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @astSpaceViewInstruction class
//----------------------------------------------------------------------------------------------------------------------

cPtr_astSpaceViewInstruction::cPtr_astSpaceViewInstruction (LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (THERE) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astSpaceViewInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astSpaceViewInstruction ;
}

void cPtr_astSpaceViewInstruction::description (C_String & ioString,
                                                const int32_t /* inIndentation */) const {
  ioString << "[@astSpaceViewInstruction]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astSpaceViewInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_astSpaceViewInstruction (THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@astSpaceViewInstruction type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astSpaceViewInstruction ("astSpaceViewInstruction",
                                                & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astSpaceViewInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astSpaceViewInstruction ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astSpaceViewInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astSpaceViewInstruction (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astSpaceViewInstruction GALGAS_astSpaceViewInstruction::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_astSpaceViewInstruction result ;
  const GALGAS_astSpaceViewInstruction * p = (const GALGAS_astSpaceViewInstruction *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astSpaceViewInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astSpaceViewInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Class for element of '@astAutoLayoutViewInstructionParameterList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_astAutoLayoutViewInstructionParameterList : public cCollectionElement {
  public : GALGAS_astAutoLayoutViewInstructionParameterList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_astAutoLayoutViewInstructionParameterList (const GALGAS_lstring & in_mParameterName,
                                                                         const GALGAS_autoLayoutClassParameterType & in_mParameterType,
                                                                         const GALGAS_string & in_mParameterValue
                                                                         COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_astAutoLayoutViewInstructionParameterList (const GALGAS_astAutoLayoutViewInstructionParameterList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_astAutoLayoutViewInstructionParameterList::cCollectionElement_astAutoLayoutViewInstructionParameterList (const GALGAS_lstring & in_mParameterName,
                                                                                                                            const GALGAS_autoLayoutClassParameterType & in_mParameterType,
                                                                                                                            const GALGAS_string & in_mParameterValue
                                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mParameterName, in_mParameterType, in_mParameterValue) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_astAutoLayoutViewInstructionParameterList::cCollectionElement_astAutoLayoutViewInstructionParameterList (const GALGAS_astAutoLayoutViewInstructionParameterList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mParameterName, inElement.mProperty_mParameterType, inElement.mProperty_mParameterValue) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_astAutoLayoutViewInstructionParameterList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_astAutoLayoutViewInstructionParameterList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_astAutoLayoutViewInstructionParameterList (mObject.mProperty_mParameterName, mObject.mProperty_mParameterType, mObject.mProperty_mParameterValue COMMA_HERE)) ;
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
  ioString << "mParameterValue" ":" ;
  mObject.mProperty_mParameterValue.description (ioString, inIndentation) ;
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
                                                                                                                              const GALGAS_string & inOperand2
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
                                                                                  const GALGAS_string & in_mParameterValue
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = NULL ;
  macroMyNew (p, cCollectionElement_astAutoLayoutViewInstructionParameterList (in_mParameterName,
                                                                               in_mParameterType,
                                                                               in_mParameterValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_autoLayoutClassParameterType & inOperand1,
                                                                            const GALGAS_string & inOperand2
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_astAutoLayoutViewInstructionParameterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::setter_append (GALGAS_astAutoLayoutViewInstructionParameterList_2D_element inElement,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_astAutoLayoutViewInstructionParameterList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                             const GALGAS_autoLayoutClassParameterType inOperand1,
                                                                             const GALGAS_string inOperand2,
                                                                             const GALGAS_uint inInsertionIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_astAutoLayoutViewInstructionParameterList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                             GALGAS_autoLayoutClassParameterType & outOperand1,
                                                                             GALGAS_string & outOperand2,
                                                                             const GALGAS_uint inRemoveIndex,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
      outOperand2.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
      outOperand0 = p->mObject.mProperty_mParameterName ;
      outOperand1 = p->mObject.mProperty_mParameterType ;
      outOperand2 = p->mObject.mProperty_mParameterValue ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                        GALGAS_autoLayoutClassParameterType & outOperand1,
                                                                        GALGAS_string & outOperand2,
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
    outOperand2 = p->mObject.mProperty_mParameterValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::setter_popLast (GALGAS_lstring & outOperand0,
                                                                       GALGAS_autoLayoutClassParameterType & outOperand1,
                                                                       GALGAS_string & outOperand2,
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
    outOperand2 = p->mObject.mProperty_mParameterValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::method_first (GALGAS_lstring & outOperand0,
                                                                     GALGAS_autoLayoutClassParameterType & outOperand1,
                                                                     GALGAS_string & outOperand2,
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
    outOperand2 = p->mObject.mProperty_mParameterValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewInstructionParameterList::method_last (GALGAS_lstring & outOperand0,
                                                                    GALGAS_autoLayoutClassParameterType & outOperand1,
                                                                    GALGAS_string & outOperand2,
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
    outOperand2 = p->mObject.mProperty_mParameterValue ;
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

void GALGAS_astAutoLayoutViewInstructionParameterList::setter_setMParameterValueAtIndex (GALGAS_string inOperand,
                                                                                         GALGAS_uint inIndex,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameterValue = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_astAutoLayoutViewInstructionParameterList::getter_mParameterValueAtIndex (const GALGAS_uint & inIndex,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (cCollectionElement_astAutoLayoutViewInstructionParameterList *) attributes.ptr () ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
    result = p->mObject.mProperty_mParameterValue ;
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

GALGAS_string cEnumerator_astAutoLayoutViewInstructionParameterList::current_mParameterValue (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutViewInstructionParameterList * p = (const cCollectionElement_astAutoLayoutViewInstructionParameterList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewInstructionParameterList) ;
  return p->mObject.mProperty_mParameterValue ;
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
//
//Class for element of '@astAutoLayoutViewFunctionCallList' list
//
//----------------------------------------------------------------------------------------------------------------------

class cCollectionElement_astAutoLayoutViewFunctionCallList : public cCollectionElement {
  public : GALGAS_astAutoLayoutViewFunctionCallList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_astAutoLayoutViewFunctionCallList (const GALGAS_lstring & in_mFunctionName,
                                                                 const GALGAS_astAutoLayoutViewInstructionParameterList & in_mParameterList
                                                                 COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_astAutoLayoutViewFunctionCallList (const GALGAS_astAutoLayoutViewFunctionCallList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_astAutoLayoutViewFunctionCallList::cCollectionElement_astAutoLayoutViewFunctionCallList (const GALGAS_lstring & in_mFunctionName,
                                                                                                            const GALGAS_astAutoLayoutViewInstructionParameterList & in_mParameterList
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFunctionName, in_mParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement_astAutoLayoutViewFunctionCallList::cCollectionElement_astAutoLayoutViewFunctionCallList (const GALGAS_astAutoLayoutViewFunctionCallList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFunctionName, inElement.mProperty_mParameterList) {
}

//----------------------------------------------------------------------------------------------------------------------

bool cCollectionElement_astAutoLayoutViewFunctionCallList::isValid (void) const {
  return mObject.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_astAutoLayoutViewFunctionCallList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_astAutoLayoutViewFunctionCallList (mObject.mProperty_mFunctionName, mObject.mProperty_mParameterList COMMA_HERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void cCollectionElement_astAutoLayoutViewFunctionCallList::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mFunctionName" ":" ;
  mObject.mProperty_mFunctionName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mParameterList" ":" ;
  mObject.mProperty_mParameterList.description (ioString, inIndentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult cCollectionElement_astAutoLayoutViewFunctionCallList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_astAutoLayoutViewFunctionCallList * operand = (cCollectionElement_astAutoLayoutViewFunctionCallList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList::GALGAS_astAutoLayoutViewFunctionCallList (void) :
AC_GALGAS_list () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList::GALGAS_astAutoLayoutViewFunctionCallList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astAutoLayoutViewFunctionCallList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_astAutoLayoutViewFunctionCallList  (capCollectionElementArray ()) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astAutoLayoutViewFunctionCallList::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_astAutoLayoutViewInstructionParameterList & inOperand1
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewFunctionCallList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_astAutoLayoutViewFunctionCallList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_astAutoLayoutViewFunctionCallList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GALGAS_lstring & in_mFunctionName,
                                                                          const GALGAS_astAutoLayoutViewInstructionParameterList & in_mParameterList
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutViewFunctionCallList * p = NULL ;
  macroMyNew (p, cCollectionElement_astAutoLayoutViewFunctionCallList (in_mFunctionName,
                                                                       in_mParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_astAutoLayoutViewInstructionParameterList & inOperand1
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_astAutoLayoutViewFunctionCallList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::setter_append (GALGAS_astAutoLayoutViewFunctionCallList_2D_element inElement,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_astAutoLayoutViewFunctionCallList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                                     const GALGAS_astAutoLayoutViewInstructionParameterList inOperand1,
                                                                     const GALGAS_uint inInsertionIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_astAutoLayoutViewFunctionCallList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                                     GALGAS_astAutoLayoutViewInstructionParameterList & outOperand1,
                                                                     const GALGAS_uint inRemoveIndex,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_astAutoLayoutViewFunctionCallList * p = (cCollectionElement_astAutoLayoutViewFunctionCallList *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
      outOperand0 = p->mObject.mProperty_mFunctionName ;
      outOperand1 = p->mObject.mProperty_mParameterList ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::setter_popFirst (GALGAS_lstring & outOperand0,
                                                                GALGAS_astAutoLayoutViewInstructionParameterList & outOperand1,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewFunctionCallList * p = (cCollectionElement_astAutoLayoutViewFunctionCallList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::setter_popLast (GALGAS_lstring & outOperand0,
                                                               GALGAS_astAutoLayoutViewInstructionParameterList & outOperand1,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewFunctionCallList * p = (cCollectionElement_astAutoLayoutViewFunctionCallList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::method_first (GALGAS_lstring & outOperand0,
                                                             GALGAS_astAutoLayoutViewInstructionParameterList & outOperand1,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewFunctionCallList * p = (cCollectionElement_astAutoLayoutViewFunctionCallList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::method_last (GALGAS_lstring & outOperand0,
                                                            GALGAS_astAutoLayoutViewInstructionParameterList & outOperand1,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewFunctionCallList * p = (cCollectionElement_astAutoLayoutViewFunctionCallList *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
    outOperand0 = p->mObject.mProperty_mFunctionName ;
    outOperand1 = p->mObject.mProperty_mParameterList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astAutoLayoutViewFunctionCallList::add_operation (const GALGAS_astAutoLayoutViewFunctionCallList & inOperand,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutViewFunctionCallList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astAutoLayoutViewFunctionCallList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutViewFunctionCallList result = GALGAS_astAutoLayoutViewFunctionCallList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astAutoLayoutViewFunctionCallList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutViewFunctionCallList result = GALGAS_astAutoLayoutViewFunctionCallList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astAutoLayoutViewFunctionCallList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_astAutoLayoutViewFunctionCallList result = GALGAS_astAutoLayoutViewFunctionCallList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::plusAssign_operation (const GALGAS_astAutoLayoutViewFunctionCallList inOperand,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::setter_setMFunctionNameAtIndex (GALGAS_lstring inOperand,
                                                                               GALGAS_uint inIndex,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutViewFunctionCallList * p = (cCollectionElement_astAutoLayoutViewFunctionCallList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFunctionName = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astAutoLayoutViewFunctionCallList::getter_mFunctionNameAtIndex (const GALGAS_uint & inIndex,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewFunctionCallList * p = (cCollectionElement_astAutoLayoutViewFunctionCallList *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
    result = p->mObject.mProperty_mFunctionName ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutViewFunctionCallList::setter_setMParameterListAtIndex (GALGAS_astAutoLayoutViewInstructionParameterList inOperand,
                                                                                GALGAS_uint inIndex,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutViewFunctionCallList * p = (cCollectionElement_astAutoLayoutViewFunctionCallList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mParameterList = inOperand ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList GALGAS_astAutoLayoutViewFunctionCallList::getter_mParameterListAtIndex (const GALGAS_uint & inIndex,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_astAutoLayoutViewFunctionCallList * p = (cCollectionElement_astAutoLayoutViewFunctionCallList *) attributes.ptr () ;
  GALGAS_astAutoLayoutViewInstructionParameterList result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
    result = p->mObject.mProperty_mParameterList ;
  }
  return result ;
}



//----------------------------------------------------------------------------------------------------------------------

cEnumerator_astAutoLayoutViewFunctionCallList::cEnumerator_astAutoLayoutViewFunctionCallList (const GALGAS_astAutoLayoutViewFunctionCallList & inEnumeratedObject,
                                                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList_2D_element cEnumerator_astAutoLayoutViewFunctionCallList::current (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutViewFunctionCallList * p = (const cCollectionElement_astAutoLayoutViewFunctionCallList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
  return p->mObject ;
}


//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring cEnumerator_astAutoLayoutViewFunctionCallList::current_mFunctionName (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutViewFunctionCallList * p = (const cCollectionElement_astAutoLayoutViewFunctionCallList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
  return p->mObject.mProperty_mFunctionName ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList cEnumerator_astAutoLayoutViewFunctionCallList::current_mParameterList (LOCATION_ARGS) const {
  const cCollectionElement_astAutoLayoutViewFunctionCallList * p = (const cCollectionElement_astAutoLayoutViewFunctionCallList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
  return p->mObject.mProperty_mParameterList ;
}




//----------------------------------------------------------------------------------------------------------------------
//
//@astAutoLayoutViewFunctionCallList type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionCallList ("astAutoLayoutViewFunctionCallList",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAutoLayoutViewFunctionCallList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionCallList ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAutoLayoutViewFunctionCallList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAutoLayoutViewFunctionCallList (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astAutoLayoutViewFunctionCallList::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutViewFunctionCallList result ;
  const GALGAS_astAutoLayoutViewFunctionCallList * p = (const GALGAS_astAutoLayoutViewFunctionCallList *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astAutoLayoutViewFunctionCallList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewFunctionCallList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

cEnumAssociatedValues_tableValueBinding_tableValueBinding::cEnumAssociatedValues_tableValueBinding_tableValueBinding (const GALGAS_lstring & inAssociatedValue0
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

cEnumAssociatedValues_runActionDescriptor_action::cEnumAssociatedValues_runActionDescriptor_action (const GALGAS_lstring & inAssociatedValue0,
                                                                                                    const GALGAS_lstring & inAssociatedValue1
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

cEnumAssociatedValues_multipleBindingDescriptor_binding::cEnumAssociatedValues_multipleBindingDescriptor_binding (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAssociatedValue0
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

cEnumAssociatedValues_graphicController_defined::cEnumAssociatedValues_graphicController_defined (const GALGAS_lstring & inAssociatedValue0,
                                                                                                  const GALGAS_lstring & inAssociatedValue1
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
  public : GALGAS_regularBindingList_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_regularBindingList (const GALGAS_lstring & in_mBindingName,
                                                  const GALGAS_observablePropertyList & in_mObservablePropertyList,
                                                  const GALGAS_bindingOptionList & in_mBindingOptionList
                                                  COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_regularBindingList (const GALGAS_regularBindingList_2D_element & inElement COMMA_LOCATION_ARGS) ;

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
  if (isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_regularBindingList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::setter_append (GALGAS_regularBindingList_2D_element inElement,
                                               C_Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_regularBindingList (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                      const GALGAS_observablePropertyList inOperand1,
                                                      const GALGAS_bindingOptionList inOperand2,
                                                      const GALGAS_uint inInsertionIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_regularBindingList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingList::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                      GALGAS_observablePropertyList & outOperand1,
                                                      GALGAS_bindingOptionList & outOperand2,
                                                      const GALGAS_uint inRemoveIndex,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
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
//
//Abstract extension method '@astAbstractViewDeclaration check'
//
//----------------------------------------------------------------------------------------------------------------------

static TC_UniqueArray <extensionMethodSignature_astAbstractViewDeclaration_check> gExtensionMethodTable_astAbstractViewDeclaration_check ;

//----------------------------------------------------------------------------------------------------------------------

void enterExtensionMethod_check (const int32_t inClassIndex,
                                 extensionMethodSignature_astAbstractViewDeclaration_check inMethod) {
  gExtensionMethodTable_astAbstractViewDeclaration_check.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void freeExtensionMethod_astAbstractViewDeclaration_check (void) {
  gExtensionMethodTable_astAbstractViewDeclaration_check.free () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_astAbstractViewDeclaration_check (NULL,
                                                             freeExtensionMethod_astAbstractViewDeclaration_check) ;

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_check (const cPtr_astAbstractViewDeclaration * inObject,
                                const GALGAS_string constin_inViewName,
                                const GALGAS_autoLayoutViewDeclarationMap constin_inViewDeclarationMap,
                                const GALGAS_bool constin_inPreferences,
                                const GALGAS_propertyMap constin_inRootObservablePropertyMap,
                                const GALGAS_propertyMap constin_inPreferencesPropertyMap,
                                const GALGAS_semanticContext constin_inSemanticContext,
                                const GALGAS_propertyMap constin_inObservablePropertyMap,
                                const GALGAS_actionMap constin_inActionMap,
                                const GALGAS_string constin_inReceiverSwiftTypeName,
                                GALGAS_abstractViewGeneration & out_outGeneration,
                                C_Compiler * inCompiler
                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outGeneration.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_astAbstractViewDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    extensionMethodSignature_astAbstractViewDeclaration_check f = NULL ;
    if (classIndex < gExtensionMethodTable_astAbstractViewDeclaration_check.count ()) {
      f = gExtensionMethodTable_astAbstractViewDeclaration_check (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
      const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
      while ((NULL == f) && (NULL != p)) {
        if (p->mSlotID < gExtensionMethodTable_astAbstractViewDeclaration_check.count ()) {
          f = gExtensionMethodTable_astAbstractViewDeclaration_check (p->mSlotID COMMA_HERE) ;
        }
        p = p->mSuperclassDescriptor ;
      }
      gExtensionMethodTable_astAbstractViewDeclaration_check.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inViewName, constin_inViewDeclarationMap, constin_inPreferences, constin_inRootObservablePropertyMap, constin_inPreferencesPropertyMap, constin_inSemanticContext, constin_inObservablePropertyMap, constin_inActionMap, constin_inReceiverSwiftTypeName, out_outGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

