#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionMap_2D_element::GALGAS_actionMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionMap_2D_element::~ GALGAS_actionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionMap_2D_element::GALGAS_actionMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionMap_2D_element GALGAS_actionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_actionMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionMap_2D_element GALGAS_actionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actionMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_actionMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_actionMap_2D_element::objectCompare (const GALGAS_actionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_actionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actionMap_2D_element::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @actionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_actionMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @actionMap-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionMap_2D_element ("actionMap-element",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionMap_2D_element GALGAS_actionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_actionMap_2D_element result ;
  const GALGAS_actionMap_2D_element * p = (const GALGAS_actionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_actionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedEntityRelationshipMap_2D_element::GALGAS_decoratedEntityRelationshipMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mIsToMany (),
mAttribute_mRelationshipType (),
mAttribute_mOppositeRelationshipName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedEntityRelationshipMap_2D_element::~ GALGAS_decoratedEntityRelationshipMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedEntityRelationshipMap_2D_element::GALGAS_decoratedEntityRelationshipMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_bool & inOperand1,
                                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                                    const GALGAS_lstring & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mIsToMany (inOperand1),
mAttribute_mRelationshipType (inOperand2),
mAttribute_mOppositeRelationshipName (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedEntityRelationshipMap_2D_element GALGAS_decoratedEntityRelationshipMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedEntityRelationshipMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                           GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedEntityRelationshipMap_2D_element GALGAS_decoratedEntityRelationshipMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_bool & inOperand1,
                                                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                                                    const GALGAS_lstring & inOperand3 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedEntityRelationshipMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_decoratedEntityRelationshipMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_decoratedEntityRelationshipMap_2D_element::objectCompare (const GALGAS_decoratedEntityRelationshipMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsToMany.objectCompare (inOperand.mAttribute_mIsToMany) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRelationshipType.objectCompare (inOperand.mAttribute_mRelationshipType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOppositeRelationshipName.objectCompare (inOperand.mAttribute_mOppositeRelationshipName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_decoratedEntityRelationshipMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mIsToMany.isValid () && mAttribute_mRelationshipType.isValid () && mAttribute_mOppositeRelationshipName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedEntityRelationshipMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mIsToMany.drop () ;
  mAttribute_mRelationshipType.drop () ;
  mAttribute_mOppositeRelationshipName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedEntityRelationshipMap_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @decoratedEntityRelationshipMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsToMany.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRelationshipType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOppositeRelationshipName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedEntityRelationshipMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_decoratedEntityRelationshipMap_2D_element::reader_mIsToMany (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsToMany ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_decoratedEntityRelationshipMap_2D_element::reader_mRelationshipType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRelationshipType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedEntityRelationshipMap_2D_element::reader_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOppositeRelationshipName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @decoratedEntityRelationshipMap-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedEntityRelationshipMap_2D_element ("decoratedEntityRelationshipMap-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedEntityRelationshipMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedEntityRelationshipMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedEntityRelationshipMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedEntityRelationshipMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedEntityRelationshipMap_2D_element GALGAS_decoratedEntityRelationshipMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_decoratedEntityRelationshipMap_2D_element result ;
  const GALGAS_decoratedEntityRelationshipMap_2D_element * p = (const GALGAS_decoratedEntityRelationshipMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedEntityRelationshipMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedEntityRelationshipMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTransientMap_2D_element::GALGAS_decoratedTransientMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mTransientType (),
mAttribute_mTransientSignature (),
mAttribute_mDependencyList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTransientMap_2D_element::~ GALGAS_decoratedTransientMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTransientMap_2D_element::GALGAS_decoratedTransientMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                  const GALGAS_lstring & inOperand2,
                                                                                  const GALGAS_dependanceList & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mTransientType (inOperand1),
mAttribute_mTransientSignature (inOperand2),
mAttribute_mDependencyList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTransientMap_2D_element GALGAS_decoratedTransientMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedTransientMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                  GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_dependanceList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTransientMap_2D_element GALGAS_decoratedTransientMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                  const GALGAS_dependanceList & inOperand3 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedTransientMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_decoratedTransientMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_decoratedTransientMap_2D_element::objectCompare (const GALGAS_decoratedTransientMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransientType.objectCompare (inOperand.mAttribute_mTransientType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransientSignature.objectCompare (inOperand.mAttribute_mTransientSignature) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDependencyList.objectCompare (inOperand.mAttribute_mDependencyList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_decoratedTransientMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTransientType.isValid () && mAttribute_mTransientSignature.isValid () && mAttribute_mDependencyList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedTransientMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mTransientType.drop () ;
  mAttribute_mTransientSignature.drop () ;
  mAttribute_mDependencyList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedTransientMap_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @decoratedTransientMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransientType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransientSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDependencyList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedTransientMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_decoratedTransientMap_2D_element::reader_mTransientType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedTransientMap_2D_element::reader_mTransientSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dependanceList GALGAS_decoratedTransientMap_2D_element::reader_mDependencyList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDependencyList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @decoratedTransientMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedTransientMap_2D_element ("decoratedTransientMap-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedTransientMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedTransientMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedTransientMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedTransientMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedTransientMap_2D_element GALGAS_decoratedTransientMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_decoratedTransientMap_2D_element result ;
  const GALGAS_decoratedTransientMap_2D_element * p = (const GALGAS_decoratedTransientMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedTransientMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedTransientMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration_2D_element::GALGAS_transientDefinitionListForGeneration_2D_element (void) :
mAttribute_mTransientName (),
mAttribute_mTransientType (),
mAttribute_mTransientSignature (),
mAttribute_mDependencyList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration_2D_element::~ GALGAS_transientDefinitionListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration_2D_element::GALGAS_transientDefinitionListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                                const GALGAS_lstring & inOperand2,
                                                                                                                const GALGAS_dependanceListForGeneration & inOperand3) :
mAttribute_mTransientName (inOperand0),
mAttribute_mTransientType (inOperand1),
mAttribute_mTransientSignature (inOperand2),
mAttribute_mDependencyList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration_2D_element GALGAS_transientDefinitionListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_transientDefinitionListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                 GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_dependanceListForGeneration::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration_2D_element GALGAS_transientDefinitionListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                                                const GALGAS_lstring & inOperand2,
                                                                                                                                const GALGAS_dependanceListForGeneration & inOperand3 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientDefinitionListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_transientDefinitionListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_transientDefinitionListForGeneration_2D_element::objectCompare (const GALGAS_transientDefinitionListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTransientName.objectCompare (inOperand.mAttribute_mTransientName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransientType.objectCompare (inOperand.mAttribute_mTransientType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransientSignature.objectCompare (inOperand.mAttribute_mTransientSignature) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDependencyList.objectCompare (inOperand.mAttribute_mDependencyList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_transientDefinitionListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mTransientName.isValid () && mAttribute_mTransientType.isValid () && mAttribute_mTransientSignature.isValid () && mAttribute_mDependencyList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientDefinitionListForGeneration_2D_element::drop (void) {
  mAttribute_mTransientName.drop () ;
  mAttribute_mTransientType.drop () ;
  mAttribute_mTransientSignature.drop () ;
  mAttribute_mDependencyList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientDefinitionListForGeneration_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @transientDefinitionListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTransientName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransientType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransientSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDependencyList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_transientDefinitionListForGeneration_2D_element::reader_mTransientName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_transientDefinitionListForGeneration_2D_element::reader_mTransientType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_transientDefinitionListForGeneration_2D_element::reader_mTransientSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dependanceListForGeneration GALGAS_transientDefinitionListForGeneration_2D_element::reader_mDependencyList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDependencyList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @transientDefinitionListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientDefinitionListForGeneration_2D_element ("transientDefinitionListForGeneration-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_transientDefinitionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDefinitionListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_transientDefinitionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientDefinitionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap_2D_element::GALGAS_decoratedOutletMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mOutletTypeName (),
mAttribute_mRunActionDescriptor (),
mAttribute_mEnabledBindingDescriptor () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap_2D_element::~ GALGAS_decoratedOutletMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap_2D_element::GALGAS_decoratedOutletMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_lstring & inOperand1,
                                                                            const GALGAS_runActionDescriptor & inOperand2,
                                                                            const GALGAS_enabledBindingDescriptor & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mOutletTypeName (inOperand1),
mAttribute_mRunActionDescriptor (inOperand2),
mAttribute_mEnabledBindingDescriptor (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap_2D_element GALGAS_decoratedOutletMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_runActionDescriptor & inOperand2,
                                                                                            const GALGAS_enabledBindingDescriptor & inOperand3 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedOutletMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_decoratedOutletMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_decoratedOutletMap_2D_element::objectCompare (const GALGAS_decoratedOutletMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletTypeName.objectCompare (inOperand.mAttribute_mOutletTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRunActionDescriptor.objectCompare (inOperand.mAttribute_mRunActionDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEnabledBindingDescriptor.objectCompare (inOperand.mAttribute_mEnabledBindingDescriptor) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_decoratedOutletMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mOutletTypeName.isValid () && mAttribute_mRunActionDescriptor.isValid () && mAttribute_mEnabledBindingDescriptor.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedOutletMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mOutletTypeName.drop () ;
  mAttribute_mRunActionDescriptor.drop () ;
  mAttribute_mEnabledBindingDescriptor.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedOutletMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @decoratedOutletMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRunActionDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEnabledBindingDescriptor.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedOutletMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedOutletMap_2D_element::reader_mOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_runActionDescriptor GALGAS_decoratedOutletMap_2D_element::reader_mRunActionDescriptor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRunActionDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enabledBindingDescriptor GALGAS_decoratedOutletMap_2D_element::reader_mEnabledBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnabledBindingDescriptor ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @decoratedOutletMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedOutletMap_2D_element ("decoratedOutletMap-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedOutletMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedOutletMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedOutletMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedOutletMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap_2D_element GALGAS_decoratedOutletMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_decoratedOutletMap_2D_element result ;
  const GALGAS_decoratedOutletMap_2D_element * p = (const GALGAS_decoratedOutletMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedOutletMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedOutletMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedAttributeMap_2D_element::GALGAS_decoratedAttributeMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mAttributeType (),
mAttribute_mDefaultValue (),
mAttribute_mNeedsValidation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedAttributeMap_2D_element::~ GALGAS_decoratedAttributeMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedAttributeMap_2D_element::GALGAS_decoratedAttributeMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                  const GALGAS_abstractDefaultValue & inOperand2,
                                                                                  const GALGAS_bool & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mAttributeType (inOperand1),
mAttribute_mDefaultValue (inOperand2),
mAttribute_mNeedsValidation (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedAttributeMap_2D_element GALGAS_decoratedAttributeMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                  const GALGAS_abstractDefaultValue & inOperand2,
                                                                                                  const GALGAS_bool & inOperand3 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedAttributeMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_decoratedAttributeMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_decoratedAttributeMap_2D_element::objectCompare (const GALGAS_decoratedAttributeMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeType.objectCompare (inOperand.mAttribute_mAttributeType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDefaultValue.objectCompare (inOperand.mAttribute_mDefaultValue) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNeedsValidation.objectCompare (inOperand.mAttribute_mNeedsValidation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_decoratedAttributeMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mAttributeType.isValid () && mAttribute_mDefaultValue.isValid () && mAttribute_mNeedsValidation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedAttributeMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mAttributeType.drop () ;
  mAttribute_mDefaultValue.drop () ;
  mAttribute_mNeedsValidation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedAttributeMap_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @decoratedAttributeMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAttributeType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDefaultValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNeedsValidation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedAttributeMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_decoratedAttributeMap_2D_element::reader_mAttributeType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue GALGAS_decoratedAttributeMap_2D_element::reader_mDefaultValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefaultValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_decoratedAttributeMap_2D_element::reader_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNeedsValidation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @decoratedAttributeMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedAttributeMap_2D_element ("decoratedAttributeMap-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedAttributeMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedAttributeMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedAttributeMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedAttributeMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedAttributeMap_2D_element GALGAS_decoratedAttributeMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_decoratedAttributeMap_2D_element result ;
  const GALGAS_decoratedAttributeMap_2D_element * p = (const GALGAS_decoratedAttributeMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedAttributeMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedAttributeMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassMap_2D_element::GALGAS_outletClassMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mHandlesRunAction () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassMap_2D_element::~ GALGAS_outletClassMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassMap_2D_element::GALGAS_outletClassMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_bool & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mHandlesRunAction (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassMap_2D_element GALGAS_outletClassMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassMap_2D_element GALGAS_outletClassMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_bool & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletClassMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletClassMap_2D_element::objectCompare (const GALGAS_outletClassMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHandlesRunAction.objectCompare (inOperand.mAttribute_mHandlesRunAction) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletClassMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mHandlesRunAction.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mHandlesRunAction.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassMap_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @outletClassMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHandlesRunAction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletClassMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassMap_2D_element::reader_mHandlesRunAction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHandlesRunAction ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @outletClassMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassMap_2D_element ("outletClassMap-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletClassMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletClassMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassMap_2D_element GALGAS_outletClassMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_outletClassMap_2D_element result ;
  const GALGAS_outletClassMap_2D_element * p = (const GALGAS_outletClassMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedObservablePropertyMap_2D_element::GALGAS_decoratedObservablePropertyMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mPropertyType (),
mAttribute_mIsTransient (),
mAttribute_mPropertySignature (),
mAttribute_mIsCollection () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedObservablePropertyMap_2D_element::~ GALGAS_decoratedObservablePropertyMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedObservablePropertyMap_2D_element::GALGAS_decoratedObservablePropertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                    const GALGAS_bool & inOperand2,
                                                                                                    const GALGAS_lstring & inOperand3,
                                                                                                    const GALGAS_bool & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mPropertyType (inOperand1),
mAttribute_mIsTransient (inOperand2),
mAttribute_mPropertySignature (inOperand3),
mAttribute_mIsCollection (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedObservablePropertyMap_2D_element GALGAS_decoratedObservablePropertyMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedObservablePropertyMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                           GALGAS_bool::constructor_default (HERE),
                                                           GALGAS_lstring::constructor_default (HERE),
                                                           GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedObservablePropertyMap_2D_element GALGAS_decoratedObservablePropertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                                    const GALGAS_bool & inOperand2,
                                                                                                                    const GALGAS_lstring & inOperand3,
                                                                                                                    const GALGAS_bool & inOperand4 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedObservablePropertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_decoratedObservablePropertyMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_decoratedObservablePropertyMap_2D_element::objectCompare (const GALGAS_decoratedObservablePropertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPropertyType.objectCompare (inOperand.mAttribute_mPropertyType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsTransient.objectCompare (inOperand.mAttribute_mIsTransient) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPropertySignature.objectCompare (inOperand.mAttribute_mPropertySignature) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsCollection.objectCompare (inOperand.mAttribute_mIsCollection) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_decoratedObservablePropertyMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mPropertyType.isValid () && mAttribute_mIsTransient.isValid () && mAttribute_mPropertySignature.isValid () && mAttribute_mIsCollection.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedObservablePropertyMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mPropertyType.drop () ;
  mAttribute_mIsTransient.drop () ;
  mAttribute_mPropertySignature.drop () ;
  mAttribute_mIsCollection.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedObservablePropertyMap_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @decoratedObservablePropertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPropertyType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsTransient.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPropertySignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsCollection.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedObservablePropertyMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_decoratedObservablePropertyMap_2D_element::reader_mPropertyType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_decoratedObservablePropertyMap_2D_element::reader_mIsTransient (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsTransient ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedObservablePropertyMap_2D_element::reader_mPropertySignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertySignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_decoratedObservablePropertyMap_2D_element::reader_mIsCollection (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsCollection ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @decoratedObservablePropertyMap-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_decoratedObservablePropertyMap_2D_element ("decoratedObservablePropertyMap-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_decoratedObservablePropertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedObservablePropertyMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_decoratedObservablePropertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_decoratedObservablePropertyMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedObservablePropertyMap_2D_element GALGAS_decoratedObservablePropertyMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_decoratedObservablePropertyMap_2D_element result ;
  const GALGAS_decoratedObservablePropertyMap_2D_element * p = (const GALGAS_decoratedObservablePropertyMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_decoratedObservablePropertyMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedObservablePropertyMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientListForGeneration_2D_element::GALGAS_transientListForGeneration_2D_element (void) :
mAttribute_mTransientSignature (),
mAttribute_mTransientType (),
mAttribute_mTransientDependencyListForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientListForGeneration_2D_element::~ GALGAS_transientListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientListForGeneration_2D_element::GALGAS_transientListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                            const GALGAS_transientDependencyListForGeneration & inOperand2) :
mAttribute_mTransientSignature (inOperand0),
mAttribute_mTransientType (inOperand1),
mAttribute_mTransientDependencyListForGeneration (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientListForGeneration_2D_element GALGAS_transientListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_transientListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                       GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                       GALGAS_transientDependencyListForGeneration::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientListForGeneration_2D_element GALGAS_transientListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & inOperand1,
                                                                                                            const GALGAS_transientDependencyListForGeneration & inOperand2 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_transientListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_transientListForGeneration_2D_element::objectCompare (const GALGAS_transientListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTransientSignature.objectCompare (inOperand.mAttribute_mTransientSignature) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransientType.objectCompare (inOperand.mAttribute_mTransientType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransientDependencyListForGeneration.objectCompare (inOperand.mAttribute_mTransientDependencyListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_transientListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mTransientSignature.isValid () && mAttribute_mTransientType.isValid () && mAttribute_mTransientDependencyListForGeneration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientListForGeneration_2D_element::drop (void) {
  mAttribute_mTransientSignature.drop () ;
  mAttribute_mTransientType.drop () ;
  mAttribute_mTransientDependencyListForGeneration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientListForGeneration_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @transientListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTransientSignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransientType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransientDependencyListForGeneration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_transientListForGeneration_2D_element::reader_mTransientSignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientSignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_transientListForGeneration_2D_element::reader_mTransientType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDependencyListForGeneration GALGAS_transientListForGeneration_2D_element::reader_mTransientDependencyListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientDependencyListForGeneration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @transientListForGeneration-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientListForGeneration_2D_element ("transientListForGeneration-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_transientListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_transientListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientListForGeneration_2D_element GALGAS_transientListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_transientListForGeneration_2D_element result ;
  const GALGAS_transientListForGeneration_2D_element * p = (const GALGAS_transientListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (void) :
mAttribute_mColumnName (),
mAttribute_mColumnOutletTypeName (),
mAttribute_mObservablePropertyName (),
mAttribute_mPropertyType (),
mAttribute_mBindingOptionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::~ GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                              const GALGAS_string & inOperand1,
                                                                                                                              const GALGAS_string & inOperand2,
                                                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                                                                              const GALGAS_bindingOptionList & inOperand4) :
mAttribute_mColumnName (inOperand0),
mAttribute_mColumnOutletTypeName (inOperand1),
mAttribute_mObservablePropertyName (inOperand2),
mAttribute_mPropertyType (inOperand3),
mAttribute_mBindingOptionList (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_string::constructor_default (HERE),
                                                                        GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                        GALGAS_bindingOptionList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                              const GALGAS_string & inOperand1,
                                                                                                                                              const GALGAS_string & inOperand2,
                                                                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand3,
                                                                                                                                              const GALGAS_bindingOptionList & inOperand4 
                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::objectCompare (const GALGAS_arrayControllerBoundColumnListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mColumnName.objectCompare (inOperand.mAttribute_mColumnName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mColumnOutletTypeName.objectCompare (inOperand.mAttribute_mColumnOutletTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mObservablePropertyName.objectCompare (inOperand.mAttribute_mObservablePropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPropertyType.objectCompare (inOperand.mAttribute_mPropertyType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingOptionList.objectCompare (inOperand.mAttribute_mBindingOptionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mColumnName.isValid () && mAttribute_mColumnOutletTypeName.isValid () && mAttribute_mObservablePropertyName.isValid () && mAttribute_mPropertyType.isValid () && mAttribute_mBindingOptionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::drop (void) {
  mAttribute_mColumnName.drop () ;
  mAttribute_mColumnOutletTypeName.drop () ;
  mAttribute_mObservablePropertyName.drop () ;
  mAttribute_mPropertyType.drop () ;
  mAttribute_mBindingOptionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::description (C_String & ioString,
                                                                                 const int32_t inIndentation) const {
  ioString << "<struct @arrayControllerBoundColumnListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mColumnName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mColumnOutletTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mObservablePropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPropertyType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingOptionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::reader_mColumnName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mColumnName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::reader_mColumnOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mColumnOutletTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::reader_mObservablePropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservablePropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::reader_mPropertyType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::reader_mBindingOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingOptionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              @arrayControllerBoundColumnListForGeneration-element type                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerBoundColumnListForGeneration_2D_element ("arrayControllerBoundColumnListForGeneration-element",
                                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBoundColumnListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerBoundColumnListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeListForGeneration_2D_element::GALGAS_attributeListForGeneration_2D_element (void) :
mAttribute_mAttributeType (),
mAttribute_mAttributeName (),
mAttribute_mDefaultValueInSwift (),
mAttribute_mNeedsValidation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeListForGeneration_2D_element::~ GALGAS_attributeListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeListForGeneration_2D_element::GALGAS_attributeListForGeneration_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                            const GALGAS_string & inOperand1,
                                                                                            const GALGAS_string & inOperand2,
                                                                                            const GALGAS_bool & inOperand3) :
mAttribute_mAttributeType (inOperand0),
mAttribute_mAttributeName (inOperand1),
mAttribute_mDefaultValueInSwift (inOperand2),
mAttribute_mNeedsValidation (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeListForGeneration_2D_element GALGAS_attributeListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_attributeListForGeneration_2D_element (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                       GALGAS_string::constructor_default (HERE),
                                                       GALGAS_string::constructor_default (HERE),
                                                       GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeListForGeneration_2D_element GALGAS_attributeListForGeneration_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                            const GALGAS_string & inOperand1,
                                                                                                            const GALGAS_string & inOperand2,
                                                                                                            const GALGAS_bool & inOperand3 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_attributeListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_attributeListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_attributeListForGeneration_2D_element::objectCompare (const GALGAS_attributeListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeType.objectCompare (inOperand.mAttribute_mAttributeType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeName.objectCompare (inOperand.mAttribute_mAttributeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDefaultValueInSwift.objectCompare (inOperand.mAttribute_mDefaultValueInSwift) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNeedsValidation.objectCompare (inOperand.mAttribute_mNeedsValidation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_attributeListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mAttributeType.isValid () && mAttribute_mAttributeName.isValid () && mAttribute_mDefaultValueInSwift.isValid () && mAttribute_mNeedsValidation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeListForGeneration_2D_element::drop (void) {
  mAttribute_mAttributeType.drop () ;
  mAttribute_mAttributeName.drop () ;
  mAttribute_mDefaultValueInSwift.drop () ;
  mAttribute_mNeedsValidation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeListForGeneration_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @attributeListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mAttributeType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAttributeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDefaultValueInSwift.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNeedsValidation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_attributeListForGeneration_2D_element::reader_mAttributeType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_attributeListForGeneration_2D_element::reader_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_attributeListForGeneration_2D_element::reader_mDefaultValueInSwift (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefaultValueInSwift ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_attributeListForGeneration_2D_element::reader_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNeedsValidation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @attributeListForGeneration-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_attributeListForGeneration_2D_element ("attributeListForGeneration-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_attributeListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_attributeListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_attributeListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_attributeListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeListForGeneration_2D_element GALGAS_attributeListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_attributeListForGeneration_2D_element result ;
  const GALGAS_attributeListForGeneration_2D_element * p = (const GALGAS_attributeListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_attributeListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("attributeListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerMap_2D_element::GALGAS_controllerMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mControllerClassName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerMap_2D_element::~ GALGAS_controllerMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerMap_2D_element::GALGAS_controllerMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_string & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mControllerClassName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerMap_2D_element GALGAS_controllerMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controllerMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerMap_2D_element GALGAS_controllerMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_string & inOperand1 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controllerMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controllerMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controllerMap_2D_element::objectCompare (const GALGAS_controllerMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mControllerClassName.objectCompare (inOperand.mAttribute_mControllerClassName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controllerMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mControllerClassName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controllerMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mControllerClassName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controllerMap_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @controllerMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mControllerClassName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controllerMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_controllerMap_2D_element::reader_mControllerClassName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mControllerClassName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @controllerMap-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controllerMap_2D_element ("controllerMap-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controllerMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controllerMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controllerMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerMap_2D_element GALGAS_controllerMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_controllerMap_2D_element result ;
  const GALGAS_controllerMap_2D_element * p = (const GALGAS_controllerMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controllerMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controllerMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferencesPropertyArrayMap_2D_element::GALGAS_preferencesPropertyArrayMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mControllerClassName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferencesPropertyArrayMap_2D_element::~ GALGAS_preferencesPropertyArrayMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferencesPropertyArrayMap_2D_element::GALGAS_preferencesPropertyArrayMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_string & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mControllerClassName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferencesPropertyArrayMap_2D_element GALGAS_preferencesPropertyArrayMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_preferencesPropertyArrayMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferencesPropertyArrayMap_2D_element GALGAS_preferencesPropertyArrayMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_string & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_preferencesPropertyArrayMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_preferencesPropertyArrayMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_preferencesPropertyArrayMap_2D_element::objectCompare (const GALGAS_preferencesPropertyArrayMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mControllerClassName.objectCompare (inOperand.mAttribute_mControllerClassName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_preferencesPropertyArrayMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mControllerClassName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_preferencesPropertyArrayMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mControllerClassName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_preferencesPropertyArrayMap_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @preferencesPropertyArrayMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mControllerClassName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_preferencesPropertyArrayMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_preferencesPropertyArrayMap_2D_element::reader_mControllerClassName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mControllerClassName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @preferencesPropertyArrayMap-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_preferencesPropertyArrayMap_2D_element ("preferencesPropertyArrayMap-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_preferencesPropertyArrayMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_preferencesPropertyArrayMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_preferencesPropertyArrayMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_preferencesPropertyArrayMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferencesPropertyArrayMap_2D_element GALGAS_preferencesPropertyArrayMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_preferencesPropertyArrayMap_2D_element result ;
  const GALGAS_preferencesPropertyArrayMap_2D_element * p = (const GALGAS_preferencesPropertyArrayMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_preferencesPropertyArrayMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("preferencesPropertyArrayMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityRelationshipListForGeneration_2D_element::GALGAS_entityRelationshipListForGeneration_2D_element (void) :
mAttribute_mRelationshipName (),
mAttribute_mIsToMany (),
mAttribute_mRelationshipType (),
mAttribute_mOppositeRelationshipName (),
mAttribute_mOppositeRelationshipIsToMany () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityRelationshipListForGeneration_2D_element::~ GALGAS_entityRelationshipListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityRelationshipListForGeneration_2D_element::GALGAS_entityRelationshipListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                              const GALGAS_bool & inOperand1,
                                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                                              const GALGAS_string & inOperand3,
                                                                                                              const GALGAS_bool & inOperand4) :
mAttribute_mRelationshipName (inOperand0),
mAttribute_mIsToMany (inOperand1),
mAttribute_mRelationshipType (inOperand2),
mAttribute_mOppositeRelationshipName (inOperand3),
mAttribute_mOppositeRelationshipIsToMany (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityRelationshipListForGeneration_2D_element GALGAS_entityRelationshipListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_entityRelationshipListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                GALGAS_string::constructor_default (HERE),
                                                                GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityRelationshipListForGeneration_2D_element GALGAS_entityRelationshipListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                              const GALGAS_bool & inOperand1,
                                                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                                                              const GALGAS_string & inOperand3,
                                                                                                                              const GALGAS_bool & inOperand4 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_entityRelationshipListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_entityRelationshipListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_entityRelationshipListForGeneration_2D_element::objectCompare (const GALGAS_entityRelationshipListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mRelationshipName.objectCompare (inOperand.mAttribute_mRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mIsToMany.objectCompare (inOperand.mAttribute_mIsToMany) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRelationshipType.objectCompare (inOperand.mAttribute_mRelationshipType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOppositeRelationshipName.objectCompare (inOperand.mAttribute_mOppositeRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOppositeRelationshipIsToMany.objectCompare (inOperand.mAttribute_mOppositeRelationshipIsToMany) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_entityRelationshipListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mRelationshipName.isValid () && mAttribute_mIsToMany.isValid () && mAttribute_mRelationshipType.isValid () && mAttribute_mOppositeRelationshipName.isValid () && mAttribute_mOppositeRelationshipIsToMany.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_entityRelationshipListForGeneration_2D_element::drop (void) {
  mAttribute_mRelationshipName.drop () ;
  mAttribute_mIsToMany.drop () ;
  mAttribute_mRelationshipType.drop () ;
  mAttribute_mOppositeRelationshipName.drop () ;
  mAttribute_mOppositeRelationshipIsToMany.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_entityRelationshipListForGeneration_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @entityRelationshipListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mIsToMany.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRelationshipType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOppositeRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOppositeRelationshipIsToMany.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_entityRelationshipListForGeneration_2D_element::reader_mRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_entityRelationshipListForGeneration_2D_element::reader_mIsToMany (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsToMany ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_entityRelationshipListForGeneration_2D_element::reader_mRelationshipType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRelationshipType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_entityRelationshipListForGeneration_2D_element::reader_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOppositeRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_entityRelationshipListForGeneration_2D_element::reader_mOppositeRelationshipIsToMany (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOppositeRelationshipIsToMany ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @entityRelationshipListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityRelationshipListForGeneration_2D_element ("entityRelationshipListForGeneration-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_entityRelationshipListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityRelationshipListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_entityRelationshipListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityRelationshipListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityRelationshipListForGeneration_2D_element GALGAS_entityRelationshipListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_entityRelationshipListForGeneration_2D_element result ;
  const GALGAS_entityRelationshipListForGeneration_2D_element * p = (const GALGAS_entityRelationshipListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityRelationshipListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityRelationshipListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionDecoratedList_2D_element::GALGAS_controllerBindingOptionDecoratedList_2D_element (void) :
mAttribute_mOptionName (),
mAttribute_mOptionType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionDecoratedList_2D_element::~ GALGAS_controllerBindingOptionDecoratedList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionDecoratedList_2D_element::GALGAS_controllerBindingOptionDecoratedList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1) :
mAttribute_mOptionName (inOperand0),
mAttribute_mOptionType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionDecoratedList_2D_element GALGAS_controllerBindingOptionDecoratedList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controllerBindingOptionDecoratedList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionDecoratedList_2D_element GALGAS_controllerBindingOptionDecoratedList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionDecoratedList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controllerBindingOptionDecoratedList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controllerBindingOptionDecoratedList_2D_element::objectCompare (const GALGAS_controllerBindingOptionDecoratedList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOptionName.objectCompare (inOperand.mAttribute_mOptionName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionType.objectCompare (inOperand.mAttribute_mOptionType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controllerBindingOptionDecoratedList_2D_element::isValid (void) const {
  return mAttribute_mOptionName.isValid () && mAttribute_mOptionType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controllerBindingOptionDecoratedList_2D_element::drop (void) {
  mAttribute_mOptionName.drop () ;
  mAttribute_mOptionType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controllerBindingOptionDecoratedList_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @controllerBindingOptionDecoratedList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOptionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controllerBindingOptionDecoratedList_2D_element::reader_mOptionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_controllerBindingOptionDecoratedList_2D_element::reader_mOptionType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @controllerBindingOptionDecoratedList-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList_2D_element ("controllerBindingOptionDecoratedList-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controllerBindingOptionDecoratedList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controllerBindingOptionDecoratedList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controllerBindingOptionDecoratedList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionDecoratedList_2D_element GALGAS_controllerBindingOptionDecoratedList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionDecoratedList_2D_element result ;
  const GALGAS_controllerBindingOptionDecoratedList_2D_element * p = (const GALGAS_controllerBindingOptionDecoratedList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controllerBindingOptionDecoratedList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controllerBindingOptionDecoratedList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateControllerMap_2D_element::GALGAS_templateControllerMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mTemplateString (),
mAttribute_mModelTypeProxy (),
mAttribute_mModelSelector (),
mAttribute_mModelShouldBeWritableProperty (),
mAttribute_mControllerBindingOptionDecoratedList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateControllerMap_2D_element::~ GALGAS_templateControllerMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateControllerMap_2D_element::GALGAS_templateControllerMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_string & inOperand1,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                  const GALGAS_lstring & inOperand3,
                                                                                  const GALGAS_bool & inOperand4,
                                                                                  const GALGAS_controllerBindingOptionDecoratedList & inOperand5) :
mAttribute_lkey (inOperand0),
mAttribute_mTemplateString (inOperand1),
mAttribute_mModelTypeProxy (inOperand2),
mAttribute_mModelSelector (inOperand3),
mAttribute_mModelShouldBeWritableProperty (inOperand4),
mAttribute_mControllerBindingOptionDecoratedList (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateControllerMap_2D_element GALGAS_templateControllerMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_templateControllerMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_string::constructor_default (HERE),
                                                  GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                  GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_bool::constructor_default (HERE),
                                                  GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateControllerMap_2D_element GALGAS_templateControllerMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_string & inOperand1,
                                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & inOperand2,
                                                                                                  const GALGAS_lstring & inOperand3,
                                                                                                  const GALGAS_bool & inOperand4,
                                                                                                  const GALGAS_controllerBindingOptionDecoratedList & inOperand5 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_templateControllerMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_templateControllerMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_templateControllerMap_2D_element::objectCompare (const GALGAS_templateControllerMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTemplateString.objectCompare (inOperand.mAttribute_mTemplateString) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelTypeProxy.objectCompare (inOperand.mAttribute_mModelTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelSelector.objectCompare (inOperand.mAttribute_mModelSelector) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelShouldBeWritableProperty.objectCompare (inOperand.mAttribute_mModelShouldBeWritableProperty) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mControllerBindingOptionDecoratedList.objectCompare (inOperand.mAttribute_mControllerBindingOptionDecoratedList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_templateControllerMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mTemplateString.isValid () && mAttribute_mModelTypeProxy.isValid () && mAttribute_mModelSelector.isValid () && mAttribute_mModelShouldBeWritableProperty.isValid () && mAttribute_mControllerBindingOptionDecoratedList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateControllerMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mTemplateString.drop () ;
  mAttribute_mModelTypeProxy.drop () ;
  mAttribute_mModelSelector.drop () ;
  mAttribute_mModelShouldBeWritableProperty.drop () ;
  mAttribute_mControllerBindingOptionDecoratedList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_templateControllerMap_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @templateControllerMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTemplateString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelTypeProxy.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelSelector.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelShouldBeWritableProperty.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mControllerBindingOptionDecoratedList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateControllerMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_templateControllerMap_2D_element::reader_mTemplateString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTemplateString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_templateControllerMap_2D_element::reader_mModelTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_templateControllerMap_2D_element::reader_mModelSelector (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelSelector ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_templateControllerMap_2D_element::reader_mModelShouldBeWritableProperty (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelShouldBeWritableProperty ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionDecoratedList GALGAS_templateControllerMap_2D_element::reader_mControllerBindingOptionDecoratedList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mControllerBindingOptionDecoratedList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @templateControllerMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_templateControllerMap_2D_element ("templateControllerMap-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_templateControllerMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_templateControllerMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_templateControllerMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_templateControllerMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_templateControllerMap_2D_element GALGAS_templateControllerMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_templateControllerMap_2D_element result ;
  const GALGAS_templateControllerMap_2D_element * p = (const GALGAS_templateControllerMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_templateControllerMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("templateControllerMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@boolAsDefaultValue analyzeDefaultValueType'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_boolAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                       const GALGAS_unifiedTypeProxyList constinArgument_inAttributeActualTypeList,
                                                                       GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolAsDefaultValue * object = (const cPtr_boolAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_boolAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found = GALGAS_bool (false) ;
  cEnumerator_unifiedTypeProxyList enumerator_11444 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 347)).isValidAndTrue () ;
  if (enumerator_11444.hasCurrentObject () && bool_0) {
    while (enumerator_11444.hasCurrentObject () && bool_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_11444.current_mType (HERE).reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 348)).objectCompare (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("decoratedTypes.galgas", 348)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string temp_2 ;
        const enumGalgasBool test_3 = object->mAttribute_mValue.mAttribute_bool.boolEnum () ;
        if (kBoolTrue == test_3) {
          temp_2 = GALGAS_string ("true") ;
        }else if (kBoolFalse == test_3) {
          temp_2 = GALGAS_string ("false") ;
        }
        outArgument_outSwiftDefaultValueAsString = temp_2 ;
        var_found = GALGAS_bool (true) ;
      }
      enumerator_11444.gotoNextObject () ;
      if (enumerator_11444.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 347)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_4 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 353)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("only a boolean attribute can be initialized by YES or NO")  COMMA_SOURCE_FILE ("decoratedTypes.galgas", 354)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_boolAsDefaultValue_analyzeDefaultValueType (void) {
  enterCategoryMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_boolAsDefaultValue.mSlotID,
                                               categoryMethod_boolAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_boolAsDefaultValue_analyzeDefaultValueType (defineCategoryMethod_boolAsDefaultValue_analyzeDefaultValueType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@integerAsDefaultValue analyzeDefaultValueType'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_integerAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                          const GALGAS_unifiedTypeProxyList constinArgument_inAttributeActualTypeList,
                                                                          GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerAsDefaultValue * object = (const cPtr_integerAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_integerAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found = GALGAS_bool (false) ;
  cEnumerator_unifiedTypeProxyList enumerator_12144 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 367)).isValidAndTrue () ;
  if (enumerator_12144.hasCurrentObject () && bool_0) {
    while (enumerator_12144.hasCurrentObject () && bool_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_12144.current_mType (HERE).reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 368)).objectCompare (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("decoratedTypes.galgas", 368)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        outArgument_outSwiftDefaultValueAsString = object->mAttribute_mValue.mAttribute_uint.reader_string (SOURCE_FILE ("decoratedTypes.galgas", 369)) ;
        var_found = GALGAS_bool (true) ;
      }
      enumerator_12144.gotoNextObject () ;
      if (enumerator_12144.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 367)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_2 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 373)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("only an integer attribute can be initialized by an integer constant")  COMMA_SOURCE_FILE ("decoratedTypes.galgas", 374)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_integerAsDefaultValue_analyzeDefaultValueType (void) {
  enterCategoryMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_integerAsDefaultValue.mSlotID,
                                               categoryMethod_integerAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerAsDefaultValue_analyzeDefaultValueType (defineCategoryMethod_integerAsDefaultValue_analyzeDefaultValueType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@doubleAsDefaultValue analyzeDefaultValueType'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_doubleAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                         const GALGAS_unifiedTypeProxyList constinArgument_inAttributeActualTypeList,
                                                                         GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_doubleAsDefaultValue * object = (const cPtr_doubleAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_doubleAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found = GALGAS_bool (false) ;
  cEnumerator_unifiedTypeProxyList enumerator_12834 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 387)).isValidAndTrue () ;
  if (enumerator_12834.hasCurrentObject () && bool_0) {
    while (enumerator_12834.hasCurrentObject () && bool_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_12834.current_mType (HERE).reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 388)).objectCompare (GALGAS_typeKind::constructor_doubleType (SOURCE_FILE ("decoratedTypes.galgas", 388)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        outArgument_outSwiftDefaultValueAsString = object->mAttribute_mValue.mAttribute_double.reader_string (SOURCE_FILE ("decoratedTypes.galgas", 389)) ;
        var_found = GALGAS_bool (true) ;
      }
      enumerator_12834.gotoNextObject () ;
      if (enumerator_12834.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 387)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_2 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 393)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("only a double attribute can be initialized by a floating point constant")  COMMA_SOURCE_FILE ("decoratedTypes.galgas", 394)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_doubleAsDefaultValue_analyzeDefaultValueType (void) {
  enterCategoryMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_doubleAsDefaultValue.mSlotID,
                                               categoryMethod_doubleAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_doubleAsDefaultValue_analyzeDefaultValueType (defineCategoryMethod_doubleAsDefaultValue_analyzeDefaultValueType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@stringAsDefaultValue analyzeDefaultValueType'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_stringAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                         const GALGAS_unifiedTypeProxyList constinArgument_inAttributeActualTypeList,
                                                                         GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_stringAsDefaultValue * object = (const cPtr_stringAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_stringAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found = GALGAS_bool (false) ;
  cEnumerator_unifiedTypeProxyList enumerator_13529 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 407)).isValidAndTrue () ;
  if (enumerator_13529.hasCurrentObject () && bool_0) {
    while (enumerator_13529.hasCurrentObject () && bool_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_13529.current_mType (HERE).reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 408)).objectCompare (GALGAS_typeKind::constructor_stringType (SOURCE_FILE ("decoratedTypes.galgas", 408)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        outArgument_outSwiftDefaultValueAsString = GALGAS_string ("\"").add_operation (object->mAttribute_mValue.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 409)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 409)) ;
        var_found = GALGAS_bool (true) ;
      }
      enumerator_13529.gotoNextObject () ;
      if (enumerator_13529.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 407)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_2 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 413)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("only a string attribute can be initialized by a string constant")  COMMA_SOURCE_FILE ("decoratedTypes.galgas", 414)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_stringAsDefaultValue_analyzeDefaultValueType (void) {
  enterCategoryMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_stringAsDefaultValue.mSlotID,
                                               categoryMethod_stringAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringAsDefaultValue_analyzeDefaultValueType (defineCategoryMethod_stringAsDefaultValue_analyzeDefaultValueType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@identifierAsDefaultValue analyzeDefaultValueType'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_identifierAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                             const GALGAS_unifiedTypeProxyList constinArgument_inAttributeActualTypeList,
                                                                             GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_identifierAsDefaultValue * object = (const cPtr_identifierAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_identifierAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found = GALGAS_bool (false) ;
  cEnumerator_unifiedTypeProxyList enumerator_15969 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 481)).isValidAndTrue () ;
  if (enumerator_15969.hasCurrentObject () && bool_0) {
    while (enumerator_15969.hasCurrentObject () && bool_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_15969.current_mType (HERE).reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 482)).objectCompare (GALGAS_typeKind::constructor_colorType (SOURCE_FILE ("decoratedTypes.galgas", 482)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_found = GALGAS_bool (true) ;
        const enumGalgasBool test_2 = function_predefinedColors (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 484)).reader_hasKey (object->mAttribute_mValue.mAttribute_string COMMA_SOURCE_FILE ("decoratedTypes.galgas", 484)).boolEnum () ;
        if (kBoolTrue == test_2) {
          outArgument_outSwiftDefaultValueAsString = GALGAS_string ("NSColor.").add_operation (object->mAttribute_mValue.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 485)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 485)) ;
        }else if (kBoolFalse == test_2) {
          GALGAS_location location_3 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_3, GALGAS_string ("unknown predefined color")  COMMA_SOURCE_FILE ("decoratedTypes.galgas", 487)) ;
        }
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_15969.current_mType (HERE).reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 490)).objectCompare (GALGAS_typeKind::constructor_dateType (SOURCE_FILE ("decoratedTypes.galgas", 490)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          var_found = GALGAS_bool (true) ;
          const enumGalgasBool test_5 = function_predefinedDates (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 492)).reader_hasKey (object->mAttribute_mValue.mAttribute_string COMMA_SOURCE_FILE ("decoratedTypes.galgas", 492)).boolEnum () ;
          if (kBoolTrue == test_5) {
            outArgument_outSwiftDefaultValueAsString = GALGAS_string ("NSDate ()") ;
          }else if (kBoolFalse == test_5) {
            GALGAS_location location_6 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_6, GALGAS_string ("unknown predefined date")  COMMA_SOURCE_FILE ("decoratedTypes.galgas", 495)) ;
          }
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_15969.current_mType (HERE).reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 498)).objectCompare (GALGAS_typeKind::constructor_enumType (SOURCE_FILE ("decoratedTypes.galgas", 498)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            var_found = GALGAS_bool (true) ;
            const enumGalgasBool test_8 = enumerator_15969.current_mType (HERE).reader_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 500)).reader_hasKey (object->mAttribute_mValue.mAttribute_string COMMA_SOURCE_FILE ("decoratedTypes.galgas", 500)).boolEnum () ;
            if (kBoolTrue == test_8) {
              outArgument_outSwiftDefaultValueAsString = enumerator_15969.current_mType (HERE).reader_lkey (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 501)).mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 501)).add_operation (object->mAttribute_mValue.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 501)) ;
            }else if (kBoolFalse == test_8) {
              GALGAS_location location_9 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_9, GALGAS_string ("the '").add_operation (enumerator_15969.current_mType (HERE).reader_lkey (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 504)).reader_string (SOURCE_FILE ("decoratedTypes.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 504)).add_operation (GALGAS_string ("' enumeration does not define '"), inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 504)).add_operation (object->mAttribute_mValue.reader_string (SOURCE_FILE ("decoratedTypes.galgas", 504)), inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 504)).add_operation (GALGAS_string ("' constant"), inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 504))  COMMA_SOURCE_FILE ("decoratedTypes.galgas", 503)) ;
              outArgument_outSwiftDefaultValueAsString.drop () ; // Release error dropped variable
            }
          }
        }
      }
      enumerator_15969.gotoNextObject () ;
      if (enumerator_15969.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 481)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_10 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 509)).boolEnum () ;
  if (kBoolTrue == test_10) {
    GALGAS_location location_11 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_11, GALGAS_string ("unknow type for this identifier")  COMMA_SOURCE_FILE ("decoratedTypes.galgas", 510)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_identifierAsDefaultValue_analyzeDefaultValueType (void) {
  enterCategoryMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_identifierAsDefaultValue.mSlotID,
                                               categoryMethod_identifierAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_identifierAsDefaultValue_analyzeDefaultValueType (defineCategoryMethod_identifierAsDefaultValue_analyzeDefaultValueType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@listAsDefaultValue analyzeDefaultValueType'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                       const GALGAS_unifiedTypeProxyList /* constinArgument_inAttributeActualTypeList */,
                                                                       GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listAsDefaultValue * object = (const cPtr_listAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_listAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found = GALGAS_bool (false) ;
  const enumGalgasBool test_0 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 599)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mStartLocation, GALGAS_string ("invalid initialization value")  COMMA_SOURCE_FILE ("decoratedTypes.galgas", 600)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listAsDefaultValue_analyzeDefaultValueType (void) {
  enterCategoryMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_listAsDefaultValue.mSlotID,
                                               categoryMethod_listAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listAsDefaultValue_analyzeDefaultValueType (defineCategoryMethod_listAsDefaultValue_analyzeDefaultValueType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@predefinedTypeDeclaration typeInventory'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_predefinedTypeDeclaration_typeInventory (const cPtr_astDeclaration * inObject,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_predefinedTypeDeclaration * object = (const cPtr_predefinedTypeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeDeclaration) ;
  {
  ioArgument_ioUnifiedTypeMap.modifier_insertKey (object->mAttribute_mTypeName.reader_nowhere (SOURCE_FILE ("typeInventory.galgas", 8)), object->mAttribute_mKind, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("typeInventory.galgas", 10)), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("typeInventory.galgas", 11)), GALGAS_decoratedAttributeMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 12)), GALGAS_decoratedTransientMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 13)), GALGAS_decoratedOutletMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 14)), GALGAS_decoratedObservablePropertyMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 15)), GALGAS_decoratedEntityRelationshipMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 16)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 17)), GALGAS_bindingList::constructor_emptyList (SOURCE_FILE ("typeInventory.galgas", 18)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("typeInventory.galgas", 19)), GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 20)), GALGAS_arrayControllerMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 21)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 7)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_predefinedTypeDeclaration_typeInventory (void) {
  enterCategoryMethod_typeInventory (kTypeDescriptor_GALGAS_predefinedTypeDeclaration.mSlotID,
                                     categoryMethod_predefinedTypeDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_predefinedTypeDeclaration_typeInventory (defineCategoryMethod_predefinedTypeDeclaration_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Overriding category method '@enumDeclaration typeInventory'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumDeclaration_typeInventory (const cPtr_astDeclaration * inObject,
                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclaration * object = (const cPtr_enumDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclaration) ;
  GALGAS_enumConstantMap var_enumConstantMap = GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 29)) ;
  cEnumerator_lstringlist enumerator_910 (object->mAttribute_mEnumConstantNameList, kEnumeration_up) ;
  while (enumerator_910.hasCurrentObject ()) {
    {
    var_enumConstantMap.modifier_insertKey (enumerator_910.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 31)) ;
    }
    enumerator_910.gotoNextObject () ;
  }
  {
  ioArgument_ioUnifiedTypeMap.modifier_insertKey (object->mAttribute_mEnumTypeName, GALGAS_typeKind::constructor_enumType (SOURCE_FILE ("typeInventory.galgas", 35)), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("typeInventory.galgas", 36)), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("typeInventory.galgas", 37)), GALGAS_decoratedAttributeMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 38)), GALGAS_decoratedTransientMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 39)), GALGAS_decoratedOutletMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 40)), GALGAS_decoratedObservablePropertyMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 41)), GALGAS_decoratedEntityRelationshipMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 42)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 43)), GALGAS_bindingList::constructor_emptyList (SOURCE_FILE ("typeInventory.galgas", 44)), object->mAttribute_mEnumConstantNameList, var_enumConstantMap, GALGAS_arrayControllerMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 33)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumDeclaration_typeInventory (void) {
  enterCategoryMethod_typeInventory (kTypeDescriptor_GALGAS_enumDeclaration.mSlotID,
                                     categoryMethod_enumDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclaration_typeInventory (defineCategoryMethod_enumDeclaration_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category method '@structDeclaration typeInventory'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structDeclaration_typeInventory (const cPtr_astDeclaration * inObject,
                                                            GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structDeclaration * object = (const cPtr_structDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_structDeclaration) ;
  cEnumerator_structFieldASTList enumerator_1612 (object->mAttribute_mFieldList, kEnumeration_up) ;
  while (enumerator_1612.hasCurrentObject ()) {
    {
    ioArgument_ioUnifiedTypeMap.modifier_enterEdge (object->mAttribute_mStructTypeName, enumerator_1612.current_mFieldTypeName (HERE) COMMA_SOURCE_FILE ("typeInventory.galgas", 56)) ;
    }
    enumerator_1612.gotoNextObject () ;
  }
  object->mAttribute_mStructTypeName.log ("mStructTypeName"  COMMA_SOURCE_FILE ("typeInventory.galgas", 61)) ;
  {
  ioArgument_ioUnifiedTypeMap.modifier_insertKey (object->mAttribute_mStructTypeName, GALGAS_typeKind::constructor_structType (SOURCE_FILE ("typeInventory.galgas", 64)), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("typeInventory.galgas", 65)), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("typeInventory.galgas", 66)), GALGAS_decoratedAttributeMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 67)), GALGAS_decoratedTransientMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 68)), GALGAS_decoratedOutletMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 69)), GALGAS_decoratedObservablePropertyMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 70)), GALGAS_decoratedEntityRelationshipMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 71)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 72)), GALGAS_bindingList::constructor_emptyList (SOURCE_FILE ("typeInventory.galgas", 73)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("typeInventory.galgas", 74)), GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 75)), GALGAS_arrayControllerMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 62)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structDeclaration_typeInventory (void) {
  enterCategoryMethod_typeInventory (kTypeDescriptor_GALGAS_structDeclaration.mSlotID,
                                     categoryMethod_structDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structDeclaration_typeInventory (defineCategoryMethod_structDeclaration_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@unifiedTypeDeclaration typeInventory'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_unifiedTypeDeclaration_typeInventory (const cPtr_astDeclaration * inObject,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unifiedTypeDeclaration * object = (const cPtr_unifiedTypeDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_unifiedTypeDeclaration) ;
  GALGAS_string var_kindName = categoryReader_kindName (object->mAttribute_mTypeKind, inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 84)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_superTypeProxy ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSuperTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_superTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("typeInventory.galgas", 88)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, object->mAttribute_mSuperTypeName, var_superTypeProxy COMMA_SOURCE_FILE ("typeInventory.galgas", 90)) ;
    }
    {
    ioArgument_ioUnifiedTypeMap.modifier_enterEdge (object->mAttribute_mTypeName, object->mAttribute_mSuperTypeName COMMA_SOURCE_FILE ("typeInventory.galgas", 95)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_rootEntityType ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mRootEntityName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_rootEntityType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("typeInventory.galgas", 103)) ;
  }else if (kBoolFalse == test_1) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, object->mAttribute_mRootEntityName, var_rootEntityType COMMA_SOURCE_FILE ("typeInventory.galgas", 105)) ;
    }
    {
    ioArgument_ioUnifiedTypeMap.modifier_enterEdge (object->mAttribute_mTypeName, object->mAttribute_mRootEntityName COMMA_SOURCE_FILE ("typeInventory.galgas", 110)) ;
    }
  }
  GALGAS_decoratedObservablePropertyMap var_observablePropertyMap = GALGAS_decoratedObservablePropertyMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 113)) ;
  GALGAS_decoratedAttributeMap var_decoratedAttributeMap = GALGAS_decoratedAttributeMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 114)) ;
  cEnumerator_attributeList enumerator_3394 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3394.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeType ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_3394.current_mAttributeTypeName (HERE), var_attributeType COMMA_SOURCE_FILE ("typeInventory.galgas", 116)) ;
    }
    {
    ioArgument_ioUnifiedTypeMap.modifier_enterEdge (object->mAttribute_mTypeName, enumerator_3394.current_mAttributeTypeName (HERE) COMMA_SOURCE_FILE ("typeInventory.galgas", 121)) ;
    }
    {
    var_decoratedAttributeMap.modifier_insertKey (enumerator_3394.current_mAttributeName (HERE), var_attributeType, enumerator_3394.current_mDefaultValue (HERE), enumerator_3394.current_mNeedsValidation (HERE), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 122)) ;
    }
    {
    var_observablePropertyMap.modifier_insertKey (enumerator_3394.current_mAttributeName (HERE), var_attributeType, GALGAS_bool (false), GALGAS_lstring::constructor_new (var_kindName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 132)).add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("typeInventory.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 132)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 132)).add_operation (enumerator_3394.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("typeInventory.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 132)), enumerator_3394.current_mAttributeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("typeInventory.galgas", 132)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 128)) ;
    }
    enumerator_3394.gotoNextObject () ;
  }
  GALGAS_decoratedEntityRelationshipMap var_currentRelationshipMap = GALGAS_decoratedEntityRelationshipMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 137)) ;
  cEnumerator_relationshipList enumerator_4184 (object->mAttribute_mRelationshipList, kEnumeration_up) ;
  while (enumerator_4184.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_destinationTypeProxy ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_4184.current_mDestinationEntityName (HERE), var_destinationTypeProxy COMMA_SOURCE_FILE ("typeInventory.galgas", 139)) ;
    }
    {
    var_currentRelationshipMap.modifier_insertKey (enumerator_4184.current_mRelationshipName (HERE), enumerator_4184.current_mIsToMany (HERE), var_destinationTypeProxy, enumerator_4184.current_mInverseRelationshipName (HERE), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 144)) ;
    }
    {
    var_observablePropertyMap.modifier_insertKey (enumerator_4184.current_mRelationshipName (HERE), var_destinationTypeProxy, GALGAS_bool (false), GALGAS_lstring::constructor_new (var_kindName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 154)).add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("typeInventory.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 154)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 154)).add_operation (enumerator_4184.current_mRelationshipName (HERE).reader_string (SOURCE_FILE ("typeInventory.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 154)), enumerator_4184.current_mRelationshipName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("typeInventory.galgas", 154)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 150)) ;
    }
    enumerator_4184.gotoNextObject () ;
  }
  GALGAS_decoratedTransientMap var_decoratedTransientMap = GALGAS_decoratedTransientMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 159)) ;
  cEnumerator_transientList enumerator_4908 (object->mAttribute_mTransientList, kEnumeration_up) ;
  while (enumerator_4908.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_transientType ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_4908.current_mTransientTypeName (HERE), var_transientType COMMA_SOURCE_FILE ("typeInventory.galgas", 161)) ;
    }
    GALGAS_lstring var_signature = GALGAS_lstring::constructor_new (var_kindName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 166)).add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("typeInventory.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 166)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 166)).add_operation (enumerator_4908.current_mTransientName (HERE).reader_string (SOURCE_FILE ("typeInventory.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 166)), enumerator_4908.current_mTransientName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("typeInventory.galgas", 166)) ;
    {
    var_decoratedTransientMap.modifier_insertKey (enumerator_4908.current_mTransientName (HERE), var_transientType, var_signature, enumerator_4908.current_mDependencyList (HERE), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 167)) ;
    }
    {
    var_observablePropertyMap.modifier_insertKey (enumerator_4908.current_mTransientName (HERE), var_transientType, GALGAS_bool (true), var_signature, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 173)) ;
    }
    enumerator_4908.gotoNextObject () ;
  }
  cEnumerator_classArrayList enumerator_5543 (object->mAttribute_mArrayList, kEnumeration_up) ;
  while (enumerator_5543.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_5641 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_5543.current_mElementClassName (HERE), joker_5641 COMMA_SOURCE_FILE ("typeInventory.galgas", 183)) ;
    }
    {
    ioArgument_ioUnifiedTypeMap.modifier_enterEdge (object->mAttribute_mTypeName, enumerator_5543.current_mElementClassName (HERE) COMMA_SOURCE_FILE ("typeInventory.galgas", 188)) ;
    }
    enumerator_5543.gotoNextObject () ;
  }
  GALGAS_decoratedOutletMap var_decoratedOutletMap = GALGAS_decoratedOutletMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 191)) ;
  cEnumerator_outletDeclarationList enumerator_5856 (object->mAttribute_mOutletDeclarationList, kEnumeration_up) ;
  while (enumerator_5856.hasCurrentObject ()) {
    {
    var_decoratedOutletMap.modifier_insertKey (enumerator_5856.current_mOutletName (HERE), enumerator_5856.current_mOutletType (HERE), enumerator_5856.current_mRunDescriptor (HERE), enumerator_5856.current_mEnabledBindingDescriptor (HERE), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 193)) ;
    }
    enumerator_5856.gotoNextObject () ;
  }
  GALGAS_actionMap var_documentActionMap = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 201)) ;
  cEnumerator_lstringlist enumerator_6148 (object->mAttribute_mActionDeclarationList, kEnumeration_up) ;
  while (enumerator_6148.hasCurrentObject ()) {
    {
    var_documentActionMap.modifier_insertKey (enumerator_6148.current (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 203)) ;
    }
    enumerator_6148.gotoNextObject () ;
  }
  GALGAS_arrayControllerMap var_arrayControllerMap = GALGAS_arrayControllerMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 206)) ;
  cEnumerator_arrayControllerDeclarationListAST enumerator_6384 (object->mAttribute_mArrayControllerDeclarationListAST, kEnumeration_up) ;
  while (enumerator_6384.hasCurrentObject ()) {
    GALGAS_lstring var_arrayController_5F_propertySignature = GALGAS_lstring::constructor_new (var_kindName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 209)).add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("typeInventory.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 209)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 209)).add_operation (enumerator_6384.current_mControllerName (HERE).reader_string (SOURCE_FILE ("typeInventory.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 209)), enumerator_6384.current_mControllerName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("typeInventory.galgas", 208)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_boolTypeProxy ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, GALGAS_string ("Bool").reader_nowhere (SOURCE_FILE ("typeInventory.galgas", 211)), var_boolTypeProxy COMMA_SOURCE_FILE ("typeInventory.galgas", 211)) ;
    }
    GALGAS_decoratedObservablePropertyMap temp_2 = GALGAS_decoratedObservablePropertyMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 217)) ;
    temp_2.addAssign_operation (GALGAS_string ("canRemove").reader_nowhere (SOURCE_FILE ("typeInventory.galgas", 213)), var_boolTypeProxy, GALGAS_bool (false), var_arrayController_5F_propertySignature, GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("typeInventory.galgas", 217)) ;
    GALGAS_decoratedObservablePropertyMap var_arrayControllerObservablePropertyMap = temp_2 ;
    {
    GALGAS_actionMap temp_3 = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 224)) ;
    temp_3.addAssign_operation (GALGAS_string ("add").reader_nowhere (SOURCE_FILE ("typeInventory.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("typeInventory.galgas", 224)) ;
    temp_3.addAssign_operation (GALGAS_string ("remove").reader_nowhere (SOURCE_FILE ("typeInventory.galgas", 224)), inCompiler  COMMA_SOURCE_FILE ("typeInventory.galgas", 224)) ;
    var_arrayControllerMap.modifier_insertKey (enumerator_6384.current_mControllerName (HERE), enumerator_6384.current_mBoundModel (HERE), enumerator_6384.current_mTableViewOutletName (HERE), enumerator_6384.current_mArrayControllerBoundColumnListAST (HERE), temp_3, var_arrayControllerObservablePropertyMap, var_arrayController_5F_propertySignature, callCategoryReader_arrayControllerTypeName ((const cPtr_abstractObservablePropertyAST *) enumerator_6384.current_mBoundModel (HERE).ptr (), object->mAttribute_mTypeName.mAttribute_string, var_rootEntityType, inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 219)) ;
    }
    enumerator_6384.gotoNextObject () ;
  }
  {
  ioArgument_ioUnifiedTypeMap.modifier_insertKey (object->mAttribute_mTypeName, object->mAttribute_mTypeKind, var_superTypeProxy, var_rootEntityType, var_decoratedAttributeMap, var_decoratedTransientMap, var_decoratedOutletMap, var_observablePropertyMap, var_currentRelationshipMap, var_documentActionMap, object->mAttribute_mBindingList, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("typeInventory.galgas", 243)), GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 244)), var_arrayControllerMap, inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 231)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_unifiedTypeDeclaration_typeInventory (void) {
  enterCategoryMethod_typeInventory (kTypeDescriptor_GALGAS_unifiedTypeDeclaration.mSlotID,
                                     categoryMethod_unifiedTypeDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unifiedTypeDeclaration_typeInventory (defineCategoryMethod_unifiedTypeDeclaration_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   Overriding category method '@observablePropertyAsEnableBindingExpressionAST analyzeExpressionForEnabledBinding'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_observablePropertyAsEnableBindingExpressionAST_analyzeExpressionForEnabledBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                              const GALGAS_string constinArgument_inSelfTypeName,
                                                                                                              const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                                              const GALGAS_arrayControllerMap constinArgument_inArrayControllerMap,
                                                                                                              const GALGAS_decoratedObservablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                              const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inRootEntityType,
                                                                                                              GALGAS_uint & ioArgument_ioIndex,
                                                                                                              GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_observablePropertyAsEnableBindingExpressionAST * object = (const cPtr_observablePropertyAsEnableBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_observablePropertyAsEnableBindingExpressionAST) ;
  callCategoryMethod_analyzeBoundObservablePropertyForEnabledBinding ((const cPtr_abstractObservablePropertyAST *) object->mAttribute_mProperty.ptr (), constinArgument_inSelfTypeName, constinArgument_inUnifiedTypeMap, constinArgument_inArrayControllerMap, constinArgument_inCurrentObservablePropertyMap, constinArgument_inRootEntityType, ioArgument_ioIndex, outArgument_outEnableExpression, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 455)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_observablePropertyAsEnableBindingExpressionAST_analyzeExpressionForEnabledBinding (void) {
  enterCategoryMethod_analyzeExpressionForEnabledBinding (kTypeDescriptor_GALGAS_observablePropertyAsEnableBindingExpressionAST.mSlotID,
                                                          categoryMethod_observablePropertyAsEnableBindingExpressionAST_analyzeExpressionForEnabledBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_observablePropertyAsEnableBindingExpressionAST_analyzeExpressionForEnabledBinding (defineCategoryMethod_observablePropertyAsEnableBindingExpressionAST_analyzeExpressionForEnabledBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding category method '@negateBooleanMultipleBindingExpressionAST analyzeExpressionForEnabledBinding'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForEnabledBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                         const GALGAS_string constinArgument_inSelfTypeName,
                                                                                                         const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                                         const GALGAS_arrayControllerMap constinArgument_inArrayControllerMap,
                                                                                                         const GALGAS_decoratedObservablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                         const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inRootEntityType,
                                                                                                         GALGAS_uint & ioArgument_ioIndex,
                                                                                                         GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_negateBooleanMultipleBindingExpressionAST * object = (const cPtr_negateBooleanMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_negateBooleanMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeExpressionForEnabledBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mBinding.ptr (), constinArgument_inSelfTypeName, constinArgument_inUnifiedTypeMap, constinArgument_inArrayControllerMap, constinArgument_inCurrentObservablePropertyMap, constinArgument_inRootEntityType, ioArgument_ioIndex, var_expression, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 476)) ;
  outArgument_outEnableExpression = GALGAS_negateBooleanMultipleBindingExpressionForGeneration::constructor_new (var_expression  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 485)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForEnabledBinding (void) {
  enterCategoryMethod_analyzeExpressionForEnabledBinding (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST.mSlotID,
                                                          categoryMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForEnabledBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForEnabledBinding (defineCategoryMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForEnabledBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@orBooleanMultipleBindingExpressionAST analyzeExpressionForEnabledBinding'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForEnabledBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                     const GALGAS_string constinArgument_inSelfTypeName,
                                                                                                     const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                                     const GALGAS_arrayControllerMap constinArgument_inArrayControllerMap,
                                                                                                     const GALGAS_decoratedObservablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inRootEntityType,
                                                                                                     GALGAS_uint & ioArgument_ioIndex,
                                                                                                     GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orBooleanMultipleBindingExpressionAST * object = (const cPtr_orBooleanMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orBooleanMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeExpressionForEnabledBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mLeftBinding.ptr (), constinArgument_inSelfTypeName, constinArgument_inUnifiedTypeMap, constinArgument_inArrayControllerMap, constinArgument_inCurrentObservablePropertyMap, constinArgument_inRootEntityType, ioArgument_ioIndex, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 498)) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeExpressionForEnabledBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mRightBinding.ptr (), constinArgument_inSelfTypeName, constinArgument_inUnifiedTypeMap, constinArgument_inArrayControllerMap, constinArgument_inCurrentObservablePropertyMap, constinArgument_inRootEntityType, ioArgument_ioIndex, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 507)) ;
  outArgument_outEnableExpression = GALGAS_orBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 516)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForEnabledBinding (void) {
  enterCategoryMethod_analyzeExpressionForEnabledBinding (kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST.mSlotID,
                                                          categoryMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForEnabledBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForEnabledBinding (defineCategoryMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForEnabledBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@andBooleanMultipleBindingExpressionAST analyzeExpressionForEnabledBinding'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForEnabledBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                      const GALGAS_string constinArgument_inSelfTypeName,
                                                                                                      const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                                      const GALGAS_arrayControllerMap constinArgument_inArrayControllerMap,
                                                                                                      const GALGAS_decoratedObservablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inRootEntityType,
                                                                                                      GALGAS_uint & ioArgument_ioIndex,
                                                                                                      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andBooleanMultipleBindingExpressionAST * object = (const cPtr_andBooleanMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andBooleanMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression ;
  callCategoryMethod_analyzeExpressionForEnabledBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mLeftBinding.ptr (), constinArgument_inSelfTypeName, constinArgument_inUnifiedTypeMap, constinArgument_inArrayControllerMap, constinArgument_inCurrentObservablePropertyMap, constinArgument_inRootEntityType, ioArgument_ioIndex, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 529)) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeExpressionForEnabledBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mRightBinding.ptr (), constinArgument_inSelfTypeName, constinArgument_inUnifiedTypeMap, constinArgument_inArrayControllerMap, constinArgument_inCurrentObservablePropertyMap, constinArgument_inRootEntityType, ioArgument_ioIndex, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 538)) ;
  outArgument_outEnableExpression = GALGAS_andBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 547)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForEnabledBinding (void) {
  enterCategoryMethod_analyzeExpressionForEnabledBinding (kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST.mSlotID,
                                                          categoryMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForEnabledBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForEnabledBinding (defineCategoryMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForEnabledBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Overriding category reader '@observablePropertyAsBooleanMultipleBindingExpressionForGeneration observedObjectList'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedObjectList (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                              C_Compiler * /* inCompiler */
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outObservedObjectList ; // Returned variable
  const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
  GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("typeAnalysis.galgas", 565)) ;
  temp_0.addAssign_operation (object->mAttribute_mObservedObject  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 565)) ;
  result_outObservedObjectList = temp_0 ;
//---
  return result_outObservedObjectList ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedObjectList (void) {
  enterCategoryReader_observedObjectList (kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                          categoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedObjectList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedObjectList (defineCategoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedObjectList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category reader '@negateBooleanMultipleBindingExpressionForGeneration observedObjectList'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_negateBooleanMultipleBindingExpressionForGeneration_observedObjectList (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outObservedObjectList ; // Returned variable
  const cPtr_negateBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
  result_outObservedObjectList = callCategoryReader_observedObjectList ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 572)) ;
//---
  return result_outObservedObjectList ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_negateBooleanMultipleBindingExpressionForGeneration_observedObjectList (void) {
  enterCategoryReader_observedObjectList (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                          categoryReader_negateBooleanMultipleBindingExpressionForGeneration_observedObjectList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_negateBooleanMultipleBindingExpressionForGeneration_observedObjectList (defineCategoryReader_negateBooleanMultipleBindingExpressionForGeneration_observedObjectList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category reader '@orBooleanMultipleBindingExpressionForGeneration observedObjectList'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_orBooleanMultipleBindingExpressionForGeneration_observedObjectList (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outObservedObjectList ; // Returned variable
  const cPtr_orBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
  result_outObservedObjectList = callCategoryReader_observedObjectList ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 579)).add_operation (callCategoryReader_observedObjectList ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 579)) ;
//---
  return result_outObservedObjectList ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_orBooleanMultipleBindingExpressionForGeneration_observedObjectList (void) {
  enterCategoryReader_observedObjectList (kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                          categoryReader_orBooleanMultipleBindingExpressionForGeneration_observedObjectList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_orBooleanMultipleBindingExpressionForGeneration_observedObjectList (defineCategoryReader_orBooleanMultipleBindingExpressionForGeneration_observedObjectList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category reader '@andBooleanMultipleBindingExpressionForGeneration observedObjectList'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_andBooleanMultipleBindingExpressionForGeneration_observedObjectList (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outObservedObjectList ; // Returned variable
  const cPtr_andBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
  result_outObservedObjectList = callCategoryReader_observedObjectList ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 586)).add_operation (callCategoryReader_observedObjectList ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 586)) ;
//---
  return result_outObservedObjectList ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_andBooleanMultipleBindingExpressionForGeneration_observedObjectList (void) {
  enterCategoryReader_observedObjectList (kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                          categoryReader_andBooleanMultipleBindingExpressionForGeneration_observedObjectList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_andBooleanMultipleBindingExpressionForGeneration_observedObjectList (defineCategoryReader_andBooleanMultipleBindingExpressionForGeneration_observedObjectList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@selfObservablePropertyAST analyzeBoundObservablePropertyForEnabledBinding'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfObservablePropertyAST_analyzeBoundObservablePropertyForEnabledBinding (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                                      const GALGAS_string constinArgument_inSelfTypeName,
                                                                                                      const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                                                      const GALGAS_arrayControllerMap /* constinArgument_inArrayControllerMap */,
                                                                                                      const GALGAS_decoratedObservablePropertyMap constinArgument_inObservablePropertyMap,
                                                                                                      const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inRootEntityType */,
                                                                                                      GALGAS_uint & ioArgument_ioIndex,
                                                                                                      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outExpression,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfObservablePropertyAST * object = (const cPtr_selfObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfObservablePropertyAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_propertyType ;
  GALGAS_bool var_isCollection ;
  GALGAS_bool joker_25736 ; // Joker input parameter
  GALGAS_lstring joker_25764 ; // Joker input parameter
  constinArgument_inObservablePropertyMap.method_searchKey (object->mAttribute_mSelfObservablePropertyName, var_propertyType, joker_25736, joker_25764, var_isCollection, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 617)) ;
  const enumGalgasBool test_0 = var_propertyType.reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 624)).reader_isBoolType (SOURCE_FILE ("typeAnalysis.galgas", 624)).operator_not (SOURCE_FILE ("typeAnalysis.galgas", 624)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mSelfObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this property should be boolean")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 625)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_isCollection.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mSelfObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the observable property should not be a collection")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 627)) ;
    }
  }
  outArgument_outExpression = GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (GALGAS_string ("self"), object->mAttribute_mSelfObservablePropertyName.mAttribute_string, constinArgument_inSelfTypeName, ioArgument_ioIndex  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 631)) ;
  ioArgument_ioIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 636)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfObservablePropertyAST_analyzeBoundObservablePropertyForEnabledBinding (void) {
  enterCategoryMethod_analyzeBoundObservablePropertyForEnabledBinding (kTypeDescriptor_GALGAS_selfObservablePropertyAST.mSlotID,
                                                                       categoryMethod_selfObservablePropertyAST_analyzeBoundObservablePropertyForEnabledBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfObservablePropertyAST_analyzeBoundObservablePropertyForEnabledBinding (defineCategoryMethod_selfObservablePropertyAST_analyzeBoundObservablePropertyForEnabledBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@rootObservablePropertyAST analyzeBoundObservablePropertyForEnabledBinding'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_rootObservablePropertyAST_analyzeBoundObservablePropertyForEnabledBinding (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                                      const GALGAS_string /* constinArgument_inSelfTypeName */,
                                                                                                      const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                                                      const GALGAS_arrayControllerMap /* constinArgument_inArrayControllerMap */,
                                                                                                      const GALGAS_decoratedObservablePropertyMap /* constinArgument_inObservablePropertyMap */,
                                                                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inRootEntityType,
                                                                                                      GALGAS_uint & ioArgument_ioIndex,
                                                                                                      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outExpression,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_rootObservablePropertyAST * object = (const cPtr_rootObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_rootObservablePropertyAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_propertyType ;
  GALGAS_bool joker_27071 ; // Joker input parameter
  GALGAS_lstring joker_27099 ; // Joker input parameter
  GALGAS_bool joker_27135 ; // Joker input parameter
  constinArgument_inRootEntityType.reader_mObservablePropertyMap (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 650)).method_searchKey (object->mAttribute_mRootObservablePropertyName, var_propertyType, joker_27071, joker_27099, joker_27135, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 650)) ;
  const enumGalgasBool test_0 = var_propertyType.reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 657)).reader_isBoolType (SOURCE_FILE ("typeAnalysis.galgas", 657)).operator_not (SOURCE_FILE ("typeAnalysis.galgas", 657)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mRootObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this property should be boolean")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 658)) ;
  }
  outArgument_outExpression = GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (GALGAS_string ("rootObject"), object->mAttribute_mRootObservablePropertyName.mAttribute_string, constinArgument_inRootEntityType.reader_key (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 668)), ioArgument_ioIndex  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 665)) ;
  ioArgument_ioIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 670)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_rootObservablePropertyAST_analyzeBoundObservablePropertyForEnabledBinding (void) {
  enterCategoryMethod_analyzeBoundObservablePropertyForEnabledBinding (kTypeDescriptor_GALGAS_rootObservablePropertyAST.mSlotID,
                                                                       categoryMethod_rootObservablePropertyAST_analyzeBoundObservablePropertyForEnabledBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_rootObservablePropertyAST_analyzeBoundObservablePropertyForEnabledBinding (defineCategoryMethod_rootObservablePropertyAST_analyzeBoundObservablePropertyForEnabledBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding category method '@preferenceObservablePropertyAST analyzeBoundObservablePropertyForEnabledBinding'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_preferenceObservablePropertyAST_analyzeBoundObservablePropertyForEnabledBinding (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                                            const GALGAS_string /* constinArgument_inSelfTypeName */,
                                                                                                            const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                                            const GALGAS_arrayControllerMap /* constinArgument_inArrayControllerMap */,
                                                                                                            const GALGAS_decoratedObservablePropertyMap /* constinArgument_inObservablePropertyMap */,
                                                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inRootEntityType */,
                                                                                                            GALGAS_uint & ioArgument_ioIndex,
                                                                                                            GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outExpression,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_preferenceObservablePropertyAST * object = (const cPtr_preferenceObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_preferenceObservablePropertyAST) ;
  GALGAS_typeKind var_typeKind ;
  GALGAS_decoratedObservablePropertyMap var_observablePropertyMap ;
  GALGAS_unifiedTypeMap_2D_proxy joker_28433_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_28433_4 ; // Joker input parameter
  GALGAS_decoratedAttributeMap joker_28433_3 ; // Joker input parameter
  GALGAS_decoratedTransientMap joker_28433_2 ; // Joker input parameter
  GALGAS_decoratedOutletMap joker_28433_1 ; // Joker input parameter
  GALGAS_decoratedEntityRelationshipMap joker_28504_6 ; // Joker input parameter
  GALGAS_actionMap joker_28504_5 ; // Joker input parameter
  GALGAS_bindingList joker_28504_4 ; // Joker input parameter
  GALGAS_lstringlist joker_28504_3 ; // Joker input parameter
  GALGAS_enumConstantMap joker_28504_2 ; // Joker input parameter
  GALGAS_arrayControllerMap joker_28504_1 ; // Joker input parameter
  constinArgument_inUnifiedTypeMap.method_searchKey (object->mAttribute_mPreferenceName, var_typeKind, joker_28433_5, joker_28433_4, joker_28433_3, joker_28433_2, joker_28433_1, var_observablePropertyMap, joker_28504_6, joker_28504_5, joker_28504_4, joker_28504_3, joker_28504_2, joker_28504_1, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 684)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKind.objectCompare (GALGAS_typeKind::constructor_preferencesType (SOURCE_FILE ("typeAnalysis.galgas", 691)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mPreferenceName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("there is no '").add_operation (object->mAttribute_mPreferenceName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 692)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 692)).add_operation (GALGAS_string ("' preferences"), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 692))  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 692)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_propertyType ;
  GALGAS_bool var_isCollection ;
  GALGAS_bool joker_28778 ; // Joker input parameter
  GALGAS_lstring joker_28806 ; // Joker input parameter
  var_observablePropertyMap.method_searchKey (object->mAttribute_mPreferenceObservablePropertyName, var_propertyType, joker_28778, joker_28806, var_isCollection, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 695)) ;
  const enumGalgasBool test_2 = var_propertyType.reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 702)).reader_isBoolType (SOURCE_FILE ("typeAnalysis.galgas", 702)).operator_not (SOURCE_FILE ("typeAnalysis.galgas", 702)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mPreferenceObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("this property should be boolean")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 703)) ;
  }
  const enumGalgasBool test_4 = var_isCollection.boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mPreferenceObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("the observable property should not be a collection")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 706)) ;
  }
  outArgument_outExpression = GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (GALGAS_string ("g_").add_operation (object->mAttribute_mPreferenceName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 709)), object->mAttribute_mPreferenceObservablePropertyName.mAttribute_string, object->mAttribute_mPreferenceName.mAttribute_string, ioArgument_ioIndex  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 708)) ;
  ioArgument_ioIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 713)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_preferenceObservablePropertyAST_analyzeBoundObservablePropertyForEnabledBinding (void) {
  enterCategoryMethod_analyzeBoundObservablePropertyForEnabledBinding (kTypeDescriptor_GALGAS_preferenceObservablePropertyAST.mSlotID,
                                                                       categoryMethod_preferenceObservablePropertyAST_analyzeBoundObservablePropertyForEnabledBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_preferenceObservablePropertyAST_analyzeBoundObservablePropertyForEnabledBinding (defineCategoryMethod_preferenceObservablePropertyAST_analyzeBoundObservablePropertyForEnabledBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Overriding category method '@arrayControllerObservablePropertyAST analyzeBoundObservablePropertyForEnabledBinding'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_arrayControllerObservablePropertyAST_analyzeBoundObservablePropertyForEnabledBinding (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                                                 const GALGAS_string /* constinArgument_inSelfTypeName */,
                                                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                                                                 const GALGAS_arrayControllerMap constinArgument_inArrayControllerMap,
                                                                                                                 const GALGAS_decoratedObservablePropertyMap /* constinArgument_inObservablePropertyMap */,
                                                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inRootEntityType */,
                                                                                                                 GALGAS_uint & ioArgument_ioIndex,
                                                                                                                 GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outExpression,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayControllerObservablePropertyAST * object = (const cPtr_arrayControllerObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerObservablePropertyAST) ;
  GALGAS_decoratedObservablePropertyMap var_arrayControllerObservablePropertyMap ;
  GALGAS_string var_observedTypeName ;
  GALGAS_abstractObservablePropertyAST joker_29977 ; // Joker input parameter
  GALGAS_lstring joker_30029_3 ; // Joker input parameter
  GALGAS_arrayControllerBoundColumnListAST joker_30029_2 ; // Joker input parameter
  GALGAS_actionMap joker_30029_1 ; // Joker input parameter
  GALGAS_lstring joker_30115 ; // Joker input parameter
  constinArgument_inArrayControllerMap.method_searchKey (object->mAttribute_mArrayControllerName, joker_29977, joker_30029_3, joker_30029_2, joker_30029_1, var_arrayControllerObservablePropertyMap, joker_30115, var_observedTypeName, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 727)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_propertyType ;
  GALGAS_bool var_isCollection ;
  GALGAS_bool joker_30307 ; // Joker input parameter
  GALGAS_lstring joker_30336 ; // Joker input parameter
  var_arrayControllerObservablePropertyMap.method_searchKey (object->mAttribute_mArrayControllerObservablePropertyName, var_propertyType, joker_30307, joker_30336, var_isCollection, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 736)) ;
  const enumGalgasBool test_0 = var_propertyType.reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 743)).reader_isBoolType (SOURCE_FILE ("typeAnalysis.galgas", 743)).operator_not (SOURCE_FILE ("typeAnalysis.galgas", 743)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mArrayControllerObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this property should be boolean")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 744)) ;
  }
  const enumGalgasBool test_2 = var_isCollection.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mArrayControllerObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the observable property should not be a collection")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 747)) ;
  }
  outArgument_outExpression = GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (object->mAttribute_mArrayControllerName.mAttribute_string, object->mAttribute_mArrayControllerObservablePropertyName.mAttribute_string, var_observedTypeName, ioArgument_ioIndex  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 749)) ;
  ioArgument_ioIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 754)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_arrayControllerObservablePropertyAST_analyzeBoundObservablePropertyForEnabledBinding (void) {
  enterCategoryMethod_analyzeBoundObservablePropertyForEnabledBinding (kTypeDescriptor_GALGAS_arrayControllerObservablePropertyAST.mSlotID,
                                                                       categoryMethod_arrayControllerObservablePropertyAST_analyzeBoundObservablePropertyForEnabledBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayControllerObservablePropertyAST_analyzeBoundObservablePropertyForEnabledBinding (defineCategoryMethod_arrayControllerObservablePropertyAST_analyzeBoundObservablePropertyForEnabledBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@selfObservablePropertyAST analyzeBoundObservablePropertyForSimpleBinding'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                                     const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                                                     const GALGAS_arrayControllerMap /* constinArgument_inArrayControllerMap */,
                                                                                                     const GALGAS_lstring constinArgument_inSelectorName,
                                                                                                     const GALGAS_string constinArgument_inCurrentTypeName,
                                                                                                     const GALGAS_decoratedObservablePropertyMap constinArgument_inObservablePropertyMap,
                                                                                                     const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inRootEntityType */,
                                                                                                     GALGAS_string & ioArgument_ioControllerSignature,
                                                                                                     GALGAS_unifiedTypeProxySelectorList & ioArgument_ioBoundPropertyTypeList,
                                                                                                     GALGAS__32_stringlist & ioArgument_ioTypePropertyNameList,
                                                                                                     GALGAS_stringlist & ioArgument_ioBoundObjectNameList,
                                                                                                     GALGAS_bool & outArgument_outModelIsTransient,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfObservablePropertyAST * object = (const cPtr_selfObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfObservablePropertyAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_propertyType ;
  GALGAS_bool var_isCollection ;
  GALGAS_lstring joker_32623 ; // Joker input parameter
  constinArgument_inObservablePropertyMap.method_searchKey (object->mAttribute_mSelfObservablePropertyName, var_propertyType, outArgument_outModelIsTransient, joker_32623, var_isCollection, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 792)) ;
  const enumGalgasBool test_0 = var_isCollection.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mSelfObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the observable property should not be a collection")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 800)) ;
  }
  ioArgument_ioControllerSignature.dotAssign_operation (GALGAS_string (".").add_operation (categoryReader_typeNameForControllerTemplateName (var_propertyType, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 802)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 802)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 802)).add_operation (constinArgument_inSelectorName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 802)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 802))  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 802)) ;
  ioArgument_ioBoundPropertyTypeList.addAssign_operation (var_propertyType, constinArgument_inSelectorName  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 803)) ;
  ioArgument_ioTypePropertyNameList.addAssign_operation (constinArgument_inCurrentTypeName, object->mAttribute_mSelfObservablePropertyName.mAttribute_string  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 804)) ;
  ioArgument_ioBoundObjectNameList.addAssign_operation (GALGAS_string ("self")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 805)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding (void) {
  enterCategoryMethod_analyzeBoundObservablePropertyForSimpleBinding (kTypeDescriptor_GALGAS_selfObservablePropertyAST.mSlotID,
                                                                      categoryMethod_selfObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding (defineCategoryMethod_selfObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@rootObservablePropertyAST analyzeBoundObservablePropertyForSimpleBinding'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_rootObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                                     const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                                     const GALGAS_arrayControllerMap /* constinArgument_inArrayControllerMap */,
                                                                                                     const GALGAS_lstring constinArgument_inSelectorName,
                                                                                                     const GALGAS_string /* constinArgument_inCurrentTypeName */,
                                                                                                     const GALGAS_decoratedObservablePropertyMap /* constinArgument_inObservablePropertyMap */,
                                                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inRootEntityType,
                                                                                                     GALGAS_string & ioArgument_ioControllerSignature,
                                                                                                     GALGAS_unifiedTypeProxySelectorList & ioArgument_ioBoundPropertyTypeList,
                                                                                                     GALGAS__32_stringlist & ioArgument_ioTypePropertyNameList,
                                                                                                     GALGAS_stringlist & ioArgument_ioBoundObjectNameList,
                                                                                                     GALGAS_bool & outArgument_outModelIsTransient,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_rootObservablePropertyAST * object = (const cPtr_rootObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_rootObservablePropertyAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_propertyType ;
  GALGAS_bool var_isCollection ;
  GALGAS_lstring joker_33908 ; // Joker input parameter
  constinArgument_inRootEntityType.reader_mObservablePropertyMap (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 822)).method_searchKey (object->mAttribute_mRootObservablePropertyName, var_propertyType, outArgument_outModelIsTransient, joker_33908, var_isCollection, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 822)) ;
  const enumGalgasBool test_0 = var_isCollection.operator_and (object->mAttribute_mNamesCountOption.operator_not (SOURCE_FILE ("typeAnalysis.galgas", 829)) COMMA_SOURCE_FILE ("typeAnalysis.galgas", 829)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mRootObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the observable property should not be a collection")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 830)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = object->mAttribute_mNamesCountOption.operator_and (var_isCollection.operator_not (SOURCE_FILE ("typeAnalysis.galgas", 831)) COMMA_SOURCE_FILE ("typeAnalysis.galgas", 831)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mRootObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the observable property should be a collection")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 832)) ;
    }
  }
  ioArgument_ioBoundObjectNameList.addAssign_operation (GALGAS_string ("rootObject")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 834)) ;
  const enumGalgasBool test_4 = object->mAttribute_mNamesCountOption.boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioControllerSignature.dotAssign_operation (GALGAS_string (".Integer.").add_operation (constinArgument_inSelectorName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 836)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 836))  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 836)) ;
    ioArgument_ioTypePropertyNameList.addAssign_operation (constinArgument_inRootEntityType.reader_key (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 837)), object->mAttribute_mRootObservablePropertyName.mAttribute_string.add_operation (GALGAS_string ("_count"), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 837))  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 837)) ;
    ioArgument_ioBoundPropertyTypeList.addAssign_operation (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inUnifiedTypeMap, GALGAS_string ("Integer").reader_nowhere (SOURCE_FILE ("typeAnalysis.galgas", 838)), inCompiler  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 838)), constinArgument_inSelectorName  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 838)) ;
  }else if (kBoolFalse == test_4) {
    ioArgument_ioControllerSignature.dotAssign_operation (GALGAS_string (".").add_operation (categoryReader_typeNameForControllerTemplateName (var_propertyType, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 840)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 840)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 840)).add_operation (constinArgument_inSelectorName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 840)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 840))  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 840)) ;
    ioArgument_ioTypePropertyNameList.addAssign_operation (constinArgument_inRootEntityType.reader_key (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 841)), object->mAttribute_mRootObservablePropertyName.mAttribute_string  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 841)) ;
    ioArgument_ioBoundPropertyTypeList.addAssign_operation (var_propertyType, constinArgument_inSelectorName  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 842)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_rootObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding (void) {
  enterCategoryMethod_analyzeBoundObservablePropertyForSimpleBinding (kTypeDescriptor_GALGAS_rootObservablePropertyAST.mSlotID,
                                                                      categoryMethod_rootObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_rootObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding (defineCategoryMethod_rootObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding category method '@preferenceObservablePropertyAST analyzeBoundObservablePropertyForSimpleBinding'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_preferenceObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                                           const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                                           const GALGAS_arrayControllerMap /* constinArgument_inArrayControllerMap */,
                                                                                                           const GALGAS_lstring constinArgument_inSelectorName,
                                                                                                           const GALGAS_string /* constinArgument_inCurrentTypeName */,
                                                                                                           const GALGAS_decoratedObservablePropertyMap /* constinArgument_inObservablePropertyMap */,
                                                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inRootEntityType */,
                                                                                                           GALGAS_string & ioArgument_ioControllerSignature,
                                                                                                           GALGAS_unifiedTypeProxySelectorList & ioArgument_ioBoundPropertyTypeList,
                                                                                                           GALGAS__32_stringlist & ioArgument_ioTypePropertyNameList,
                                                                                                           GALGAS_stringlist & ioArgument_ioBoundObjectNameList,
                                                                                                           GALGAS_bool & outArgument_outModelIsTransient,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_preferenceObservablePropertyAST * object = (const cPtr_preferenceObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_preferenceObservablePropertyAST) ;
  GALGAS_typeKind var_typeKind ;
  GALGAS_decoratedObservablePropertyMap var_observablePropertyMap ;
  GALGAS_unifiedTypeMap_2D_proxy joker_35660_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_35660_4 ; // Joker input parameter
  GALGAS_decoratedAttributeMap joker_35660_3 ; // Joker input parameter
  GALGAS_decoratedTransientMap joker_35660_2 ; // Joker input parameter
  GALGAS_decoratedOutletMap joker_35660_1 ; // Joker input parameter
  GALGAS_decoratedEntityRelationshipMap joker_35731_6 ; // Joker input parameter
  GALGAS_actionMap joker_35731_5 ; // Joker input parameter
  GALGAS_bindingList joker_35731_4 ; // Joker input parameter
  GALGAS_lstringlist joker_35731_3 ; // Joker input parameter
  GALGAS_enumConstantMap joker_35731_2 ; // Joker input parameter
  GALGAS_arrayControllerMap joker_35731_1 ; // Joker input parameter
  constinArgument_inUnifiedTypeMap.method_searchKey (object->mAttribute_mPreferenceName, var_typeKind, joker_35660_5, joker_35660_4, joker_35660_3, joker_35660_2, joker_35660_1, var_observablePropertyMap, joker_35731_6, joker_35731_5, joker_35731_4, joker_35731_3, joker_35731_2, joker_35731_1, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 861)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKind.objectCompare (GALGAS_typeKind::constructor_preferencesType (SOURCE_FILE ("typeAnalysis.galgas", 868)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mPreferenceName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("there is no '").add_operation (object->mAttribute_mPreferenceName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 869)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 869)).add_operation (GALGAS_string ("' preferences"), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 869))  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 869)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_propertyType ;
  GALGAS_bool var_isCollection ;
  GALGAS_lstring joker_36030 ; // Joker input parameter
  var_observablePropertyMap.method_searchKey (object->mAttribute_mPreferenceObservablePropertyName, var_propertyType, outArgument_outModelIsTransient, joker_36030, var_isCollection, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 872)) ;
  const enumGalgasBool test_2 = var_isCollection.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mPreferenceObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the observable property should not be a collection")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 880)) ;
  }
  ioArgument_ioControllerSignature.dotAssign_operation (GALGAS_string (".").add_operation (categoryReader_typeNameForControllerTemplateName (var_propertyType, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 882)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 882)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 882)).add_operation (constinArgument_inSelectorName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 882)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 882))  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 882)) ;
  ioArgument_ioBoundPropertyTypeList.addAssign_operation (var_propertyType, constinArgument_inSelectorName  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 883)) ;
  ioArgument_ioTypePropertyNameList.addAssign_operation (object->mAttribute_mPreferenceName.mAttribute_string, object->mAttribute_mPreferenceObservablePropertyName.mAttribute_string  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 884)) ;
  ioArgument_ioBoundObjectNameList.addAssign_operation (GALGAS_string ("g_").add_operation (object->mAttribute_mPreferenceName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 885)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 885))  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 885)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_preferenceObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding (void) {
  enterCategoryMethod_analyzeBoundObservablePropertyForSimpleBinding (kTypeDescriptor_GALGAS_preferenceObservablePropertyAST.mSlotID,
                                                                      categoryMethod_preferenceObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_preferenceObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding (defineCategoryMethod_preferenceObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding category method '@arrayControllerObservablePropertyAST analyzeBoundObservablePropertyForSimpleBinding'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_arrayControllerObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                                                                const GALGAS_arrayControllerMap constinArgument_inArrayControllerMap,
                                                                                                                const GALGAS_lstring constinArgument_inSelectorName,
                                                                                                                const GALGAS_string constinArgument_inCurrentTypeName,
                                                                                                                const GALGAS_decoratedObservablePropertyMap /* constinArgument_inObservablePropertyMap */,
                                                                                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inRootEntityType,
                                                                                                                GALGAS_string & ioArgument_ioControllerSignature,
                                                                                                                GALGAS_unifiedTypeProxySelectorList & ioArgument_ioBoundPropertyTypeList,
                                                                                                                GALGAS__32_stringlist & ioArgument_ioTypePropertyNameList,
                                                                                                                GALGAS_stringlist & ioArgument_ioBoundObjectNameList,
                                                                                                                GALGAS_bool & outArgument_outModelIsTransient,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayControllerObservablePropertyAST * object = (const cPtr_arrayControllerObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerObservablePropertyAST) ;
  GALGAS_abstractObservablePropertyAST var_boundModel ;
  GALGAS_decoratedObservablePropertyMap var_arrayControllerObservablePropertyMap ;
  GALGAS_lstring joker_37331_3 ; // Joker input parameter
  GALGAS_arrayControllerBoundColumnListAST joker_37331_2 ; // Joker input parameter
  GALGAS_actionMap joker_37331_1 ; // Joker input parameter
  GALGAS_lstring joker_37417_2 ; // Joker input parameter
  GALGAS_string joker_37417_1 ; // Joker input parameter
  constinArgument_inArrayControllerMap.method_searchKey (object->mAttribute_mArrayControllerName, var_boundModel, joker_37331_3, joker_37331_2, joker_37331_1, var_arrayControllerObservablePropertyMap, joker_37417_2, joker_37417_1, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 903)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_propertyType ;
  GALGAS_bool var_isCollection ;
  GALGAS_lstring joker_37601 ; // Joker input parameter
  var_arrayControllerObservablePropertyMap.method_searchKey (object->mAttribute_mArrayControllerObservablePropertyName, var_propertyType, outArgument_outModelIsTransient, joker_37601, var_isCollection, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 911)) ;
  const enumGalgasBool test_0 = var_isCollection.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mArrayControllerObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the observable property should not be a collection")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 919)) ;
  }
  ioArgument_ioControllerSignature.dotAssign_operation (GALGAS_string (".").add_operation (categoryReader_typeNameForControllerTemplateName (var_propertyType, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 921)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 921)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 921)).add_operation (constinArgument_inSelectorName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 921)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 921))  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 921)) ;
  ioArgument_ioBoundPropertyTypeList.addAssign_operation (var_propertyType, constinArgument_inSelectorName  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 922)) ;
  ioArgument_ioBoundObjectNameList.addAssign_operation (object->mAttribute_mArrayControllerName.mAttribute_string  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 923)) ;
  ioArgument_ioTypePropertyNameList.addAssign_operation (GALGAS_string ("ArrayController_").add_operation (callCategoryReader_modelSignatureForArrayController ((const cPtr_abstractObservablePropertyAST *) var_boundModel.ptr (), constinArgument_inRootEntityType, constinArgument_inCurrentTypeName, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 925)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 925)), object->mAttribute_mArrayControllerObservablePropertyName.mAttribute_string  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 924)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_arrayControllerObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding (void) {
  enterCategoryMethod_analyzeBoundObservablePropertyForSimpleBinding (kTypeDescriptor_GALGAS_arrayControllerObservablePropertyAST.mSlotID,
                                                                      categoryMethod_arrayControllerObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayControllerObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding (defineCategoryMethod_arrayControllerObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   Overriding category method '@selfObservablePropertyAST analyzeBoundObservablePropertyForArrayControllerBinding'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfObservablePropertyAST_analyzeBoundObservablePropertyForArrayControllerBinding (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                                              const GALGAS_decoratedEntityRelationshipMap /* constinArgument_inCurrentRelationshipMap */,
                                                                                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument_outRelationshipTypeProxy,
                                                                                                              GALGAS_lstring & outArgument_outBoundRootTomanyRelationshipName,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfObservablePropertyAST * object = (const cPtr_selfObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfObservablePropertyAST) ;
  GALGAS_location location_0 (object->mAttribute_mSelfObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
  inCompiler->emitSemanticError (location_0, GALGAS_string ("the bound array should be a root object model")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 948)) ;
  outArgument_outBoundRootTomanyRelationshipName.drop () ; // Release error dropped variable
  outArgument_outRelationshipTypeProxy.drop () ; // Release error dropped variable
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfObservablePropertyAST_analyzeBoundObservablePropertyForArrayControllerBinding (void) {
  enterCategoryMethod_analyzeBoundObservablePropertyForArrayControllerBinding (kTypeDescriptor_GALGAS_selfObservablePropertyAST.mSlotID,
                                                                               categoryMethod_selfObservablePropertyAST_analyzeBoundObservablePropertyForArrayControllerBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfObservablePropertyAST_analyzeBoundObservablePropertyForArrayControllerBinding (defineCategoryMethod_selfObservablePropertyAST_analyzeBoundObservablePropertyForArrayControllerBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//   Overriding category method '@rootObservablePropertyAST analyzeBoundObservablePropertyForArrayControllerBinding'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_rootObservablePropertyAST_analyzeBoundObservablePropertyForArrayControllerBinding (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                                              const GALGAS_decoratedEntityRelationshipMap constinArgument_inCurrentRelationshipMap,
                                                                                                              GALGAS_unifiedTypeMap_2D_proxy & outArgument_outRelationshipTypeProxy,
                                                                                                              GALGAS_lstring & outArgument_outBoundRootTomanyRelationshipName,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_rootObservablePropertyAST * object = (const cPtr_rootObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_rootObservablePropertyAST) ;
  GALGAS_bool var_mIsToMany ;
  GALGAS_lstring joker_39833 ; // Joker input parameter
  constinArgument_inCurrentRelationshipMap.method_searchKey (object->mAttribute_mRootObservablePropertyName, var_mIsToMany, outArgument_outRelationshipTypeProxy, joker_39833, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 959)) ;
  const enumGalgasBool test_0 = var_mIsToMany.operator_not (SOURCE_FILE ("typeAnalysis.galgas", 965)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mRootObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the observable property should be a tomany relationship")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 966)) ;
  }
  outArgument_outBoundRootTomanyRelationshipName = object->mAttribute_mRootObservablePropertyName ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_rootObservablePropertyAST_analyzeBoundObservablePropertyForArrayControllerBinding (void) {
  enterCategoryMethod_analyzeBoundObservablePropertyForArrayControllerBinding (kTypeDescriptor_GALGAS_rootObservablePropertyAST.mSlotID,
                                                                               categoryMethod_rootObservablePropertyAST_analyzeBoundObservablePropertyForArrayControllerBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_rootObservablePropertyAST_analyzeBoundObservablePropertyForArrayControllerBinding (defineCategoryMethod_rootObservablePropertyAST_analyzeBoundObservablePropertyForArrayControllerBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding category method '@preferenceObservablePropertyAST analyzeBoundObservablePropertyForArrayControllerBinding'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_preferenceObservablePropertyAST_analyzeBoundObservablePropertyForArrayControllerBinding (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                                                    const GALGAS_decoratedEntityRelationshipMap /* constinArgument_inCurrentRelationshipMap */,
                                                                                                                    GALGAS_unifiedTypeMap_2D_proxy & outArgument_outRelationshipTypeProxy,
                                                                                                                    GALGAS_lstring & outArgument_outBoundRootTomanyRelationshipName,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_preferenceObservablePropertyAST * object = (const cPtr_preferenceObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_preferenceObservablePropertyAST) ;
  GALGAS_location location_0 (object->mAttribute_mPreferenceObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
  inCompiler->emitSemanticError (location_0, GALGAS_string ("the bound array should be a root object model")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 977)) ;
  outArgument_outBoundRootTomanyRelationshipName.drop () ; // Release error dropped variable
  outArgument_outRelationshipTypeProxy.drop () ; // Release error dropped variable
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_preferenceObservablePropertyAST_analyzeBoundObservablePropertyForArrayControllerBinding (void) {
  enterCategoryMethod_analyzeBoundObservablePropertyForArrayControllerBinding (kTypeDescriptor_GALGAS_preferenceObservablePropertyAST.mSlotID,
                                                                               categoryMethod_preferenceObservablePropertyAST_analyzeBoundObservablePropertyForArrayControllerBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_preferenceObservablePropertyAST_analyzeBoundObservablePropertyForArrayControllerBinding (defineCategoryMethod_preferenceObservablePropertyAST_analyzeBoundObservablePropertyForArrayControllerBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding category method '@arrayControllerObservablePropertyAST analyzeBoundObservablePropertyForArrayControllerBinding'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_arrayControllerObservablePropertyAST_analyzeBoundObservablePropertyForArrayControllerBinding (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                                                         const GALGAS_decoratedEntityRelationshipMap /* constinArgument_inCurrentRelationshipMap */,
                                                                                                                         GALGAS_unifiedTypeMap_2D_proxy & outArgument_outRelationshipTypeProxy,
                                                                                                                         GALGAS_lstring & outArgument_outBoundRootTomanyRelationshipName,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayControllerObservablePropertyAST * object = (const cPtr_arrayControllerObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerObservablePropertyAST) ;
  GALGAS_location location_0 (object->mAttribute_mArrayControllerObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
  inCompiler->emitSemanticError (location_0, GALGAS_string ("the bound array should be a root object model")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 988)) ;
  outArgument_outBoundRootTomanyRelationshipName.drop () ; // Release error dropped variable
  outArgument_outRelationshipTypeProxy.drop () ; // Release error dropped variable
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_arrayControllerObservablePropertyAST_analyzeBoundObservablePropertyForArrayControllerBinding (void) {
  enterCategoryMethod_analyzeBoundObservablePropertyForArrayControllerBinding (kTypeDescriptor_GALGAS_arrayControllerObservablePropertyAST.mSlotID,
                                                                               categoryMethod_arrayControllerObservablePropertyAST_analyzeBoundObservablePropertyForArrayControllerBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayControllerObservablePropertyAST_analyzeBoundObservablePropertyForArrayControllerBinding (defineCategoryMethod_arrayControllerObservablePropertyAST_analyzeBoundObservablePropertyForArrayControllerBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@selfObservablePropertyAST propertySignature'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring categoryReader_selfObservablePropertyAST_propertySignature (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                  const GALGAS_string & constinArgument_inKind,
                                                                                  const GALGAS_string & constinArgument_inSelfTypeName,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & /* constinArgument_inRootypeProxy */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outSignature ; // Returned variable
  const cPtr_selfObservablePropertyAST * object = (const cPtr_selfObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfObservablePropertyAST) ;
  result_outSignature = GALGAS_lstring::constructor_new (constinArgument_inKind.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1015)).add_operation (constinArgument_inSelfTypeName, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1015)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1015)).add_operation (object->mAttribute_mSelfObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 1015)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1015)), object->mAttribute_mSelfObservablePropertyName.mAttribute_location  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1014)) ;
//---
  return result_outSignature ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_selfObservablePropertyAST_propertySignature (void) {
  enterCategoryReader_propertySignature (kTypeDescriptor_GALGAS_selfObservablePropertyAST.mSlotID,
                                         categoryReader_selfObservablePropertyAST_propertySignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_selfObservablePropertyAST_propertySignature (defineCategoryReader_selfObservablePropertyAST_propertySignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@rootObservablePropertyAST propertySignature'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring categoryReader_rootObservablePropertyAST_propertySignature (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                  const GALGAS_string & /* constinArgument_inKind */,
                                                                                  const GALGAS_string & /* constinArgument_inSelfTypeName */,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & constinArgument_inRootypeProxy,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outSignature ; // Returned variable
  const cPtr_rootObservablePropertyAST * object = (const cPtr_rootObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_rootObservablePropertyAST) ;
  result_outSignature = GALGAS_lstring::constructor_new (GALGAS_string ("entity.").add_operation (constinArgument_inRootypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1027)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1027)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1027)).add_operation (object->mAttribute_mRootObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 1027)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1027)), object->mAttribute_mRootObservablePropertyName.mAttribute_location  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1026)) ;
//---
  return result_outSignature ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_rootObservablePropertyAST_propertySignature (void) {
  enterCategoryReader_propertySignature (kTypeDescriptor_GALGAS_rootObservablePropertyAST.mSlotID,
                                         categoryReader_rootObservablePropertyAST_propertySignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_rootObservablePropertyAST_propertySignature (defineCategoryReader_rootObservablePropertyAST_propertySignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@preferenceObservablePropertyAST propertySignature'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring categoryReader_preferenceObservablePropertyAST_propertySignature (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                        const GALGAS_string & /* constinArgument_inKind */,
                                                                                        const GALGAS_string & /* constinArgument_inSelfTypeName */,
                                                                                        const GALGAS_unifiedTypeMap_2D_proxy & /* constinArgument_inRootypeProxy */,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outSignature ; // Returned variable
  const cPtr_preferenceObservablePropertyAST * object = (const cPtr_preferenceObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_preferenceObservablePropertyAST) ;
  result_outSignature = GALGAS_lstring::constructor_new (GALGAS_string ("preferences.").add_operation (object->mAttribute_mPreferenceName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 1039)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1039)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1039)).add_operation (object->mAttribute_mPreferenceObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 1039)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1039)), object->mAttribute_mPreferenceObservablePropertyName.mAttribute_location  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1038)) ;
//---
  return result_outSignature ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_preferenceObservablePropertyAST_propertySignature (void) {
  enterCategoryReader_propertySignature (kTypeDescriptor_GALGAS_preferenceObservablePropertyAST.mSlotID,
                                         categoryReader_preferenceObservablePropertyAST_propertySignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_preferenceObservablePropertyAST_propertySignature (defineCategoryReader_preferenceObservablePropertyAST_propertySignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@arrayControllerObservablePropertyAST propertySignature'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_lstring categoryReader_arrayControllerObservablePropertyAST_propertySignature (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                             const GALGAS_string & constinArgument_inKind,
                                                                                             const GALGAS_string & constinArgument_inSelfTypeName,
                                                                                             const GALGAS_unifiedTypeMap_2D_proxy & /* constinArgument_inRootypeProxy */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring result_outSignature ; // Returned variable
  const cPtr_arrayControllerObservablePropertyAST * object = (const cPtr_arrayControllerObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerObservablePropertyAST) ;
  result_outSignature = GALGAS_lstring::constructor_new (constinArgument_inKind.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1051)).add_operation (constinArgument_inSelfTypeName, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1051)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1051)).add_operation (object->mAttribute_mArrayControllerObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 1051)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1051)), object->mAttribute_mArrayControllerObservablePropertyName.mAttribute_location  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1050)) ;
