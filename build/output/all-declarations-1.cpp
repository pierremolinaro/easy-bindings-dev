#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-1.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_observablePropertyMap::cMapElement_observablePropertyMap (const GALGAS_lstring & inKey,
                                                                      const GALGAS_propertyKind & in_mKind,
                                                                      const GALGAS_string & in_mInverseRelationshipName,
                                                                      const GALGAS_actionMap & in_mActionMap,
                                                                      const GALGAS_bool & in_mCascade
                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mKind (in_mKind),
mProperty_mInverseRelationshipName (in_mInverseRelationshipName),
mProperty_mActionMap (in_mActionMap),
mProperty_mCascade (in_mCascade) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_observablePropertyMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mKind.isValid () && mProperty_mInverseRelationshipName.isValid () && mProperty_mActionMap.isValid () && mProperty_mCascade.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_observablePropertyMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_observablePropertyMap (mProperty_lkey, mProperty_mKind, mProperty_mInverseRelationshipName, mProperty_mActionMap, mProperty_mCascade COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_observablePropertyMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mKind" ":" ;
  mProperty_mKind.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mInverseRelationshipName" ":" ;
  mProperty_mInverseRelationshipName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mActionMap" ":" ;
  mProperty_mActionMap.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mCascade" ":" ;
  mProperty_mCascade.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_observablePropertyMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_observablePropertyMap * operand = (cMapElement_observablePropertyMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (operand->mProperty_mKind) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInverseRelationshipName.objectCompare (operand->mProperty_mInverseRelationshipName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionMap.objectCompare (operand->mProperty_mActionMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCascade.objectCompare (operand->mProperty_mCascade) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap::GALGAS_observablePropertyMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap::GALGAS_observablePropertyMap (const GALGAS_observablePropertyMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap & GALGAS_observablePropertyMap::operator = (const GALGAS_observablePropertyMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_observablePropertyMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_observablePropertyMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_observablePropertyMap::constructor_mapWithMapToOverride (const GALGAS_observablePropertyMap & inMapToOverride
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_observablePropertyMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_observablePropertyMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                        const GALGAS_propertyKind & inArgument0,
                                                        const GALGAS_string & inArgument1,
                                                        const GALGAS_actionMap & inArgument2,
                                                        const GALGAS_bool & inArgument3,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  cMapElement_observablePropertyMap * p = NULL ;
  macroMyNew (p, cMapElement_observablePropertyMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@observablePropertyMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::setter_insertKey (GALGAS_lstring inKey,
                                                     GALGAS_propertyKind inArgument0,
                                                     GALGAS_string inArgument1,
                                                     GALGAS_actionMap inArgument2,
                                                     GALGAS_bool inArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  cMapElement_observablePropertyMap * p = NULL ;
  macroMyNew (p, cMapElement_observablePropertyMap (inKey, inArgument0, inArgument1, inArgument2, inArgument3 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' property is already declared" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_observablePropertyMap_searchKey = "the '%K' property is not declared" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::method_searchKey (GALGAS_lstring inKey,
                                                     GALGAS_propertyKind & outArgument0,
                                                     GALGAS_string & outArgument1,
                                                     GALGAS_actionMap & outArgument2,
                                                     GALGAS_bool & outArgument3,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_observablePropertyMap_searchKey
                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    outArgument0 = p->mProperty_mKind ;
    outArgument1 = p->mProperty_mInverseRelationshipName ;
    outArgument2 = p->mProperty_mActionMap ;
    outArgument3 = p->mProperty_mCascade ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_observablePropertyMap_searchForInverseRelationship = "the destination entity does not define the '%K' relationship" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::method_searchForInverseRelationship (GALGAS_lstring inKey,
                                                                        GALGAS_propertyKind & outArgument0,
                                                                        GALGAS_string & outArgument1,
                                                                        GALGAS_actionMap & outArgument2,
                                                                        GALGAS_bool & outArgument3,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) performSearch (inKey,
                                                                                                           inCompiler,
                                                                                                           kSearchErrorMessage_observablePropertyMap_searchForInverseRelationship
                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    outArgument0 = p->mProperty_mKind ;
    outArgument1 = p->mProperty_mInverseRelationshipName ;
    outArgument2 = p->mProperty_mActionMap ;
    outArgument3 = p->mProperty_mCascade ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_observablePropertyMap::getter_mKindForKey (const GALGAS_string & inKey,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) attributes ;
  GALGAS_propertyKind result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    result = p->mProperty_mKind ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_observablePropertyMap::getter_mInverseRelationshipNameForKey (const GALGAS_string & inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) attributes ;
  GALGAS_string result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    result = p->mProperty_mInverseRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap GALGAS_observablePropertyMap::getter_mActionMapForKey (const GALGAS_string & inKey,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) attributes ;
  GALGAS_actionMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    result = p->mProperty_mActionMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_observablePropertyMap::getter_mCascadeForKey (const GALGAS_string & inKey,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) attributes ;
  GALGAS_bool result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    result = p->mProperty_mCascade ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::setter_setMKindForKey (GALGAS_propertyKind inAttributeValue,
                                                          GALGAS_string inKey,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_observablePropertyMap * p = (cMapElement_observablePropertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    p->mProperty_mKind = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::setter_setMInverseRelationshipNameForKey (GALGAS_string inAttributeValue,
                                                                             GALGAS_string inKey,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_observablePropertyMap * p = (cMapElement_observablePropertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    p->mProperty_mInverseRelationshipName = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::setter_setMActionMapForKey (GALGAS_actionMap inAttributeValue,
                                                               GALGAS_string inKey,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_observablePropertyMap * p = (cMapElement_observablePropertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    p->mProperty_mActionMap = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_observablePropertyMap::setter_setMCascadeForKey (GALGAS_bool inAttributeValue,
                                                             GALGAS_string inKey,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_observablePropertyMap * p = (cMapElement_observablePropertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
    p->mProperty_mCascade = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_observablePropertyMap * GALGAS_observablePropertyMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                     const GALGAS_string & inKey
                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_observablePropertyMap * result = (cMapElement_observablePropertyMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_observablePropertyMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_observablePropertyMap::cEnumerator_observablePropertyMap (const GALGAS_observablePropertyMap & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap_2D_element cEnumerator_observablePropertyMap::current (LOCATION_ARGS) const {
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
  return GALGAS_observablePropertyMap_2D_element (p->mProperty_lkey, p->mProperty_mKind, p->mProperty_mInverseRelationshipName, p->mProperty_mActionMap, p->mProperty_mCascade) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_observablePropertyMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind cEnumerator_observablePropertyMap::current_mKind (LOCATION_ARGS) const {
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
  return p->mProperty_mKind ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_observablePropertyMap::current_mInverseRelationshipName (LOCATION_ARGS) const {
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
  return p->mProperty_mInverseRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionMap cEnumerator_observablePropertyMap::current_mActionMap (LOCATION_ARGS) const {
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
  return p->mProperty_mActionMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_observablePropertyMap::current_mCascade (LOCATION_ARGS) const {
  const cMapElement_observablePropertyMap * p = (const cMapElement_observablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_observablePropertyMap) ;
  return p->mProperty_mCascade ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @observablePropertyMap type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyMap ("observablePropertyMap",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_observablePropertyMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_observablePropertyMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_observablePropertyMap::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyMap result ;
  const GALGAS_observablePropertyMap * p = (const GALGAS_observablePropertyMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_observablePropertyMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Class for element of '@outletDeclarationList' list                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_outletDeclarationList::cCollectionElement_outletDeclarationList (const GALGAS_outletDeclarationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletTypeName, inElement.mProperty_mOutletName, inElement.mProperty_mTableValueBindingDescriptor, inElement.mProperty_mRunDescriptor, inElement.mProperty_mEnabledBindingDescriptor, inElement.mProperty_mHiddenBindingDescriptor, inElement.mProperty_mRegularBindingList, inElement.mProperty_mGraphicController) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_outletDeclarationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_outletDeclarationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_outletDeclarationList (mObject.mProperty_mOutletTypeName, mObject.mProperty_mOutletName, mObject.mProperty_mTableValueBindingDescriptor, mObject.mProperty_mRunDescriptor, mObject.mProperty_mEnabledBindingDescriptor, mObject.mProperty_mHiddenBindingDescriptor, mObject.mProperty_mRegularBindingList, mObject.mProperty_mGraphicController COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_outletDeclarationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_outletDeclarationList * operand = (cCollectionElement_outletDeclarationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_outletDeclarationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList::GALGAS_outletDeclarationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList::GALGAS_outletDeclarationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletDeclarationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result = GALGAS_outletDeclarationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result = GALGAS_outletDeclarationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList GALGAS_outletDeclarationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result = GALGAS_outletDeclarationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletDeclarationList::plusAssign_operation (const GALGAS_outletDeclarationList inOperand,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_outletDeclarationList::cEnumerator_outletDeclarationList (const GALGAS_outletDeclarationList & inEnumeratedObject,
                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletDeclarationList_2D_element cEnumerator_outletDeclarationList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_outletDeclarationList::current_mOutletTypeName (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mOutletTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_outletDeclarationList::current_mOutletName (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableValueBinding cEnumerator_outletDeclarationList::current_mTableValueBindingDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mTableValueBindingDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_runActionDescriptor cEnumerator_outletDeclarationList::current_mRunDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mRunDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor cEnumerator_outletDeclarationList::current_mEnabledBindingDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mEnabledBindingDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor cEnumerator_outletDeclarationList::current_mHiddenBindingDescriptor (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mHiddenBindingDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList cEnumerator_outletDeclarationList::current_mRegularBindingList (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mRegularBindingList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphicController cEnumerator_outletDeclarationList::current_mGraphicController (LOCATION_ARGS) const {
  const cCollectionElement_outletDeclarationList * p = (const cCollectionElement_outletDeclarationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
  return p->mObject.mProperty_mGraphicController ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @outletDeclarationList type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletDeclarationList ("outletDeclarationList",
                                              NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletDeclarationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletDeclarationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_documentObservablePropertyMap::cMapElement_documentObservablePropertyMap (const GALGAS_lstring & inKey,
                                                                                      const GALGAS_observablePropertyMap & in_mObservablePropertyMap
                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mObservablePropertyMap (in_mObservablePropertyMap) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_documentObservablePropertyMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mObservablePropertyMap.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_documentObservablePropertyMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_documentObservablePropertyMap (mProperty_lkey, mProperty_mObservablePropertyMap COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_documentObservablePropertyMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mObservablePropertyMap" ":" ;
  mProperty_mObservablePropertyMap.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_documentObservablePropertyMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_documentObservablePropertyMap * operand = (cMapElement_documentObservablePropertyMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mObservablePropertyMap.objectCompare (operand->mProperty_mObservablePropertyMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentObservablePropertyMap::GALGAS_documentObservablePropertyMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentObservablePropertyMap::GALGAS_documentObservablePropertyMap (const GALGAS_documentObservablePropertyMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentObservablePropertyMap & GALGAS_documentObservablePropertyMap::operator = (const GALGAS_documentObservablePropertyMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentObservablePropertyMap GALGAS_documentObservablePropertyMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_documentObservablePropertyMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentObservablePropertyMap GALGAS_documentObservablePropertyMap::constructor_mapWithMapToOverride (const GALGAS_documentObservablePropertyMap & inMapToOverride
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_documentObservablePropertyMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentObservablePropertyMap GALGAS_documentObservablePropertyMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_documentObservablePropertyMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_documentObservablePropertyMap::addAssign_operation (const GALGAS_lstring & inKey,
                                                                const GALGAS_observablePropertyMap & inArgument0,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cMapElement_documentObservablePropertyMap * p = NULL ;
  macroMyNew (p, cMapElement_documentObservablePropertyMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "@documentObservablePropertyMap insert error: '%K' already in map" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_documentObservablePropertyMap::setter_insertKey (GALGAS_lstring inKey,
                                                             GALGAS_observablePropertyMap inArgument0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cMapElement_documentObservablePropertyMap * p = NULL ;
  macroMyNew (p, cMapElement_documentObservablePropertyMap (inKey, inArgument0 COMMA_HERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  const char * kInsertErrorMessage = "the '%K' document is already declared in %L" ;
  const char * kShadowErrorMessage = "" ;
  performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_documentObservablePropertyMap_searchKey = "there is no '%K' document" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_documentObservablePropertyMap::method_searchKey (GALGAS_lstring inKey,
                                                             GALGAS_observablePropertyMap & outArgument0,
                                                             C_Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  const cMapElement_documentObservablePropertyMap * p = (const cMapElement_documentObservablePropertyMap *) performSearch (inKey,
                                                                                                                           inCompiler,
                                                                                                                           kSearchErrorMessage_documentObservablePropertyMap_searchKey
                                                                                                                           COMMA_THERE) ;
  if (NULL == p) {
    outArgument0.drop () ;
  }else{
    macroValidSharedObject (p, cMapElement_documentObservablePropertyMap) ;
    outArgument0 = p->mProperty_mObservablePropertyMap ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap GALGAS_documentObservablePropertyMap::getter_mObservablePropertyMapForKey (const GALGAS_string & inKey,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;
  const cMapElement_documentObservablePropertyMap * p = (const cMapElement_documentObservablePropertyMap *) attributes ;
  GALGAS_observablePropertyMap result ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_documentObservablePropertyMap) ;
    result = p->mProperty_mObservablePropertyMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_documentObservablePropertyMap::setter_setMObservablePropertyMapForKey (GALGAS_observablePropertyMap inAttributeValue,
                                                                                   GALGAS_string inKey,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;
  cMapElement_documentObservablePropertyMap * p = (cMapElement_documentObservablePropertyMap *) attributes ;
  if (NULL != p) {
    macroValidSharedObject (p, cMapElement_documentObservablePropertyMap) ;
    p->mProperty_mObservablePropertyMap = inAttributeValue ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_documentObservablePropertyMap * GALGAS_documentObservablePropertyMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                     const GALGAS_string & inKey
                                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_documentObservablePropertyMap * result = (cMapElement_documentObservablePropertyMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_documentObservablePropertyMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_documentObservablePropertyMap::cEnumerator_documentObservablePropertyMap (const GALGAS_documentObservablePropertyMap & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentObservablePropertyMap_2D_element cEnumerator_documentObservablePropertyMap::current (LOCATION_ARGS) const {
  const cMapElement_documentObservablePropertyMap * p = (const cMapElement_documentObservablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_documentObservablePropertyMap) ;
  return GALGAS_documentObservablePropertyMap_2D_element (p->mProperty_lkey, p->mProperty_mObservablePropertyMap) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_documentObservablePropertyMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyMap cEnumerator_documentObservablePropertyMap::current_mObservablePropertyMap (LOCATION_ARGS) const {
  const cMapElement_documentObservablePropertyMap * p = (const cMapElement_documentObservablePropertyMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_documentObservablePropertyMap) ;
  return p->mProperty_mObservablePropertyMap ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @documentObservablePropertyMap type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_documentObservablePropertyMap ("documentObservablePropertyMap",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_documentObservablePropertyMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentObservablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_documentObservablePropertyMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_documentObservablePropertyMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_documentObservablePropertyMap GALGAS_documentObservablePropertyMap::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_documentObservablePropertyMap result ;
  const GALGAS_documentObservablePropertyMap * p = (const GALGAS_documentObservablePropertyMap *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_documentObservablePropertyMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("documentObservablePropertyMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_decoratedOutletMap::cMapElement_decoratedOutletMap (const GALGAS_lstring & inKey,
                                                                const GALGAS_string & in_mOutletTypeName
                                                                COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mOutletTypeName (in_mOutletTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_decoratedOutletMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletTypeName.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_decoratedOutletMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_decoratedOutletMap (mProperty_lkey, mProperty_mOutletTypeName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cMapElement_decoratedOutletMap::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mOutletTypeName" ":" ;
  mProperty_mOutletTypeName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cMapElement_decoratedOutletMap::compare (const cCollectionElement * inOperand) const {
  cMapElement_decoratedOutletMap * operand = (cMapElement_decoratedOutletMap *) inOperand ;
  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;
  if (kOperandEqual == result) {
    result = mProperty_mOutletTypeName.objectCompare (operand->mProperty_mOutletTypeName) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap::GALGAS_decoratedOutletMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap::GALGAS_decoratedOutletMap (const GALGAS_decoratedOutletMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap & GALGAS_decoratedOutletMap::operator = (const GALGAS_decoratedOutletMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap GALGAS_decoratedOutletMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_decoratedOutletMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap GALGAS_decoratedOutletMap::constructor_mapWithMapToOverride (const GALGAS_decoratedOutletMap & inMapToOverride
                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_decoratedOutletMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap GALGAS_decoratedOutletMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GALGAS_decoratedOutletMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_decoratedOutletMap_searchKey = "the '%K' outlet is not declared" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_decoratedOutletMap * GALGAS_decoratedOutletMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & inKey
                                                                                               COMMA_LOCATION_ARGS) {
  cMapElement_decoratedOutletMap * result = (cMapElement_decoratedOutletMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_decoratedOutletMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_decoratedOutletMap::cEnumerator_decoratedOutletMap (const GALGAS_decoratedOutletMap & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap_2D_element cEnumerator_decoratedOutletMap::current (LOCATION_ARGS) const {
  const cMapElement_decoratedOutletMap * p = (const cMapElement_decoratedOutletMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
  return GALGAS_decoratedOutletMap_2D_element (p->mProperty_lkey, p->mProperty_mOutletTypeName) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_decoratedOutletMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_decoratedOutletMap::current_mOutletTypeName (LOCATION_ARGS) const {
  const cMapElement_decoratedOutletMap * p = (const cMapElement_decoratedOutletMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_decoratedOutletMap) ;
  return p->mProperty_mOutletTypeName ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @decoratedOutletMap type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedOutletMap ("decoratedOutletMap",
                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_decoratedOutletMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedOutletMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_decoratedOutletMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedOutletMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Class for element of '@actionBindingListForGeneration' list                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_actionBindingListForGeneration::cCollectionElement_actionBindingListForGeneration (const GALGAS_string & in_mOutletName,
                                                                                                      const GALGAS_string & in_mTargetName,
                                                                                                      const GALGAS_string & in_mActionName,
                                                                                                      const GALGAS_string & in_mTargetTypeName
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletName, in_mTargetName, in_mActionName, in_mTargetTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_actionBindingListForGeneration::cCollectionElement_actionBindingListForGeneration (const GALGAS_actionBindingListForGeneration_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletName, inElement.mProperty_mTargetName, inElement.mProperty_mActionName, inElement.mProperty_mTargetTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_actionBindingListForGeneration::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_actionBindingListForGeneration::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_actionBindingListForGeneration (mObject.mProperty_mOutletName, mObject.mProperty_mTargetName, mObject.mProperty_mActionName, mObject.mProperty_mTargetTypeName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_actionBindingListForGeneration::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_actionBindingListForGeneration * operand = (cCollectionElement_actionBindingListForGeneration *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_actionBindingListForGeneration) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration::GALGAS_actionBindingListForGeneration (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration::GALGAS_actionBindingListForGeneration (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_actionBindingListForGeneration  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result = GALGAS_actionBindingListForGeneration::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result = GALGAS_actionBindingListForGeneration::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_actionBindingListForGeneration::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result = GALGAS_actionBindingListForGeneration::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_actionBindingListForGeneration::plusAssign_operation (const GALGAS_actionBindingListForGeneration inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_actionBindingListForGeneration::cEnumerator_actionBindingListForGeneration (const GALGAS_actionBindingListForGeneration & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration_2D_element cEnumerator_actionBindingListForGeneration::current (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_actionBindingListForGeneration::current_mOutletName (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject.mProperty_mOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_actionBindingListForGeneration::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject.mProperty_mTargetName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_actionBindingListForGeneration::current_mActionName (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject.mProperty_mActionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_actionBindingListForGeneration::current_mTargetTypeName (LOCATION_ARGS) const {
  const cCollectionElement_actionBindingListForGeneration * p = (const cCollectionElement_actionBindingListForGeneration *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
  return p->mObject.mProperty_mTargetTypeName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @actionBindingListForGeneration type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionBindingListForGeneration ("actionBindingListForGeneration",
                                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_actionBindingListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionBindingListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_actionBindingListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionBindingListForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Class for element of '@regularBindingsGenerationList' list                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_regularBindingsGenerationList::cCollectionElement_regularBindingsGenerationList (const GALGAS_string & in_mOutletName,
                                                                                                    const GALGAS_string & in_mBindingName,
                                                                                                    const GALGAS_boundObjectList & in_mBoundObjectList,
                                                                                                    const GALGAS_string & in_mBindingOptionsString
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletName, in_mBindingName, in_mBoundObjectList, in_mBindingOptionsString) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_regularBindingsGenerationList::cCollectionElement_regularBindingsGenerationList (const GALGAS_regularBindingsGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletName, inElement.mProperty_mBindingName, inElement.mProperty_mBoundObjectList, inElement.mProperty_mBindingOptionsString) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_regularBindingsGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_regularBindingsGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_regularBindingsGenerationList (mObject.mProperty_mOutletName, mObject.mProperty_mBindingName, mObject.mProperty_mBoundObjectList, mObject.mProperty_mBindingOptionsString COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_regularBindingsGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_regularBindingsGenerationList * operand = (cCollectionElement_regularBindingsGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_regularBindingsGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList::GALGAS_regularBindingsGenerationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList::GALGAS_regularBindingsGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_regularBindingsGenerationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result = GALGAS_regularBindingsGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result = GALGAS_regularBindingsGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_regularBindingsGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result = GALGAS_regularBindingsGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingsGenerationList::plusAssign_operation (const GALGAS_regularBindingsGenerationList inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_regularBindingsGenerationList::cEnumerator_regularBindingsGenerationList (const GALGAS_regularBindingsGenerationList & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList_2D_element cEnumerator_regularBindingsGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_regularBindingsGenerationList::current_mOutletName (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject.mProperty_mOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_regularBindingsGenerationList::current_mBindingName (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject.mProperty_mBindingName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_boundObjectList cEnumerator_regularBindingsGenerationList::current_mBoundObjectList (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject.mProperty_mBoundObjectList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_regularBindingsGenerationList::current_mBindingOptionsString (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingsGenerationList * p = (const cCollectionElement_regularBindingsGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
  return p->mObject.mProperty_mBindingOptionsString ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @regularBindingsGenerationList type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_regularBindingsGenerationList ("regularBindingsGenerationList",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_regularBindingsGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingsGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_regularBindingsGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularBindingsGenerationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Class for element of '@multipleBindingGenerationList' list                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_multipleBindingGenerationList::cCollectionElement_multipleBindingGenerationList (const GALGAS_string & in_mOutletName,
                                                                                                    const GALGAS_string & in_mBindingName,
                                                                                                    const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletName, in_mBindingName, in_mBoundObjectExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_multipleBindingGenerationList::cCollectionElement_multipleBindingGenerationList (const GALGAS_multipleBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletName, inElement.mProperty_mBindingName, inElement.mProperty_mBoundObjectExpression) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_multipleBindingGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_multipleBindingGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_multipleBindingGenerationList (mObject.mProperty_mOutletName, mObject.mProperty_mBindingName, mObject.mProperty_mBoundObjectExpression COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_multipleBindingGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_multipleBindingGenerationList * operand = (cCollectionElement_multipleBindingGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_multipleBindingGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList::GALGAS_multipleBindingGenerationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList::GALGAS_multipleBindingGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_multipleBindingGenerationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result = GALGAS_multipleBindingGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result = GALGAS_multipleBindingGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_multipleBindingGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result = GALGAS_multipleBindingGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingGenerationList::plusAssign_operation (const GALGAS_multipleBindingGenerationList inOperand,
                                                                 C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_multipleBindingGenerationList::cEnumerator_multipleBindingGenerationList (const GALGAS_multipleBindingGenerationList & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList_2D_element cEnumerator_multipleBindingGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_multipleBindingGenerationList * p = (const cCollectionElement_multipleBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_multipleBindingGenerationList::current_mOutletName (LOCATION_ARGS) const {
  const cCollectionElement_multipleBindingGenerationList * p = (const cCollectionElement_multipleBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
  return p->mObject.mProperty_mOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_multipleBindingGenerationList::current_mBindingName (LOCATION_ARGS) const {
  const cCollectionElement_multipleBindingGenerationList * p = (const cCollectionElement_multipleBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
  return p->mObject.mProperty_mBindingName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration cEnumerator_multipleBindingGenerationList::current_mBoundObjectExpression (LOCATION_ARGS) const {
  const cCollectionElement_multipleBindingGenerationList * p = (const cCollectionElement_multipleBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
  return p->mObject.mProperty_mBoundObjectExpression ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @multipleBindingGenerationList type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleBindingGenerationList ("multipleBindingGenerationList",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_multipleBindingGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_multipleBindingGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingGenerationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                             Class for element of '@tableViewBindingGenerationList' list                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_tableViewBindingGenerationList::cCollectionElement_tableViewBindingGenerationList (const GALGAS_string & in_mTableValueBindingOutletName,
                                                                                                      const GALGAS_string & in_mTableValueBindingControllerName
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTableValueBindingOutletName, in_mTableValueBindingControllerName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_tableViewBindingGenerationList::cCollectionElement_tableViewBindingGenerationList (const GALGAS_tableViewBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTableValueBindingOutletName, inElement.mProperty_mTableValueBindingControllerName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_tableViewBindingGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_tableViewBindingGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_tableViewBindingGenerationList (mObject.mProperty_mTableValueBindingOutletName, mObject.mProperty_mTableValueBindingControllerName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_tableViewBindingGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_tableViewBindingGenerationList * operand = (cCollectionElement_tableViewBindingGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_tableViewBindingGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList::GALGAS_tableViewBindingGenerationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList::GALGAS_tableViewBindingGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_tableViewBindingGenerationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result = GALGAS_tableViewBindingGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result = GALGAS_tableViewBindingGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_tableViewBindingGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result = GALGAS_tableViewBindingGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableViewBindingGenerationList::plusAssign_operation (const GALGAS_tableViewBindingGenerationList inOperand,
                                                                  C_Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_tableViewBindingGenerationList::cEnumerator_tableViewBindingGenerationList (const GALGAS_tableViewBindingGenerationList & inEnumeratedObject,
                                                                                        const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList_2D_element cEnumerator_tableViewBindingGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_tableViewBindingGenerationList * p = (const cCollectionElement_tableViewBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_tableViewBindingGenerationList::current_mTableValueBindingOutletName (LOCATION_ARGS) const {
  const cCollectionElement_tableViewBindingGenerationList * p = (const cCollectionElement_tableViewBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
  return p->mObject.mProperty_mTableValueBindingOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_tableViewBindingGenerationList::current_mTableValueBindingControllerName (LOCATION_ARGS) const {
  const cCollectionElement_tableViewBindingGenerationList * p = (const cCollectionElement_tableViewBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
  return p->mObject.mProperty_mTableValueBindingControllerName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        @tableViewBindingGenerationList type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewBindingGenerationList ("tableViewBindingGenerationList",
                                                       NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_tableViewBindingGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_tableViewBindingGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewBindingGenerationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Class for element of '@ebViewGraphicControllerBindingGenerationList' list                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_ebViewGraphicControllerBindingGenerationList::cCollectionElement_ebViewGraphicControllerBindingGenerationList (const GALGAS_string & in_mEBViewOutletName,
                                                                                                                                  const GALGAS_string & in_mArrayControllerControllerName
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEBViewOutletName, in_mArrayControllerControllerName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_ebViewGraphicControllerBindingGenerationList::cCollectionElement_ebViewGraphicControllerBindingGenerationList (const GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEBViewOutletName, inElement.mProperty_mArrayControllerControllerName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_ebViewGraphicControllerBindingGenerationList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_ebViewGraphicControllerBindingGenerationList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_ebViewGraphicControllerBindingGenerationList (mObject.mProperty_mEBViewOutletName, mObject.mProperty_mArrayControllerControllerName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_ebViewGraphicControllerBindingGenerationList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * operand = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList::GALGAS_ebViewGraphicControllerBindingGenerationList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList::GALGAS_ebViewGraphicControllerBindingGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_ebViewGraphicControllerBindingGenerationList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result = GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                                  C_Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result = GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_ebViewGraphicControllerBindingGenerationList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result = GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_ebViewGraphicControllerBindingGenerationList::plusAssign_operation (const GALGAS_ebViewGraphicControllerBindingGenerationList inOperand,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_ebViewGraphicControllerBindingGenerationList::cEnumerator_ebViewGraphicControllerBindingGenerationList (const GALGAS_ebViewGraphicControllerBindingGenerationList & inEnumeratedObject,
                                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element cEnumerator_ebViewGraphicControllerBindingGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (const cCollectionElement_ebViewGraphicControllerBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_ebViewGraphicControllerBindingGenerationList::current_mEBViewOutletName (LOCATION_ARGS) const {
  const cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (const cCollectionElement_ebViewGraphicControllerBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
  return p->mObject.mProperty_mEBViewOutletName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cEnumerator_ebViewGraphicControllerBindingGenerationList::current_mArrayControllerControllerName (LOCATION_ARGS) const {
  const cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (const cCollectionElement_ebViewGraphicControllerBindingGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
  return p->mObject.mProperty_mArrayControllerControllerName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 @ebViewGraphicControllerBindingGenerationList type                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList ("ebViewGraphicControllerBindingGenerationList",
                                                                     NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_ebViewGraphicControllerBindingGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_ebViewGraphicControllerBindingGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ebViewGraphicControllerBindingGenerationList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                               Class for element of '@storedArrayPropertyListAST' list                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

class cCollectionElement_storedArrayPropertyListAST : public cCollectionElement {
  public : GALGAS_storedArrayPropertyListAST_2D_element mObject ;

//--- Constructors
  public : cCollectionElement_storedArrayPropertyListAST (const GALGAS_lstring & in_mElementClassName,
                                                          const GALGAS_lstring & in_mStoredArrayPropertyName
                                                          COMMA_LOCATION_ARGS) ;
  public : cCollectionElement_storedArrayPropertyListAST (const GALGAS_storedArrayPropertyListAST_2D_element & inElement COMMA_LOCATION_ARGS) ;

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

cCollectionElement_storedArrayPropertyListAST::cCollectionElement_storedArrayPropertyListAST (const GALGAS_lstring & in_mElementClassName,
                                                                                              const GALGAS_lstring & in_mStoredArrayPropertyName
                                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElementClassName, in_mStoredArrayPropertyName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_storedArrayPropertyListAST::cCollectionElement_storedArrayPropertyListAST (const GALGAS_storedArrayPropertyListAST_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElementClassName, inElement.mProperty_mStoredArrayPropertyName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_storedArrayPropertyListAST::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_storedArrayPropertyListAST::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_storedArrayPropertyListAST (mObject.mProperty_mElementClassName, mObject.mProperty_mStoredArrayPropertyName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cCollectionElement_storedArrayPropertyListAST::description (C_String & ioString, const int32_t inIndentation) const {
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mElementClassName" ":" ;
  mObject.mProperty_mElementClassName.description (ioString, inIndentation) ;
  ioString << "\n" ;
  ioString.writeStringMultiple ("| ", inIndentation) ;
  ioString << "mStoredArrayPropertyName" ":" ;
  mObject.mProperty_mStoredArrayPropertyName.description (ioString, inIndentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_storedArrayPropertyListAST::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_storedArrayPropertyListAST * operand = (cCollectionElement_storedArrayPropertyListAST *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_storedArrayPropertyListAST) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST::GALGAS_storedArrayPropertyListAST (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST::GALGAS_storedArrayPropertyListAST (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST GALGAS_storedArrayPropertyListAST::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_storedArrayPropertyListAST  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST GALGAS_storedArrayPropertyListAST::constructor_listWithValue (const GALGAS_lstring & inOperand0,
                                                                                                const GALGAS_lstring & inOperand1
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_storedArrayPropertyListAST result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_storedArrayPropertyListAST (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GALGAS_storedArrayPropertyListAST::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GALGAS_lstring & in_mElementClassName,
                                                                   const GALGAS_lstring & in_mStoredArrayPropertyName
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_storedArrayPropertyListAST * p = NULL ;
  macroMyNew (p, cCollectionElement_storedArrayPropertyListAST (in_mElementClassName,
                                                                in_mStoredArrayPropertyName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST::addAssign_operation (const GALGAS_lstring & inOperand0,
                                                             const GALGAS_lstring & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_storedArrayPropertyListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST::setter_append (GALGAS_storedArrayPropertyListAST_2D_element inElement,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_storedArrayPropertyListAST (inElement COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST::setter_insertAtIndex (const GALGAS_lstring inOperand0,
                                                              const GALGAS_lstring inOperand1,
                                                              const GALGAS_uint inInsertionIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid () && inOperand0.isValid () && inOperand1.isValid ()) {
    cCollectionElement * p = NULL ;
    macroMyNew (p, cCollectionElement_storedArrayPropertyListAST (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST::setter_removeAtIndex (GALGAS_lstring & outOperand0,
                                                              GALGAS_lstring & outOperand1,
                                                              const GALGAS_uint inRemoveIndex,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_storedArrayPropertyListAST * p = (cCollectionElement_storedArrayPropertyListAST *) attributes.ptr () ;
    if (NULL == p) {
      outOperand0.drop () ;
      outOperand1.drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_storedArrayPropertyListAST) ;
      outOperand0 = p->mObject.mProperty_mElementClassName ;
      outOperand1 = p->mObject.mProperty_mStoredArrayPropertyName ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST::setter_popFirst (GALGAS_lstring & outOperand0,
                                                         GALGAS_lstring & outOperand1,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_storedArrayPropertyListAST * p = (cCollectionElement_storedArrayPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_storedArrayPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mElementClassName ;
    outOperand1 = p->mObject.mProperty_mStoredArrayPropertyName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST::setter_popLast (GALGAS_lstring & outOperand0,
                                                        GALGAS_lstring & outOperand1,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_storedArrayPropertyListAST * p = (cCollectionElement_storedArrayPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_storedArrayPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mElementClassName ;
    outOperand1 = p->mObject.mProperty_mStoredArrayPropertyName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST::method_first (GALGAS_lstring & outOperand0,
                                                      GALGAS_lstring & outOperand1,
                                                      C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_storedArrayPropertyListAST * p = (cCollectionElement_storedArrayPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_storedArrayPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mElementClassName ;
    outOperand1 = p->mObject.mProperty_mStoredArrayPropertyName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST::method_last (GALGAS_lstring & outOperand0,
                                                     GALGAS_lstring & outOperand1,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_storedArrayPropertyListAST * p = (cCollectionElement_storedArrayPropertyListAST *) attributes.ptr () ;
  if (NULL == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_storedArrayPropertyListAST) ;
    outOperand0 = p->mObject.mProperty_mElementClassName ;
    outOperand1 = p->mObject.mProperty_mStoredArrayPropertyName ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST GALGAS_storedArrayPropertyListAST::add_operation (const GALGAS_storedArrayPropertyListAST & inOperand,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_storedArrayPropertyListAST result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST GALGAS_storedArrayPropertyListAST::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_storedArrayPropertyListAST result = GALGAS_storedArrayPropertyListAST::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST GALGAS_storedArrayPropertyListAST::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_storedArrayPropertyListAST result = GALGAS_storedArrayPropertyListAST::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST GALGAS_storedArrayPropertyListAST::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_storedArrayPropertyListAST result = GALGAS_storedArrayPropertyListAST::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_storedArrayPropertyListAST::plusAssign_operation (const GALGAS_storedArrayPropertyListAST inOperand,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_storedArrayPropertyListAST::getter_mElementClassNameAtIndex (const GALGAS_uint & inIndex,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_storedArrayPropertyListAST * p = (cCollectionElement_storedArrayPropertyListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_storedArrayPropertyListAST) ;
    result = p->mObject.mProperty_mElementClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_storedArrayPropertyListAST::getter_mStoredArrayPropertyNameAtIndex (const GALGAS_uint & inIndex,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_storedArrayPropertyListAST * p = (cCollectionElement_storedArrayPropertyListAST *) attributes.ptr () ;
  GALGAS_lstring result ;
  if (NULL != p) {
    macroValidSharedObject (p, cCollectionElement_storedArrayPropertyListAST) ;
    result = p->mObject.mProperty_mStoredArrayPropertyName ;
  }
  return result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_storedArrayPropertyListAST::cEnumerator_storedArrayPropertyListAST (const GALGAS_storedArrayPropertyListAST & inEnumeratedObject,
                                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST_2D_element cEnumerator_storedArrayPropertyListAST::current (LOCATION_ARGS) const {
  const cCollectionElement_storedArrayPropertyListAST * p = (const cCollectionElement_storedArrayPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_storedArrayPropertyListAST) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_storedArrayPropertyListAST::current_mElementClassName (LOCATION_ARGS) const {
  const cCollectionElement_storedArrayPropertyListAST * p = (const cCollectionElement_storedArrayPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_storedArrayPropertyListAST) ;
  return p->mObject.mProperty_mElementClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_storedArrayPropertyListAST::current_mStoredArrayPropertyName (LOCATION_ARGS) const {
  const cCollectionElement_storedArrayPropertyListAST * p = (const cCollectionElement_storedArrayPropertyListAST *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_storedArrayPropertyListAST) ;
  return p->mObject.mProperty_mStoredArrayPropertyName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @storedArrayPropertyListAST type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storedArrayPropertyListAST ("storedArrayPropertyListAST",
                                                   NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_storedArrayPropertyListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storedArrayPropertyListAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_storedArrayPropertyListAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storedArrayPropertyListAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_storedArrayPropertyListAST GALGAS_storedArrayPropertyListAST::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_storedArrayPropertyListAST result ;
  const GALGAS_storedArrayPropertyListAST * p = (const GALGAS_storedArrayPropertyListAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storedArrayPropertyListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storedArrayPropertyListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_preferencesForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyListForGeneration.objectCompare (p->mProperty_mPropertyListForGeneration) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_preferencesForGeneration::GALGAS_preferencesForGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_preferencesForGeneration GALGAS_preferencesForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_preferencesForGeneration::constructor_new (GALGAS_propertyGenerationList::constructor_emptyList (HERE),
                                                           GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE),
                                                           GALGAS_multipleBindingGenerationList::constructor_emptyList (HERE),
                                                           GALGAS_actionBindingListForGeneration::constructor_emptyList (HERE),
                                                           GALGAS_decoratedOutletMap::constructor_emptyMap (HERE),
                                                           GALGAS_externSwiftFunctionList::constructor_emptyList (HERE),
                                                           GALGAS_tableViewBindingGenerationList::constructor_emptyList (HERE),
                                                           GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (HERE)
                                                           COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_preferencesForGeneration::GALGAS_preferencesForGeneration (const cPtr_preferencesForGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_preferencesForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_preferencesForGeneration GALGAS_preferencesForGeneration::constructor_new (const GALGAS_propertyGenerationList & inAttribute_mPropertyListForGeneration,
                                                                                  const GALGAS_regularBindingsGenerationList & inAttribute_mRegularBindingsGenerationList,
                                                                                  const GALGAS_multipleBindingGenerationList & inAttribute_mMultipleBindingGenerationList,
                                                                                  const GALGAS_actionBindingListForGeneration & inAttribute_mActionBindingListForGeneration,
                                                                                  const GALGAS_decoratedOutletMap & inAttribute_mOutletMap,
                                                                                  const GALGAS_externSwiftFunctionList & inAttribute_mExternSwiftFunctionList,
                                                                                  const GALGAS_tableViewBindingGenerationList & inAttribute_mTableViewBindingGenerationList,
                                                                                  const GALGAS_ebViewGraphicControllerBindingGenerationList & inAttribute_mEBViewBindingGenerationList
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_preferencesForGeneration result ;
  if (inAttribute_mPropertyListForGeneration.isValid () && inAttribute_mRegularBindingsGenerationList.isValid () && inAttribute_mMultipleBindingGenerationList.isValid () && inAttribute_mActionBindingListForGeneration.isValid () && inAttribute_mOutletMap.isValid () && inAttribute_mExternSwiftFunctionList.isValid () && inAttribute_mTableViewBindingGenerationList.isValid () && inAttribute_mEBViewBindingGenerationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_preferencesForGeneration (inAttribute_mPropertyListForGeneration, inAttribute_mRegularBindingsGenerationList, inAttribute_mMultipleBindingGenerationList, inAttribute_mActionBindingListForGeneration, inAttribute_mOutletMap, inAttribute_mExternSwiftFunctionList, inAttribute_mTableViewBindingGenerationList, inAttribute_mEBViewBindingGenerationList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList GALGAS_preferencesForGeneration::getter_mPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mPropertyListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList cPtr_preferencesForGeneration::getter_mPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList GALGAS_preferencesForGeneration::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_regularBindingsGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mRegularBindingsGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingsGenerationList cPtr_preferencesForGeneration::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularBindingsGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList GALGAS_preferencesForGeneration::getter_mMultipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_multipleBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mMultipleBindingGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingGenerationList cPtr_preferencesForGeneration::getter_mMultipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMultipleBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration GALGAS_preferencesForGeneration::getter_mActionBindingListForGeneration (UNUSED_LOCATION_ARGS) const {
  GALGAS_actionBindingListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mActionBindingListForGeneration ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_actionBindingListForGeneration cPtr_preferencesForGeneration::getter_mActionBindingListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionBindingListForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap GALGAS_preferencesForGeneration::getter_mOutletMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_decoratedOutletMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mOutletMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_decoratedOutletMap cPtr_preferencesForGeneration::getter_mOutletMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList GALGAS_preferencesForGeneration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftFunctionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mExternSwiftFunctionList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftFunctionList cPtr_preferencesForGeneration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftFunctionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList GALGAS_preferencesForGeneration::getter_mTableViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_tableViewBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mTableViewBindingGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableViewBindingGenerationList cPtr_preferencesForGeneration::getter_mTableViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableViewBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_preferencesForGeneration::getter_mEBViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_ebViewGraphicControllerBindingGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_preferencesForGeneration * p = (const cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    result = p->mProperty_mEBViewBindingGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_ebViewGraphicControllerBindingGenerationList cPtr_preferencesForGeneration::getter_mEBViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEBViewBindingGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @preferencesForGeneration class                                  *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_preferencesForGeneration::cPtr_preferencesForGeneration (const GALGAS_propertyGenerationList & in_mPropertyListForGeneration,
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
mProperty_mRegularBindingsGenerationList (in_mRegularBindingsGenerationList),
mProperty_mMultipleBindingGenerationList (in_mMultipleBindingGenerationList),
mProperty_mActionBindingListForGeneration (in_mActionBindingListForGeneration),
mProperty_mOutletMap (in_mOutletMap),
mProperty_mExternSwiftFunctionList (in_mExternSwiftFunctionList),
mProperty_mTableViewBindingGenerationList (in_mTableViewBindingGenerationList),
mProperty_mEBViewBindingGenerationList (in_mEBViewBindingGenerationList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_preferencesForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_preferencesForGeneration ;
}

void cPtr_preferencesForGeneration::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@preferencesForGeneration:" ;
  mProperty_mPropertyListForGeneration.description (ioString, inIndentation+1) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_preferencesForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_preferencesForGeneration (mProperty_mPropertyListForGeneration, mProperty_mRegularBindingsGenerationList, mProperty_mMultipleBindingGenerationList, mProperty_mActionBindingListForGeneration, mProperty_mOutletMap, mProperty_mExternSwiftFunctionList, mProperty_mTableViewBindingGenerationList, mProperty_mEBViewBindingGenerationList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @preferencesForGeneration type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_preferencesForGeneration ("preferencesForGeneration",
                                                 & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Extension method '@outletClassDeclarationListEX buildOutletClassMap'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void extensionMethod_buildOutletClassMap (const GALGAS_outletClassDeclarationListEX inObject,
                                          GALGAS_outletClassMap & ioArgument_ioOutletClassMap,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationListEX var_remainingList_5148 = GALGAS_outletClassDeclarationListEX::constructor_emptyList (SOURCE_FILE ("outlet-class.galgas", 166)) ;
  const GALGAS_outletClassDeclarationListEX temp_0 = inObject ;
  cEnumerator_outletClassDeclarationListEX enumerator_5170 (temp_0, kENUMERATION_UP) ;
  while (enumerator_5170.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsEqual, enumerator_5170.current_mSuperClassName (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        ioArgument_ioOutletClassMap.setter_insertKey (enumerator_5170.current_mOutletClassName (HERE), GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("outlet-class.galgas", 171)), enumerator_5170.current_mHasRunAction (HERE), enumerator_5170.current_mHandlesTableValueBinding (HERE), enumerator_5170.current_mHasEnabled (HERE), enumerator_5170.current_mHasHidden (HERE), enumerator_5170.current_mHandlesGraphicControllerBinding (HERE), enumerator_5170.current_mUserDefined (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 169)) ;
        }
      }
    }
    if (kBoolFalse == test_1) {
      var_remainingList_5148.addAssign_operation (enumerator_5170.current_mUserDefined (HERE), enumerator_5170.current_mOutletClassName (HERE), enumerator_5170.current_mSuperClassName (HERE), enumerator_5170.current_mHasRunAction (HERE), enumerator_5170.current_mHasEnabled (HERE), enumerator_5170.current_mHandlesTableValueBinding (HERE), enumerator_5170.current_mHandlesGraphicControllerBinding (HERE), enumerator_5170.current_mHasHidden (HERE)  COMMA_SOURCE_FILE ("outlet-class.galgas", 180)) ;
    }
    enumerator_5170.gotoNextObject () ;
  }
  GALGAS_bool var_continue_5822 = GALGAS_bool (true) ;
  if (var_remainingList_5148.getter_length (SOURCE_FILE ("outlet-class.galgas", 193)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 193)).isValid ()) {
    uint32_t variant_5836 = var_remainingList_5148.getter_length (SOURCE_FILE ("outlet-class.galgas", 193)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 193)).uintValue () ;
    bool loop_5836 = true ;
    while (loop_5836) {
      loop_5836 = GALGAS_bool (kIsStrictSup, var_remainingList_5148.getter_length (SOURCE_FILE ("outlet-class.galgas", 193)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (var_continue_5822 COMMA_SOURCE_FILE ("outlet-class.galgas", 193)).isValid () ;
      if (loop_5836) {
        loop_5836 = GALGAS_bool (kIsStrictSup, var_remainingList_5148.getter_length (SOURCE_FILE ("outlet-class.galgas", 193)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (var_continue_5822 COMMA_SOURCE_FILE ("outlet-class.galgas", 193)).boolValue () ;
      }
      if (loop_5836 && (0 == variant_5836)) {
        loop_5836 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("outlet-class.galgas", 193)) ;
      }
      if (loop_5836) {
        variant_5836 -- ;
        GALGAS_outletClassDeclarationListEX var_currentList_5934 = var_remainingList_5148 ;
        var_remainingList_5148 = GALGAS_outletClassDeclarationListEX::constructor_emptyList (SOURCE_FILE ("outlet-class.galgas", 195)) ;
        var_continue_5822 = GALGAS_bool (false) ;
        cEnumerator_outletClassDeclarationListEX enumerator_6020 (var_currentList_5934, kENUMERATION_UP) ;
        while (enumerator_6020.hasCurrentObject ()) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = ioArgument_ioOutletClassMap.getter_hasKey (enumerator_6020.current_mSuperClassName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("outlet-class.galgas", 198)).boolEnum () ;
            if (kBoolTrue == test_2) {
              GALGAS_bool var_hasRunAction_6191 ;
              GALGAS_bool var_handlesTableValueBinding_6231 ;
              GALGAS_bool var_hasEnabled_6257 ;
              GALGAS_bool var_hasHidden_6282 ;
              GALGAS_bool var_handlesGraphicControllerBinding_6329 ;
              GALGAS_lstring joker_6162 ; // Joker input parameter
              GALGAS_bool joker_6341 ; // Joker input parameter
              ioArgument_ioOutletClassMap.method_searchKey (enumerator_6020.current_mSuperClassName (HERE), joker_6162, var_hasRunAction_6191, var_handlesTableValueBinding_6231, var_hasEnabled_6257, var_hasHidden_6282, var_handlesGraphicControllerBinding_6329, joker_6341, inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 199)) ;
              enumGalgasBool test_3 = kBoolTrue ;
              if (kBoolTrue == test_3) {
                test_3 = enumerator_6020.current_mHasRunAction (HERE).operator_and (var_hasRunAction_6191 COMMA_SOURCE_FILE ("outlet-class.galgas", 209)).boolEnum () ;
                if (kBoolTrue == test_3) {
                  TC_Array <C_FixItDescription> fixItArray4 ;
                  inCompiler->emitSemanticError (enumerator_6020.current_mOutletClassName (HERE).getter_location (SOURCE_FILE ("outlet-class.galgas", 210)), GALGAS_string ("$run binding already defined in superclass"), fixItArray4  COMMA_SOURCE_FILE ("outlet-class.galgas", 210)) ;
                }
              }
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = enumerator_6020.current_mHandlesTableValueBinding (HERE).operator_and (var_handlesTableValueBinding_6231 COMMA_SOURCE_FILE ("outlet-class.galgas", 212)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  TC_Array <C_FixItDescription> fixItArray6 ;
                  inCompiler->emitSemanticError (enumerator_6020.current_mOutletClassName (HERE).getter_location (SOURCE_FILE ("outlet-class.galgas", 213)), GALGAS_string ("$tableview binding already defined in superclass"), fixItArray6  COMMA_SOURCE_FILE ("outlet-class.galgas", 213)) ;
                }
              }
              enumGalgasBool test_7 = kBoolTrue ;
              if (kBoolTrue == test_7) {
                test_7 = enumerator_6020.current_mHasEnabled (HERE).operator_and (var_hasEnabled_6257 COMMA_SOURCE_FILE ("outlet-class.galgas", 215)).boolEnum () ;
                if (kBoolTrue == test_7) {
                  TC_Array <C_FixItDescription> fixItArray8 ;
                  inCompiler->emitSemanticError (enumerator_6020.current_mOutletClassName (HERE).getter_location (SOURCE_FILE ("outlet-class.galgas", 216)), GALGAS_string ("$enabled binding already defined in superclass"), fixItArray8  COMMA_SOURCE_FILE ("outlet-class.galgas", 216)) ;
                }
              }
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = enumerator_6020.current_mHasHidden (HERE).operator_and (var_hasHidden_6282 COMMA_SOURCE_FILE ("outlet-class.galgas", 218)).boolEnum () ;
                if (kBoolTrue == test_9) {
                  TC_Array <C_FixItDescription> fixItArray10 ;
                  inCompiler->emitSemanticError (enumerator_6020.current_mOutletClassName (HERE).getter_location (SOURCE_FILE ("outlet-class.galgas", 219)), GALGAS_string ("$hidden binding already defined in superclass"), fixItArray10  COMMA_SOURCE_FILE ("outlet-class.galgas", 219)) ;
                }
              }
              enumGalgasBool test_11 = kBoolTrue ;
              if (kBoolTrue == test_11) {
                test_11 = enumerator_6020.current_mHandlesGraphicControllerBinding (HERE).operator_and (var_handlesGraphicControllerBinding_6329 COMMA_SOURCE_FILE ("outlet-class.galgas", 221)).boolEnum () ;
                if (kBoolTrue == test_11) {
                  TC_Array <C_FixItDescription> fixItArray12 ;
                  inCompiler->emitSemanticError (enumerator_6020.current_mOutletClassName (HERE).getter_location (SOURCE_FILE ("outlet-class.galgas", 222)), GALGAS_string ("$graphicControler binding already defined in superclass"), fixItArray12  COMMA_SOURCE_FILE ("outlet-class.galgas", 222)) ;
                }
              }
              {
              ioArgument_ioOutletClassMap.setter_insertKey (enumerator_6020.current_mOutletClassName (HERE), enumerator_6020.current_mSuperClassName (HERE), enumerator_6020.current_mHasRunAction (HERE).operator_or (var_hasRunAction_6191 COMMA_SOURCE_FILE ("outlet-class.galgas", 227)), enumerator_6020.current_mHandlesTableValueBinding (HERE).operator_or (var_handlesTableValueBinding_6231 COMMA_SOURCE_FILE ("outlet-class.galgas", 228)), enumerator_6020.current_mHasEnabled (HERE).operator_or (var_hasEnabled_6257 COMMA_SOURCE_FILE ("outlet-class.galgas", 229)), enumerator_6020.current_mHasHidden (HERE).operator_or (var_hasHidden_6282 COMMA_SOURCE_FILE ("outlet-class.galgas", 230)), enumerator_6020.current_mHandlesGraphicControllerBinding (HERE).operator_or (var_handlesGraphicControllerBinding_6329 COMMA_SOURCE_FILE ("outlet-class.galgas", 231)), enumerator_6020.current_mUserDefined (HERE), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas", 224)) ;
              }
            }
          }
          if (kBoolFalse == test_2) {
            var_continue_5822 = GALGAS_bool (true) ;
            var_remainingList_5148.addAssign_operation (enumerator_6020.current_mUserDefined (HERE), enumerator_6020.current_mOutletClassName (HERE), enumerator_6020.current_mSuperClassName (HERE), enumerator_6020.current_mHasRunAction (HERE), enumerator_6020.current_mHasEnabled (HERE), enumerator_6020.current_mHandlesTableValueBinding (HERE), enumerator_6020.current_mHandlesGraphicControllerBinding (HERE), enumerator_6020.current_mHasHidden (HERE)  COMMA_SOURCE_FILE ("outlet-class.galgas", 236)) ;
          }
          enumerator_6020.gotoNextObject () ;
        }
      }
    }
  }
  cEnumerator_outletClassDeclarationListEX enumerator_7939 (var_remainingList_5148, kENUMERATION_UP) ;
  while (enumerator_7939.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray13 ;
    inCompiler->emitSemanticError (enumerator_7939.current_mSuperClassName (HERE).getter_location (SOURCE_FILE ("outlet-class.galgas", 250)), GALGAS_string ("undefined outlet class"), fixItArray13  COMMA_SOURCE_FILE ("outlet-class.galgas", 250)) ;
    enumerator_7939.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                              Class for element of '@controllerBindingOptionList' list                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_controllerBindingOptionList::cCollectionElement_controllerBindingOptionList (const GALGAS_lstring & in_mOptionName,
                                                                                                const GALGAS_lstring & in_mOptionTypeName
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionName, in_mOptionTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_controllerBindingOptionList::cCollectionElement_controllerBindingOptionList (const GALGAS_controllerBindingOptionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionName, inElement.mProperty_mOptionTypeName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_controllerBindingOptionList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_controllerBindingOptionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_controllerBindingOptionList (mObject.mProperty_mOptionName, mObject.mProperty_mOptionTypeName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_controllerBindingOptionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controllerBindingOptionList * operand = (cCollectionElement_controllerBindingOptionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controllerBindingOptionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList::GALGAS_controllerBindingOptionList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList::GALGAS_controllerBindingOptionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_controllerBindingOptionList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionList result = GALGAS_controllerBindingOptionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionList result = GALGAS_controllerBindingOptionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList GALGAS_controllerBindingOptionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionList result = GALGAS_controllerBindingOptionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionList::plusAssign_operation (const GALGAS_controllerBindingOptionList inOperand,
                                                               C_Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_controllerBindingOptionList::cEnumerator_controllerBindingOptionList (const GALGAS_controllerBindingOptionList & inEnumeratedObject,
                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionList_2D_element cEnumerator_controllerBindingOptionList::current (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionList * p = (const cCollectionElement_controllerBindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_controllerBindingOptionList::current_mOptionName (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionList * p = (const cCollectionElement_controllerBindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
  return p->mObject.mProperty_mOptionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_controllerBindingOptionList::current_mOptionTypeName (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionList * p = (const cCollectionElement_controllerBindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionList) ;
  return p->mObject.mProperty_mOptionTypeName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @controllerBindingOptionList type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controllerBindingOptionList ("controllerBindingOptionList",
                                                    NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controllerBindingOptionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controllerBindingOptionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controllerBindingOptionList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Class for element of '@outletClassBindingSpecificationModelList' list                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_outletClassBindingSpecificationModelList::cCollectionElement_outletClassBindingSpecificationModelList (const GALGAS_lstring & in_mModelTypeName,
                                                                                                                          const GALGAS_bool & in_mModelShouldBeWritableProperty
                                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mModelTypeName, in_mModelShouldBeWritableProperty) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_outletClassBindingSpecificationModelList::cCollectionElement_outletClassBindingSpecificationModelList (const GALGAS_outletClassBindingSpecificationModelList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mModelTypeName, inElement.mProperty_mModelShouldBeWritableProperty) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_outletClassBindingSpecificationModelList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_outletClassBindingSpecificationModelList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_outletClassBindingSpecificationModelList (mObject.mProperty_mModelTypeName, mObject.mProperty_mModelShouldBeWritableProperty COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_outletClassBindingSpecificationModelList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_outletClassBindingSpecificationModelList * operand = (cCollectionElement_outletClassBindingSpecificationModelList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_outletClassBindingSpecificationModelList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList::GALGAS_outletClassBindingSpecificationModelList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList::GALGAS_outletClassBindingSpecificationModelList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassBindingSpecificationModelList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationModelList result = GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationModelList result = GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationModelList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GALGAS_outletClassBindingSpecificationModelList result = GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletClassBindingSpecificationModelList::plusAssign_operation (const GALGAS_outletClassBindingSpecificationModelList inOperand,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_outletClassBindingSpecificationModelList::cEnumerator_outletClassBindingSpecificationModelList (const GALGAS_outletClassBindingSpecificationModelList & inEnumeratedObject,
                                                                                                            const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletClassBindingSpecificationModelList_2D_element cEnumerator_outletClassBindingSpecificationModelList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationModelList * p = (const cCollectionElement_outletClassBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_outletClassBindingSpecificationModelList::current_mModelTypeName (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationModelList * p = (const cCollectionElement_outletClassBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
  return p->mObject.mProperty_mModelTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_outletClassBindingSpecificationModelList::current_mModelShouldBeWritableProperty (LOCATION_ARGS) const {
  const cCollectionElement_outletClassBindingSpecificationModelList * p = (const cCollectionElement_outletClassBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletClassBindingSpecificationModelList) ;
  return p->mObject.mProperty_mModelShouldBeWritableProperty ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   @outletClassBindingSpecificationModelList type                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList ("outletClassBindingSpecificationModelList",
                                                                 NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletClassBindingSpecificationModelList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletClassBindingSpecificationModelList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassBindingSpecificationModelList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_outletBindingSpecificationMap::cMapElement_outletBindingSpecificationMap (const GALGAS_lstring & inKey,
                                                                                      const GALGAS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                                                      const GALGAS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionList
                                                                                      COMMA_LOCATION_ARGS) :
cMapElement (inKey COMMA_THERE),
mProperty_mOutletBindingSpecificationModelList (in_mOutletBindingSpecificationModelList),
mProperty_mControllerBindingOptionList (in_mControllerBindingOptionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cMapElement_outletBindingSpecificationMap::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletBindingSpecificationModelList.isValid () && mProperty_mControllerBindingOptionList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement * cMapElement_outletBindingSpecificationMap::copy (void) {
  cMapElement * result = NULL ;
  macroMyNew (result, cMapElement_outletBindingSpecificationMap (mProperty_lkey, mProperty_mOutletBindingSpecificationModelList, mProperty_mControllerBindingOptionList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap::GALGAS_outletBindingSpecificationMap (void) :
AC_GALGAS_map () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap::GALGAS_outletBindingSpecificationMap (const GALGAS_outletBindingSpecificationMap & inSource) :
AC_GALGAS_map (inSource) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap & GALGAS_outletBindingSpecificationMap::operator = (const GALGAS_outletBindingSpecificationMap & inSource) {
  * ((AC_GALGAS_map *) this) = inSource ;
  return * this ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap GALGAS_outletBindingSpecificationMap::constructor_emptyMap (LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationMap result ;
  result.makeNewEmptyMap (THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap GALGAS_outletBindingSpecificationMap::constructor_mapWithMapToOverride (const GALGAS_outletBindingSpecificationMap & inMapToOverride
                                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationMap result ;
  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap GALGAS_outletBindingSpecificationMap::getter_overriddenMap (C_Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GALGAS_outletBindingSpecificationMap result ;
  getOverridenMap (result, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const char * kSearchErrorMessage_outletBindingSpecificationMap_searchKey = "there is no '%K' binding" ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cMapElement_outletBindingSpecificationMap * GALGAS_outletBindingSpecificationMap::readWriteAccessForWithInstruction (C_Compiler * inCompiler,
                                                                                                                     const GALGAS_string & inKey
                                                                                                                     COMMA_LOCATION_ARGS) {
  cMapElement_outletBindingSpecificationMap * result = (cMapElement_outletBindingSpecificationMap *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;
  macroNullOrValidSharedObject (result, cMapElement_outletBindingSpecificationMap) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_outletBindingSpecificationMap::cEnumerator_outletBindingSpecificationMap (const GALGAS_outletBindingSpecificationMap & inEnumeratedObject,
                                                                                      const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationMap_2D_element cEnumerator_outletBindingSpecificationMap::current (LOCATION_ARGS) const {
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
  return GALGAS_outletBindingSpecificationMap_2D_element (p->mProperty_lkey, p->mProperty_mOutletBindingSpecificationModelList, p->mProperty_mControllerBindingOptionList) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_outletBindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement) ;
  return p->mProperty_lkey ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList cEnumerator_outletBindingSpecificationMap::current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const {
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
  return p->mProperty_mOutletBindingSpecificationModelList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList cEnumerator_outletBindingSpecificationMap::current_mControllerBindingOptionList (LOCATION_ARGS) const {
  const cMapElement_outletBindingSpecificationMap * p = (const cMapElement_outletBindingSpecificationMap *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cMapElement_outletBindingSpecificationMap) ;
  return p->mProperty_mControllerBindingOptionList ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @outletBindingSpecificationMap type                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingSpecificationMap ("outletBindingSpecificationMap",
                                                      NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletBindingSpecificationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletBindingSpecificationMap::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingSpecificationMap (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Class for element of '@outletBindingSpecificationModelList' list                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_outletBindingSpecificationModelList::cCollectionElement_outletBindingSpecificationModelList (const GALGAS_typeKind & in_mModelType,
                                                                                                                const GALGAS_bool & in_mModelShouldBeWritableProperty
                                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mModelType, in_mModelShouldBeWritableProperty) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_outletBindingSpecificationModelList::cCollectionElement_outletBindingSpecificationModelList (const GALGAS_outletBindingSpecificationModelList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mModelType, inElement.mProperty_mModelShouldBeWritableProperty) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_outletBindingSpecificationModelList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_outletBindingSpecificationModelList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_outletBindingSpecificationModelList (mObject.mProperty_mModelType, mObject.mProperty_mModelShouldBeWritableProperty COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_outletBindingSpecificationModelList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_outletBindingSpecificationModelList * operand = (cCollectionElement_outletBindingSpecificationModelList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_outletBindingSpecificationModelList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList::GALGAS_outletBindingSpecificationModelList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList::GALGAS_outletBindingSpecificationModelList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletBindingSpecificationModelList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_outletBindingSpecificationModelList result = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_outletBindingSpecificationModelList result = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationModelList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_outletBindingSpecificationModelList result = GALGAS_outletBindingSpecificationModelList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_outletBindingSpecificationModelList::plusAssign_operation (const GALGAS_outletBindingSpecificationModelList inOperand,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_outletBindingSpecificationModelList::cEnumerator_outletBindingSpecificationModelList (const GALGAS_outletBindingSpecificationModelList & inEnumeratedObject,
                                                                                                  const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_outletBindingSpecificationModelList_2D_element cEnumerator_outletBindingSpecificationModelList::current (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingSpecificationModelList * p = (const cCollectionElement_outletBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cEnumerator_outletBindingSpecificationModelList::current_mModelType (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingSpecificationModelList * p = (const cCollectionElement_outletBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
  return p->mObject.mProperty_mModelType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cEnumerator_outletBindingSpecificationModelList::current_mModelShouldBeWritableProperty (LOCATION_ARGS) const {
  const cCollectionElement_outletBindingSpecificationModelList * p = (const cCollectionElement_outletBindingSpecificationModelList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_outletBindingSpecificationModelList) ;
  return p->mObject.mProperty_mModelShouldBeWritableProperty ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      @outletBindingSpecificationModelList type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingSpecificationModelList ("outletBindingSpecificationModelList",
                                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_outletBindingSpecificationModelList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationModelList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_outletBindingSpecificationModelList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingSpecificationModelList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Class for element of '@controllerBindingOptionDecoratedList' list                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_controllerBindingOptionDecoratedList::cCollectionElement_controllerBindingOptionDecoratedList (const GALGAS_typeKind & in_mOptionType,
                                                                                                                  const GALGAS_lstring & in_mOptionName
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionType, in_mOptionName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_controllerBindingOptionDecoratedList::cCollectionElement_controllerBindingOptionDecoratedList (const GALGAS_controllerBindingOptionDecoratedList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionType, inElement.mProperty_mOptionName) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_controllerBindingOptionDecoratedList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_controllerBindingOptionDecoratedList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_controllerBindingOptionDecoratedList (mObject.mProperty_mOptionType, mObject.mProperty_mOptionName COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_controllerBindingOptionDecoratedList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_controllerBindingOptionDecoratedList * operand = (cCollectionElement_controllerBindingOptionDecoratedList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_controllerBindingOptionDecoratedList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList::GALGAS_controllerBindingOptionDecoratedList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList::GALGAS_controllerBindingOptionDecoratedList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_controllerBindingOptionDecoratedList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionDecoratedList result = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionDecoratedList result = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList GALGAS_controllerBindingOptionDecoratedList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GALGAS_controllerBindingOptionDecoratedList result = GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_controllerBindingOptionDecoratedList::plusAssign_operation (const GALGAS_controllerBindingOptionDecoratedList inOperand,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_controllerBindingOptionDecoratedList::cEnumerator_controllerBindingOptionDecoratedList (const GALGAS_controllerBindingOptionDecoratedList & inEnumeratedObject,
                                                                                                    const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_controllerBindingOptionDecoratedList_2D_element cEnumerator_controllerBindingOptionDecoratedList::current (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionDecoratedList * p = (const cCollectionElement_controllerBindingOptionDecoratedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cEnumerator_controllerBindingOptionDecoratedList::current_mOptionType (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionDecoratedList * p = (const cCollectionElement_controllerBindingOptionDecoratedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
  return p->mObject.mProperty_mOptionType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_controllerBindingOptionDecoratedList::current_mOptionName (LOCATION_ARGS) const {
  const cCollectionElement_controllerBindingOptionDecoratedList * p = (const cCollectionElement_controllerBindingOptionDecoratedList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_controllerBindingOptionDecoratedList) ;
  return p->mObject.mProperty_mOptionName ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     @controllerBindingOptionDecoratedList type                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList ("controllerBindingOptionDecoratedList",
                                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_controllerBindingOptionDecoratedList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_controllerBindingOptionDecoratedList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controllerBindingOptionDecoratedList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@bindingOptionList' list                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_bindingOptionList::cCollectionElement_bindingOptionList (const GALGAS_lstring & in_mOptionName,
                                                                            const GALGAS_abstractDefaultValue & in_mOptionValue
                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOptionName, in_mOptionValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_bindingOptionList::cCollectionElement_bindingOptionList (const GALGAS_bindingOptionList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOptionName, inElement.mProperty_mOptionValue) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_bindingOptionList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_bindingOptionList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_bindingOptionList (mObject.mProperty_mOptionName, mObject.mProperty_mOptionValue COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_bindingOptionList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_bindingOptionList * operand = (cCollectionElement_bindingOptionList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_bindingOptionList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList::GALGAS_bindingOptionList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList::GALGAS_bindingOptionList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList GALGAS_bindingOptionList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_bindingOptionList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList GALGAS_bindingOptionList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_bindingOptionList result = GALGAS_bindingOptionList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList GALGAS_bindingOptionList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_bindingOptionList result = GALGAS_bindingOptionList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList GALGAS_bindingOptionList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GALGAS_bindingOptionList result = GALGAS_bindingOptionList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_bindingOptionList::plusAssign_operation (const GALGAS_bindingOptionList inOperand,
                                                     C_Compiler * /* inCompiler */
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_bindingOptionList::cEnumerator_bindingOptionList (const GALGAS_bindingOptionList & inEnumeratedObject,
                                                              const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList_2D_element cEnumerator_bindingOptionList::current (LOCATION_ARGS) const {
  const cCollectionElement_bindingOptionList * p = (const cCollectionElement_bindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_bindingOptionList::current_mOptionName (LOCATION_ARGS) const {
  const cCollectionElement_bindingOptionList * p = (const cCollectionElement_bindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
  return p->mObject.mProperty_mOptionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue cEnumerator_bindingOptionList::current_mOptionValue (LOCATION_ARGS) const {
  const cCollectionElement_bindingOptionList * p = (const cCollectionElement_bindingOptionList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_bindingOptionList) ;
  return p->mObject.mProperty_mOptionValue ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @bindingOptionList type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bindingOptionList ("bindingOptionList",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_bindingOptionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingOptionList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_bindingOptionList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bindingOptionList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*



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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue::GALGAS_abstractDefaultValue (void) :
AC_GALGAS_class (false) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue::GALGAS_abstractDefaultValue (const cPtr_abstractDefaultValue * inSourcePtr) :
AC_GALGAS_class (inSourcePtr, false) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDefaultValue) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @abstractDefaultValue class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_abstractDefaultValue::cPtr_abstractDefaultValue (LOCATION_ARGS) :
acPtr_class (THERE) {
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @abstractDefaultValue type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractDefaultValue ("abstractDefaultValue",
                                             NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_abstractDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDefaultValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_abstractDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractDefaultValue (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_tableValueBinding_tableValueBinding::cEnumAssociatedValues_tableValueBinding_tableValueBinding (const GALGAS_lstring & inAssociatedValue0
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_tableValueBinding_tableValueBinding::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_tableValueBinding_tableValueBinding::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_tableValueBinding_tableValueBinding * ptr = dynamic_cast<const cEnumAssociatedValues_tableValueBinding_tableValueBinding *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableValueBinding::GALGAS_tableValueBinding (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_tableValueBinding GALGAS_tableValueBinding::constructor_noTableValueBinding (UNUSED_LOCATION_ARGS) {
  GALGAS_tableValueBinding result ;
  result.mEnum = kEnum_noTableValueBinding ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_tableValueBinding [3] = {
  "(not built)",
  "noTableValueBinding",
  "tableValueBinding"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_tableValueBinding::getter_isNoTableValueBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noTableValueBinding == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_tableValueBinding::getter_isTableValueBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_tableValueBinding == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_tableValueBinding::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<enum @tableValueBinding: " << gEnumNameArrayFor_tableValueBinding [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @tableValueBinding type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableValueBinding ("tableValueBinding",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_tableValueBinding::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableValueBinding ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_tableValueBinding::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableValueBinding (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_graphicController_defined::cEnumAssociatedValues_graphicController_defined (const GALGAS_lstring & inAssociatedValue0,
                                                                                                  const GALGAS_lstring & inAssociatedValue1
                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_graphicController_defined::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphicController::GALGAS_graphicController (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_graphicController GALGAS_graphicController::constructor_none (UNUSED_LOCATION_ARGS) {
  GALGAS_graphicController result ;
  result.mEnum = kEnum_none ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_graphicController [3] = {
  "(not built)",
  "none",
  "defined"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_graphicController::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_none == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_graphicController::getter_isDefined (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_defined == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_graphicController::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "<enum @graphicController: " << gEnumNameArrayFor_graphicController [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                               @graphicController type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_graphicController ("graphicController",
                                          NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_graphicController::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphicController ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_graphicController::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_graphicController (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_runActionDescriptor_action::cEnumAssociatedValues_runActionDescriptor_action (const GALGAS_lstring & inAssociatedValue0,
                                                                                                    const GALGAS_lstring & inAssociatedValue1
                                                                                                    COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_runActionDescriptor_action::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_runActionDescriptor::GALGAS_runActionDescriptor (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_runActionDescriptor GALGAS_runActionDescriptor::constructor_noAction (UNUSED_LOCATION_ARGS) {
  GALGAS_runActionDescriptor result ;
  result.mEnum = kEnum_noAction ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_runActionDescriptor [3] = {
  "(not built)",
  "noAction",
  "action"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_runActionDescriptor::getter_isNoAction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noAction == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_runActionDescriptor::getter_isAction (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_action == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_runActionDescriptor::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<enum @runActionDescriptor: " << gEnumNameArrayFor_runActionDescriptor [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @runActionDescriptor type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_runActionDescriptor ("runActionDescriptor",
                                            NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_runActionDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_runActionDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_runActionDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_runActionDescriptor (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumAssociatedValues_multipleBindingDescriptor_binding::cEnumAssociatedValues_multipleBindingDescriptor_binding (const GALGAS_abstractBooleanMultipleBindingExpressionAST & inAssociatedValue0
                                                                                                                  COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void cEnumAssociatedValues_multipleBindingDescriptor_binding::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cEnumAssociatedValues_multipleBindingDescriptor_binding::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_multipleBindingDescriptor_binding * ptr = dynamic_cast<const cEnumAssociatedValues_multipleBindingDescriptor_binding *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor::GALGAS_multipleBindingDescriptor (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_multipleBindingDescriptor GALGAS_multipleBindingDescriptor::constructor_noBinding (UNUSED_LOCATION_ARGS) {
  GALGAS_multipleBindingDescriptor result ;
  result.mEnum = kEnum_noBinding ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const char * gEnumNameArrayFor_multipleBindingDescriptor [3] = {
  "(not built)",
  "noBinding",
  "binding"
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_multipleBindingDescriptor::getter_isNoBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_noBinding == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_multipleBindingDescriptor::getter_isBinding (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_binding == mEnum) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_multipleBindingDescriptor::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<enum @multipleBindingDescriptor: " << gEnumNameArrayFor_multipleBindingDescriptor [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           @multipleBindingDescriptor type                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleBindingDescriptor ("multipleBindingDescriptor",
                                                  NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_multipleBindingDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingDescriptor ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_multipleBindingDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingDescriptor (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Class for element of '@regularBindingList' list                                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_regularBindingList::cCollectionElement_regularBindingList (const GALGAS_lstring & in_mBindingName,
                                                                              const GALGAS_observablePropertyList & in_mObservablePropertyList,
                                                                              const GALGAS_bindingOptionList & in_mBindingOptionList
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBindingName, in_mObservablePropertyList, in_mBindingOptionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement_regularBindingList::cCollectionElement_regularBindingList (const GALGAS_regularBindingList_2D_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mBindingName, inElement.mProperty_mObservablePropertyList, inElement.mProperty_mBindingOptionList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool cCollectionElement_regularBindingList::isValid (void) const {
  return mObject.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cCollectionElement * cCollectionElement_regularBindingList::copy (void) {
  cCollectionElement * result = NULL ;
  macroMyNew (result, cCollectionElement_regularBindingList (mObject.mProperty_mBindingName, mObject.mProperty_mObservablePropertyList, mObject.mProperty_mBindingOptionList COMMA_HERE)) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cCollectionElement_regularBindingList::compare (const cCollectionElement * inOperand) const {
  cCollectionElement_regularBindingList * operand = (cCollectionElement_regularBindingList *) inOperand ;
  macroValidSharedObject (operand, cCollectionElement_regularBindingList) ;
  return mObject.objectCompare (operand->mObject) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList::GALGAS_regularBindingList (void) :
AC_GALGAS_list () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList::GALGAS_regularBindingList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList GALGAS_regularBindingList::constructor_emptyList (UNUSED_LOCATION_ARGS) {
  return GALGAS_regularBindingList  (capCollectionElementArray ()) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList GALGAS_regularBindingList::getter_subListWithRange (const GALGAS_range & inRange,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingList result = GALGAS_regularBindingList::constructor_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList GALGAS_regularBindingList::getter_subListFromIndex (const GALGAS_uint & inIndex,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingList result = GALGAS_regularBindingList::constructor_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList GALGAS_regularBindingList::getter_subListToIndex (const GALGAS_uint & inIndex,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GALGAS_regularBindingList result = GALGAS_regularBindingList::constructor_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_regularBindingList::plusAssign_operation (const GALGAS_regularBindingList inOperand,
                                                      C_Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cEnumerator_regularBindingList::cEnumerator_regularBindingList (const GALGAS_regularBindingList & inEnumeratedObject,
                                                                const typeEnumerationOrder inOrder) :
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_regularBindingList_2D_element cEnumerator_regularBindingList::current (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingList * p = (const cCollectionElement_regularBindingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
  return p->mObject ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cEnumerator_regularBindingList::current_mBindingName (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingList * p = (const cCollectionElement_regularBindingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
  return p->mObject.mProperty_mBindingName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_observablePropertyList cEnumerator_regularBindingList::current_mObservablePropertyList (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingList * p = (const cCollectionElement_regularBindingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
  return p->mObject.mProperty_mObservablePropertyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bindingOptionList cEnumerator_regularBindingList::current_mBindingOptionList (LOCATION_ARGS) const {
  const cCollectionElement_regularBindingList * p = (const cCollectionElement_regularBindingList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_regularBindingList) ;
  return p->mObject.mProperty_mBindingOptionList ;
}




//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @regularBindingList type                                               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_regularBindingList ("regularBindingList",
                                           NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_regularBindingList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_regularBindingList::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularBindingList (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
            if (kBoolTrue == test_6) {
              outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 393)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 393))  COMMA_SOURCE_FILE ("observable-property.galgas", 393)) ;
            }
          }
          if (kBoolFalse == test_6) {
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
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
            if (kBoolTrue == test_9) {
              outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 401)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 401))  COMMA_SOURCE_FILE ("observable-property.galgas", 401)) ;
            }
          }
          if (kBoolFalse == test_9) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("empty"))).boolEnum () ;
              if (kBoolTrue == test_10) {
                outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 403)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 403))  COMMA_SOURCE_FILE ("observable-property.galgas", 403)) ;
              }
            }
            if (kBoolFalse == test_10) {
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
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            test_22 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
            if (kBoolTrue == test_22) {
              outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 468)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 468))  COMMA_SOURCE_FILE ("observable-property.galgas", 468)) ;
            }
          }
          if (kBoolFalse == test_22) {
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
          enumGalgasBool test_25 = kBoolTrue ;
          if (kBoolTrue == test_25) {
            test_25 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
            if (kBoolTrue == test_25) {
              outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 476)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 476))  COMMA_SOURCE_FILE ("observable-property.galgas", 476)) ;
            }
          }
          if (kBoolFalse == test_25) {
            enumGalgasBool test_26 = kBoolTrue ;
            if (kBoolTrue == test_26) {
              test_26 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("empty"))).boolEnum () ;
              if (kBoolTrue == test_26) {
                outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 478)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 478))  COMMA_SOURCE_FILE ("observable-property.galgas", 478)) ;
              }
            }
            if (kBoolFalse == test_26) {
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
          enumGalgasBool test_44 = kBoolTrue ;
          if (kBoolTrue == test_44) {
            test_44 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
            if (kBoolTrue == test_44) {
              outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 584)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 584))  COMMA_SOURCE_FILE ("observable-property.galgas", 584)) ;
            }
          }
          if (kBoolFalse == test_44) {
            enumGalgasBool test_45 = kBoolTrue ;
            if (kBoolTrue == test_45) {
              test_45 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("empty"))).boolEnum () ;
              if (kBoolTrue == test_45) {
                outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 586)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 586))  COMMA_SOURCE_FILE ("observable-property.galgas", 586)) ;
              }
            }
            if (kBoolFalse == test_45) {
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
          enumGalgasBool test_51 = kBoolTrue ;
          if (kBoolTrue == test_51) {
            GALGAS_bool test_52 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string ("sortedArray"))) ;
            if (kBoolTrue != test_52.boolEnum ()) {
              test_52 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string ("selectedArray"))) ;
            }
            test_51 = test_52.boolEnum () ;
            if (kBoolTrue == test_51) {
              outArgument_outKind = GALGAS_propertyKind::constructor_toMany (extractedValue_typeName, GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 611)), extractedValue_graphic, extractedValue_isEntity  COMMA_SOURCE_FILE ("observable-property.galgas", 609)) ;
            }
          }
          if (kBoolFalse == test_51) {
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
      enumGalgasBool test_54 = kBoolTrue ;
      if (kBoolTrue == test_54) {
        GALGAS_bool test_55 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string ("sortedArray"))) ;
        if (kBoolTrue == test_55.boolEnum ()) {
          test_55 = GALGAS_bool (kIsEqual, extractedValue_secondaryPropertyName.getter_string (HERE).objectCompare (GALGAS_string ("count"))) ;
        }
        test_54 = test_55.boolEnum () ;
        if (kBoolTrue == test_54) {
          outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 632)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 632))  COMMA_SOURCE_FILE ("observable-property.galgas", 632)) ;
        }
      }
      if (kBoolFalse == test_54) {
        enumGalgasBool test_56 = kBoolTrue ;
        if (kBoolTrue == test_56) {
          GALGAS_bool test_57 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string ("selectedArray"))) ;
          if (kBoolTrue == test_57.boolEnum ()) {
            test_57 = GALGAS_bool (kIsEqual, extractedValue_secondaryPropertyName.getter_string (HERE).objectCompare (GALGAS_string ("count"))) ;
          }
          test_56 = test_57.boolEnum () ;
          if (kBoolTrue == test_56) {
            outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 634)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 634))  COMMA_SOURCE_FILE ("observable-property.galgas", 634)) ;
          }
        }
        if (kBoolFalse == test_56) {
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
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
            if (kBoolTrue == test_6) {
              outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 701)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 701))  COMMA_SOURCE_FILE ("observable-property.galgas", 701)) ;
            }
          }
          if (kBoolFalse == test_6) {
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
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
            if (kBoolTrue == test_9) {
              outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 709)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 709))  COMMA_SOURCE_FILE ("observable-property.galgas", 709)) ;
            }
          }
          if (kBoolFalse == test_9) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("empty"))).boolEnum () ;
              if (kBoolTrue == test_10) {
                outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 711)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 711))  COMMA_SOURCE_FILE ("observable-property.galgas", 711)) ;
              }
            }
            if (kBoolFalse == test_10) {
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
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            test_22 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
            if (kBoolTrue == test_22) {
              outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 777)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 777))  COMMA_SOURCE_FILE ("observable-property.galgas", 777)) ;
            }
          }
          if (kBoolFalse == test_22) {
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
          enumGalgasBool test_25 = kBoolTrue ;
          if (kBoolTrue == test_25) {
            test_25 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
            if (kBoolTrue == test_25) {
              outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 785)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 785))  COMMA_SOURCE_FILE ("observable-property.galgas", 785)) ;
            }
          }
          if (kBoolFalse == test_25) {
            enumGalgasBool test_26 = kBoolTrue ;
            if (kBoolTrue == test_26) {
              test_26 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("empty"))).boolEnum () ;
              if (kBoolTrue == test_26) {
                outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 787)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 787))  COMMA_SOURCE_FILE ("observable-property.galgas", 787)) ;
              }
            }
            if (kBoolFalse == test_26) {
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
          enumGalgasBool test_44 = kBoolTrue ;
          if (kBoolTrue == test_44) {
            test_44 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("count"))).boolEnum () ;
            if (kBoolTrue == test_44) {
              outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 907)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 907))  COMMA_SOURCE_FILE ("observable-property.galgas", 907)) ;
            }
          }
          if (kBoolFalse == test_44) {
            enumGalgasBool test_45 = kBoolTrue ;
            if (kBoolTrue == test_45) {
              test_45 = GALGAS_bool (kIsEqual, extractedValue_optionName.getter_string (HERE).objectCompare (GALGAS_string ("empty"))).boolEnum () ;
              if (kBoolTrue == test_45) {
                outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 909)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 909))  COMMA_SOURCE_FILE ("observable-property.galgas", 909)) ;
              }
            }
            if (kBoolFalse == test_45) {
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
          enumGalgasBool test_51 = kBoolTrue ;
          if (kBoolTrue == test_51) {
            GALGAS_bool test_52 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string ("sortedArray"))) ;
            if (kBoolTrue != test_52.boolEnum ()) {
              test_52 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string ("selectedArray"))) ;
            }
            test_51 = test_52.boolEnum () ;
            if (kBoolTrue == test_51) {
              outArgument_outKind = GALGAS_propertyKind::constructor_toMany (extractedValue_typeName, GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 934)), extractedValue_graphic, extractedValue_isEntity  COMMA_SOURCE_FILE ("observable-property.galgas", 932)) ;
            }
          }
          if (kBoolFalse == test_51) {
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
      enumGalgasBool test_54 = kBoolTrue ;
      if (kBoolTrue == test_54) {
        GALGAS_bool test_55 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string ("sortedArray"))) ;
        if (kBoolTrue == test_55.boolEnum ()) {
          test_55 = GALGAS_bool (kIsEqual, extractedValue_secondaryPropertyName.getter_string (HERE).objectCompare (GALGAS_string ("count"))) ;
        }
        test_54 = test_55.boolEnum () ;
        if (kBoolTrue == test_54) {
          outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 956)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 956))  COMMA_SOURCE_FILE ("observable-property.galgas", 956)) ;
        }
      }
      if (kBoolFalse == test_54) {
        enumGalgasBool test_56 = kBoolTrue ;
        if (kBoolTrue == test_56) {
          GALGAS_bool test_57 = GALGAS_bool (kIsEqual, extractedValue_propertyName.getter_string (HERE).objectCompare (GALGAS_string ("selectedArray"))) ;
          if (kBoolTrue == test_57.boolEnum ()) {
            test_57 = GALGAS_bool (kIsEqual, extractedValue_secondaryPropertyName.getter_string (HERE).objectCompare (GALGAS_string ("count"))) ;
          }
          test_56 = test_57.boolEnum () ;
          if (kBoolTrue == test_56) {
            outArgument_outKind = GALGAS_propertyKind::constructor_property (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 958)), GALGAS_propertyAccessibility::constructor_transient (SOURCE_FILE ("observable-property.galgas", 958))  COMMA_SOURCE_FILE ("observable-property.galgas", 958)) ;
          }
        }
        if (kBoolFalse == test_56) {
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