//---
  return result_outSignature ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_arrayControllerObservablePropertyAST_propertySignature (void) {
  enterCategoryReader_propertySignature (kTypeDescriptor_GALGAS_arrayControllerObservablePropertyAST.mSlotID,
                                         categoryReader_arrayControllerObservablePropertyAST_propertySignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_arrayControllerObservablePropertyAST_propertySignature (defineCategoryReader_arrayControllerObservablePropertyAST_propertySignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@selfObservablePropertyAST arrayControllerTypeName'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_selfObservablePropertyAST_arrayControllerTypeName (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                       const GALGAS_string & constinArgument_inSelfTypeName,
                                                                                       const GALGAS_unifiedTypeMap_2D_proxy & /* constinArgument_inRootypeProxy */,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outTypeName ; // Returned variable
  const cPtr_selfObservablePropertyAST * object = (const cPtr_selfObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfObservablePropertyAST) ;
  result_outTypeName = GALGAS_string ("ArrayController_").add_operation (constinArgument_inSelfTypeName, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1074)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1074)).add_operation (object->mAttribute_mSelfObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 1074)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1074)) ;
//---
  return result_outTypeName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_selfObservablePropertyAST_arrayControllerTypeName (void) {
  enterCategoryReader_arrayControllerTypeName (kTypeDescriptor_GALGAS_selfObservablePropertyAST.mSlotID,
                                               categoryReader_selfObservablePropertyAST_arrayControllerTypeName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_selfObservablePropertyAST_arrayControllerTypeName (defineCategoryReader_selfObservablePropertyAST_arrayControllerTypeName, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@rootObservablePropertyAST arrayControllerTypeName'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_rootObservablePropertyAST_arrayControllerTypeName (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                       const GALGAS_string & /* constinArgument_inSelfTypeName */,
                                                                                       const GALGAS_unifiedTypeMap_2D_proxy & constinArgument_inRootypeProxy,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outTypeName ; // Returned variable
  const cPtr_rootObservablePropertyAST * object = (const cPtr_rootObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_rootObservablePropertyAST) ;
  result_outTypeName = GALGAS_string ("ArrayController_").add_operation (constinArgument_inRootypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1083)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1083)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1083)).add_operation (object->mAttribute_mRootObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 1083)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1083)) ;
//---
  return result_outTypeName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_rootObservablePropertyAST_arrayControllerTypeName (void) {
  enterCategoryReader_arrayControllerTypeName (kTypeDescriptor_GALGAS_rootObservablePropertyAST.mSlotID,
                                               categoryReader_rootObservablePropertyAST_arrayControllerTypeName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_rootObservablePropertyAST_arrayControllerTypeName (defineCategoryReader_rootObservablePropertyAST_arrayControllerTypeName, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@preferenceObservablePropertyAST arrayControllerTypeName'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_preferenceObservablePropertyAST_arrayControllerTypeName (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                             const GALGAS_string & /* constinArgument_inSelfTypeName */,
                                                                                             const GALGAS_unifiedTypeMap_2D_proxy & /* constinArgument_inRootypeProxy */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outTypeName ; // Returned variable
  const cPtr_preferenceObservablePropertyAST * object = (const cPtr_preferenceObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_preferenceObservablePropertyAST) ;
  result_outTypeName = GALGAS_string ("ArrayController_").add_operation (object->mAttribute_mPreferenceName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 1092)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1092)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1092)).add_operation (object->mAttribute_mPreferenceObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 1092)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1092)) ;
//---
  return result_outTypeName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_preferenceObservablePropertyAST_arrayControllerTypeName (void) {
  enterCategoryReader_arrayControllerTypeName (kTypeDescriptor_GALGAS_preferenceObservablePropertyAST.mSlotID,
                                               categoryReader_preferenceObservablePropertyAST_arrayControllerTypeName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_preferenceObservablePropertyAST_arrayControllerTypeName (defineCategoryReader_preferenceObservablePropertyAST_arrayControllerTypeName, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category reader '@arrayControllerObservablePropertyAST arrayControllerTypeName'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_arrayControllerObservablePropertyAST_arrayControllerTypeName (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                                  const GALGAS_string & constinArgument_inSelfTypeName,
                                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & /* constinArgument_inRootypeProxy */,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outTypeName ; // Returned variable
  const cPtr_arrayControllerObservablePropertyAST * object = (const cPtr_arrayControllerObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerObservablePropertyAST) ;
  result_outTypeName = GALGAS_string ("ArrayController_").add_operation (constinArgument_inSelfTypeName, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1101)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1101)).add_operation (object->mAttribute_mArrayControllerObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 1101)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1101)) ;
//---
  return result_outTypeName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_arrayControllerObservablePropertyAST_arrayControllerTypeName (void) {
  enterCategoryReader_arrayControllerTypeName (kTypeDescriptor_GALGAS_arrayControllerObservablePropertyAST.mSlotID,
                                               categoryReader_arrayControllerObservablePropertyAST_arrayControllerTypeName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_arrayControllerObservablePropertyAST_arrayControllerTypeName (defineCategoryReader_arrayControllerObservablePropertyAST_arrayControllerTypeName, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category reader '@selfObservablePropertyAST modelSignatureForArrayController'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_selfObservablePropertyAST_modelSignatureForArrayController (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & /* constinArgument_inRootypeProxy */,
                                                                                                const GALGAS_string & constinArgument_inSelfTypeName,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outSignature ; // Returned variable
  const cPtr_selfObservablePropertyAST * object = (const cPtr_selfObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfObservablePropertyAST) ;
  result_outSignature = constinArgument_inSelfTypeName.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1123)).add_operation (object->mAttribute_mSelfObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 1123)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1123)) ;
//---
  return result_outSignature ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_selfObservablePropertyAST_modelSignatureForArrayController (void) {
  enterCategoryReader_modelSignatureForArrayController (kTypeDescriptor_GALGAS_selfObservablePropertyAST.mSlotID,
                                                        categoryReader_selfObservablePropertyAST_modelSignatureForArrayController) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_selfObservablePropertyAST_modelSignatureForArrayController (defineCategoryReader_selfObservablePropertyAST_modelSignatureForArrayController, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category reader '@rootObservablePropertyAST modelSignatureForArrayController'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_rootObservablePropertyAST_modelSignatureForArrayController (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & constinArgument_inRootypeProxy,
                                                                                                const GALGAS_string & /* constinArgument_inSelfTypeName */,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outSignature ; // Returned variable
  const cPtr_rootObservablePropertyAST * object = (const cPtr_rootObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_rootObservablePropertyAST) ;
  result_outSignature = constinArgument_inRootypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1132)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1132)).add_operation (object->mAttribute_mRootObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 1132)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1132)) ;
//---
  return result_outSignature ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_rootObservablePropertyAST_modelSignatureForArrayController (void) {
  enterCategoryReader_modelSignatureForArrayController (kTypeDescriptor_GALGAS_rootObservablePropertyAST.mSlotID,
                                                        categoryReader_rootObservablePropertyAST_modelSignatureForArrayController) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_rootObservablePropertyAST_modelSignatureForArrayController (defineCategoryReader_rootObservablePropertyAST_modelSignatureForArrayController, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category reader '@preferenceObservablePropertyAST modelSignatureForArrayController'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_preferenceObservablePropertyAST_modelSignatureForArrayController (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                                      const GALGAS_unifiedTypeMap_2D_proxy & /* constinArgument_inRootypeProxy */,
                                                                                                      const GALGAS_string & /* constinArgument_inSelfTypeName */,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outSignature ; // Returned variable
  const cPtr_preferenceObservablePropertyAST * object = (const cPtr_preferenceObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_preferenceObservablePropertyAST) ;
  result_outSignature = object->mAttribute_mPreferenceName.mAttribute_string.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1141)).add_operation (object->mAttribute_mPreferenceObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 1141)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1141)) ;
//---
  return result_outSignature ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_preferenceObservablePropertyAST_modelSignatureForArrayController (void) {
  enterCategoryReader_modelSignatureForArrayController (kTypeDescriptor_GALGAS_preferenceObservablePropertyAST.mSlotID,
                                                        categoryReader_preferenceObservablePropertyAST_modelSignatureForArrayController) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_preferenceObservablePropertyAST_modelSignatureForArrayController (defineCategoryReader_preferenceObservablePropertyAST_modelSignatureForArrayController, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category reader '@arrayControllerObservablePropertyAST modelSignatureForArrayController'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_arrayControllerObservablePropertyAST_modelSignatureForArrayController (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                                           const GALGAS_unifiedTypeMap_2D_proxy & /* constinArgument_inRootypeProxy */,
                                                                                                           const GALGAS_string & constinArgument_inSelfTypeName,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outSignature ; // Returned variable
  const cPtr_arrayControllerObservablePropertyAST * object = (const cPtr_arrayControllerObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerObservablePropertyAST) ;
  result_outSignature = constinArgument_inSelfTypeName.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1150)).add_operation (object->mAttribute_mArrayControllerObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 1150)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1150)) ;
//---
  return result_outSignature ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_arrayControllerObservablePropertyAST_modelSignatureForArrayController (void) {
  enterCategoryReader_modelSignatureForArrayController (kTypeDescriptor_GALGAS_arrayControllerObservablePropertyAST.mSlotID,
                                                        categoryReader_arrayControllerObservablePropertyAST_modelSignatureForArrayController) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_arrayControllerObservablePropertyAST_modelSignatureForArrayController (defineCategoryReader_arrayControllerObservablePropertyAST_modelSignatureForArrayController, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category reader '@transientRootSignDependencyAST buildDecoratedRepresentation'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_abstractTransientDependencyForGeneration categoryReader_transientRootSignDependencyAST_buildDecoratedRepresentation (const cPtr_abstractTransientDependencyAST * inObject,
                                                                                                                                   const GALGAS_unifiedTypeMap_2D_proxy & /* constinArgument_inRootEntityType */,
                                                                                                                                   C_Compiler * /* inCompiler */
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_abstractTransientDependencyForGeneration result_outResult ; // Returned variable
  const cPtr_transientRootSignDependencyAST * object = (const cPtr_transientRootSignDependencyAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientRootSignDependencyAST) ;
  result_outResult = GALGAS_transientRootSignDependencyForGeneration::constructor_new (object->mAttribute_mDeclarationLocation  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1166)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientRootSignDependencyAST_buildDecoratedRepresentation (void) {
  enterCategoryReader_buildDecoratedRepresentation (kTypeDescriptor_GALGAS_transientRootSignDependencyAST.mSlotID,
                                                    categoryReader_transientRootSignDependencyAST_buildDecoratedRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientRootSignDependencyAST_buildDecoratedRepresentation (defineCategoryReader_transientRootSignDependencyAST_buildDecoratedRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@transientLocalDependencyAST buildDecoratedRepresentation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_abstractTransientDependencyForGeneration categoryReader_transientLocalDependencyAST_buildDecoratedRepresentation (const cPtr_abstractTransientDependencyAST * inObject,
                                                                                                                                const GALGAS_unifiedTypeMap_2D_proxy & /* constinArgument_inRootEntityType */,
                                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_abstractTransientDependencyForGeneration result_outResult ; // Returned variable
  const cPtr_transientLocalDependencyAST * object = (const cPtr_transientLocalDependencyAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientLocalDependencyAST) ;
  result_outResult = GALGAS_transientLocalDependencyForGeneration::constructor_new (object->mAttribute_mMasterName, object->mAttribute_mNamesCountOption  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1174)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientLocalDependencyAST_buildDecoratedRepresentation (void) {
  enterCategoryReader_buildDecoratedRepresentation (kTypeDescriptor_GALGAS_transientLocalDependencyAST.mSlotID,
                                                    categoryReader_transientLocalDependencyAST_buildDecoratedRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientLocalDependencyAST_buildDecoratedRepresentation (defineCategoryReader_transientLocalDependencyAST_buildDecoratedRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@transientRootDependencyAST buildDecoratedRepresentation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_abstractTransientDependencyForGeneration categoryReader_transientRootDependencyAST_buildDecoratedRepresentation (const cPtr_abstractTransientDependencyAST * inObject,
                                                                                                                               const GALGAS_unifiedTypeMap_2D_proxy & /* constinArgument_inRootEntityType */,
                                                                                                                               C_Compiler * /* inCompiler */
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_abstractTransientDependencyForGeneration result_outResult ; // Returned variable
  const cPtr_transientRootDependencyAST * object = (const cPtr_transientRootDependencyAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientRootDependencyAST) ;
  result_outResult = GALGAS_transientRootDependencyForGeneration::constructor_new (object->mAttribute_mMasterName, object->mAttribute_mNamesCountOption  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1182)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientRootDependencyAST_buildDecoratedRepresentation (void) {
  enterCategoryReader_buildDecoratedRepresentation (kTypeDescriptor_GALGAS_transientRootDependencyAST.mSlotID,
                                                    categoryReader_transientRootDependencyAST_buildDecoratedRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientRootDependencyAST_buildDecoratedRepresentation (defineCategoryReader_transientRootDependencyAST_buildDecoratedRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category reader '@transientRootRelationshipDependencyAST buildDecoratedRepresentation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_abstractTransientDependencyForGeneration categoryReader_transientRootRelationshipDependencyAST_buildDecoratedRepresentation (const cPtr_abstractTransientDependencyAST * inObject,
                                                                                                                                           const GALGAS_unifiedTypeMap_2D_proxy & constinArgument_inRootEntityType,
                                                                                                                                           C_Compiler * inCompiler
                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_abstractTransientDependencyForGeneration result_outResult ; // Returned variable
  const cPtr_transientRootRelationshipDependencyAST * object = (const cPtr_transientRootRelationshipDependencyAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientRootRelationshipDependencyAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_elementType ;
  GALGAS_bool joker_49078 ; // Joker input parameter
  GALGAS_lstring joker_49128 ; // Joker input parameter
  constinArgument_inRootEntityType.reader_mCurrentRelationshipMap (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1190)).method_searchKey (object->mAttribute_mRelationshipName, joker_49078, var_elementType, joker_49128, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1190)) ;
  result_outResult = GALGAS_transientRootRelationshipDependencyForGeneration::constructor_new (var_elementType, object->mAttribute_mRelationshipName, object->mAttribute_mMasterName  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1196)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientRootRelationshipDependencyAST_buildDecoratedRepresentation (void) {
  enterCategoryReader_buildDecoratedRepresentation (kTypeDescriptor_GALGAS_transientRootRelationshipDependencyAST.mSlotID,
                                                    categoryReader_transientRootRelationshipDependencyAST_buildDecoratedRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientRootRelationshipDependencyAST_buildDecoratedRepresentation (defineCategoryReader_transientRootRelationshipDependencyAST_buildDecoratedRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category reader '@transientControllerDependencyAST buildDecoratedRepresentation'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_abstractTransientDependencyForGeneration categoryReader_transientControllerDependencyAST_buildDecoratedRepresentation (const cPtr_abstractTransientDependencyAST * inObject,
                                                                                                                                     const GALGAS_unifiedTypeMap_2D_proxy & /* constinArgument_inRootEntityType */,
                                                                                                                                     C_Compiler * /* inCompiler */
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_abstractTransientDependencyForGeneration result_outResult ; // Returned variable
  const cPtr_transientControllerDependencyAST * object = (const cPtr_transientControllerDependencyAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientControllerDependencyAST) ;
  result_outResult = GALGAS_transientControllerDependencyForGeneration::constructor_new (object->mAttribute_mControllerName, object->mAttribute_mMasterName  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1204)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientControllerDependencyAST_buildDecoratedRepresentation (void) {
  enterCategoryReader_buildDecoratedRepresentation (kTypeDescriptor_GALGAS_transientControllerDependencyAST.mSlotID,
                                                    categoryReader_transientControllerDependencyAST_buildDecoratedRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientControllerDependencyAST_buildDecoratedRepresentation (defineCategoryReader_transientControllerDependencyAST_buildDecoratedRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category reader '@transientPreferenceDependencyAST buildDecoratedRepresentation'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_abstractTransientDependencyForGeneration categoryReader_transientPreferenceDependencyAST_buildDecoratedRepresentation (const cPtr_abstractTransientDependencyAST * inObject,
                                                                                                                                     const GALGAS_unifiedTypeMap_2D_proxy & /* constinArgument_inRootEntityType */,
                                                                                                                                     C_Compiler * /* inCompiler */
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_abstractTransientDependencyForGeneration result_outResult ; // Returned variable
  const cPtr_transientPreferenceDependencyAST * object = (const cPtr_transientPreferenceDependencyAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientPreferenceDependencyAST) ;
  result_outResult = GALGAS_transientPreferenceDependencyForGeneration::constructor_new (object->mAttribute_mPreferencesName, object->mAttribute_mMasterName  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 1212)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientPreferenceDependencyAST_buildDecoratedRepresentation (void) {
  enterCategoryReader_buildDecoratedRepresentation (kTypeDescriptor_GALGAS_transientPreferenceDependencyAST.mSlotID,
                                                    categoryReader_transientPreferenceDependencyAST_buildDecoratedRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientPreferenceDependencyAST_buildDecoratedRepresentation (defineCategoryReader_transientPreferenceDependencyAST_buildDecoratedRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding category reader '@observablePropertyAsBooleanMultipleBindingExpressionForGeneration observedObjectTypeNameList'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                                      C_Compiler * /* inCompiler */
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outObservedObjectTypeNameList ; // Returned variable
  const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
  GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("controllerClassAnalysis.galgas", 18)) ;
  temp_0.addAssign_operation (object->mAttribute_mObservedTypeName  COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 18)) ;
  result_outObservedObjectTypeNameList = temp_0 ;
//---
  return result_outObservedObjectTypeNameList ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList (void) {
  enterCategoryReader_observedObjectTypeNameList (kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                                  categoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList (defineCategoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding category reader '@negateBooleanMultipleBindingExpressionForGeneration observedObjectTypeNameList'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_negateBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outObservedModelNameList ; // Returned variable
  const cPtr_negateBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
  result_outObservedModelNameList = callCategoryReader_observedObjectTypeNameList ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 25)) ;
//---
  return result_outObservedModelNameList ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_negateBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList (void) {
  enterCategoryReader_observedObjectTypeNameList (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                                  categoryReader_negateBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_negateBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList (defineCategoryReader_negateBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category reader '@orBooleanMultipleBindingExpressionForGeneration observedObjectTypeNameList'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_orBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outObservedModelNameList ; // Returned variable
  const cPtr_orBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
  result_outObservedModelNameList = callCategoryReader_observedObjectTypeNameList ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 32)).add_operation (callCategoryReader_observedObjectTypeNameList ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 32)) ;
//---
  return result_outObservedModelNameList ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_orBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList (void) {
  enterCategoryReader_observedObjectTypeNameList (kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                                  categoryReader_orBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_orBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList (defineCategoryReader_orBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category reader '@andBooleanMultipleBindingExpressionForGeneration observedObjectTypeNameList'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_andBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outObservedModelNameList ; // Returned variable
  const cPtr_andBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
  result_outObservedModelNameList = callCategoryReader_observedObjectTypeNameList ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 39)).add_operation (callCategoryReader_observedObjectTypeNameList ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 39)) ;
//---
  return result_outObservedModelNameList ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_andBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList (void) {
  enterCategoryReader_observedObjectTypeNameList (kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                                  categoryReader_andBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_andBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList (defineCategoryReader_andBooleanMultipleBindingExpressionForGeneration_observedObjectTypeNameList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding category reader '@observablePropertyAsBooleanMultipleBindingExpressionForGeneration enableExpressionString'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_enableExpressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outEnableExpressionString ; // Returned variable
  const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
  result_outEnableExpressionString = GALGAS_string ("object").add_operation (object->mAttribute_mIndex.reader_string (SOURCE_FILE ("controllerClassAnalysis.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 57)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 57)).add_operation (object->mAttribute_mObservedModel, inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 57)) ;
//---
  return result_outEnableExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_enableExpressionString (void) {
  enterCategoryReader_enableExpressionString (kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                              categoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_enableExpressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_enableExpressionString (defineCategoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_enableExpressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category reader '@negateBooleanMultipleBindingExpressionForGeneration enableExpressionString'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_negateBooleanMultipleBindingExpressionForGeneration_enableExpressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outEnableExpressionString ; // Returned variable
  const cPtr_negateBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
  result_outEnableExpressionString = GALGAS_string ("!(").add_operation (callCategoryReader_enableExpressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 64)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 64)) ;
//---
  return result_outEnableExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_negateBooleanMultipleBindingExpressionForGeneration_enableExpressionString (void) {
  enterCategoryReader_enableExpressionString (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                              categoryReader_negateBooleanMultipleBindingExpressionForGeneration_enableExpressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_negateBooleanMultipleBindingExpressionForGeneration_enableExpressionString (defineCategoryReader_negateBooleanMultipleBindingExpressionForGeneration_enableExpressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category reader '@orBooleanMultipleBindingExpressionForGeneration enableExpressionString'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_orBooleanMultipleBindingExpressionForGeneration_enableExpressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outEnableExpressionString ; // Returned variable
  const cPtr_orBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
  result_outEnableExpressionString = GALGAS_string ("(").add_operation (callCategoryReader_enableExpressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 71)).add_operation (GALGAS_string (" || "), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 71)).add_operation (callCategoryReader_enableExpressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 71)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 71)) ;
//---
  return result_outEnableExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_orBooleanMultipleBindingExpressionForGeneration_enableExpressionString (void) {
  enterCategoryReader_enableExpressionString (kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                              categoryReader_orBooleanMultipleBindingExpressionForGeneration_enableExpressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_orBooleanMultipleBindingExpressionForGeneration_enableExpressionString (defineCategoryReader_orBooleanMultipleBindingExpressionForGeneration_enableExpressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category reader '@andBooleanMultipleBindingExpressionForGeneration enableExpressionString'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_andBooleanMultipleBindingExpressionForGeneration_enableExpressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outEnableExpressionString ; // Returned variable
  const cPtr_andBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
  result_outEnableExpressionString = GALGAS_string ("(").add_operation (callCategoryReader_enableExpressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 78)).add_operation (GALGAS_string (" && "), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 78)).add_operation (callCategoryReader_enableExpressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 78)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 78)) ;
//---
  return result_outEnableExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_andBooleanMultipleBindingExpressionForGeneration_enableExpressionString (void) {
  enterCategoryReader_enableExpressionString (kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                              categoryReader_andBooleanMultipleBindingExpressionForGeneration_enableExpressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_andBooleanMultipleBindingExpressionForGeneration_enableExpressionString (defineCategoryReader_andBooleanMultipleBindingExpressionForGeneration_enableExpressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding category reader '@observablePropertyAsBooleanMultipleBindingExpressionForGeneration observedModelNameList'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelNameList (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                                 C_Compiler * /* inCompiler */
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outObservedModelNameList ; // Returned variable
  const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
  GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("controllerClassAnalysis.galgas", 96)) ;
  temp_0.addAssign_operation (object->mAttribute_mObservedModel  COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 96)) ;
  result_outObservedModelNameList = temp_0 ;
//---
  return result_outObservedModelNameList ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelNameList (void) {
  enterCategoryReader_observedModelNameList (kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                             categoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelNameList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelNameList (defineCategoryReader_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelNameList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category reader '@negateBooleanMultipleBindingExpressionForGeneration observedModelNameList'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_negateBooleanMultipleBindingExpressionForGeneration_observedModelNameList (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outObservedModelNameList ; // Returned variable
  const cPtr_negateBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
  result_outObservedModelNameList = callCategoryReader_observedModelNameList ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 103)) ;
//---
  return result_outObservedModelNameList ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_negateBooleanMultipleBindingExpressionForGeneration_observedModelNameList (void) {
  enterCategoryReader_observedModelNameList (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                             categoryReader_negateBooleanMultipleBindingExpressionForGeneration_observedModelNameList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_negateBooleanMultipleBindingExpressionForGeneration_observedModelNameList (defineCategoryReader_negateBooleanMultipleBindingExpressionForGeneration_observedModelNameList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category reader '@orBooleanMultipleBindingExpressionForGeneration observedModelNameList'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_orBooleanMultipleBindingExpressionForGeneration_observedModelNameList (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outObservedModelNameList ; // Returned variable
  const cPtr_orBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
  result_outObservedModelNameList = callCategoryReader_observedModelNameList ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 110)).add_operation (callCategoryReader_observedModelNameList ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 110)) ;
//---
  return result_outObservedModelNameList ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_orBooleanMultipleBindingExpressionForGeneration_observedModelNameList (void) {
  enterCategoryReader_observedModelNameList (kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                             categoryReader_orBooleanMultipleBindingExpressionForGeneration_observedModelNameList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_orBooleanMultipleBindingExpressionForGeneration_observedModelNameList (defineCategoryReader_orBooleanMultipleBindingExpressionForGeneration_observedModelNameList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding category reader '@andBooleanMultipleBindingExpressionForGeneration observedModelNameList'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringlist categoryReader_andBooleanMultipleBindingExpressionForGeneration_observedModelNameList (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist result_outObservedModelNameList ; // Returned variable
  const cPtr_andBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
  result_outObservedModelNameList = callCategoryReader_observedModelNameList ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 117)).add_operation (callCategoryReader_observedModelNameList ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("controllerClassAnalysis.galgas", 117)) ;
//---
  return result_outObservedModelNameList ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_andBooleanMultipleBindingExpressionForGeneration_observedModelNameList (void) {
  enterCategoryReader_observedModelNameList (kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                             categoryReader_andBooleanMultipleBindingExpressionForGeneration_observedModelNameList) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_andBooleanMultipleBindingExpressionForGeneration_observedModelNameList (defineCategoryReader_andBooleanMultipleBindingExpressionForGeneration_observedModelNameList, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@transientRootSignDependencyAST buildTransientDependencyGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_transientRootSignDependencyAST_buildTransientDependencyGraph (const cPtr_abstractTransientDependencyAST * /* inObject */,
                                                                                         const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                                         GALGAS_transientDependencyGraph & /* ioArgument_ioTransientDependencyGraph */,
                                                                                         const GALGAS_lstring /* constinArgument_inTransientName */,
                                                                                         const GALGAS_decoratedObservablePropertyMap /* constinArgument_inLocalObservablePropertyMap */,
                                                                                         const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inRootEntityType */,
                                                                                         const GALGAS_arrayControllerMap /* constinArgument_inArrayControllerMap */,
                                                                                         const GALGAS_lstring /* constinArgument_inTransientPropertySignature */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_transientRootSignDependencyAST_buildTransientDependencyGraph (void) {
  enterCategoryMethod_buildTransientDependencyGraph (kTypeDescriptor_GALGAS_transientRootSignDependencyAST.mSlotID,
                                                     categoryMethod_transientRootSignDependencyAST_buildTransientDependencyGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientRootSignDependencyAST_buildTransientDependencyGraph (defineCategoryMethod_transientRootSignDependencyAST_buildTransientDependencyGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@transientLocalDependencyAST buildTransientDependencyGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_transientLocalDependencyAST_buildTransientDependencyGraph (const cPtr_abstractTransientDependencyAST * inObject,
                                                                                      const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                                      GALGAS_transientDependencyGraph & ioArgument_ioTransientDependencyGraph,
                                                                                      const GALGAS_lstring /* constinArgument_inTransientName */,
                                                                                      const GALGAS_decoratedObservablePropertyMap constinArgument_inLocalObservablePropertyMap,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inRootEntityType */,
                                                                                      const GALGAS_arrayControllerMap /* constinArgument_inArrayControllerMap */,
                                                                                      const GALGAS_lstring constinArgument_inTransientPropertySignature,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientLocalDependencyAST * object = (const cPtr_transientLocalDependencyAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientLocalDependencyAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_masterType ;
  GALGAS_lstring var_masterPropertySignature ;
  GALGAS_bool var_isCollection ;
  GALGAS_bool joker_1785 ; // Joker input parameter
  constinArgument_inLocalObservablePropertyMap.method_searchKey (object->mAttribute_mMasterName, var_masterType, joker_1785, var_masterPropertySignature, var_isCollection, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 38)) ;
  {
  ioArgument_ioTransientDependencyGraph.modifier_addEdge (var_masterPropertySignature, constinArgument_inTransientPropertySignature COMMA_SOURCE_FILE ("transientAnalysis.galgas", 46)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_transientLocalDependencyAST_buildTransientDependencyGraph (void) {
  enterCategoryMethod_buildTransientDependencyGraph (kTypeDescriptor_GALGAS_transientLocalDependencyAST.mSlotID,
                                                     categoryMethod_transientLocalDependencyAST_buildTransientDependencyGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientLocalDependencyAST_buildTransientDependencyGraph (defineCategoryMethod_transientLocalDependencyAST_buildTransientDependencyGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@transientControllerDependencyAST buildTransientDependencyGraph'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_transientControllerDependencyAST_buildTransientDependencyGraph (const cPtr_abstractTransientDependencyAST * inObject,
                                                                                           const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                                           GALGAS_transientDependencyGraph & ioArgument_ioTransientDependencyGraph,
                                                                                           const GALGAS_lstring /* constinArgument_inTransientName */,
                                                                                           const GALGAS_decoratedObservablePropertyMap /* constinArgument_inLocalObservablePropertyMap */,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inRootEntityType */,
                                                                                           const GALGAS_arrayControllerMap constinArgument_inArrayControllerMap,
                                                                                           const GALGAS_lstring constinArgument_inTransientPropertySignature,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientControllerDependencyAST * object = (const cPtr_transientControllerDependencyAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientControllerDependencyAST) ;
  GALGAS_decoratedObservablePropertyMap var_controllerObservablePropertyMap ;
  GALGAS_abstractObservablePropertyAST joker_2581_4 ; // Joker input parameter
  GALGAS_lstring joker_2581_3 ; // Joker input parameter
  GALGAS_arrayControllerBoundColumnListAST joker_2581_2 ; // Joker input parameter
  GALGAS_actionMap joker_2581_1 ; // Joker input parameter
  GALGAS_lstring joker_2662_2 ; // Joker input parameter
  GALGAS_string joker_2662_1 ; // Joker input parameter
  constinArgument_inArrayControllerMap.method_searchKey (object->mAttribute_mControllerName, joker_2581_4, joker_2581_3, joker_2581_2, joker_2581_1, var_controllerObservablePropertyMap, joker_2662_2, joker_2662_1, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 62)) ;
  GALGAS_lstring var_masterPropertySignature ;
  GALGAS_unifiedTypeMap_2D_proxy joker_2741 ; // Joker input parameter
  GALGAS_bool joker_2748 ; // Joker input parameter
  GALGAS_bool joker_2797 ; // Joker input parameter
  var_controllerObservablePropertyMap.method_searchKey (object->mAttribute_mMasterName, joker_2741, joker_2748, var_masterPropertySignature, joker_2797, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 69)) ;
  {
  ioArgument_ioTransientDependencyGraph.modifier_addEdge (var_masterPropertySignature, constinArgument_inTransientPropertySignature COMMA_SOURCE_FILE ("transientAnalysis.galgas", 77)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_transientControllerDependencyAST_buildTransientDependencyGraph (void) {
  enterCategoryMethod_buildTransientDependencyGraph (kTypeDescriptor_GALGAS_transientControllerDependencyAST.mSlotID,
                                                     categoryMethod_transientControllerDependencyAST_buildTransientDependencyGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientControllerDependencyAST_buildTransientDependencyGraph (defineCategoryMethod_transientControllerDependencyAST_buildTransientDependencyGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@transientRootDependencyAST buildTransientDependencyGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_transientRootDependencyAST_buildTransientDependencyGraph (const cPtr_abstractTransientDependencyAST * inObject,
                                                                                     const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                     GALGAS_transientDependencyGraph & ioArgument_ioTransientDependencyGraph,
                                                                                     const GALGAS_lstring /* constinArgument_inTransientName */,
                                                                                     const GALGAS_decoratedObservablePropertyMap /* constinArgument_inLocalObservablePropertyMap */,
                                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inRootEntityType,
                                                                                     const GALGAS_arrayControllerMap /* constinArgument_inArrayControllerMap */,
                                                                                     const GALGAS_lstring constinArgument_inTransientPropertySignature,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientRootDependencyAST * object = (const cPtr_transientRootDependencyAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientRootDependencyAST) ;
  GALGAS_decoratedObservablePropertyMap var_allObservablePropertyMap = constinArgument_inRootEntityType.reader_mObservablePropertyMap (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 94)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t = constinArgument_inRootEntityType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 95)) ;
  if (constinArgument_inUnifiedTypeMap.reader_count (SOURCE_FILE ("transientAnalysis.galgas", 96)).isValid ()) {
    uint32_t variant_3643 = constinArgument_inUnifiedTypeMap.reader_count (SOURCE_FILE ("transientAnalysis.galgas", 96)).uintValue () ;
    bool loop_3643 = true ;
    while (loop_3643) {
      loop_3643 = var_t.reader_isNull (SOURCE_FILE ("transientAnalysis.galgas", 96)).operator_not (SOURCE_FILE ("transientAnalysis.galgas", 96)).isValid () ;
      if (loop_3643) {
        loop_3643 = var_t.reader_isNull (SOURCE_FILE ("transientAnalysis.galgas", 96)).operator_not (SOURCE_FILE ("transientAnalysis.galgas", 96)).boolValue () ;
      }
      if (loop_3643 && (0 == variant_3643)) {
        loop_3643 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("transientAnalysis.galgas", 96)) ;
      }
      if (loop_3643) {
        variant_3643 -- ;
        cEnumerator_decoratedObservablePropertyMap enumerator_3742 (var_t.reader_mObservablePropertyMap (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 97)), kEnumeration_up) ;
        while (enumerator_3742.hasCurrentObject ()) {
          {
          var_allObservablePropertyMap.modifier_insertKey (enumerator_3742.current_lkey (HERE), enumerator_3742.current_mPropertyType (HERE), enumerator_3742.current_mIsTransient (HERE), enumerator_3742.current_mPropertySignature (HERE), enumerator_3742.current_mIsCollection (HERE), inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 98)) ;
          }
          enumerator_3742.gotoNextObject () ;
        }
        var_t = var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 106)) ;
      }
    }
  }
  GALGAS_lstring var_masterPropertySignature ;
  GALGAS_bool var_isCollection ;
  GALGAS_unifiedTypeMap_2D_proxy joker_4035 ; // Joker input parameter
  GALGAS_bool joker_4042 ; // Joker input parameter
  var_allObservablePropertyMap.method_searchKey (object->mAttribute_mMasterName, joker_4035, joker_4042, var_masterPropertySignature, var_isCollection, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 108)) ;
  {
  ioArgument_ioTransientDependencyGraph.modifier_addEdge (var_masterPropertySignature, constinArgument_inTransientPropertySignature COMMA_SOURCE_FILE ("transientAnalysis.galgas", 116)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_transientRootDependencyAST_buildTransientDependencyGraph (void) {
  enterCategoryMethod_buildTransientDependencyGraph (kTypeDescriptor_GALGAS_transientRootDependencyAST.mSlotID,
                                                     categoryMethod_transientRootDependencyAST_buildTransientDependencyGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientRootDependencyAST_buildTransientDependencyGraph (defineCategoryMethod_transientRootDependencyAST_buildTransientDependencyGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@transientRootRelationshipDependencyAST buildTransientDependencyGraph'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_transientRootRelationshipDependencyAST_buildTransientDependencyGraph (const cPtr_abstractTransientDependencyAST * inObject,
                                                                                                 const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                                 GALGAS_transientDependencyGraph & ioArgument_ioTransientDependencyGraph,
                                                                                                 const GALGAS_lstring /* constinArgument_inTransientName */,
                                                                                                 const GALGAS_decoratedObservablePropertyMap /* constinArgument_inLocalObservablePropertyMap */,
                                                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inRootEntityType,
                                                                                                 const GALGAS_arrayControllerMap /* constinArgument_inArrayControllerMap */,
                                                                                                 const GALGAS_lstring constinArgument_inTransientPropertySignature,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientRootRelationshipDependencyAST * object = (const cPtr_transientRootRelationshipDependencyAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientRootRelationshipDependencyAST) ;
  GALGAS_decoratedObservablePropertyMap var_allObservablePropertyMap = constinArgument_inRootEntityType.reader_mObservablePropertyMap (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 133)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t = constinArgument_inRootEntityType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 134)) ;
  if (constinArgument_inUnifiedTypeMap.reader_count (SOURCE_FILE ("transientAnalysis.galgas", 135)).isValid ()) {
    uint32_t variant_4970 = constinArgument_inUnifiedTypeMap.reader_count (SOURCE_FILE ("transientAnalysis.galgas", 135)).uintValue () ;
    bool loop_4970 = true ;
    while (loop_4970) {
      loop_4970 = var_t.reader_isNull (SOURCE_FILE ("transientAnalysis.galgas", 135)).operator_not (SOURCE_FILE ("transientAnalysis.galgas", 135)).isValid () ;
      if (loop_4970) {
        loop_4970 = var_t.reader_isNull (SOURCE_FILE ("transientAnalysis.galgas", 135)).operator_not (SOURCE_FILE ("transientAnalysis.galgas", 135)).boolValue () ;
      }
      if (loop_4970 && (0 == variant_4970)) {
        loop_4970 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("transientAnalysis.galgas", 135)) ;
      }
      if (loop_4970) {
        variant_4970 -- ;
        cEnumerator_decoratedObservablePropertyMap enumerator_5069 (var_t.reader_mObservablePropertyMap (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 136)), kEnumeration_up) ;
        while (enumerator_5069.hasCurrentObject ()) {
          {
          var_allObservablePropertyMap.modifier_insertKey (enumerator_5069.current_lkey (HERE), enumerator_5069.current_mPropertyType (HERE), enumerator_5069.current_mIsTransient (HERE), enumerator_5069.current_mPropertySignature (HERE), enumerator_5069.current_mIsCollection (HERE), inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 137)) ;
          }
          enumerator_5069.gotoNextObject () ;
        }
        var_t = var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 145)) ;
      }
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_relationshipElementType ;
  GALGAS_bool var_isCollection ;
  GALGAS_bool joker_5423 ; // Joker input parameter
  GALGAS_lstring joker_5430 ; // Joker input parameter
  var_allObservablePropertyMap.method_searchKey (object->mAttribute_mRelationshipName, var_relationshipElementType, joker_5423, joker_5430, var_isCollection, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 147)) ;
  const enumGalgasBool test_0 = var_isCollection.operator_not (SOURCE_FILE ("transientAnalysis.galgas", 154)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mRelationshipName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this property should be a tomany relationship")  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 155)) ;
  }
  GALGAS_lstring var_masterPropertySignature ;
  GALGAS_unifiedTypeMap_2D_proxy joker_5659 ; // Joker input parameter
  GALGAS_bool joker_5666 ; // Joker input parameter
  var_relationshipElementType.reader_mObservablePropertyMap (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 157)).method_searchKey (object->mAttribute_mMasterName, joker_5659, joker_5666, var_masterPropertySignature, var_isCollection, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 157)) ;
  const enumGalgasBool test_2 = var_isCollection.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mMasterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("this property should not be a collection")  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 165)) ;
  }
  {
  ioArgument_ioTransientDependencyGraph.modifier_addEdge (var_masterPropertySignature, constinArgument_inTransientPropertySignature COMMA_SOURCE_FILE ("transientAnalysis.galgas", 168)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_transientRootRelationshipDependencyAST_buildTransientDependencyGraph (void) {
  enterCategoryMethod_buildTransientDependencyGraph (kTypeDescriptor_GALGAS_transientRootRelationshipDependencyAST.mSlotID,
                                                     categoryMethod_transientRootRelationshipDependencyAST_buildTransientDependencyGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientRootRelationshipDependencyAST_buildTransientDependencyGraph (defineCategoryMethod_transientRootRelationshipDependencyAST_buildTransientDependencyGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@transientPreferenceDependencyAST buildTransientDependencyGraph'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_transientPreferenceDependencyAST_buildTransientDependencyGraph (const cPtr_abstractTransientDependencyAST * inObject,
                                                                                           const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                           GALGAS_transientDependencyGraph & ioArgument_ioTransientDependencyGraph,
                                                                                           const GALGAS_lstring /* constinArgument_inTransientName */,
                                                                                           const GALGAS_decoratedObservablePropertyMap /* constinArgument_inLocalObservablePropertyMap */,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inRootEntityType */,
                                                                                           const GALGAS_arrayControllerMap /* constinArgument_inArrayControllerMap */,
                                                                                           const GALGAS_lstring constinArgument_inTransientPropertySignature,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientPreferenceDependencyAST * object = (const cPtr_transientPreferenceDependencyAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientPreferenceDependencyAST) ;
  GALGAS_decoratedObservablePropertyMap var_observablePropertyMap ;
  GALGAS_typeKind joker_6589 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_6613_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_6613_4 ; // Joker input parameter
  GALGAS_decoratedAttributeMap joker_6613_3 ; // Joker input parameter
  GALGAS_decoratedTransientMap joker_6613_2 ; // Joker input parameter
  GALGAS_decoratedOutletMap joker_6613_1 ; // Joker input parameter
  GALGAS_decoratedEntityRelationshipMap joker_6684_6 ; // Joker input parameter
  GALGAS_actionMap joker_6684_5 ; // Joker input parameter
  GALGAS_bindingList joker_6684_4 ; // Joker input parameter
  GALGAS_lstringlist joker_6684_3 ; // Joker input parameter
  GALGAS_enumConstantMap joker_6684_2 ; // Joker input parameter
  GALGAS_arrayControllerMap joker_6684_1 ; // Joker input parameter
  constinArgument_inUnifiedTypeMap.method_searchKey (object->mAttribute_mPreferencesName, joker_6589, joker_6613_5, joker_6613_4, joker_6613_3, joker_6613_2, joker_6613_1, var_observablePropertyMap, joker_6684_6, joker_6684_5, joker_6684_4, joker_6684_3, joker_6684_2, joker_6684_1, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 185)) ;
  GALGAS_lstring var_masterPropertySignature ;
  GALGAS_unifiedTypeMap_2D_proxy joker_6753_2 ; // Joker input parameter
  GALGAS_bool joker_6753_1 ; // Joker input parameter
  GALGAS_bool joker_6803 ; // Joker input parameter
  var_observablePropertyMap.method_searchKey (object->mAttribute_mMasterName, joker_6753_2, joker_6753_1, var_masterPropertySignature, joker_6803, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 193)) ;
  {
  ioArgument_ioTransientDependencyGraph.modifier_addEdge (var_masterPropertySignature, constinArgument_inTransientPropertySignature COMMA_SOURCE_FILE ("transientAnalysis.galgas", 200)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_transientPreferenceDependencyAST_buildTransientDependencyGraph (void) {
  enterCategoryMethod_buildTransientDependencyGraph (kTypeDescriptor_GALGAS_transientPreferenceDependencyAST.mSlotID,
                                                     categoryMethod_transientPreferenceDependencyAST_buildTransientDependencyGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientPreferenceDependencyAST_buildTransientDependencyGraph (defineCategoryMethod_transientPreferenceDependencyAST_buildTransientDependencyGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@transientRootSignDependencyAST transientDependencySemanticAnalysis'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_transientRootSignDependencyAST_transientDependencySemanticAnalysis (const cPtr_abstractTransientDependencyAST * /* inObject */,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                                               const GALGAS_lstring /* constinArgument_inTransientName */,
                                                                                               const GALGAS_decoratedObservablePropertyMap /* constinArgument_inAllObservablePropertyMap */,
                                                                                               const GALGAS_arrayControllerMap /* constinArgument_inArrayControllerMap */,
                                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inRootEntityType */,
                                                                                               const GALGAS_lstring /* constinArgument_inTransientPropertySignature */,
                                                                                               GALGAS_transientDependencyListForGeneration & /* ioArgument_ioTransientDependencyListForGeneration */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_transientRootSignDependencyAST_transientDependencySemanticAnalysis (void) {
  enterCategoryMethod_transientDependencySemanticAnalysis (kTypeDescriptor_GALGAS_transientRootSignDependencyAST.mSlotID,
                                                           categoryMethod_transientRootSignDependencyAST_transientDependencySemanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientRootSignDependencyAST_transientDependencySemanticAnalysis (defineCategoryMethod_transientRootSignDependencyAST_transientDependencySemanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@transientLocalDependencyAST transientDependencySemanticAnalysis'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_transientLocalDependencyAST_transientDependencySemanticAnalysis (const cPtr_abstractTransientDependencyAST * inObject,
                                                                                            const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                                            const GALGAS_lstring /* constinArgument_inTransientName */,
                                                                                            const GALGAS_decoratedObservablePropertyMap constinArgument_inAllObservablePropertyMap,
                                                                                            const GALGAS_arrayControllerMap /* constinArgument_inArrayControllerMap */,
                                                                                            const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inRootEntityType */,
                                                                                            const GALGAS_lstring /* constinArgument_inTransientPropertySignature */,
                                                                                            GALGAS_transientDependencyListForGeneration & ioArgument_ioTransientDependencyListForGeneration,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientLocalDependencyAST * object = (const cPtr_transientLocalDependencyAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientLocalDependencyAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_masterType ;
  GALGAS_bool var_isCollection ;
  GALGAS_bool joker_11386 ; // Joker input parameter
  GALGAS_lstring joker_11393 ; // Joker input parameter
  constinArgument_inAllObservablePropertyMap.method_searchKey (object->mAttribute_mMasterName, var_masterType, joker_11386, joker_11393, var_isCollection, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 316)) ;
  GALGAS_bool test_0 = object->mAttribute_mNamesCountOption ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = var_isCollection.operator_not (SOURCE_FILE ("transientAnalysis.galgas", 323)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mMasterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("the 'count' option is only allowed for to-many relationships")  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 324)) ;
  }else if (kBoolFalse == test_1) {
    GALGAS_bool test_3 = var_isCollection ;
    if (kBoolTrue == test_3.boolEnum ()) {
      test_3 = object->mAttribute_mNamesCountOption.operator_not (SOURCE_FILE ("transientAnalysis.galgas", 325)) ;
    }
    const enumGalgasBool test_4 = test_3.boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_location location_5 (object->mAttribute_mMasterName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_5, GALGAS_string ("to-many relationships requires the 'count' option")  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 326)) ;
    }
  }
  ioArgument_ioTransientDependencyListForGeneration.addAssign_operation (categoryReader_transientFormalArgumentTypeName (var_masterType, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 328)), object->mAttribute_mMasterName.mAttribute_string  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 328)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_transientLocalDependencyAST_transientDependencySemanticAnalysis (void) {
  enterCategoryMethod_transientDependencySemanticAnalysis (kTypeDescriptor_GALGAS_transientLocalDependencyAST.mSlotID,
                                                           categoryMethod_transientLocalDependencyAST_transientDependencySemanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientLocalDependencyAST_transientDependencySemanticAnalysis (defineCategoryMethod_transientLocalDependencyAST_transientDependencySemanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@transientControllerDependencyAST transientDependencySemanticAnalysis'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_transientControllerDependencyAST_transientDependencySemanticAnalysis (const cPtr_abstractTransientDependencyAST * inObject,
                                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                                                 const GALGAS_lstring /* constinArgument_inTransientName */,
                                                                                                 const GALGAS_decoratedObservablePropertyMap /* constinArgument_inAllObservablePropertyMap */,
                                                                                                 const GALGAS_arrayControllerMap constinArgument_inArrayControllerMap,
                                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inRootEntityType */,
                                                                                                 const GALGAS_lstring /* constinArgument_inTransientPropertySignature */,
                                                                                                 GALGAS_transientDependencyListForGeneration & ioArgument_ioTransientDependencyListForGeneration,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientControllerDependencyAST * object = (const cPtr_transientControllerDependencyAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientControllerDependencyAST) ;
  GALGAS_decoratedObservablePropertyMap var_arrayControllerObservablePropertyMap ;
  GALGAS_abstractObservablePropertyAST joker_12461_4 ; // Joker input parameter
  GALGAS_lstring joker_12461_3 ; // Joker input parameter
  GALGAS_arrayControllerBoundColumnListAST joker_12461_2 ; // Joker input parameter
  GALGAS_actionMap joker_12461_1 ; // Joker input parameter
  GALGAS_lstring joker_12547_2 ; // Joker input parameter
  GALGAS_string joker_12547_1 ; // Joker input parameter
  constinArgument_inArrayControllerMap.method_searchKey (object->mAttribute_mControllerName, joker_12461_4, joker_12461_3, joker_12461_2, joker_12461_1, var_arrayControllerObservablePropertyMap, joker_12547_2, joker_12547_1, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 341)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_masterType ;
  GALGAS_bool joker_12668 ; // Joker input parameter
  GALGAS_lstring joker_12675 ; // Joker input parameter
  GALGAS_bool joker_12682 ; // Joker input parameter
  var_arrayControllerObservablePropertyMap.method_searchKey (object->mAttribute_mMasterName, var_masterType, joker_12668, joker_12675, joker_12682, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 347)) ;
  ioArgument_ioTransientDependencyListForGeneration.addAssign_operation (categoryReader_transientFormalArgumentTypeName (var_masterType, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 355)), object->mAttribute_mMasterName.mAttribute_string  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 355)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_transientControllerDependencyAST_transientDependencySemanticAnalysis (void) {
  enterCategoryMethod_transientDependencySemanticAnalysis (kTypeDescriptor_GALGAS_transientControllerDependencyAST.mSlotID,
                                                           categoryMethod_transientControllerDependencyAST_transientDependencySemanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientControllerDependencyAST_transientDependencySemanticAnalysis (defineCategoryMethod_transientControllerDependencyAST_transientDependencySemanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@transientRootDependencyAST transientDependencySemanticAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_transientRootDependencyAST_transientDependencySemanticAnalysis (const cPtr_abstractTransientDependencyAST * inObject,
                                                                                           const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                           const GALGAS_lstring /* constinArgument_inTransientName */,
                                                                                           const GALGAS_decoratedObservablePropertyMap /* constinArgument_inAllObservablePropertyMap */,
                                                                                           const GALGAS_arrayControllerMap /* constinArgument_inArrayControllerMap */,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inRootEntityType,
                                                                                           const GALGAS_lstring /* constinArgument_inTransientPropertySignature */,
                                                                                           GALGAS_transientDependencyListForGeneration & ioArgument_ioTransientDependencyListForGeneration,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientRootDependencyAST * object = (const cPtr_transientRootDependencyAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientRootDependencyAST) ;
  GALGAS_decoratedObservablePropertyMap var_allObservablePropertyMap = constinArgument_inRootEntityType.reader_mObservablePropertyMap (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 369)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t = constinArgument_inRootEntityType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 370)) ;
  if (constinArgument_inUnifiedTypeMap.reader_count (SOURCE_FILE ("transientAnalysis.galgas", 371)).isValid ()) {
    uint32_t variant_13547 = constinArgument_inUnifiedTypeMap.reader_count (SOURCE_FILE ("transientAnalysis.galgas", 371)).uintValue () ;
    bool loop_13547 = true ;
    while (loop_13547) {
      loop_13547 = var_t.reader_isNull (SOURCE_FILE ("transientAnalysis.galgas", 371)).operator_not (SOURCE_FILE ("transientAnalysis.galgas", 371)).isValid () ;
      if (loop_13547) {
        loop_13547 = var_t.reader_isNull (SOURCE_FILE ("transientAnalysis.galgas", 371)).operator_not (SOURCE_FILE ("transientAnalysis.galgas", 371)).boolValue () ;
      }
      if (loop_13547 && (0 == variant_13547)) {
        loop_13547 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("transientAnalysis.galgas", 371)) ;
      }
      if (loop_13547) {
        variant_13547 -- ;
        cEnumerator_decoratedObservablePropertyMap enumerator_13646 (var_t.reader_mObservablePropertyMap (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 372)), kEnumeration_up) ;
        while (enumerator_13646.hasCurrentObject ()) {
          {
          var_allObservablePropertyMap.modifier_insertKey (enumerator_13646.current_lkey (HERE), enumerator_13646.current_mPropertyType (HERE), enumerator_13646.current_mIsTransient (HERE), enumerator_13646.current_mPropertySignature (HERE), enumerator_13646.current_mIsCollection (HERE), inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 373)) ;
          }
          enumerator_13646.gotoNextObject () ;
        }
        var_t = var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 381)) ;
      }
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_masterType ;
  GALGAS_bool var_isCollection ;
  GALGAS_bool joker_13981 ; // Joker input parameter
  GALGAS_lstring joker_13988 ; // Joker input parameter
  var_allObservablePropertyMap.method_searchKey (object->mAttribute_mMasterName, var_masterType, joker_13981, joker_13988, var_isCollection, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 383)) ;
  GALGAS_bool test_0 = object->mAttribute_mNamesCountOption ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = var_isCollection.operator_not (SOURCE_FILE ("transientAnalysis.galgas", 391)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mMasterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("the 'count' option is only allowed for to-many relationships")  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 392)) ;
  }
  ioArgument_ioTransientDependencyListForGeneration.addAssign_operation (categoryReader_transientFormalArgumentTypeName (var_masterType, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 395)), object->mAttribute_mMasterName.mAttribute_string  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 395)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_transientRootDependencyAST_transientDependencySemanticAnalysis (void) {
  enterCategoryMethod_transientDependencySemanticAnalysis (kTypeDescriptor_GALGAS_transientRootDependencyAST.mSlotID,
                                                           categoryMethod_transientRootDependencyAST_transientDependencySemanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientRootDependencyAST_transientDependencySemanticAnalysis (defineCategoryMethod_transientRootDependencyAST_transientDependencySemanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category method '@transientRootRelationshipDependencyAST transientDependencySemanticAnalysis'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_transientRootRelationshipDependencyAST_transientDependencySemanticAnalysis (const cPtr_abstractTransientDependencyAST * inObject,
                                                                                                       const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                                       const GALGAS_lstring /* constinArgument_inTransientName */,
                                                                                                       const GALGAS_decoratedObservablePropertyMap /* constinArgument_inAllObservablePropertyMap */,
                                                                                                       const GALGAS_arrayControllerMap /* constinArgument_inArrayControllerMap */,
                                                                                                       const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inRootEntityType,
                                                                                                       const GALGAS_lstring /* constinArgument_inTransientPropertySignature */,
                                                                                                       GALGAS_transientDependencyListForGeneration & ioArgument_ioTransientDependencyListForGeneration,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientRootRelationshipDependencyAST * object = (const cPtr_transientRootRelationshipDependencyAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientRootRelationshipDependencyAST) ;
  GALGAS_decoratedObservablePropertyMap var_allObservablePropertyMap = constinArgument_inRootEntityType.reader_mObservablePropertyMap (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 409)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t = constinArgument_inRootEntityType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 410)) ;
  if (constinArgument_inUnifiedTypeMap.reader_count (SOURCE_FILE ("transientAnalysis.galgas", 411)).isValid ()) {
    uint32_t variant_15059 = constinArgument_inUnifiedTypeMap.reader_count (SOURCE_FILE ("transientAnalysis.galgas", 411)).uintValue () ;
    bool loop_15059 = true ;
    while (loop_15059) {
      loop_15059 = var_t.reader_isNull (SOURCE_FILE ("transientAnalysis.galgas", 411)).operator_not (SOURCE_FILE ("transientAnalysis.galgas", 411)).isValid () ;
      if (loop_15059) {
        loop_15059 = var_t.reader_isNull (SOURCE_FILE ("transientAnalysis.galgas", 411)).operator_not (SOURCE_FILE ("transientAnalysis.galgas", 411)).boolValue () ;
      }
      if (loop_15059 && (0 == variant_15059)) {
        loop_15059 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("transientAnalysis.galgas", 411)) ;
      }
      if (loop_15059) {
        variant_15059 -- ;
        cEnumerator_decoratedObservablePropertyMap enumerator_15158 (var_t.reader_mObservablePropertyMap (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 412)), kEnumeration_up) ;
        while (enumerator_15158.hasCurrentObject ()) {
          {
          var_allObservablePropertyMap.modifier_insertKey (enumerator_15158.current_lkey (HERE), enumerator_15158.current_mPropertyType (HERE), enumerator_15158.current_mIsTransient (HERE), enumerator_15158.current_mPropertySignature (HERE), enumerator_15158.current_mIsCollection (HERE), inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 413)) ;
          }
          enumerator_15158.gotoNextObject () ;
        }
        var_t = var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 421)) ;
      }
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_relationshipElementType ;
  GALGAS_bool var_isCollection ;
  GALGAS_bool joker_15512 ; // Joker input parameter
  GALGAS_lstring joker_15519 ; // Joker input parameter
  var_allObservablePropertyMap.method_searchKey (object->mAttribute_mRelationshipName, var_relationshipElementType, joker_15512, joker_15519, var_isCollection, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 423)) ;
  const enumGalgasBool test_0 = var_isCollection.operator_not (SOURCE_FILE ("transientAnalysis.galgas", 430)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mRelationshipName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this property should be a tomany relationship")  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 431)) ;
  }
  GALGAS_lstring var_masterPropertySignature ;
  GALGAS_unifiedTypeMap_2D_proxy joker_15748_2 ; // Joker input parameter
  GALGAS_bool joker_15748_1 ; // Joker input parameter
  var_relationshipElementType.reader_mObservablePropertyMap (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 433)).method_searchKey (object->mAttribute_mMasterName, joker_15748_2, joker_15748_1, var_masterPropertySignature, var_isCollection, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 433)) ;
  const enumGalgasBool test_2 = var_isCollection.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mMasterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("this property should not be a collection")  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 440)) ;
  }
  ioArgument_ioTransientDependencyListForGeneration.addAssign_operation (GALGAS_string ("NSArray /* [").add_operation (var_relationshipElementType.reader_key (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 443)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 443)).add_operation (object->mAttribute_mMasterName.reader_string (SOURCE_FILE ("transientAnalysis.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 443)).add_operation (GALGAS_string ("] */"), inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 443)), GALGAS_string ("arrayOf_").add_operation (object->mAttribute_mMasterName.reader_string (SOURCE_FILE ("transientAnalysis.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 443))  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 443)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_transientRootRelationshipDependencyAST_transientDependencySemanticAnalysis (void) {
  enterCategoryMethod_transientDependencySemanticAnalysis (kTypeDescriptor_GALGAS_transientRootRelationshipDependencyAST.mSlotID,
                                                           categoryMethod_transientRootRelationshipDependencyAST_transientDependencySemanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientRootRelationshipDependencyAST_transientDependencySemanticAnalysis (defineCategoryMethod_transientRootRelationshipDependencyAST_transientDependencySemanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@transientPreferenceDependencyAST transientDependencySemanticAnalysis'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_transientPreferenceDependencyAST_transientDependencySemanticAnalysis (const cPtr_abstractTransientDependencyAST * inObject,
                                                                                                 const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                                 const GALGAS_lstring /* constinArgument_inTransientName */,
                                                                                                 const GALGAS_decoratedObservablePropertyMap /* constinArgument_inAllObservablePropertyMap */,
                                                                                                 const GALGAS_arrayControllerMap /* constinArgument_inArrayControllerMap */,
                                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inRootEntityType */,
                                                                                                 const GALGAS_lstring /* constinArgument_inTransientPropertySignature */,
                                                                                                 GALGAS_transientDependencyListForGeneration & ioArgument_ioTransientDependencyListForGeneration,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientPreferenceDependencyAST * object = (const cPtr_transientPreferenceDependencyAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientPreferenceDependencyAST) ;
  GALGAS_typeKind var_kind ;
  GALGAS_decoratedObservablePropertyMap var_observablePropertyMap ;
  GALGAS_unifiedTypeMap_2D_proxy joker_16752_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_16752_4 ; // Joker input parameter
  GALGAS_decoratedAttributeMap joker_16752_3 ; // Joker input parameter
  GALGAS_decoratedTransientMap joker_16752_2 ; // Joker input parameter
  GALGAS_decoratedOutletMap joker_16752_1 ; // Joker input parameter
  GALGAS_decoratedEntityRelationshipMap joker_16823_6 ; // Joker input parameter
  GALGAS_actionMap joker_16823_5 ; // Joker input parameter
  GALGAS_bindingList joker_16823_4 ; // Joker input parameter
  GALGAS_lstringlist joker_16823_3 ; // Joker input parameter
  GALGAS_enumConstantMap joker_16823_2 ; // Joker input parameter
  GALGAS_arrayControllerMap joker_16823_1 ; // Joker input parameter
  constinArgument_inUnifiedTypeMap.method_searchKey (object->mAttribute_mPreferencesName, var_kind, joker_16752_5, joker_16752_4, joker_16752_3, joker_16752_2, joker_16752_1, var_observablePropertyMap, joker_16823_6, joker_16823_5, joker_16823_4, joker_16823_3, joker_16823_2, joker_16823_1, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 457)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_kind.objectCompare (GALGAS_typeKind::constructor_preferencesType (SOURCE_FILE ("transientAnalysis.galgas", 465)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mPreferencesName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("'").add_operation (object->mAttribute_mPreferencesName.reader_string (SOURCE_FILE ("transientAnalysis.galgas", 466)), inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 466)).add_operation (GALGAS_string ("' is not a preference"), inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 466))  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 466)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_masterType ;
  GALGAS_bool joker_17074 ; // Joker input parameter
  GALGAS_lstring joker_17081 ; // Joker input parameter
  GALGAS_bool joker_17124 ; // Joker input parameter
  var_observablePropertyMap.method_searchKey (object->mAttribute_mMasterName, var_masterType, joker_17074, joker_17081, joker_17124, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 469)) ;
  ioArgument_ioTransientDependencyListForGeneration.addAssign_operation (categoryReader_transientFormalArgumentTypeName (var_masterType, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 476)), object->mAttribute_mMasterName.mAttribute_string  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 476)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_transientPreferenceDependencyAST_transientDependencySemanticAnalysis (void) {
  enterCategoryMethod_transientDependencySemanticAnalysis (kTypeDescriptor_GALGAS_transientPreferenceDependencyAST.mSlotID,
                                                           categoryMethod_transientPreferenceDependencyAST_transientDependencySemanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientPreferenceDependencyAST_transientDependencySemanticAnalysis (defineCategoryMethod_transientPreferenceDependencyAST_transientDependencySemanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Overriding category reader '@transientControllerDependencyForGeneration generateActualParameterForComputeFunction'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_transientControllerDependencyForGeneration_generateActualParameterForComputeFunction (const cPtr_abstractTransientDependencyForGeneration * inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_transientControllerDependencyForGeneration * object = (const cPtr_transientControllerDependencyForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientControllerDependencyForGeneration) ;
  result_outResult = GALGAS_string ("(").add_operation (object->mAttribute_mControllerName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 121)).add_operation (GALGAS_string (" != nil) \? ("), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 121)).add_operation (object->mAttribute_mControllerName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 121)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 121)).add_operation (object->mAttribute_mMasterName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 121)).add_operation (GALGAS_string (")! : false"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 121)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientControllerDependencyForGeneration_generateActualParameterForComputeFunction (void) {
  enterCategoryReader_generateActualParameterForComputeFunction (kTypeDescriptor_GALGAS_transientControllerDependencyForGeneration.mSlotID,
                                                                 categoryReader_transientControllerDependencyForGeneration_generateActualParameterForComputeFunction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientControllerDependencyForGeneration_generateActualParameterForComputeFunction (defineCategoryReader_transientControllerDependencyForGeneration_generateActualParameterForComputeFunction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding category reader '@transientRootSignDependencyForGeneration generateActualParameterForComputeFunction'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_transientRootSignDependencyForGeneration_generateActualParameterForComputeFunction (const cPtr_abstractTransientDependencyForGeneration * /* inObject */,
                                                                                                                        C_Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("\?\?@@transientRootSignDependency\?\?") ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientRootSignDependencyForGeneration_generateActualParameterForComputeFunction (void) {
  enterCategoryReader_generateActualParameterForComputeFunction (kTypeDescriptor_GALGAS_transientRootSignDependencyForGeneration.mSlotID,
                                                                 categoryReader_transientRootSignDependencyForGeneration_generateActualParameterForComputeFunction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientRootSignDependencyForGeneration_generateActualParameterForComputeFunction (defineCategoryReader_transientRootSignDependencyForGeneration_generateActualParameterForComputeFunction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding category reader '@transientLocalDependencyForGeneration generateActualParameterForComputeFunction'    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_transientLocalDependencyForGeneration_generateActualParameterForComputeFunction (const cPtr_abstractTransientDependencyForGeneration * inObject,
                                                                                                                     C_Compiler * /* inCompiler */
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_transientLocalDependencyForGeneration * object = (const cPtr_transientLocalDependencyForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientLocalDependencyForGeneration) ;
  result_outResult = object->mAttribute_mMasterName.mAttribute_string ;
  const enumGalgasBool test_0 = object->mAttribute_mNamesCountOption.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult.dotAssign_operation (GALGAS_string (".count")  COMMA_SOURCE_FILE ("transientGeneration.galgas", 135)) ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientLocalDependencyForGeneration_generateActualParameterForComputeFunction (void) {
  enterCategoryReader_generateActualParameterForComputeFunction (kTypeDescriptor_GALGAS_transientLocalDependencyForGeneration.mSlotID,
                                                                 categoryReader_transientLocalDependencyForGeneration_generateActualParameterForComputeFunction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientLocalDependencyForGeneration_generateActualParameterForComputeFunction (defineCategoryReader_transientLocalDependencyForGeneration_generateActualParameterForComputeFunction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Overriding category reader '@transientPreferenceDependencyForGeneration generateActualParameterForComputeFunction'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_transientPreferenceDependencyForGeneration_generateActualParameterForComputeFunction (const cPtr_abstractTransientDependencyForGeneration * inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_transientPreferenceDependencyForGeneration * object = (const cPtr_transientPreferenceDependencyForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientPreferenceDependencyForGeneration) ;
  result_outResult = GALGAS_string ("g_").add_operation (object->mAttribute_mPreferencesName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 142)).add_operation (GALGAS_string ("!."), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 142)).add_operation (object->mAttribute_mMasterName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 142)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientPreferenceDependencyForGeneration_generateActualParameterForComputeFunction (void) {
  enterCategoryReader_generateActualParameterForComputeFunction (kTypeDescriptor_GALGAS_transientPreferenceDependencyForGeneration.mSlotID,
                                                                 categoryReader_transientPreferenceDependencyForGeneration_generateActualParameterForComputeFunction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientPreferenceDependencyForGeneration_generateActualParameterForComputeFunction (defineCategoryReader_transientPreferenceDependencyForGeneration_generateActualParameterForComputeFunction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding category reader '@transientRootDependencyForGeneration generateActualParameterForComputeFunction'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_transientRootDependencyForGeneration_generateActualParameterForComputeFunction (const cPtr_abstractTransientDependencyForGeneration * inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_transientRootDependencyForGeneration * object = (const cPtr_transientRootDependencyForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientRootDependencyForGeneration) ;
  result_outResult = GALGAS_string ("rootObject.").add_operation (object->mAttribute_mMasterName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 148)) ;
  const enumGalgasBool test_0 = object->mAttribute_mNamesCountOption.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult.dotAssign_operation (GALGAS_string (".count")  COMMA_SOURCE_FILE ("transientGeneration.galgas", 150)) ;
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientRootDependencyForGeneration_generateActualParameterForComputeFunction (void) {
  enterCategoryReader_generateActualParameterForComputeFunction (kTypeDescriptor_GALGAS_transientRootDependencyForGeneration.mSlotID,
                                                                 categoryReader_transientRootDependencyForGeneration_generateActualParameterForComputeFunction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientRootDependencyForGeneration_generateActualParameterForComputeFunction (defineCategoryReader_transientRootDependencyForGeneration_generateActualParameterForComputeFunction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding category reader '@transientRootRelationshipDependencyForGeneration generateActualParameterForComputeFunction'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_transientRootRelationshipDependencyForGeneration_generateActualParameterForComputeFunction (const cPtr_abstractTransientDependencyForGeneration * inObject,
                                                                                                                                C_Compiler * inCompiler
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_transientRootRelationshipDependencyForGeneration * object = (const cPtr_transientRootRelationshipDependencyForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientRootRelationshipDependencyForGeneration) ;
  result_outResult = GALGAS_string ("rootObject.").add_operation (object->mAttribute_mRelationshipName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 157)).add_operation (GALGAS_string (" /* (rootObject."), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 157)).add_operation (object->mAttribute_mRelationshipName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 157)).add_operation (GALGAS_string (" as NSArray) as ["), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 157)).add_operation (object->mAttribute_mElementType.reader_key (inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 157)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 157)).add_operation (object->mAttribute_mMasterName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 157)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 157)).add_operation (GALGAS_string ("] */"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 157)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientRootRelationshipDependencyForGeneration_generateActualParameterForComputeFunction (void) {
  enterCategoryReader_generateActualParameterForComputeFunction (kTypeDescriptor_GALGAS_transientRootRelationshipDependencyForGeneration.mSlotID,
                                                                 categoryReader_transientRootRelationshipDependencyForGeneration_generateActualParameterForComputeFunction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientRootRelationshipDependencyForGeneration_generateActualParameterForComputeFunction (defineCategoryReader_transientRootRelationshipDependencyForGeneration_generateActualParameterForComputeFunction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category reader '@transientControllerDependencyForGeneration generateAddObserverCall'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_transientControllerDependencyForGeneration_generateAddObserverCall (const cPtr_abstractTransientDependencyForGeneration * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_transientControllerDependencyForGeneration * object = (const cPtr_transientControllerDependencyForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientControllerDependencyForGeneration) ;
  result_outResult = object->mAttribute_mControllerName.mAttribute_string.add_operation (GALGAS_string ("\?.addObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 170)).add_operation (object->mAttribute_mMasterName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 170)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientControllerDependencyForGeneration_generateAddObserverCall (void) {
  enterCategoryReader_generateAddObserverCall (kTypeDescriptor_GALGAS_transientControllerDependencyForGeneration.mSlotID,
                                               categoryReader_transientControllerDependencyForGeneration_generateAddObserverCall) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientControllerDependencyForGeneration_generateAddObserverCall (defineCategoryReader_transientControllerDependencyForGeneration_generateAddObserverCall, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category reader '@transientRootSignDependencyForGeneration generateAddObserverCall'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_transientRootSignDependencyForGeneration_generateAddObserverCall (const cPtr_abstractTransientDependencyForGeneration * /* inObject */,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("\?\?@@transientRootSignDependency\?\?") ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientRootSignDependencyForGeneration_generateAddObserverCall (void) {
  enterCategoryReader_generateAddObserverCall (kTypeDescriptor_GALGAS_transientRootSignDependencyForGeneration.mSlotID,
                                               categoryReader_transientRootSignDependencyForGeneration_generateAddObserverCall) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientRootSignDependencyForGeneration_generateAddObserverCall (defineCategoryReader_transientRootSignDependencyForGeneration_generateAddObserverCall, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category reader '@transientLocalDependencyForGeneration generateAddObserverCall'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_transientLocalDependencyForGeneration_generateAddObserverCall (const cPtr_abstractTransientDependencyForGeneration * inObject,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_transientLocalDependencyForGeneration * object = (const cPtr_transientLocalDependencyForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientLocalDependencyForGeneration) ;
  result_outResult = object->mAttribute_mMasterName.mAttribute_string.add_operation (GALGAS_string (".addObserver"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 182)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientLocalDependencyForGeneration_generateAddObserverCall (void) {
  enterCategoryReader_generateAddObserverCall (kTypeDescriptor_GALGAS_transientLocalDependencyForGeneration.mSlotID,
                                               categoryReader_transientLocalDependencyForGeneration_generateAddObserverCall) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientLocalDependencyForGeneration_generateAddObserverCall (defineCategoryReader_transientLocalDependencyForGeneration_generateAddObserverCall, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category reader '@transientPreferenceDependencyForGeneration generateAddObserverCall'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_transientPreferenceDependencyForGeneration_generateAddObserverCall (const cPtr_abstractTransientDependencyForGeneration * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_transientPreferenceDependencyForGeneration * object = (const cPtr_transientPreferenceDependencyForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientPreferenceDependencyForGeneration) ;
  result_outResult = GALGAS_string ("g_").add_operation (object->mAttribute_mPreferencesName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 188)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 188)).add_operation (object->mAttribute_mMasterName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 188)).add_operation (GALGAS_string (".addObserver"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 188)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientPreferenceDependencyForGeneration_generateAddObserverCall (void) {
  enterCategoryReader_generateAddObserverCall (kTypeDescriptor_GALGAS_transientPreferenceDependencyForGeneration.mSlotID,
                                               categoryReader_transientPreferenceDependencyForGeneration_generateAddObserverCall) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientPreferenceDependencyForGeneration_generateAddObserverCall (defineCategoryReader_transientPreferenceDependencyForGeneration_generateAddObserverCall, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category reader '@transientRootDependencyForGeneration generateAddObserverCall'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_transientRootDependencyForGeneration_generateAddObserverCall (const cPtr_abstractTransientDependencyForGeneration * inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_transientRootDependencyForGeneration * object = (const cPtr_transientRootDependencyForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientRootDependencyForGeneration) ;
  result_outResult = GALGAS_string ("rootObject.").add_operation (object->mAttribute_mMasterName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 194)).add_operation (GALGAS_string (".addObserver"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 194)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientRootDependencyForGeneration_generateAddObserverCall (void) {
  enterCategoryReader_generateAddObserverCall (kTypeDescriptor_GALGAS_transientRootDependencyForGeneration.mSlotID,
                                               categoryReader_transientRootDependencyForGeneration_generateAddObserverCall) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientRootDependencyForGeneration_generateAddObserverCall (defineCategoryReader_transientRootDependencyForGeneration_generateAddObserverCall, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category reader '@transientRootRelationshipDependencyForGeneration generateAddObserverCall'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_transientRootRelationshipDependencyForGeneration_generateAddObserverCall (const cPtr_abstractTransientDependencyForGeneration * inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_transientRootRelationshipDependencyForGeneration * object = (const cPtr_transientRootRelationshipDependencyForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientRootRelationshipDependencyForGeneration) ;
  result_outResult = GALGAS_string ("rootObject.addObserverOf_").add_operation (object->mAttribute_mRelationshipName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 200)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 200)).add_operation (object->mAttribute_mMasterName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 200)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientRootRelationshipDependencyForGeneration_generateAddObserverCall (void) {
  enterCategoryReader_generateAddObserverCall (kTypeDescriptor_GALGAS_transientRootRelationshipDependencyForGeneration.mSlotID,
                                               categoryReader_transientRootRelationshipDependencyForGeneration_generateAddObserverCall) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientRootRelationshipDependencyForGeneration_generateAddObserverCall (defineCategoryReader_transientRootRelationshipDependencyForGeneration_generateAddObserverCall, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category reader '@transientControllerDependencyForGeneration generateRemoveObserverCall'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_transientControllerDependencyForGeneration_generateRemoveObserverCall (const cPtr_abstractTransientDependencyForGeneration * inObject,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_transientControllerDependencyForGeneration * object = (const cPtr_transientControllerDependencyForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientControllerDependencyForGeneration) ;
  result_outResult = object->mAttribute_mControllerName.mAttribute_string.add_operation (GALGAS_string ("\?.removeObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 213)).add_operation (object->mAttribute_mMasterName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 213)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientControllerDependencyForGeneration_generateRemoveObserverCall (void) {
  enterCategoryReader_generateRemoveObserverCall (kTypeDescriptor_GALGAS_transientControllerDependencyForGeneration.mSlotID,
                                                  categoryReader_transientControllerDependencyForGeneration_generateRemoveObserverCall) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientControllerDependencyForGeneration_generateRemoveObserverCall (defineCategoryReader_transientControllerDependencyForGeneration_generateRemoveObserverCall, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category reader '@transientRootSignDependencyForGeneration generateRemoveObserverCall'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_transientRootSignDependencyForGeneration_generateRemoveObserverCall (const cPtr_abstractTransientDependencyForGeneration * /* inObject */,
                                                                                                         C_Compiler * /* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("\?\?@@transientRootSignDependency\?\?") ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientRootSignDependencyForGeneration_generateRemoveObserverCall (void) {
  enterCategoryReader_generateRemoveObserverCall (kTypeDescriptor_GALGAS_transientRootSignDependencyForGeneration.mSlotID,
                                                  categoryReader_transientRootSignDependencyForGeneration_generateRemoveObserverCall) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientRootSignDependencyForGeneration_generateRemoveObserverCall (defineCategoryReader_transientRootSignDependencyForGeneration_generateRemoveObserverCall, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category reader '@transientLocalDependencyForGeneration generateRemoveObserverCall'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_transientLocalDependencyForGeneration_generateRemoveObserverCall (const cPtr_abstractTransientDependencyForGeneration * inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_transientLocalDependencyForGeneration * object = (const cPtr_transientLocalDependencyForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientLocalDependencyForGeneration) ;
  result_outResult = GALGAS_string ("removeObserverOf_").add_operation (object->mAttribute_mMasterName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 225)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientLocalDependencyForGeneration_generateRemoveObserverCall (void) {
  enterCategoryReader_generateRemoveObserverCall (kTypeDescriptor_GALGAS_transientLocalDependencyForGeneration.mSlotID,
                                                  categoryReader_transientLocalDependencyForGeneration_generateRemoveObserverCall) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientLocalDependencyForGeneration_generateRemoveObserverCall (defineCategoryReader_transientLocalDependencyForGeneration_generateRemoveObserverCall, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category reader '@transientPreferenceDependencyForGeneration generateRemoveObserverCall'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_transientPreferenceDependencyForGeneration_generateRemoveObserverCall (const cPtr_abstractTransientDependencyForGeneration * inObject,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_transientPreferenceDependencyForGeneration * object = (const cPtr_transientPreferenceDependencyForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientPreferenceDependencyForGeneration) ;
  result_outResult = GALGAS_string ("g_").add_operation (object->mAttribute_mPreferencesName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 231)).add_operation (GALGAS_string ("\?.removeObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 231)).add_operation (object->mAttribute_mMasterName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 231)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientPreferenceDependencyForGeneration_generateRemoveObserverCall (void) {
  enterCategoryReader_generateRemoveObserverCall (kTypeDescriptor_GALGAS_transientPreferenceDependencyForGeneration.mSlotID,
                                                  categoryReader_transientPreferenceDependencyForGeneration_generateRemoveObserverCall) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientPreferenceDependencyForGeneration_generateRemoveObserverCall (defineCategoryReader_transientPreferenceDependencyForGeneration_generateRemoveObserverCall, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category reader '@transientRootDependencyForGeneration generateRemoveObserverCall'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_transientRootDependencyForGeneration_generateRemoveObserverCall (const cPtr_abstractTransientDependencyForGeneration * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_transientRootDependencyForGeneration * object = (const cPtr_transientRootDependencyForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientRootDependencyForGeneration) ;
  result_outResult = GALGAS_string ("rootObject.removeObserverOf_").add_operation (object->mAttribute_mMasterName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 237)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientRootDependencyForGeneration_generateRemoveObserverCall (void) {
  enterCategoryReader_generateRemoveObserverCall (kTypeDescriptor_GALGAS_transientRootDependencyForGeneration.mSlotID,
                                                  categoryReader_transientRootDependencyForGeneration_generateRemoveObserverCall) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientRootDependencyForGeneration_generateRemoveObserverCall (defineCategoryReader_transientRootDependencyForGeneration_generateRemoveObserverCall, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category reader '@transientRootRelationshipDependencyForGeneration generateRemoveObserverCall'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_transientRootRelationshipDependencyForGeneration_generateRemoveObserverCall (const cPtr_abstractTransientDependencyForGeneration * inObject,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_transientRootRelationshipDependencyForGeneration * object = (const cPtr_transientRootRelationshipDependencyForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientRootRelationshipDependencyForGeneration) ;
  result_outResult = GALGAS_string ("rootObject.removeObserverOf_").add_operation (object->mAttribute_mRelationshipName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 243)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 243)).add_operation (object->mAttribute_mMasterName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 243)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_transientRootRelationshipDependencyForGeneration_generateRemoveObserverCall (void) {
  enterCategoryReader_generateRemoveObserverCall (kTypeDescriptor_GALGAS_transientRootRelationshipDependencyForGeneration.mSlotID,
                                                  categoryReader_transientRootRelationshipDependencyForGeneration_generateRemoveObserverCall) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_transientRootRelationshipDependencyForGeneration_generateRemoveObserverCall (defineCategoryReader_transientRootRelationshipDependencyForGeneration_generateRemoveObserverCall, NULL) ;

