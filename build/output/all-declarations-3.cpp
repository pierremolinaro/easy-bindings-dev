#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumListForGeneration_2D_element::GALGAS_enumListForGeneration_2D_element (void) :
mAttribute_mEnumName (),
mAttribute_mEnumConstantList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumListForGeneration_2D_element::~ GALGAS_enumListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumListForGeneration_2D_element::GALGAS_enumListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                  const GALGAS_lstringlist & inOperand1) :
mAttribute_mEnumName (inOperand0),
mAttribute_mEnumConstantList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumListForGeneration_2D_element GALGAS_enumListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                  GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumListForGeneration_2D_element GALGAS_enumListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_lstringlist & inOperand1 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_enumListForGeneration_2D_element::objectCompare (const GALGAS_enumListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mEnumName.objectCompare (inOperand.mAttribute_mEnumName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEnumConstantList.objectCompare (inOperand.mAttribute_mEnumConstantList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_enumListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mEnumName.isValid () && mAttribute_mEnumConstantList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumListForGeneration_2D_element::drop (void) {
  mAttribute_mEnumName.drop () ;
  mAttribute_mEnumConstantList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumListForGeneration_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @enumListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mEnumName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEnumConstantList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_enumListForGeneration_2D_element::reader_mEnumName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_enumListForGeneration_2D_element::reader_mEnumConstantList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumConstantList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @enumListForGeneration-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumListForGeneration_2D_element ("enumListForGeneration-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferenceListForGeneration_2D_element::GALGAS_preferenceListForGeneration_2D_element (void) :
mAttribute_mPreferenceName (),
mAttribute_mAttributeListForGeneration (),
mAttribute_mDecoratedTransientListForGeneration (),
mAttribute_mOutletMap (),
mAttribute_mRegularBindingsGenerationList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferenceListForGeneration_2D_element::~ GALGAS_preferenceListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferenceListForGeneration_2D_element::GALGAS_preferenceListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                              const GALGAS_attributeListForGeneration & inOperand1,
                                                                                              const GALGAS_transientDefinitionListForGeneration & inOperand2,
                                                                                              const GALGAS_decoratedOutletMap & inOperand3,
                                                                                              const GALGAS_regularBindingsGenerationList & inOperand4) :
mAttribute_mPreferenceName (inOperand0),
mAttribute_mAttributeListForGeneration (inOperand1),
mAttribute_mDecoratedTransientListForGeneration (inOperand2),
mAttribute_mOutletMap (inOperand3),
mAttribute_mRegularBindingsGenerationList (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferenceListForGeneration_2D_element GALGAS_preferenceListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_preferenceListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                        GALGAS_attributeListForGeneration::constructor_emptyList (HERE),
                                                        GALGAS_transientDefinitionListForGeneration::constructor_emptyList (HERE),
                                                        GALGAS_decoratedOutletMap::constructor_emptyMap (HERE),
                                                        GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferenceListForGeneration_2D_element GALGAS_preferenceListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                              const GALGAS_attributeListForGeneration & inOperand1,
                                                                                                              const GALGAS_transientDefinitionListForGeneration & inOperand2,
                                                                                                              const GALGAS_decoratedOutletMap & inOperand3,
                                                                                                              const GALGAS_regularBindingsGenerationList & inOperand4 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_preferenceListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_preferenceListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_preferenceListForGeneration_2D_element::objectCompare (const GALGAS_preferenceListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mPreferenceName.objectCompare (inOperand.mAttribute_mPreferenceName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeListForGeneration.objectCompare (inOperand.mAttribute_mAttributeListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDecoratedTransientListForGeneration.objectCompare (inOperand.mAttribute_mDecoratedTransientListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletMap.objectCompare (inOperand.mAttribute_mOutletMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegularBindingsGenerationList.objectCompare (inOperand.mAttribute_mRegularBindingsGenerationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_preferenceListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mPreferenceName.isValid () && mAttribute_mAttributeListForGeneration.isValid () && mAttribute_mDecoratedTransientListForGeneration.isValid () && mAttribute_mOutletMap.isValid () && mAttribute_mRegularBindingsGenerationList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_preferenceListForGeneration_2D_element::drop (void) {
  mAttribute_mPreferenceName.drop () ;
  mAttribute_mAttributeListForGeneration.drop () ;
  mAttribute_mDecoratedTransientListForGeneration.drop () ;
  mAttribute_mOutletMap.drop () ;
  mAttribute_mRegularBindingsGenerationList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_preferenceListForGeneration_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @preferenceListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mPreferenceName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAttributeListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDecoratedTransientListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_preferenceListForGeneration_2D_element::reader_mPreferenceName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreferenceName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeListForGeneration GALGAS_preferenceListForGeneration_2D_element::reader_mAttributeListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration GALGAS_preferenceListForGeneration_2D_element::reader_mDecoratedTransientListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDecoratedTransientListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap GALGAS_preferenceListForGeneration_2D_element::reader_mOutletMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList GALGAS_preferenceListForGeneration_2D_element::reader_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegularBindingsGenerationList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @preferenceListForGeneration-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_preferenceListForGeneration_2D_element ("preferenceListForGeneration-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_preferenceListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_preferenceListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_preferenceListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_preferenceListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferenceListForGeneration_2D_element GALGAS_preferenceListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_preferenceListForGeneration_2D_element result ;
  const GALGAS_preferenceListForGeneration_2D_element * p = (const GALGAS_preferenceListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_preferenceListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("preferenceListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneration_2D_element::GALGAS_entityListForGeneration_2D_element (void) :
mAttribute_mEntityName (),
mAttribute_mSuperEntityName (),
mAttribute_mAttributeListForGeneration (),
mAttribute_mDecoratedTransientListForGeneration (),
mAttribute_mDecoratedEntityRelationshipList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneration_2D_element::~ GALGAS_entityListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneration_2D_element::GALGAS_entityListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                      const GALGAS_string & inOperand1,
                                                                                      const GALGAS_attributeListForGeneration & inOperand2,
                                                                                      const GALGAS_transientDefinitionListForGeneration & inOperand3,
                                                                                      const GALGAS_entityRelationshipListForGeneration & inOperand4) :
mAttribute_mEntityName (inOperand0),
mAttribute_mSuperEntityName (inOperand1),
mAttribute_mAttributeListForGeneration (inOperand2),
mAttribute_mDecoratedTransientListForGeneration (inOperand3),
mAttribute_mDecoratedEntityRelationshipList (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneration_2D_element GALGAS_entityListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_entityListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                    GALGAS_string::constructor_default (HERE),
                                                    GALGAS_attributeListForGeneration::constructor_emptyList (HERE),
                                                    GALGAS_transientDefinitionListForGeneration::constructor_emptyList (HERE),
                                                    GALGAS_entityRelationshipListForGeneration::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneration_2D_element GALGAS_entityListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                      const GALGAS_string & inOperand1,
                                                                                                      const GALGAS_attributeListForGeneration & inOperand2,
                                                                                                      const GALGAS_transientDefinitionListForGeneration & inOperand3,
                                                                                                      const GALGAS_entityRelationshipListForGeneration & inOperand4 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_entityListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_entityListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_entityListForGeneration_2D_element::objectCompare (const GALGAS_entityListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mEntityName.objectCompare (inOperand.mAttribute_mEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSuperEntityName.objectCompare (inOperand.mAttribute_mSuperEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeListForGeneration.objectCompare (inOperand.mAttribute_mAttributeListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDecoratedTransientListForGeneration.objectCompare (inOperand.mAttribute_mDecoratedTransientListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDecoratedEntityRelationshipList.objectCompare (inOperand.mAttribute_mDecoratedEntityRelationshipList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_entityListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mEntityName.isValid () && mAttribute_mSuperEntityName.isValid () && mAttribute_mAttributeListForGeneration.isValid () && mAttribute_mDecoratedTransientListForGeneration.isValid () && mAttribute_mDecoratedEntityRelationshipList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_entityListForGeneration_2D_element::drop (void) {
  mAttribute_mEntityName.drop () ;
  mAttribute_mSuperEntityName.drop () ;
  mAttribute_mAttributeListForGeneration.drop () ;
  mAttribute_mDecoratedTransientListForGeneration.drop () ;
  mAttribute_mDecoratedEntityRelationshipList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_entityListForGeneration_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @entityListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSuperEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAttributeListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDecoratedTransientListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDecoratedEntityRelationshipList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_entityListForGeneration_2D_element::reader_mEntityName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_entityListForGeneration_2D_element::reader_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSuperEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeListForGeneration GALGAS_entityListForGeneration_2D_element::reader_mAttributeListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration GALGAS_entityListForGeneration_2D_element::reader_mDecoratedTransientListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDecoratedTransientListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityRelationshipListForGeneration GALGAS_entityListForGeneration_2D_element::reader_mDecoratedEntityRelationshipList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDecoratedEntityRelationshipList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @entityListForGeneration-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityListForGeneration_2D_element ("entityListForGeneration-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_entityListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_entityListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentListForGeneration_2D_element::GALGAS_documentListForGeneration_2D_element (void) :
mAttribute_mDocumentName (),
mAttribute_mRootEntityName (),
mAttribute_mAttributeListForGeneration (),
mAttribute_mDecoratedTransientListForGeneration (),
mAttribute_mOutletMap (),
mAttribute_mDocumentArrayControllerForGeneration (),
mAttribute_mTargetActionList (),
mAttribute_mRegularBindingsGenerationList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentListForGeneration_2D_element::~ GALGAS_documentListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentListForGeneration_2D_element::GALGAS_documentListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                          const GALGAS_string & inOperand1,
                                                                                          const GALGAS_attributeListForGeneration & inOperand2,
                                                                                          const GALGAS_transientDefinitionListForGeneration & inOperand3,
                                                                                          const GALGAS_decoratedOutletMap & inOperand4,
                                                                                          const GALGAS_arrayControllerForGeneration & inOperand5,
                                                                                          const GALGAS_targetActionList & inOperand6,
                                                                                          const GALGAS_regularBindingsGenerationList & inOperand7) :
mAttribute_mDocumentName (inOperand0),
mAttribute_mRootEntityName (inOperand1),
mAttribute_mAttributeListForGeneration (inOperand2),
mAttribute_mDecoratedTransientListForGeneration (inOperand3),
mAttribute_mOutletMap (inOperand4),
mAttribute_mDocumentArrayControllerForGeneration (inOperand5),
mAttribute_mTargetActionList (inOperand6),
mAttribute_mRegularBindingsGenerationList (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentListForGeneration_2D_element GALGAS_documentListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_documentListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                      GALGAS_string::constructor_default (HERE),
                                                      GALGAS_attributeListForGeneration::constructor_emptyList (HERE),
                                                      GALGAS_transientDefinitionListForGeneration::constructor_emptyList (HERE),
                                                      GALGAS_decoratedOutletMap::constructor_emptyMap (HERE),
                                                      GALGAS_arrayControllerForGeneration::constructor_emptyList (HERE),
                                                      GALGAS_targetActionList::constructor_emptyList (HERE),
                                                      GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentListForGeneration_2D_element GALGAS_documentListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                          const GALGAS_string & inOperand1,
                                                                                                          const GALGAS_attributeListForGeneration & inOperand2,
                                                                                                          const GALGAS_transientDefinitionListForGeneration & inOperand3,
                                                                                                          const GALGAS_decoratedOutletMap & inOperand4,
                                                                                                          const GALGAS_arrayControllerForGeneration & inOperand5,
                                                                                                          const GALGAS_targetActionList & inOperand6,
                                                                                                          const GALGAS_regularBindingsGenerationList & inOperand7 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_documentListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_documentListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_documentListForGeneration_2D_element::objectCompare (const GALGAS_documentListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDocumentName.objectCompare (inOperand.mAttribute_mDocumentName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRootEntityName.objectCompare (inOperand.mAttribute_mRootEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeListForGeneration.objectCompare (inOperand.mAttribute_mAttributeListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDecoratedTransientListForGeneration.objectCompare (inOperand.mAttribute_mDecoratedTransientListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletMap.objectCompare (inOperand.mAttribute_mOutletMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDocumentArrayControllerForGeneration.objectCompare (inOperand.mAttribute_mDocumentArrayControllerForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetActionList.objectCompare (inOperand.mAttribute_mTargetActionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegularBindingsGenerationList.objectCompare (inOperand.mAttribute_mRegularBindingsGenerationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_documentListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mDocumentName.isValid () && mAttribute_mRootEntityName.isValid () && mAttribute_mAttributeListForGeneration.isValid () && mAttribute_mDecoratedTransientListForGeneration.isValid () && mAttribute_mOutletMap.isValid () && mAttribute_mDocumentArrayControllerForGeneration.isValid () && mAttribute_mTargetActionList.isValid () && mAttribute_mRegularBindingsGenerationList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_documentListForGeneration_2D_element::drop (void) {
  mAttribute_mDocumentName.drop () ;
  mAttribute_mRootEntityName.drop () ;
  mAttribute_mAttributeListForGeneration.drop () ;
  mAttribute_mDecoratedTransientListForGeneration.drop () ;
  mAttribute_mOutletMap.drop () ;
  mAttribute_mDocumentArrayControllerForGeneration.drop () ;
  mAttribute_mTargetActionList.drop () ;
  mAttribute_mRegularBindingsGenerationList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_documentListForGeneration_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @documentListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDocumentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRootEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAttributeListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDecoratedTransientListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDocumentArrayControllerForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetActionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_documentListForGeneration_2D_element::reader_mDocumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDocumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_documentListForGeneration_2D_element::reader_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRootEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeListForGeneration GALGAS_documentListForGeneration_2D_element::reader_mAttributeListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration GALGAS_documentListForGeneration_2D_element::reader_mDecoratedTransientListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDecoratedTransientListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap GALGAS_documentListForGeneration_2D_element::reader_mOutletMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration GALGAS_documentListForGeneration_2D_element::reader_mDocumentArrayControllerForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDocumentArrayControllerForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_targetActionList GALGAS_documentListForGeneration_2D_element::reader_mTargetActionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetActionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList GALGAS_documentListForGeneration_2D_element::reader_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegularBindingsGenerationList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @documentListForGeneration-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_documentListForGeneration_2D_element ("documentListForGeneration-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_documentListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_documentListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_documentListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyList_2D_element::GALGAS_observablePropertyList_2D_element (void) :
mAttribute_mObservableProperty () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyList_2D_element::~ GALGAS_observablePropertyList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyList_2D_element::GALGAS_observablePropertyList_2D_element (const GALGAS_abstractObservablePropertyAST & inOperand0) :
mAttribute_mObservableProperty (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyList_2D_element GALGAS_observablePropertyList_2D_element::constructor_new (const GALGAS_abstractObservablePropertyAST & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_observablePropertyList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_observablePropertyList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_observablePropertyList_2D_element::objectCompare (const GALGAS_observablePropertyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mObservableProperty.objectCompare (inOperand.mAttribute_mObservableProperty) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_observablePropertyList_2D_element::isValid (void) const {
  return mAttribute_mObservableProperty.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyList_2D_element::drop (void) {
  mAttribute_mObservableProperty.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @observablePropertyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mObservableProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractObservablePropertyAST GALGAS_observablePropertyList_2D_element::reader_mObservableProperty (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservableProperty ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @observablePropertyList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyList_2D_element ("observablePropertyList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_observablePropertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_observablePropertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList_2D_element::GALGAS_regularBindingsGenerationList_2D_element (void) :
mAttribute_mOutletName (),
mAttribute_mBindingName (),
mAttribute_mBoundObjectStringList (),
mAttribute_mBindingOptionsString () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList_2D_element::~ GALGAS_regularBindingsGenerationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList_2D_element::GALGAS_regularBindingsGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_string & inOperand1,
                                                                                                  const GALGAS_stringlist & inOperand2,
                                                                                                  const GALGAS_string & inOperand3) :
mAttribute_mOutletName (inOperand0),
mAttribute_mBindingName (inOperand1),
mAttribute_mBoundObjectStringList (inOperand2),
mAttribute_mBindingOptionsString (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList_2D_element GALGAS_regularBindingsGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_regularBindingsGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                          GALGAS_string::constructor_default (HERE),
                                                          GALGAS_stringlist::constructor_emptyList (HERE),
                                                          GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_regularBindingsGenerationList_2D_element::objectCompare (const GALGAS_regularBindingsGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOutletName.objectCompare (inOperand.mAttribute_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingName.objectCompare (inOperand.mAttribute_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBoundObjectStringList.objectCompare (inOperand.mAttribute_mBoundObjectStringList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingOptionsString.objectCompare (inOperand.mAttribute_mBindingOptionsString) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_regularBindingsGenerationList_2D_element::isValid (void) const {
  return mAttribute_mOutletName.isValid () && mAttribute_mBindingName.isValid () && mAttribute_mBoundObjectStringList.isValid () && mAttribute_mBindingOptionsString.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_regularBindingsGenerationList_2D_element::drop (void) {
  mAttribute_mOutletName.drop () ;
  mAttribute_mBindingName.drop () ;
  mAttribute_mBoundObjectStringList.drop () ;
  mAttribute_mBindingOptionsString.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_regularBindingsGenerationList_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @regularBindingsGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBoundObjectStringList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingOptionsString.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::reader_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::reader_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_regularBindingsGenerationList_2D_element::reader_mBoundObjectStringList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBoundObjectStringList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::reader_mBindingOptionsString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingOptionsString ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @regularBindingsGenerationList-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_regularBindingsGenerationList_2D_element ("regularBindingsGenerationList-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_regularBindingsGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingsGenerationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_regularBindingsGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularBindingsGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap_2D_element::GALGAS_bindingSpecificationListMap_2D_element (void) :
mAttribute_key (),
mAttribute_mList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap_2D_element::~ GALGAS_bindingSpecificationListMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap_2D_element::GALGAS_bindingSpecificationListMap_2D_element (const GALGAS_string & inOperand0,
                                                                                              const GALGAS_outletClassBindingSpecificationList & inOperand1) :
mAttribute_key (inOperand0),
mAttribute_mList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap_2D_element GALGAS_bindingSpecificationListMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_bindingSpecificationListMap_2D_element (GALGAS_string::constructor_default (HERE),
                                                        GALGAS_outletClassBindingSpecificationList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap_2D_element GALGAS_bindingSpecificationListMap_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                              const GALGAS_outletClassBindingSpecificationList & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bindingSpecificationListMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_bindingSpecificationListMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bindingSpecificationListMap_2D_element::objectCompare (const GALGAS_bindingSpecificationListMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_key.objectCompare (inOperand.mAttribute_key) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mList.objectCompare (inOperand.mAttribute_mList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bindingSpecificationListMap_2D_element::isValid (void) const {
  return mAttribute_key.isValid () && mAttribute_mList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bindingSpecificationListMap_2D_element::drop (void) {
  mAttribute_key.drop () ;
  mAttribute_mList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bindingSpecificationListMap_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @bindingSpecificationListMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_key.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_bindingSpecificationListMap_2D_element::reader_key (UNUSED_LOCATION_ARGS) const {
  return mAttribute_key ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList GALGAS_bindingSpecificationListMap_2D_element::reader_mList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @bindingSpecificationListMap-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bindingSpecificationListMap_2D_element ("bindingSpecificationListMap-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bindingSpecificationListMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingSpecificationListMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bindingSpecificationListMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bindingSpecificationListMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Abstract category method '@astDeclaration typeInventory'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_astDeclaration_typeInventory> gCategoryMethodTable_astDeclaration_typeInventory ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_typeInventory (const int32_t inClassIndex,
                                        categoryMethodSignature_astDeclaration_typeInventory inMethod) {
  gCategoryMethodTable_astDeclaration_typeInventory.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_astDeclaration_typeInventory (void) {
  gCategoryMethodTable_astDeclaration_typeInventory.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_astDeclaration_typeInventory (NULL,
                                                         freeCategoryMethod_astDeclaration_typeInventory) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_typeInventory (const cPtr_astDeclaration * inObject,
                                       GALGAS_unifiedTypeMap & io_ioUnifiedTypeMap,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_astDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_astDeclaration_typeInventory f = NULL ;
    if (classIndex < gCategoryMethodTable_astDeclaration_typeInventory.count ()) {
      f = gCategoryMethodTable_astDeclaration_typeInventory (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_astDeclaration_typeInventory.count ()) {
           f = gCategoryMethodTable_astDeclaration_typeInventory (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_astDeclaration_typeInventory.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioUnifiedTypeMap, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Reader '@unifiedTypeMap-proxy defaultValue'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_defaultValue (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  switch (temp_0.reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 312)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_stringType:
    {
      result_outResult = GALGAS_string ("\"\"") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_bezierPathType:
    {
      result_outResult = GALGAS_string ("NSBezierPath ()") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_outResult = GALGAS_string ("false") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      result_outResult = GALGAS_string ("<<classType>>") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_outResult = GALGAS_string ("NSColor.blackColor") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_controllerClassType:
    {
      result_outResult = GALGAS_string ("<<controllerClassType>>") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dataType:
    {
      result_outResult = GALGAS_string ("NSData ()") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_outResult = GALGAS_string ("NSDate ()") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_documentType:
    {
      result_outResult = GALGAS_string ("<<documentType>>") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_outResult = GALGAS_string ("0.0") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      result_outResult = GALGAS_string ("<<entityType>>") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      result_outResult = GALGAS_string ("<<enumType>>") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
    {
      result_outResult = GALGAS_string ("NSFont ()") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_imageType:
    {
      result_outResult = GALGAS_string ("NSImage ()") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_outResult = GALGAS_string ("0") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_menuType:
    {
      result_outResult = GALGAS_string ("<<menuType>>") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_nibClassType:
    {
      result_outResult = GALGAS_string ("<<nibClassType>>") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_outletClassType:
    {
      result_outResult = GALGAS_string ("<<outletClassType>>") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_preferencesType:
    {
      result_outResult = GALGAS_string ("<<preferencesType>>") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_protocolType:
    {
      result_outResult = GALGAS_string ("<<protocolType>>") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structType:
    {
      result_outResult = GALGAS_string ("<<structType>>") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_uintegerType:
    {
      result_outResult = GALGAS_string ("0") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structForGeneration::GALGAS_structForGeneration (void) :
mAttribute_mTransientListForGeneration (),
mAttribute_mActionListForGeneration (),
mAttribute_mPreferenceListForGeneration (),
mAttribute_mDocumentListForGeneration (),
mAttribute_mEntityListForGeneration (),
mAttribute_mEnumListForGeneration (),
mAttribute_mNeededOutletClasses (),
mAttribute_mControllerGenerationStringSet (),
mAttribute_mAllArrayControllerForGeneration (),
mAttribute_mValidationStubRoutineListForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structForGeneration::~ GALGAS_structForGeneration (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structForGeneration::GALGAS_structForGeneration (const GALGAS_transientListForGeneration & inOperand0,
                                                        const GALGAS_actionListForGeneration & inOperand1,
                                                        const GALGAS_preferenceListForGeneration & inOperand2,
                                                        const GALGAS_documentListForGeneration & inOperand3,
                                                        const GALGAS_entityListForGeneration & inOperand4,
                                                        const GALGAS_enumListForGeneration & inOperand5,
                                                        const GALGAS_stringset & inOperand6,
                                                        const GALGAS_stringset & inOperand7,
                                                        const GALGAS_arrayControllerForGeneration & inOperand8,
                                                        const GALGAS_validationStubRoutineListForGeneration & inOperand9) :
mAttribute_mTransientListForGeneration (inOperand0),
mAttribute_mActionListForGeneration (inOperand1),
mAttribute_mPreferenceListForGeneration (inOperand2),
mAttribute_mDocumentListForGeneration (inOperand3),
mAttribute_mEntityListForGeneration (inOperand4),
mAttribute_mEnumListForGeneration (inOperand5),
mAttribute_mNeededOutletClasses (inOperand6),
mAttribute_mControllerGenerationStringSet (inOperand7),
mAttribute_mAllArrayControllerForGeneration (inOperand8),
mAttribute_mValidationStubRoutineListForGeneration (inOperand9) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structForGeneration GALGAS_structForGeneration::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_structForGeneration (GALGAS_transientListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_actionListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_preferenceListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_documentListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_entityListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_enumListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_stringset::constructor_emptySet (HERE),
                                     GALGAS_stringset::constructor_emptySet (HERE),
                                     GALGAS_arrayControllerForGeneration::constructor_emptyList (HERE),
                                     GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structForGeneration GALGAS_structForGeneration::constructor_new (const GALGAS_transientListForGeneration & inOperand0,
                                                                        const GALGAS_actionListForGeneration & inOperand1,
                                                                        const GALGAS_preferenceListForGeneration & inOperand2,
                                                                        const GALGAS_documentListForGeneration & inOperand3,
                                                                        const GALGAS_entityListForGeneration & inOperand4,
                                                                        const GALGAS_enumListForGeneration & inOperand5,
                                                                        const GALGAS_stringset & inOperand6,
                                                                        const GALGAS_stringset & inOperand7,
                                                                        const GALGAS_arrayControllerForGeneration & inOperand8,
                                                                        const GALGAS_validationStubRoutineListForGeneration & inOperand9 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_structForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid ()) {
    result = GALGAS_structForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_structForGeneration::objectCompare (const GALGAS_structForGeneration & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTransientListForGeneration.objectCompare (inOperand.mAttribute_mTransientListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mActionListForGeneration.objectCompare (inOperand.mAttribute_mActionListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPreferenceListForGeneration.objectCompare (inOperand.mAttribute_mPreferenceListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDocumentListForGeneration.objectCompare (inOperand.mAttribute_mDocumentListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEntityListForGeneration.objectCompare (inOperand.mAttribute_mEntityListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEnumListForGeneration.objectCompare (inOperand.mAttribute_mEnumListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNeededOutletClasses.objectCompare (inOperand.mAttribute_mNeededOutletClasses) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mControllerGenerationStringSet.objectCompare (inOperand.mAttribute_mControllerGenerationStringSet) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllArrayControllerForGeneration.objectCompare (inOperand.mAttribute_mAllArrayControllerForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValidationStubRoutineListForGeneration.objectCompare (inOperand.mAttribute_mValidationStubRoutineListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_structForGeneration::isValid (void) const {
  return mAttribute_mTransientListForGeneration.isValid () && mAttribute_mActionListForGeneration.isValid () && mAttribute_mPreferenceListForGeneration.isValid () && mAttribute_mDocumentListForGeneration.isValid () && mAttribute_mEntityListForGeneration.isValid () && mAttribute_mEnumListForGeneration.isValid () && mAttribute_mNeededOutletClasses.isValid () && mAttribute_mControllerGenerationStringSet.isValid () && mAttribute_mAllArrayControllerForGeneration.isValid () && mAttribute_mValidationStubRoutineListForGeneration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structForGeneration::drop (void) {
  mAttribute_mTransientListForGeneration.drop () ;
  mAttribute_mActionListForGeneration.drop () ;
  mAttribute_mPreferenceListForGeneration.drop () ;
  mAttribute_mDocumentListForGeneration.drop () ;
  mAttribute_mEntityListForGeneration.drop () ;
  mAttribute_mEnumListForGeneration.drop () ;
  mAttribute_mNeededOutletClasses.drop () ;
  mAttribute_mControllerGenerationStringSet.drop () ;
  mAttribute_mAllArrayControllerForGeneration.drop () ;
  mAttribute_mValidationStubRoutineListForGeneration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structForGeneration::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "<struct @structForGeneration:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTransientListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mActionListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPreferenceListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDocumentListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEntityListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEnumListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNeededOutletClasses.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mControllerGenerationStringSet.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllArrayControllerForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValidationStubRoutineListForGeneration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientListForGeneration GALGAS_structForGeneration::reader_mTransientListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionListForGeneration GALGAS_structForGeneration::reader_mActionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferenceListForGeneration GALGAS_structForGeneration::reader_mPreferenceListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreferenceListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentListForGeneration GALGAS_structForGeneration::reader_mDocumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDocumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneration GALGAS_structForGeneration::reader_mEntityListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEntityListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumListForGeneration GALGAS_structForGeneration::reader_mEnumListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_structForGeneration::reader_mNeededOutletClasses (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNeededOutletClasses ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_structForGeneration::reader_mControllerGenerationStringSet (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mControllerGenerationStringSet ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration GALGAS_structForGeneration::reader_mAllArrayControllerForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllArrayControllerForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration GALGAS_structForGeneration::reader_mValidationStubRoutineListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValidationStubRoutineListForGeneration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @structForGeneration type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structForGeneration ("structForGeneration",
                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structForGeneration GALGAS_structForGeneration::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_structForGeneration result ;
  const GALGAS_structForGeneration * p = (const GALGAS_structForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Reader '@unifiedTypeMap-proxy swiftTypeName'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_swiftTypeName (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  switch (temp_0.reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 15)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_outResult = GALGAS_string ("Bool") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_uintegerType:
    {
      result_outResult = GALGAS_string ("UInt") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_outResult = GALGAS_string ("Int") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_outResult = GALGAS_string ("Double") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_stringType:
    {
      result_outResult = GALGAS_string ("String") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_outResult = GALGAS_string ("NSColor") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dataType:
    {
      result_outResult = GALGAS_string ("NSData") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_outResult = GALGAS_string ("NSDate") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_imageType:
    {
      result_outResult = GALGAS_string ("NSImage") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
    {
      result_outResult = GALGAS_string ("NSFont") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_menuType:
    {
      result_outResult = GALGAS_string ("NSMenu") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_bezierPathType:
    {
      result_outResult = GALGAS_string ("NSBezierPath") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structType:
  case GALGAS_typeKind::kEnum_enumType:
    {
      const GALGAS_unifiedTypeMap_2D_proxy temp_1 = inObject ;
      result_outResult = temp_1.reader_key (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 28)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
  case GALGAS_typeKind::kEnum_controllerClassType:
  case GALGAS_typeKind::kEnum_documentType:
  case GALGAS_typeKind::kEnum_entityType:
  case GALGAS_typeKind::kEnum_preferencesType:
  case GALGAS_typeKind::kEnum_nibClassType:
  case GALGAS_typeKind::kEnum_outletClassType:
  case GALGAS_typeKind::kEnum_protocolType:
    {
      const GALGAS_unifiedTypeMap_2D_proxy temp_2 = inObject ;
      result_outResult = GALGAS_string ("<invalid return type '").add_operation (temp_2.reader_key (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 31)), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 31)).add_operation (GALGAS_string ("' >"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 31)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category Reader '@unifiedTypeMap-proxy valueAccessorForExplorerWindow'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_valueAccessorForExplorerWindow (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                             const GALGAS_string & constinArgument_inPropertyName,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  switch (temp_0.reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 38)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_outResult = GALGAS_string ("NSString (format:\"%s\", ").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 39)).add_operation (GALGAS_string (".prop \? \"true\" : \"false\") as! String"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 39)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_uintegerType:
    {
      result_outResult = GALGAS_string ("NSString (format:\"%lu\", ").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 40)).add_operation (GALGAS_string (".prop) as! String"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 40)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_outResult = GALGAS_string ("NSString (format:\"%ld\", ").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 41)).add_operation (GALGAS_string (".prop) as! String"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 41)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_outResult = GALGAS_string ("NSString (format:\"%g\", ").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 42)).add_operation (GALGAS_string (".prop) as! String"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 42)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_stringType:
    {
      result_outResult = constinArgument_inPropertyName.add_operation (GALGAS_string (".prop"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 43)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_outResult = constinArgument_inPropertyName.add_operation (GALGAS_string (".prop.description"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 44)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dataType:
    {
      result_outResult = GALGAS_string ("NSData") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_outResult = GALGAS_string ("NSDate") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_imageType:
    {
      result_outResult = GALGAS_string ("NSImage") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
    {
      result_outResult = GALGAS_string ("NSFont") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      result_outResult = constinArgument_inPropertyName.add_operation (GALGAS_string (".prop.string ()"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 49)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_menuType:
    {
      result_outResult = GALGAS_string ("NSMenu") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_bezierPathType:
    {
      result_outResult = GALGAS_string ("NSBezierPath") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structType:
    {
      const GALGAS_unifiedTypeMap_2D_proxy temp_1 = inObject ;
      result_outResult = temp_1.reader_key (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 52)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
  case GALGAS_typeKind::kEnum_controllerClassType:
  case GALGAS_typeKind::kEnum_documentType:
  case GALGAS_typeKind::kEnum_entityType:
  case GALGAS_typeKind::kEnum_preferencesType:
  case GALGAS_typeKind::kEnum_nibClassType:
  case GALGAS_typeKind::kEnum_outletClassType:
  case GALGAS_typeKind::kEnum_protocolType:
    {
      const GALGAS_unifiedTypeMap_2D_proxy temp_2 = inObject ;
      result_outResult = GALGAS_string ("<type '").add_operation (temp_2.reader_key (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 55)).add_operation (GALGAS_string ("' >"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 55)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category Reader '@unifiedTypeMap-proxy transformForSavingInDictionary'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_transformForSavingInDictionary (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                             const GALGAS_string & constinArgument_inPropertyName,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  switch (temp_0.reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 62)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_outResult = GALGAS_string ("NSNumber (bool:").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 63)).add_operation (GALGAS_string (".prop)"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 63)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_uintegerType:
    {
      result_outResult = GALGAS_string ("NSNumber (unsignedInteger:").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 64)).add_operation (GALGAS_string (".prop)"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 64)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_outResult = GALGAS_string ("NSNumber (integer:").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 65)).add_operation (GALGAS_string (".prop)"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 65)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_outResult = GALGAS_string ("NSNumber (double:").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 66)).add_operation (GALGAS_string (".prop)"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 66)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_stringType:
    {
      result_outResult = constinArgument_inPropertyName.add_operation (GALGAS_string (".prop"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 67)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_outResult = GALGAS_string ("NSArchiver.archivedDataWithRootObject (").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 68)).add_operation (GALGAS_string (".prop)"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 68)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dataType:
    {
      result_outResult = GALGAS_string ("NSData") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_outResult = GALGAS_string ("NSDate") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_imageType:
    {
      result_outResult = GALGAS_string ("NSImage") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
    {
      result_outResult = GALGAS_string ("NSFont") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_menuType:
    {
      result_outResult = GALGAS_string ("NSMenu") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_bezierPathType:
    {
      result_outResult = GALGAS_string ("NSBezierPath") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      result_outResult = GALGAS_string ("NSNumber (integer:").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 75)).add_operation (GALGAS_string (".prop.rawValue)"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 75)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structType:
    {
      const GALGAS_unifiedTypeMap_2D_proxy temp_1 = inObject ;
      result_outResult = temp_1.reader_key (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 76)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
  case GALGAS_typeKind::kEnum_controllerClassType:
  case GALGAS_typeKind::kEnum_documentType:
  case GALGAS_typeKind::kEnum_entityType:
  case GALGAS_typeKind::kEnum_preferencesType:
  case GALGAS_typeKind::kEnum_nibClassType:
  case GALGAS_typeKind::kEnum_outletClassType:
  case GALGAS_typeKind::kEnum_protocolType:
    {
      const GALGAS_unifiedTypeMap_2D_proxy temp_2 = inObject ;
      result_outResult = GALGAS_string ("<type '").add_operation (temp_2.reader_key (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 79)).add_operation (GALGAS_string ("' >"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 79)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Category Reader '@unifiedTypeMap-proxy transformerForRegisterUndoWithTarget'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_transformerForRegisterUndoWithTarget (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                                   const GALGAS_string & constinArgument_inOldValue,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  switch (temp_0.reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 86)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_outResult = GALGAS_string ("NSNumber (bool:").add_operation (constinArgument_inOldValue, inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 87)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 87)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_uintegerType:
    {
      result_outResult = GALGAS_string ("NSNumber (unsignedInteger:").add_operation (constinArgument_inOldValue, inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 88)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 88)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_outResult = GALGAS_string ("NSNumber (integer:").add_operation (constinArgument_inOldValue, inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 89)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 89)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_outResult = GALGAS_string ("NSNumber (double:").add_operation (constinArgument_inOldValue, inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 90)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 90)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_stringType:
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_outResult = constinArgument_inOldValue ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dataType:
    {
      result_outResult = GALGAS_string ("NSData") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_outResult = GALGAS_string ("NSDate") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_imageType:
    {
      result_outResult = GALGAS_string ("NSImage") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
    {
      result_outResult = GALGAS_string ("NSFont") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_menuType:
    {
      result_outResult = GALGAS_string ("NSMenu") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      result_outResult = GALGAS_string ("NSNumber (integer:").add_operation (constinArgument_inOldValue, inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 97)).add_operation (GALGAS_string (".rawValue)"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 97)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_bezierPathType:
    {
      result_outResult = GALGAS_string ("NSBezierPath") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structType:
    {
      const GALGAS_unifiedTypeMap_2D_proxy temp_1 = inObject ;
      result_outResult = temp_1.reader_key (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 99)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
  case GALGAS_typeKind::kEnum_controllerClassType:
  case GALGAS_typeKind::kEnum_documentType:
  case GALGAS_typeKind::kEnum_entityType:
  case GALGAS_typeKind::kEnum_preferencesType:
  case GALGAS_typeKind::kEnum_nibClassType:
  case GALGAS_typeKind::kEnum_outletClassType:
  case GALGAS_typeKind::kEnum_protocolType:
    {
      const GALGAS_unifiedTypeMap_2D_proxy temp_2 = inObject ;
      result_outResult = GALGAS_string ("<type '").add_operation (temp_2.reader_key (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 102)).add_operation (GALGAS_string ("' >"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 102)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category Reader '@unifiedTypeMap-proxy swiftTypeUndoArgument'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_swiftTypeUndoArgument (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  switch (temp_0.reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 109)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_outResult = GALGAS_string ("NSNumber") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_uintegerType:
    {
      result_outResult = GALGAS_string ("NSNumber") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_outResult = GALGAS_string ("NSNumber") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_outResult = GALGAS_string ("NSNumber") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_stringType:
    {
      result_outResult = GALGAS_string ("String") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_outResult = GALGAS_string ("NSColor") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dataType:
    {
      result_outResult = GALGAS_string ("NSData") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_outResult = GALGAS_string ("NSDate") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_imageType:
    {
      result_outResult = GALGAS_string ("NSImage") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
    {
      result_outResult = GALGAS_string ("NSFont") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_menuType:
    {
      result_outResult = GALGAS_string ("NSMenu") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      result_outResult = GALGAS_string ("NSNumber") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_bezierPathType:
    {
      result_outResult = GALGAS_string ("NSBezierPath") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structType:
    {
      result_outResult = GALGAS_string ("NSNumber") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
  case GALGAS_typeKind::kEnum_controllerClassType:
  case GALGAS_typeKind::kEnum_documentType:
  case GALGAS_typeKind::kEnum_entityType:
  case GALGAS_typeKind::kEnum_preferencesType:
  case GALGAS_typeKind::kEnum_nibClassType:
  case GALGAS_typeKind::kEnum_outletClassType:
  case GALGAS_typeKind::kEnum_protocolType:
    {
      const GALGAS_unifiedTypeMap_2D_proxy temp_1 = inObject ;
      result_outResult = GALGAS_string ("<type '").add_operation (temp_1.reader_key (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 126)).add_operation (GALGAS_string ("' >"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 126)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category Reader '@unifiedTypeMap-proxy transformerForUndo'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_transformerForUndo (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                 const GALGAS_string & constinArgument_inValue,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  switch (temp_0.reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 133)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_outResult = constinArgument_inValue.add_operation (GALGAS_string (".boolValue"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 134)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_uintegerType:
    {
      result_outResult = constinArgument_inValue.add_operation (GALGAS_string (".unsignedIntegerValue"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 135)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_outResult = constinArgument_inValue.add_operation (GALGAS_string (".integerValue"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 136)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_outResult = constinArgument_inValue.add_operation (GALGAS_string (".doubleValue"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 137)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_stringType:
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_outResult = constinArgument_inValue ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dataType:
    {
      result_outResult = constinArgument_inValue ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_outResult = constinArgument_inValue ;
    }
    break ;
  case GALGAS_typeKind::kEnum_imageType:
    {
      result_outResult = constinArgument_inValue ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
    {
      result_outResult = constinArgument_inValue ;
    }
    break ;
  case GALGAS_typeKind::kEnum_menuType:
    {
      result_outResult = constinArgument_inValue ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      const GALGAS_unifiedTypeMap_2D_proxy temp_1 = inObject ;
      result_outResult = temp_1.reader_key (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 144)).add_operation (GALGAS_string (" (rawValue:"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 144)).add_operation (constinArgument_inValue, inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 144)).add_operation (GALGAS_string (".integerValue)!"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 144)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_bezierPathType:
    {
      result_outResult = GALGAS_string ("NSBezierPath") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structType:
    {
      const GALGAS_unifiedTypeMap_2D_proxy temp_2 = inObject ;
      result_outResult = temp_2.reader_key (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 146)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
  case GALGAS_typeKind::kEnum_controllerClassType:
  case GALGAS_typeKind::kEnum_documentType:
  case GALGAS_typeKind::kEnum_entityType:
  case GALGAS_typeKind::kEnum_preferencesType:
  case GALGAS_typeKind::kEnum_nibClassType:
  case GALGAS_typeKind::kEnum_outletClassType:
  case GALGAS_typeKind::kEnum_protocolType:
    {
      const GALGAS_unifiedTypeMap_2D_proxy temp_3 = inObject ;
      result_outResult = GALGAS_string ("<type '").add_operation (temp_3.reader_key (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 149)).add_operation (GALGAS_string ("' >"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 149)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category Reader '@unifiedTypeMap-proxy typeNameForBindingTypeCheck'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_typeNameForBindingTypeCheck (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  switch (temp_0.reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 156)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      result_outResult = GALGAS_string ("Enum") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
  case GALGAS_typeKind::kEnum_controllerClassType:
  case GALGAS_typeKind::kEnum_documentType:
  case GALGAS_typeKind::kEnum_entityType:
  case GALGAS_typeKind::kEnum_preferencesType:
  case GALGAS_typeKind::kEnum_nibClassType:
  case GALGAS_typeKind::kEnum_outletClassType:
  case GALGAS_typeKind::kEnum_protocolType:
  case GALGAS_typeKind::kEnum_bezierPathType:
  case GALGAS_typeKind::kEnum_structType:
  case GALGAS_typeKind::kEnum_menuType:
  case GALGAS_typeKind::kEnum_fontType:
  case GALGAS_typeKind::kEnum_imageType:
  case GALGAS_typeKind::kEnum_dateType:
  case GALGAS_typeKind::kEnum_dataType:
  case GALGAS_typeKind::kEnum_stringType:
  case GALGAS_typeKind::kEnum_colorType:
  case GALGAS_typeKind::kEnum_doubleType:
  case GALGAS_typeKind::kEnum_integerType:
  case GALGAS_typeKind::kEnum_uintegerType:
  case GALGAS_typeKind::kEnum_boolType:
    {
      const GALGAS_unifiedTypeMap_2D_proxy temp_1 = inObject ;
      result_outResult = temp_1.reader_key (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 162)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Category Reader '@unifiedTypeMap-proxy transformerForTableViewAction'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_transformerForTableViewAction (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                            const GALGAS_string & constinArgument_inSenderOutletName,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  switch (temp_0.reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 169)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_stringType:
    {
      result_outResult = constinArgument_inSenderOutletName.add_operation (GALGAS_string (".stringValue"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 170)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_outResult = constinArgument_inSenderOutletName.add_operation (GALGAS_string (".integerValue"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 171)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_outResult = GALGAS_string ("NSNumber (bool:").add_operation (constinArgument_inSenderOutletName, inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 173)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 173)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_uintegerType:
    {
      result_outResult = GALGAS_string ("NSNumber (unsignedLongLong:").add_operation (constinArgument_inSenderOutletName, inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 174)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 174)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_outResult = GALGAS_string ("NSNumber (double:").add_operation (constinArgument_inSenderOutletName, inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 175)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 175)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_outResult = constinArgument_inSenderOutletName.add_operation (GALGAS_string (".stringValue"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 176)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dataType:
    {
      result_outResult = GALGAS_string ("NSData") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_outResult = GALGAS_string ("NSDate") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_imageType:
    {
      result_outResult = GALGAS_string ("NSImage") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
    {
      result_outResult = GALGAS_string ("NSFont") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_menuType:
    {
      result_outResult = GALGAS_string ("NSMenu") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      result_outResult = GALGAS_string ("NSNumber (integer:").add_operation (constinArgument_inSenderOutletName, inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 182)).add_operation (GALGAS_string (".rawValue)"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 182)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_bezierPathType:
    {
      result_outResult = GALGAS_string ("NSBezierPath") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structType:
    {
      const GALGAS_unifiedTypeMap_2D_proxy temp_1 = inObject ;
      result_outResult = temp_1.reader_key (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 184)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
  case GALGAS_typeKind::kEnum_controllerClassType:
  case GALGAS_typeKind::kEnum_documentType:
  case GALGAS_typeKind::kEnum_entityType:
  case GALGAS_typeKind::kEnum_preferencesType:
  case GALGAS_typeKind::kEnum_nibClassType:
  case GALGAS_typeKind::kEnum_outletClassType:
  case GALGAS_typeKind::kEnum_protocolType:
    {
      const GALGAS_unifiedTypeMap_2D_proxy temp_2 = inObject ;
      result_outResult = GALGAS_string ("<type '").add_operation (temp_2.reader_key (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 187)).add_operation (GALGAS_string ("' >"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 187)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category Reader '@unifiedTypeMap-proxy formatterStringForFormatPrinting'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_formatterStringForFormatPrinting (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  switch (temp_0.reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 194)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_stringType:
    {
      result_outResult = GALGAS_string ("%@") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_outResult = GALGAS_string ("%d") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_outResult = GALGAS_string ("%d") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_uintegerType:
    {
      result_outResult = GALGAS_string ("%u") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_outResult = GALGAS_string ("%g") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_outResult = GALGAS_string ("%@") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dataType:
    {
      result_outResult = GALGAS_string ("%@") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_outResult = GALGAS_string ("%@") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_imageType:
    {
      result_outResult = GALGAS_string ("%@") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
    {
      result_outResult = GALGAS_string ("%@") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_menuType:
    {
      result_outResult = GALGAS_string ("%@") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      result_outResult = GALGAS_string ("%d") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_bezierPathType:
    {
      result_outResult = GALGAS_string ("%@") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structType:
    {
      const GALGAS_unifiedTypeMap_2D_proxy temp_1 = inObject ;
      result_outResult = temp_1.reader_key (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 209)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
  case GALGAS_typeKind::kEnum_controllerClassType:
  case GALGAS_typeKind::kEnum_documentType:
  case GALGAS_typeKind::kEnum_entityType:
  case GALGAS_typeKind::kEnum_preferencesType:
  case GALGAS_typeKind::kEnum_nibClassType:
  case GALGAS_typeKind::kEnum_outletClassType:
  case GALGAS_typeKind::kEnum_protocolType:
    {
      const GALGAS_unifiedTypeMap_2D_proxy temp_2 = inObject ;
      result_outResult = GALGAS_string ("<type '").add_operation (temp_2.reader_key (inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 212)).add_operation (GALGAS_string ("' >"), inCompiler COMMA_SOURCE_FILE ("bindingSemanticAnalysis.galgas", 212)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category Reader '@unifiedTypeMap-proxy preferencesSwiftGetter'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_preferencesSwiftGetter (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  switch (temp_0.reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("preferencesGeneration.galgas", 29)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_outResult = GALGAS_string ("(value as! NSNumber).boolValue") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_uintegerType:
    {
      result_outResult = GALGAS_string ("\xC3""\xA0"" compl\xC3""\xA9""ter preferencesSwiftGetter") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_outResult = GALGAS_string ("(value as! NSNumber).integerValue") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_outResult = GALGAS_string ("\xC3""\xA0"" compl\xC3""\xA9""ter preferencesSwiftGetter") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_stringType:
    {
      result_outResult = GALGAS_string ("value as! String") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_outResult = GALGAS_string ("NSUnarchiver.unarchiveObjectWithData (value as! NSData) as! NSColor") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dataType:
    {
      result_outResult = GALGAS_string ("\xC3""\xA0"" compl\xC3""\xA9""ter preferencesSwiftGetter") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_outResult = GALGAS_string ("value as! NSDate") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_imageType:
    {
      result_outResult = GALGAS_string ("\xC3""\xA0"" compl\xC3""\xA9""ter preferencesSwiftGetter") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
    {
      result_outResult = GALGAS_string ("\xC3""\xA0"" compl\xC3""\xA9""ter preferencesSwiftGetter") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_menuType:
    {
      result_outResult = GALGAS_string ("\xC3""\xA0"" compl\xC3""\xA9""ter preferencesSwiftGetter") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_bezierPathType:
    {
      result_outResult = GALGAS_string ("\xC3""\xA0"" compl\xC3""\xA9""ter preferencesSwiftGetter") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structType:
  case GALGAS_typeKind::kEnum_enumType:
    {
      result_outResult = GALGAS_string ("\xC3""\xA0"" compl\xC3""\xA9""ter preferencesSwiftGetter") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
  case GALGAS_typeKind::kEnum_controllerClassType:
  case GALGAS_typeKind::kEnum_documentType:
  case GALGAS_typeKind::kEnum_entityType:
  case GALGAS_typeKind::kEnum_preferencesType:
  case GALGAS_typeKind::kEnum_nibClassType:
  case GALGAS_typeKind::kEnum_outletClassType:
  case GALGAS_typeKind::kEnum_protocolType:
    {
      const GALGAS_unifiedTypeMap_2D_proxy temp_1 = inObject ;
      result_outResult = GALGAS_string ("<invalid type '").add_operation (temp_1.reader_key (inCompiler COMMA_SOURCE_FILE ("preferencesGeneration.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("preferencesGeneration.galgas", 45)).add_operation (GALGAS_string ("' >"), inCompiler COMMA_SOURCE_FILE ("preferencesGeneration.galgas", 45)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category Reader '@unifiedTypeMap-proxy preferencesSwiftSetter'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_preferencesSwiftSetter (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                     const GALGAS_string & constinArgument_inPropertyName,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  switch (temp_0.reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("preferencesGeneration.galgas", 54)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_outResult = GALGAS_string ("NSNumber (bool:").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("preferencesGeneration.galgas", 55)).add_operation (GALGAS_string (".prop)"), inCompiler COMMA_SOURCE_FILE ("preferencesGeneration.galgas", 55)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_uintegerType:
    {
      result_outResult = GALGAS_string ("\xC3""\xA0"" compl\xC3""\xA9""ter preferencesSwiftSetter") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_outResult = GALGAS_string ("NSNumber (integer:").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("preferencesGeneration.galgas", 57)).add_operation (GALGAS_string (".prop)"), inCompiler COMMA_SOURCE_FILE ("preferencesGeneration.galgas", 57)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_outResult = GALGAS_string ("\xC3""\xA0"" compl\xC3""\xA9""ter preferencesSwiftSetter") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_outResult = GALGAS_string ("NSArchiver.archivedDataWithRootObject (").add_operation (constinArgument_inPropertyName, inCompiler COMMA_SOURCE_FILE ("preferencesGeneration.galgas", 59)).add_operation (GALGAS_string (".prop)"), inCompiler COMMA_SOURCE_FILE ("preferencesGeneration.galgas", 59)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dataType:
    {
      result_outResult = GALGAS_string ("\xC3""\xA0"" compl\xC3""\xA9""ter preferencesSwiftSetter") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
  case GALGAS_typeKind::kEnum_stringType:
    {
      result_outResult = constinArgument_inPropertyName.add_operation (GALGAS_string (".prop"), inCompiler COMMA_SOURCE_FILE ("preferencesGeneration.galgas", 61)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_imageType:
    {
      result_outResult = GALGAS_string ("\xC3""\xA0"" compl\xC3""\xA9""ter preferencesSwiftSetter") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
    {
      result_outResult = GALGAS_string ("\xC3""\xA0"" compl\xC3""\xA9""ter preferencesSwiftSetter") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_menuType:
    {
      result_outResult = GALGAS_string ("\xC3""\xA0"" compl\xC3""\xA9""ter preferencesSwiftSetter") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_bezierPathType:
    {
      result_outResult = GALGAS_string ("\xC3""\xA0"" compl\xC3""\xA9""ter preferencesSwiftSetter") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structType:
  case GALGAS_typeKind::kEnum_enumType:
    {
      result_outResult = GALGAS_string ("\xC3""\xA0"" compl\xC3""\xA9""ter preferencesSwiftSetter") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
  case GALGAS_typeKind::kEnum_controllerClassType:
  case GALGAS_typeKind::kEnum_documentType:
  case GALGAS_typeKind::kEnum_entityType:
  case GALGAS_typeKind::kEnum_preferencesType:
  case GALGAS_typeKind::kEnum_nibClassType:
  case GALGAS_typeKind::kEnum_outletClassType:
  case GALGAS_typeKind::kEnum_protocolType:
    {
      const GALGAS_unifiedTypeMap_2D_proxy temp_1 = inObject ;
      result_outResult = GALGAS_string ("<invalid type '").add_operation (temp_1.reader_key (inCompiler COMMA_SOURCE_FILE ("preferencesGeneration.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("preferencesGeneration.galgas", 69)).add_operation (GALGAS_string ("' >"), inCompiler COMMA_SOURCE_FILE ("preferencesGeneration.galgas", 69)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category Reader '@unifiedTypeMap-proxy transientReturnTypeName'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_transientReturnTypeName (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  switch (temp_0.reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 6)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_outResult = GALGAS_string ("Bool") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_uintegerType:
    {
      result_outResult = GALGAS_string ("UInt") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_outResult = GALGAS_string ("Int") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_outResult = GALGAS_string ("Double") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_stringType:
    {
      result_outResult = GALGAS_string ("String") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_outResult = GALGAS_string ("NSColor") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dataType:
    {
      result_outResult = GALGAS_string ("NSData") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_outResult = GALGAS_string ("NSDate") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_imageType:
    {
      result_outResult = GALGAS_string ("NSImage") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
    {
      result_outResult = GALGAS_string ("NSFont") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_menuType:
    {
      result_outResult = GALGAS_string ("NSMenu") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_bezierPathType:
    {
      result_outResult = GALGAS_string ("NSBezierPath") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structType:
  case GALGAS_typeKind::kEnum_enumType:
    {
      const GALGAS_unifiedTypeMap_2D_proxy temp_1 = inObject ;
      result_outResult = temp_1.reader_key (inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 19)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
  case GALGAS_typeKind::kEnum_controllerClassType:
  case GALGAS_typeKind::kEnum_documentType:
  case GALGAS_typeKind::kEnum_entityType:
  case GALGAS_typeKind::kEnum_preferencesType:
  case GALGAS_typeKind::kEnum_nibClassType:
  case GALGAS_typeKind::kEnum_outletClassType:
  case GALGAS_typeKind::kEnum_protocolType:
    {
      const GALGAS_unifiedTypeMap_2D_proxy temp_2 = inObject ;
      result_outResult = GALGAS_string ("<invalid return type '").add_operation (temp_2.reader_key (inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 22)).add_operation (GALGAS_string ("' >"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 22)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category Reader '@unifiedTypeMap-proxy transientFormalArgumentTypeName'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string categoryReader_transientFormalArgumentTypeName (const GALGAS_unifiedTypeMap_2D_proxy & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_unifiedTypeMap_2D_proxy temp_0 = inObject ;
  switch (temp_0.reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 29)).enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolType:
    {
      result_outResult = GALGAS_string ("Bool") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_uintegerType:
    {
      result_outResult = GALGAS_string ("UInt") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_integerType:
    {
      result_outResult = GALGAS_string ("Int") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_doubleType:
    {
      result_outResult = GALGAS_string ("Double") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_stringType:
    {
      result_outResult = GALGAS_string ("String") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_colorType:
    {
      result_outResult = GALGAS_string ("NSColor") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dataType:
    {
      result_outResult = GALGAS_string ("NSData") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_dateType:
    {
      result_outResult = GALGAS_string ("NSDate") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_imageType:
    {
      result_outResult = GALGAS_string ("NSImage") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_fontType:
    {
      result_outResult = GALGAS_string ("NSFont") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_menuType:
    {
      result_outResult = GALGAS_string ("NSMenu") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_bezierPathType:
    {
      result_outResult = GALGAS_string ("NSBezierPath") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      result_outResult = GALGAS_string ("Int") ;
    }
    break ;
  case GALGAS_typeKind::kEnum_structType:
  case GALGAS_typeKind::kEnum_enumType:
    {
      const GALGAS_unifiedTypeMap_2D_proxy temp_1 = inObject ;
      result_outResult = temp_1.reader_key (inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 43)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
  case GALGAS_typeKind::kEnum_controllerClassType:
  case GALGAS_typeKind::kEnum_documentType:
  case GALGAS_typeKind::kEnum_preferencesType:
  case GALGAS_typeKind::kEnum_nibClassType:
  case GALGAS_typeKind::kEnum_outletClassType:
  case GALGAS_typeKind::kEnum_protocolType:
    {
      const GALGAS_unifiedTypeMap_2D_proxy temp_2 = inObject ;
      result_outResult = GALGAS_string ("<invalid return type '").add_operation (temp_2.reader_key (inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 46)).add_operation (GALGAS_string ("' >"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 46)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationList_2D_element::GALGAS_astDeclarationList_2D_element (void) :
mAttribute_mDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationList_2D_element::~ GALGAS_astDeclarationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationList_2D_element::GALGAS_astDeclarationList_2D_element (const GALGAS_astDeclaration & inOperand0) :
mAttribute_mDeclaration (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationList_2D_element GALGAS_astDeclarationList_2D_element::constructor_new (const GALGAS_astDeclaration & inOperand0 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astDeclarationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_astDeclarationList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_astDeclarationList_2D_element::objectCompare (const GALGAS_astDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDeclaration.objectCompare (inOperand.mAttribute_mDeclaration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_astDeclarationList_2D_element::isValid (void) const {
  return mAttribute_mDeclaration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_astDeclarationList_2D_element::drop (void) {
  mAttribute_mDeclaration.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_astDeclarationList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @astDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDeclaration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclaration GALGAS_astDeclarationList_2D_element::reader_mDeclaration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeclaration ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @astDeclarationList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astDeclarationList_2D_element ("astDeclarationList-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_astDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDeclarationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_astDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationList_2D_element GALGAS_astDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_astDeclarationList_2D_element result ;
  const GALGAS_astDeclarationList_2D_element * p = (const GALGAS_astDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList_2D_element::GALGAS_bindingOptionList_2D_element (void) :
mAttribute_mOptionName (),
mAttribute_mOptionValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList_2D_element::~ GALGAS_bindingOptionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList_2D_element::GALGAS_bindingOptionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                          const GALGAS_abstractDefaultValue & inOperand1) :
mAttribute_mOptionName (inOperand0),
mAttribute_mOptionValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList_2D_element GALGAS_bindingOptionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                          const GALGAS_abstractDefaultValue & inOperand1 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bindingOptionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_bindingOptionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bindingOptionList_2D_element::objectCompare (const GALGAS_bindingOptionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOptionName.objectCompare (inOperand.mAttribute_mOptionName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionValue.objectCompare (inOperand.mAttribute_mOptionValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bindingOptionList_2D_element::isValid (void) const {
  return mAttribute_mOptionName.isValid () && mAttribute_mOptionValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bindingOptionList_2D_element::drop (void) {
  mAttribute_mOptionName.drop () ;
  mAttribute_mOptionValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bindingOptionList_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @bindingOptionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOptionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_bindingOptionList_2D_element::reader_mOptionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue GALGAS_bindingOptionList_2D_element::reader_mOptionValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @bindingOptionList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bindingOptionList_2D_element ("bindingOptionList-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bindingOptionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingOptionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bindingOptionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bindingOptionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList_2D_element GALGAS_bindingOptionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_bindingOptionList_2D_element result ;
  const GALGAS_bindingOptionList_2D_element * p = (const GALGAS_bindingOptionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bindingOptionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingOptionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingList_2D_element::GALGAS_bindingList_2D_element (void) :
mAttribute_mSelectorName (),
mAttribute_mObservableProperty (),
mAttribute_mOutletName (),
mAttribute_mBindingName (),
mAttribute_mBindingOptionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingList_2D_element::~ GALGAS_bindingList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingList_2D_element::GALGAS_bindingList_2D_element (const GALGAS_lstring & inOperand0,
                                                              const GALGAS_abstractObservablePropertyAST & inOperand1,
                                                              const GALGAS_lstring & inOperand2,
                                                              const GALGAS_lstring & inOperand3,
                                                              const GALGAS_bindingOptionList & inOperand4) :
mAttribute_mSelectorName (inOperand0),
mAttribute_mObservableProperty (inOperand1),
mAttribute_mOutletName (inOperand2),
mAttribute_mBindingName (inOperand3),
mAttribute_mBindingOptionList (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingList_2D_element GALGAS_bindingList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                              const GALGAS_abstractObservablePropertyAST & inOperand1,
                                                                              const GALGAS_lstring & inOperand2,
                                                                              const GALGAS_lstring & inOperand3,
                                                                              const GALGAS_bindingOptionList & inOperand4 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bindingList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_bindingList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bindingList_2D_element::objectCompare (const GALGAS_bindingList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSelectorName.objectCompare (inOperand.mAttribute_mSelectorName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mObservableProperty.objectCompare (inOperand.mAttribute_mObservableProperty) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletName.objectCompare (inOperand.mAttribute_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingName.objectCompare (inOperand.mAttribute_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingOptionList.objectCompare (inOperand.mAttribute_mBindingOptionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bindingList_2D_element::isValid (void) const {
  return mAttribute_mSelectorName.isValid () && mAttribute_mObservableProperty.isValid () && mAttribute_mOutletName.isValid () && mAttribute_mBindingName.isValid () && mAttribute_mBindingOptionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bindingList_2D_element::drop (void) {
  mAttribute_mSelectorName.drop () ;
  mAttribute_mObservableProperty.drop () ;
  mAttribute_mOutletName.drop () ;
  mAttribute_mBindingName.drop () ;
  mAttribute_mBindingOptionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bindingList_2D_element::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @bindingList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSelectorName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mObservableProperty.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingOptionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_bindingList_2D_element::reader_mSelectorName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelectorName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractObservablePropertyAST GALGAS_bindingList_2D_element::reader_mObservableProperty (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservableProperty ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_bindingList_2D_element::reader_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_bindingList_2D_element::reader_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList GALGAS_bindingList_2D_element::reader_mBindingOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingOptionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @bindingList-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bindingList_2D_element ("bindingList-element",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bindingList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bindingList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bindingList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingList_2D_element GALGAS_bindingList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_bindingList_2D_element result ;
  const GALGAS_bindingList_2D_element * p = (const GALGAS_bindingList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bindingList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeList_2D_element::GALGAS_attributeList_2D_element (void) :
mAttribute_mAttributeTypeName (),
mAttribute_mAttributeName (),
mAttribute_mDefaultValue (),
mAttribute_mNeedsValidation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeList_2D_element::~ GALGAS_attributeList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeList_2D_element::GALGAS_attributeList_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_lstring & inOperand1,
                                                                  const GALGAS_abstractDefaultValue & inOperand2,
                                                                  const GALGAS_bool & inOperand3) :
mAttribute_mAttributeTypeName (inOperand0),
mAttribute_mAttributeName (inOperand1),
mAttribute_mDefaultValue (inOperand2),
mAttribute_mNeedsValidation (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeList_2D_element GALGAS_attributeList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_abstractDefaultValue & inOperand2,
                                                                                  const GALGAS_bool & inOperand3 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_attributeList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_attributeList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_attributeList_2D_element::objectCompare (const GALGAS_attributeList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeTypeName.objectCompare (inOperand.mAttribute_mAttributeTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeName.objectCompare (inOperand.mAttribute_mAttributeName) ;
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

bool GALGAS_attributeList_2D_element::isValid (void) const {
  return mAttribute_mAttributeTypeName.isValid () && mAttribute_mAttributeName.isValid () && mAttribute_mDefaultValue.isValid () && mAttribute_mNeedsValidation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeList_2D_element::drop (void) {
  mAttribute_mAttributeTypeName.drop () ;
  mAttribute_mAttributeName.drop () ;
  mAttribute_mDefaultValue.drop () ;
  mAttribute_mNeedsValidation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_attributeList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @attributeList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mAttributeTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAttributeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDefaultValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNeedsValidation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_attributeList_2D_element::reader_mAttributeTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_attributeList_2D_element::reader_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue GALGAS_attributeList_2D_element::reader_mDefaultValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefaultValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_attributeList_2D_element::reader_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNeedsValidation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @attributeList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_attributeList_2D_element ("attributeList-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_attributeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_attributeList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_attributeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_attributeList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_attributeList_2D_element GALGAS_attributeList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_attributeList_2D_element result ;
  const GALGAS_attributeList_2D_element * p = (const GALGAS_attributeList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_attributeList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("attributeList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_relationshipList_2D_element::GALGAS_relationshipList_2D_element (void) :
mAttribute_mIsToMany (),
mAttribute_mDestinationEntityName (),
mAttribute_mRelationshipName (),
mAttribute_mInverseRelationshipName (),
mAttribute_mInverseRelationIsToMany () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_relationshipList_2D_element::~ GALGAS_relationshipList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_relationshipList_2D_element::GALGAS_relationshipList_2D_element (const GALGAS_bool & inOperand0,
                                                                        const GALGAS_lstring & inOperand1,
                                                                        const GALGAS_lstring & inOperand2,
                                                                        const GALGAS_lstring & inOperand3,
                                                                        const GALGAS_bool & inOperand4) :
mAttribute_mIsToMany (inOperand0),
mAttribute_mDestinationEntityName (inOperand1),
mAttribute_mRelationshipName (inOperand2),
mAttribute_mInverseRelationshipName (inOperand3),
mAttribute_mInverseRelationIsToMany (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_relationshipList_2D_element GALGAS_relationshipList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_relationshipList_2D_element (GALGAS_bool::constructor_default (HERE),
                                             GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_lstring::constructor_default (HERE),
                                             GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_relationshipList_2D_element GALGAS_relationshipList_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_lstring & inOperand2,
                                                                                        const GALGAS_lstring & inOperand3,
                                                                                        const GALGAS_bool & inOperand4 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_relationshipList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_relationshipList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_relationshipList_2D_element::objectCompare (const GALGAS_relationshipList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mIsToMany.objectCompare (inOperand.mAttribute_mIsToMany) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDestinationEntityName.objectCompare (inOperand.mAttribute_mDestinationEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRelationshipName.objectCompare (inOperand.mAttribute_mRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInverseRelationshipName.objectCompare (inOperand.mAttribute_mInverseRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInverseRelationIsToMany.objectCompare (inOperand.mAttribute_mInverseRelationIsToMany) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_relationshipList_2D_element::isValid (void) const {
  return mAttribute_mIsToMany.isValid () && mAttribute_mDestinationEntityName.isValid () && mAttribute_mRelationshipName.isValid () && mAttribute_mInverseRelationshipName.isValid () && mAttribute_mInverseRelationIsToMany.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_relationshipList_2D_element::drop (void) {
  mAttribute_mIsToMany.drop () ;
  mAttribute_mDestinationEntityName.drop () ;
  mAttribute_mRelationshipName.drop () ;
  mAttribute_mInverseRelationshipName.drop () ;
  mAttribute_mInverseRelationIsToMany.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_relationshipList_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @relationshipList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mIsToMany.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDestinationEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInverseRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInverseRelationIsToMany.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_relationshipList_2D_element::reader_mIsToMany (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsToMany ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_relationshipList_2D_element::reader_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDestinationEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_relationshipList_2D_element::reader_mRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_relationshipList_2D_element::reader_mInverseRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInverseRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_relationshipList_2D_element::reader_mInverseRelationIsToMany (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInverseRelationIsToMany ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @relationshipList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_relationshipList_2D_element ("relationshipList-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_relationshipList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_relationshipList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_relationshipList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_relationshipList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_relationshipList_2D_element GALGAS_relationshipList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_relationshipList_2D_element result ;
  const GALGAS_relationshipList_2D_element * p = (const GALGAS_relationshipList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_relationshipList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("relationshipList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientList_2D_element::GALGAS_transientList_2D_element (void) :
mAttribute_mTransientTypeName (),
mAttribute_mTransientName (),
mAttribute_mDependencyList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientList_2D_element::~ GALGAS_transientList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientList_2D_element::GALGAS_transientList_2D_element (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_lstring & inOperand1,
                                                                  const GALGAS_dependanceList & inOperand2) :
mAttribute_mTransientTypeName (inOperand0),
mAttribute_mTransientName (inOperand1),
mAttribute_mDependencyList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientList_2D_element GALGAS_transientList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_transientList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_lstring::constructor_default (HERE),
                                          GALGAS_dependanceList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientList_2D_element GALGAS_transientList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_dependanceList & inOperand2 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_transientList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_transientList_2D_element::objectCompare (const GALGAS_transientList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTransientTypeName.objectCompare (inOperand.mAttribute_mTransientTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransientName.objectCompare (inOperand.mAttribute_mTransientName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDependencyList.objectCompare (inOperand.mAttribute_mDependencyList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_transientList_2D_element::isValid (void) const {
  return mAttribute_mTransientTypeName.isValid () && mAttribute_mTransientName.isValid () && mAttribute_mDependencyList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientList_2D_element::drop (void) {
  mAttribute_mTransientTypeName.drop () ;
  mAttribute_mTransientName.drop () ;
  mAttribute_mDependencyList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @transientList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTransientTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransientName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDependencyList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_transientList_2D_element::reader_mTransientTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_transientList_2D_element::reader_mTransientName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_dependanceList GALGAS_transientList_2D_element::reader_mDependencyList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDependencyList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @transientList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientList_2D_element ("transientList-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_transientList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_transientList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientList_2D_element GALGAS_transientList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_transientList_2D_element result ;
  const GALGAS_transientList_2D_element * p = (const GALGAS_transientList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classArrayList_2D_element::GALGAS_classArrayList_2D_element (void) :
mAttribute_mElementClassName (),
mAttribute_mArrayName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classArrayList_2D_element::~ GALGAS_classArrayList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classArrayList_2D_element::GALGAS_classArrayList_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_lstring & inOperand1) :
mAttribute_mElementClassName (inOperand0),
mAttribute_mArrayName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classArrayList_2D_element GALGAS_classArrayList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_classArrayList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classArrayList_2D_element GALGAS_classArrayList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classArrayList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_classArrayList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_classArrayList_2D_element::objectCompare (const GALGAS_classArrayList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mElementClassName.objectCompare (inOperand.mAttribute_mElementClassName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArrayName.objectCompare (inOperand.mAttribute_mArrayName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_classArrayList_2D_element::isValid (void) const {
  return mAttribute_mElementClassName.isValid () && mAttribute_mArrayName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classArrayList_2D_element::drop (void) {
  mAttribute_mElementClassName.drop () ;
  mAttribute_mArrayName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classArrayList_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @classArrayList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mElementClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArrayName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_classArrayList_2D_element::reader_mElementClassName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElementClassName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_classArrayList_2D_element::reader_mArrayName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArrayName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @classArrayList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classArrayList_2D_element ("classArrayList-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_classArrayList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classArrayList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_classArrayList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classArrayList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classArrayList_2D_element GALGAS_classArrayList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_classArrayList_2D_element result ;
  const GALGAS_classArrayList_2D_element * p = (const GALGAS_classArrayList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classArrayList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classArrayList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST_2D_element::GALGAS_arrayControllerBoundColumnListAST_2D_element (void) :
mAttribute_mColumnName (),
mAttribute_mColumnOutletTypeName (),
mAttribute_mObservablePropertyName (),
mAttribute_mBindingOptionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST_2D_element::~ GALGAS_arrayControllerBoundColumnListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST_2D_element::GALGAS_arrayControllerBoundColumnListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                          const GALGAS_lstring & inOperand2,
                                                                                                          const GALGAS_bindingOptionList & inOperand3) :
mAttribute_mColumnName (inOperand0),
mAttribute_mColumnOutletTypeName (inOperand1),
mAttribute_mObservablePropertyName (inOperand2),
mAttribute_mBindingOptionList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST_2D_element GALGAS_arrayControllerBoundColumnListAST_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_arrayControllerBoundColumnListAST_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_lstring::constructor_default (HERE),
                                                              GALGAS_bindingOptionList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST_2D_element GALGAS_arrayControllerBoundColumnListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                                          const GALGAS_lstring & inOperand2,
                                                                                                                          const GALGAS_bindingOptionList & inOperand3 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_arrayControllerBoundColumnListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_arrayControllerBoundColumnListAST_2D_element::objectCompare (const GALGAS_arrayControllerBoundColumnListAST_2D_element & inOperand) const {
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
    result = mAttribute_mBindingOptionList.objectCompare (inOperand.mAttribute_mBindingOptionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_arrayControllerBoundColumnListAST_2D_element::isValid (void) const {
  return mAttribute_mColumnName.isValid () && mAttribute_mColumnOutletTypeName.isValid () && mAttribute_mObservablePropertyName.isValid () && mAttribute_mBindingOptionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListAST_2D_element::drop (void) {
  mAttribute_mColumnName.drop () ;
  mAttribute_mColumnOutletTypeName.drop () ;
  mAttribute_mObservablePropertyName.drop () ;
  mAttribute_mBindingOptionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListAST_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @arrayControllerBoundColumnListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mColumnName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mColumnOutletTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mObservablePropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingOptionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerBoundColumnListAST_2D_element::reader_mColumnName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mColumnName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerBoundColumnListAST_2D_element::reader_mColumnOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mColumnOutletTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerBoundColumnListAST_2D_element::reader_mObservablePropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservablePropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList GALGAS_arrayControllerBoundColumnListAST_2D_element::reader_mBindingOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingOptionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @arrayControllerBoundColumnListAST-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerBoundColumnListAST_2D_element ("arrayControllerBoundColumnListAST-element",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerBoundColumnListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBoundColumnListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerBoundColumnListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerBoundColumnListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST_2D_element GALGAS_arrayControllerBoundColumnListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerBoundColumnListAST_2D_element result ;
  const GALGAS_arrayControllerBoundColumnListAST_2D_element * p = (const GALGAS_arrayControllerBoundColumnListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerBoundColumnListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBoundColumnListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerDeclarationListAST_2D_element::GALGAS_arrayControllerDeclarationListAST_2D_element (void) :
mAttribute_mControllerName (),
mAttribute_mBoundModel (),
mAttribute_mTableViewOutletName (),
mAttribute_mArrayControllerBoundColumnListAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerDeclarationListAST_2D_element::~ GALGAS_arrayControllerDeclarationListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerDeclarationListAST_2D_element::GALGAS_arrayControllerDeclarationListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_abstractObservablePropertyAST & inOperand1,
                                                                                                          const GALGAS_lstring & inOperand2,
                                                                                                          const GALGAS_arrayControllerBoundColumnListAST & inOperand3) :
mAttribute_mControllerName (inOperand0),
mAttribute_mBoundModel (inOperand1),
mAttribute_mTableViewOutletName (inOperand2),
mAttribute_mArrayControllerBoundColumnListAST (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerDeclarationListAST_2D_element GALGAS_arrayControllerDeclarationListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                          const GALGAS_abstractObservablePropertyAST & inOperand1,
                                                                                                                          const GALGAS_lstring & inOperand2,
                                                                                                                          const GALGAS_arrayControllerBoundColumnListAST & inOperand3 
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerDeclarationListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_arrayControllerDeclarationListAST_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_arrayControllerDeclarationListAST_2D_element::objectCompare (const GALGAS_arrayControllerDeclarationListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mControllerName.objectCompare (inOperand.mAttribute_mControllerName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBoundModel.objectCompare (inOperand.mAttribute_mBoundModel) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTableViewOutletName.objectCompare (inOperand.mAttribute_mTableViewOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArrayControllerBoundColumnListAST.objectCompare (inOperand.mAttribute_mArrayControllerBoundColumnListAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_arrayControllerDeclarationListAST_2D_element::isValid (void) const {
  return mAttribute_mControllerName.isValid () && mAttribute_mBoundModel.isValid () && mAttribute_mTableViewOutletName.isValid () && mAttribute_mArrayControllerBoundColumnListAST.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerDeclarationListAST_2D_element::drop (void) {
  mAttribute_mControllerName.drop () ;
  mAttribute_mBoundModel.drop () ;
  mAttribute_mTableViewOutletName.drop () ;
  mAttribute_mArrayControllerBoundColumnListAST.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerDeclarationListAST_2D_element::description (C_String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString << "<struct @arrayControllerDeclarationListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mControllerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBoundModel.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTableViewOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArrayControllerBoundColumnListAST.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerDeclarationListAST_2D_element::reader_mControllerName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mControllerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractObservablePropertyAST GALGAS_arrayControllerDeclarationListAST_2D_element::reader_mBoundModel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBoundModel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerDeclarationListAST_2D_element::reader_mTableViewOutletName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTableViewOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerDeclarationListAST_2D_element::reader_mArrayControllerBoundColumnListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArrayControllerBoundColumnListAST ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @arrayControllerDeclarationListAST-element type                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerDeclarationListAST_2D_element ("arrayControllerDeclarationListAST-element",
                                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerDeclarationListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerDeclarationListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerDeclarationListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerDeclarationListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerDeclarationListAST_2D_element GALGAS_arrayControllerDeclarationListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                        C_Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerDeclarationListAST_2D_element result ;
  const GALGAS_arrayControllerDeclarationListAST_2D_element * p = (const GALGAS_arrayControllerDeclarationListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerDeclarationListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerDeclarationListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_cursorList_2D_element::GALGAS_cursorList_2D_element (void) :
mAttribute_mCursorName (),
mAttribute_mHotSpotX (),
mAttribute_mHotSpotY () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_cursorList_2D_element::~ GALGAS_cursorList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_cursorList_2D_element::GALGAS_cursorList_2D_element (const GALGAS_lstring & inOperand0,
                                                            const GALGAS_ldouble & inOperand1,
                                                            const GALGAS_ldouble & inOperand2) :
mAttribute_mCursorName (inOperand0),
mAttribute_mHotSpotX (inOperand1),
mAttribute_mHotSpotY (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_cursorList_2D_element GALGAS_cursorList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_cursorList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                       GALGAS_ldouble::constructor_default (HERE),
                                       GALGAS_ldouble::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_cursorList_2D_element GALGAS_cursorList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_ldouble & inOperand1,
                                                                            const GALGAS_ldouble & inOperand2 
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_cursorList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_cursorList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_cursorList_2D_element::objectCompare (const GALGAS_cursorList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mCursorName.objectCompare (inOperand.mAttribute_mCursorName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHotSpotX.objectCompare (inOperand.mAttribute_mHotSpotX) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHotSpotY.objectCompare (inOperand.mAttribute_mHotSpotY) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_cursorList_2D_element::isValid (void) const {
  return mAttribute_mCursorName.isValid () && mAttribute_mHotSpotX.isValid () && mAttribute_mHotSpotY.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_cursorList_2D_element::drop (void) {
  mAttribute_mCursorName.drop () ;
  mAttribute_mHotSpotX.drop () ;
  mAttribute_mHotSpotY.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_cursorList_2D_element::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "<struct @cursorList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mCursorName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHotSpotX.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHotSpotY.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_cursorList_2D_element::reader_mCursorName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCursorName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ldouble GALGAS_cursorList_2D_element::reader_mHotSpotX (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHotSpotX ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_ldouble GALGAS_cursorList_2D_element::reader_mHotSpotY (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHotSpotY ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @cursorList-element type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_cursorList_2D_element ("cursorList-element",
                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_cursorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_cursorList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_cursorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_cursorList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_cursorList_2D_element GALGAS_cursorList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_cursorList_2D_element result ;
  const GALGAS_cursorList_2D_element * p = (const GALGAS_cursorList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_cursorList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("cursorList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structFieldASTList_2D_element::GALGAS_structFieldASTList_2D_element (void) :
mAttribute_mFieldTypeName (),
mAttribute_mFieldName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structFieldASTList_2D_element::~ GALGAS_structFieldASTList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structFieldASTList_2D_element::GALGAS_structFieldASTList_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_lstring & inOperand1) :
mAttribute_mFieldTypeName (inOperand0),
mAttribute_mFieldName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structFieldASTList_2D_element GALGAS_structFieldASTList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_structFieldASTList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structFieldASTList_2D_element GALGAS_structFieldASTList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_structFieldASTList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_structFieldASTList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_structFieldASTList_2D_element::objectCompare (const GALGAS_structFieldASTList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFieldTypeName.objectCompare (inOperand.mAttribute_mFieldTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFieldName.objectCompare (inOperand.mAttribute_mFieldName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_structFieldASTList_2D_element::isValid (void) const {
  return mAttribute_mFieldTypeName.isValid () && mAttribute_mFieldName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structFieldASTList_2D_element::drop (void) {
  mAttribute_mFieldTypeName.drop () ;
  mAttribute_mFieldName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structFieldASTList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @structFieldASTList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFieldTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFieldName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structFieldASTList_2D_element::reader_mFieldTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_structFieldASTList_2D_element::reader_mFieldName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFieldName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @structFieldASTList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_structFieldASTList_2D_element ("structFieldASTList-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_structFieldASTList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_structFieldASTList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_structFieldASTList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_structFieldASTList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structFieldASTList_2D_element GALGAS_structFieldASTList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_structFieldASTList_2D_element result ;
  const GALGAS_structFieldASTList_2D_element * p = (const GALGAS_structFieldASTList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_structFieldASTList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("structFieldASTList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeProxyList_2D_element::GALGAS_unifiedTypeProxyList_2D_element (void) :
mAttribute_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeProxyList_2D_element::~ GALGAS_unifiedTypeProxyList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeProxyList_2D_element::GALGAS_unifiedTypeProxyList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0) :
mAttribute_mType (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeProxyList_2D_element GALGAS_unifiedTypeProxyList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_unifiedTypeProxyList_2D_element (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeProxyList_2D_element GALGAS_unifiedTypeProxyList_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0 
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeProxyList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_unifiedTypeProxyList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_unifiedTypeProxyList_2D_element::objectCompare (const GALGAS_unifiedTypeProxyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_unifiedTypeProxyList_2D_element::isValid (void) const {
  return mAttribute_mType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeProxyList_2D_element::drop (void) {
  mAttribute_mType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_unifiedTypeProxyList_2D_element::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "<struct @unifiedTypeProxyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_unifiedTypeProxyList_2D_element::reader_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @unifiedTypeProxyList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_unifiedTypeProxyList_2D_element ("unifiedTypeProxyList-element",
                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_unifiedTypeProxyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_unifiedTypeProxyList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_unifiedTypeProxyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_unifiedTypeProxyList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeProxyList_2D_element GALGAS_unifiedTypeProxyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_unifiedTypeProxyList_2D_element result ;
  const GALGAS_unifiedTypeProxyList_2D_element * p = (const GALGAS_unifiedTypeProxyList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_unifiedTypeProxyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("unifiedTypeProxyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerMap_2D_element::GALGAS_arrayControllerMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mBoundModel (),
mAttribute_mTableViewOutletName (),
mAttribute_mArrayControllerBoundColumnListAST (),
mAttribute_mActionMap (),
mAttribute_mObservablePropertyMap (),
mAttribute_mPropertySignature (),
mAttribute_mArrayControllerTypeName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerMap_2D_element::~ GALGAS_arrayControllerMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerMap_2D_element::GALGAS_arrayControllerMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_abstractObservablePropertyAST & inOperand1,
                                                                            const GALGAS_lstring & inOperand2,
                                                                            const GALGAS_arrayControllerBoundColumnListAST & inOperand3,
                                                                            const GALGAS_actionMap & inOperand4,
                                                                            const GALGAS_decoratedObservablePropertyMap & inOperand5,
                                                                            const GALGAS_lstring & inOperand6,
                                                                            const GALGAS_string & inOperand7) :
mAttribute_lkey (inOperand0),
mAttribute_mBoundModel (inOperand1),
mAttribute_mTableViewOutletName (inOperand2),
mAttribute_mArrayControllerBoundColumnListAST (inOperand3),
mAttribute_mActionMap (inOperand4),
mAttribute_mObservablePropertyMap (inOperand5),
mAttribute_mPropertySignature (inOperand6),
mAttribute_mArrayControllerTypeName (inOperand7) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerMap_2D_element GALGAS_arrayControllerMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_abstractObservablePropertyAST & inOperand1,
                                                                                            const GALGAS_lstring & inOperand2,
                                                                                            const GALGAS_arrayControllerBoundColumnListAST & inOperand3,
                                                                                            const GALGAS_actionMap & inOperand4,
                                                                                            const GALGAS_decoratedObservablePropertyMap & inOperand5,
                                                                                            const GALGAS_lstring & inOperand6,
                                                                                            const GALGAS_string & inOperand7 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_arrayControllerMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_arrayControllerMap_2D_element::objectCompare (const GALGAS_arrayControllerMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBoundModel.objectCompare (inOperand.mAttribute_mBoundModel) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTableViewOutletName.objectCompare (inOperand.mAttribute_mTableViewOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArrayControllerBoundColumnListAST.objectCompare (inOperand.mAttribute_mArrayControllerBoundColumnListAST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mActionMap.objectCompare (inOperand.mAttribute_mActionMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mObservablePropertyMap.objectCompare (inOperand.mAttribute_mObservablePropertyMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPropertySignature.objectCompare (inOperand.mAttribute_mPropertySignature) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArrayControllerTypeName.objectCompare (inOperand.mAttribute_mArrayControllerTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_arrayControllerMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mBoundModel.isValid () && mAttribute_mTableViewOutletName.isValid () && mAttribute_mArrayControllerBoundColumnListAST.isValid () && mAttribute_mActionMap.isValid () && mAttribute_mObservablePropertyMap.isValid () && mAttribute_mPropertySignature.isValid () && mAttribute_mArrayControllerTypeName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mBoundModel.drop () ;
  mAttribute_mTableViewOutletName.drop () ;
  mAttribute_mArrayControllerBoundColumnListAST.drop () ;
  mAttribute_mActionMap.drop () ;
  mAttribute_mObservablePropertyMap.drop () ;
  mAttribute_mPropertySignature.drop () ;
  mAttribute_mArrayControllerTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerMap_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @arrayControllerMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBoundModel.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTableViewOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArrayControllerBoundColumnListAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mActionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mObservablePropertyMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPropertySignature.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArrayControllerTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractObservablePropertyAST GALGAS_arrayControllerMap_2D_element::reader_mBoundModel (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBoundModel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerMap_2D_element::reader_mTableViewOutletName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTableViewOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerMap_2D_element::reader_mArrayControllerBoundColumnListAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArrayControllerBoundColumnListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionMap GALGAS_arrayControllerMap_2D_element::reader_mActionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedObservablePropertyMap GALGAS_arrayControllerMap_2D_element::reader_mObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservablePropertyMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerMap_2D_element::reader_mPropertySignature (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertySignature ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerMap_2D_element::reader_mArrayControllerTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArrayControllerTypeName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @arrayControllerMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerMap_2D_element ("arrayControllerMap-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerMap_2D_element GALGAS_arrayControllerMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerMap_2D_element result ;
  const GALGAS_arrayControllerMap_2D_element * p = (const GALGAS_arrayControllerMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::~ GALGAS_enumConstantMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element::GALGAS_enumConstantMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumConstantMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_enumConstantMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_enumConstantMap_2D_element::objectCompare (const GALGAS_enumConstantMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_enumConstantMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_enumConstantMap_2D_element::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "<struct @enumConstantMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumConstantMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @enumConstantMap-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumConstantMap_2D_element ("enumConstantMap-element",
                                                   NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumConstantMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumConstantMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumConstantMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumConstantMap_2D_element GALGAS_enumConstantMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumConstantMap_2D_element result ;
  const GALGAS_enumConstantMap_2D_element * p = (const GALGAS_enumConstantMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumConstantMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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
mAttribute_mEnabledBindingDescriptor (),
mAttribute_mRegularBindingList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap_2D_element::~ GALGAS_decoratedOutletMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap_2D_element::GALGAS_decoratedOutletMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_lstring & inOperand1,
                                                                            const GALGAS_runActionDescriptor & inOperand2,
                                                                            const GALGAS_enabledBindingDescriptor & inOperand3,
                                                                            const GALGAS_regularBindingList & inOperand4) :
mAttribute_lkey (inOperand0),
mAttribute_mOutletTypeName (inOperand1),
mAttribute_mRunActionDescriptor (inOperand2),
mAttribute_mEnabledBindingDescriptor (inOperand3),
mAttribute_mRegularBindingList (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap_2D_element GALGAS_decoratedOutletMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_runActionDescriptor & inOperand2,
                                                                                            const GALGAS_enabledBindingDescriptor & inOperand3,
                                                                                            const GALGAS_regularBindingList & inOperand4 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedOutletMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_decoratedOutletMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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
  if (result == kOperandEqual) {
    result = mAttribute_mRegularBindingList.objectCompare (inOperand.mAttribute_mRegularBindingList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_decoratedOutletMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mOutletTypeName.isValid () && mAttribute_mRunActionDescriptor.isValid () && mAttribute_mEnabledBindingDescriptor.isValid () && mAttribute_mRegularBindingList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedOutletMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mOutletTypeName.drop () ;
  mAttribute_mRunActionDescriptor.drop () ;
  mAttribute_mEnabledBindingDescriptor.drop () ;
  mAttribute_mRegularBindingList.drop () ;
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
    ioString << ", " ;
    mAttribute_mRegularBindingList.description (ioString, inIndentation+1) ;
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

GALGAS_regularBindingList GALGAS_decoratedOutletMap_2D_element::reader_mRegularBindingList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegularBindingList ;
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

GALGAS_outletClassDeclarationList_2D_element::GALGAS_outletClassDeclarationList_2D_element (void) :
mAttribute_mUserDefined (),
mAttribute_mOutletClassName (),
mAttribute_mHasRunAction (),
mAttribute_mHasEnabled () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList_2D_element::~ GALGAS_outletClassDeclarationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList_2D_element::GALGAS_outletClassDeclarationList_2D_element (const GALGAS_bool & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_bool & inOperand2,
                                                                                            const GALGAS_bool & inOperand3) :
mAttribute_mUserDefined (inOperand0),
mAttribute_mOutletClassName (inOperand1),
mAttribute_mHasRunAction (inOperand2),
mAttribute_mHasEnabled (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList_2D_element GALGAS_outletClassDeclarationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassDeclarationList_2D_element (GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList_2D_element GALGAS_outletClassDeclarationList_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1,
                                                                                                            const GALGAS_bool & inOperand2,
                                                                                                            const GALGAS_bool & inOperand3 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_outletClassDeclarationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletClassDeclarationList_2D_element::objectCompare (const GALGAS_outletClassDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mUserDefined.objectCompare (inOperand.mAttribute_mUserDefined) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletClassName.objectCompare (inOperand.mAttribute_mOutletClassName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasRunAction.objectCompare (inOperand.mAttribute_mHasRunAction) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHasEnabled.objectCompare (inOperand.mAttribute_mHasEnabled) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletClassDeclarationList_2D_element::isValid (void) const {
  return mAttribute_mUserDefined.isValid () && mAttribute_mOutletClassName.isValid () && mAttribute_mHasRunAction.isValid () && mAttribute_mHasEnabled.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassDeclarationList_2D_element::drop (void) {
  mAttribute_mUserDefined.drop () ;
  mAttribute_mOutletClassName.drop () ;
  mAttribute_mHasRunAction.drop () ;
  mAttribute_mHasEnabled.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassDeclarationList_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @outletClassDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mUserDefined.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasRunAction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHasEnabled.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassDeclarationList_2D_element::reader_mUserDefined (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUserDefined ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletClassDeclarationList_2D_element::reader_mOutletClassName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletClassName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassDeclarationList_2D_element::reader_mHasRunAction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasRunAction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassDeclarationList_2D_element::reader_mHasEnabled (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasEnabled ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @outletClassDeclarationList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassDeclarationList_2D_element ("outletClassDeclarationList-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletClassDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassDeclarationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletClassDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList_2D_element GALGAS_outletClassDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationList_2D_element result ;
  const GALGAS_outletClassDeclarationList_2D_element * p = (const GALGAS_outletClassDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingList_2D_element::GALGAS_regularBindingList_2D_element (void) :
mAttribute_mBindingName (),
mAttribute_mObservablePropertyList (),
mAttribute_mBindingOptionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingList_2D_element::~ GALGAS_regularBindingList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingList_2D_element::GALGAS_regularBindingList_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_observablePropertyList & inOperand1,
                                                                            const GALGAS_bindingOptionList & inOperand2) :
mAttribute_mBindingName (inOperand0),
mAttribute_mObservablePropertyList (inOperand1),
mAttribute_mBindingOptionList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingList_2D_element GALGAS_regularBindingList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_regularBindingList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_observablePropertyList::constructor_emptyList (HERE),
                                               GALGAS_bindingOptionList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingList_2D_element GALGAS_regularBindingList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_observablePropertyList & inOperand1,
                                                                                            const GALGAS_bindingOptionList & inOperand2 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_regularBindingList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_regularBindingList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_regularBindingList_2D_element::objectCompare (const GALGAS_regularBindingList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mBindingName.objectCompare (inOperand.mAttribute_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mObservablePropertyList.objectCompare (inOperand.mAttribute_mObservablePropertyList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingOptionList.objectCompare (inOperand.mAttribute_mBindingOptionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_regularBindingList_2D_element::isValid (void) const {
  return mAttribute_mBindingName.isValid () && mAttribute_mObservablePropertyList.isValid () && mAttribute_mBindingOptionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_regularBindingList_2D_element::drop (void) {
  mAttribute_mBindingName.drop () ;
  mAttribute_mObservablePropertyList.drop () ;
  mAttribute_mBindingOptionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_regularBindingList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @regularBindingList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mObservablePropertyList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingOptionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_regularBindingList_2D_element::reader_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyList GALGAS_regularBindingList_2D_element::reader_mObservablePropertyList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservablePropertyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList GALGAS_regularBindingList_2D_element::reader_mBindingOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingOptionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @regularBindingList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_regularBindingList_2D_element ("regularBindingList-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_regularBindingList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_regularBindingList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularBindingList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingList_2D_element GALGAS_regularBindingList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_regularBindingList_2D_element result ;
  const GALGAS_regularBindingList_2D_element * p = (const GALGAS_regularBindingList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_regularBindingList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularBindingList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList_2D_element::GALGAS_outletDeclarationList_2D_element (void) :
mAttribute_mOutletType (),
mAttribute_mOutletName (),
mAttribute_mRunDescriptor (),
mAttribute_mEnabledBindingDescriptor (),
mAttribute_mRegularBindingList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList_2D_element::~ GALGAS_outletDeclarationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList_2D_element::GALGAS_outletDeclarationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_runActionDescriptor & inOperand2,
                                                                                  const GALGAS_enabledBindingDescriptor & inOperand3,
                                                                                  const GALGAS_regularBindingList & inOperand4) :
mAttribute_mOutletType (inOperand0),
mAttribute_mOutletName (inOperand1),
mAttribute_mRunDescriptor (inOperand2),
mAttribute_mEnabledBindingDescriptor (inOperand3),
mAttribute_mRegularBindingList (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList_2D_element GALGAS_outletDeclarationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_runActionDescriptor & inOperand2,
                                                                                                  const GALGAS_enabledBindingDescriptor & inOperand3,
                                                                                                  const GALGAS_regularBindingList & inOperand4 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_outletDeclarationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletDeclarationList_2D_element::objectCompare (const GALGAS_outletDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOutletType.objectCompare (inOperand.mAttribute_mOutletType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletName.objectCompare (inOperand.mAttribute_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRunDescriptor.objectCompare (inOperand.mAttribute_mRunDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEnabledBindingDescriptor.objectCompare (inOperand.mAttribute_mEnabledBindingDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegularBindingList.objectCompare (inOperand.mAttribute_mRegularBindingList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletDeclarationList_2D_element::isValid (void) const {
  return mAttribute_mOutletType.isValid () && mAttribute_mOutletName.isValid () && mAttribute_mRunDescriptor.isValid () && mAttribute_mEnabledBindingDescriptor.isValid () && mAttribute_mRegularBindingList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletDeclarationList_2D_element::drop (void) {
  mAttribute_mOutletType.drop () ;
  mAttribute_mOutletName.drop () ;
  mAttribute_mRunDescriptor.drop () ;
  mAttribute_mEnabledBindingDescriptor.drop () ;
  mAttribute_mRegularBindingList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletDeclarationList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @outletDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOutletType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRunDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEnabledBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegularBindingList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletDeclarationList_2D_element::reader_mOutletType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletDeclarationList_2D_element::reader_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_runActionDescriptor GALGAS_outletDeclarationList_2D_element::reader_mRunDescriptor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRunDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enabledBindingDescriptor GALGAS_outletDeclarationList_2D_element::reader_mEnabledBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnabledBindingDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingList GALGAS_outletDeclarationList_2D_element::reader_mRegularBindingList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegularBindingList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @outletDeclarationList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletDeclarationList_2D_element ("outletDeclarationList-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletDeclarationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletDeclarationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletDeclarationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletDeclarationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList_2D_element GALGAS_outletDeclarationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_outletDeclarationList_2D_element result ;
  const GALGAS_outletDeclarationList_2D_element * p = (const GALGAS_outletDeclarationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletDeclarationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletDeclarationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingModelList_2D_element::GALGAS_outletBindingModelList_2D_element (void) :
mAttribute_mModelTypeProxy (),
mAttribute_mModelIsTransient (),
mAttribute_mErrorLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingModelList_2D_element::~ GALGAS_outletBindingModelList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingModelList_2D_element::GALGAS_outletBindingModelList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                    const GALGAS_bool & inOperand1,
                                                                                    const GALGAS_location & inOperand2) :
mAttribute_mModelTypeProxy (inOperand0),
mAttribute_mModelIsTransient (inOperand1),
mAttribute_mErrorLocation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingModelList_2D_element GALGAS_outletBindingModelList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletBindingModelList_2D_element (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                   GALGAS_bool::constructor_default (HERE),
                                                   GALGAS_location::constructor_nowhere (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingModelList_2D_element GALGAS_outletBindingModelList_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                    const GALGAS_bool & inOperand1,
                                                                                                    const GALGAS_location & inOperand2 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingModelList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_outletBindingModelList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletBindingModelList_2D_element::objectCompare (const GALGAS_outletBindingModelList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mModelTypeProxy.objectCompare (inOperand.mAttribute_mModelTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelIsTransient.objectCompare (inOperand.mAttribute_mModelIsTransient) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mErrorLocation.objectCompare (inOperand.mAttribute_mErrorLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletBindingModelList_2D_element::isValid (void) const {
  return mAttribute_mModelTypeProxy.isValid () && mAttribute_mModelIsTransient.isValid () && mAttribute_mErrorLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingModelList_2D_element::drop (void) {
  mAttribute_mModelTypeProxy.drop () ;
  mAttribute_mModelIsTransient.drop () ;
  mAttribute_mErrorLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingModelList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @outletBindingModelList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mModelTypeProxy.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelIsTransient.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mErrorLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_outletBindingModelList_2D_element::reader_mModelTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletBindingModelList_2D_element::reader_mModelIsTransient (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelIsTransient ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_outletBindingModelList_2D_element::reader_mErrorLocation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mErrorLocation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @outletBindingModelList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingModelList_2D_element ("outletBindingModelList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletBindingModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingModelList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletBindingModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingModelList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionList_2D_element::GALGAS_controllerBindingOptionList_2D_element (void) :
mAttribute_mOptionName (),
mAttribute_mOptionTypeName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionList_2D_element::~ GALGAS_controllerBindingOptionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionList_2D_element::GALGAS_controllerBindingOptionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_lstring & inOperand1) :
mAttribute_mOptionName (inOperand0),
mAttribute_mOptionTypeName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionList_2D_element GALGAS_controllerBindingOptionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_controllerBindingOptionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionList_2D_element GALGAS_controllerBindingOptionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_controllerBindingOptionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_controllerBindingOptionList_2D_element::objectCompare (const GALGAS_controllerBindingOptionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOptionName.objectCompare (inOperand.mAttribute_mOptionName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionTypeName.objectCompare (inOperand.mAttribute_mOptionTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controllerBindingOptionList_2D_element::isValid (void) const {
  return mAttribute_mOptionName.isValid () && mAttribute_mOptionTypeName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controllerBindingOptionList_2D_element::drop (void) {
  mAttribute_mOptionName.drop () ;
  mAttribute_mOptionTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controllerBindingOptionList_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @controllerBindingOptionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOptionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controllerBindingOptionList_2D_element::reader_mOptionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controllerBindingOptionList_2D_element::reader_mOptionTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionTypeName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @controllerBindingOptionList-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_controllerBindingOptionList_2D_element ("controllerBindingOptionList-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_controllerBindingOptionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_controllerBindingOptionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_controllerBindingOptionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionList_2D_element GALGAS_controllerBindingOptionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_controllerBindingOptionList_2D_element result ;
  const GALGAS_controllerBindingOptionList_2D_element * p = (const GALGAS_controllerBindingOptionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_controllerBindingOptionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controllerBindingOptionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationModelList_2D_element::GALGAS_outletClassBindingSpecificationModelList_2D_element (void) :
mAttribute_mModelTypeName (),
mAttribute_mModelShouldBeWritableProperty () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationModelList_2D_element::~ GALGAS_outletClassBindingSpecificationModelList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationModelList_2D_element::GALGAS_outletClassBindingSpecificationModelList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                                        const GALGAS_bool & inOperand1) :
mAttribute_mModelTypeName (inOperand0),
mAttribute_mModelShouldBeWritableProperty (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationModelList_2D_element GALGAS_outletClassBindingSpecificationModelList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassBindingSpecificationModelList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                                     GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationModelList_2D_element GALGAS_outletClassBindingSpecificationModelList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                                        const GALGAS_bool & inOperand1 
                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationModelList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletClassBindingSpecificationModelList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletClassBindingSpecificationModelList_2D_element::objectCompare (const GALGAS_outletClassBindingSpecificationModelList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mModelTypeName.objectCompare (inOperand.mAttribute_mModelTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelShouldBeWritableProperty.objectCompare (inOperand.mAttribute_mModelShouldBeWritableProperty) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletClassBindingSpecificationModelList_2D_element::isValid (void) const {
  return mAttribute_mModelTypeName.isValid () && mAttribute_mModelShouldBeWritableProperty.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassBindingSpecificationModelList_2D_element::drop (void) {
  mAttribute_mModelTypeName.drop () ;
  mAttribute_mModelShouldBeWritableProperty.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassBindingSpecificationModelList_2D_element::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "<struct @outletClassBindingSpecificationModelList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mModelTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelShouldBeWritableProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletClassBindingSpecificationModelList_2D_element::reader_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassBindingSpecificationModelList_2D_element::reader_mModelShouldBeWritableProperty (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelShouldBeWritableProperty ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @outletClassBindingSpecificationModelList-element type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList_2D_element ("outletClassBindingSpecificationModelList-element",
                                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletClassBindingSpecificationModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletClassBindingSpecificationModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassBindingSpecificationModelList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationModelList_2D_element GALGAS_outletClassBindingSpecificationModelList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationModelList_2D_element result ;
  const GALGAS_outletClassBindingSpecificationModelList_2D_element * p = (const GALGAS_outletClassBindingSpecificationModelList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassBindingSpecificationModelList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassBindingSpecificationModelList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList_2D_element::GALGAS_outletClassBindingSpecificationList_2D_element (void) :
mAttribute_mIsUserDefined (),
mAttribute_mBindingName (),
mAttribute_mOutletClassBindingSpecificationModelList (),
mAttribute_mBindingOptionList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList_2D_element::~ GALGAS_outletClassBindingSpecificationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList_2D_element::GALGAS_outletClassBindingSpecificationList_2D_element (const GALGAS_bool & inOperand0,
                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                              const GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                              const GALGAS_controllerBindingOptionList & inOperand3) :
mAttribute_mIsUserDefined (inOperand0),
mAttribute_mBindingName (inOperand1),
mAttribute_mOutletClassBindingSpecificationModelList (inOperand2),
mAttribute_mBindingOptionList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList_2D_element GALGAS_outletClassBindingSpecificationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassBindingSpecificationList_2D_element (GALGAS_bool::constructor_default (HERE),
                                                                GALGAS_lstring::constructor_default (HERE),
                                                                GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (HERE),
                                                                GALGAS_controllerBindingOptionList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList_2D_element GALGAS_outletClassBindingSpecificationList_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                                                              const GALGAS_lstring & inOperand1,
                                                                                                                              const GALGAS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                                              const GALGAS_controllerBindingOptionList & inOperand3 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_outletClassBindingSpecificationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletClassBindingSpecificationList_2D_element::objectCompare (const GALGAS_outletClassBindingSpecificationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mIsUserDefined.objectCompare (inOperand.mAttribute_mIsUserDefined) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingName.objectCompare (inOperand.mAttribute_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletClassBindingSpecificationModelList.objectCompare (inOperand.mAttribute_mOutletClassBindingSpecificationModelList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingOptionList.objectCompare (inOperand.mAttribute_mBindingOptionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletClassBindingSpecificationList_2D_element::isValid (void) const {
  return mAttribute_mIsUserDefined.isValid () && mAttribute_mBindingName.isValid () && mAttribute_mOutletClassBindingSpecificationModelList.isValid () && mAttribute_mBindingOptionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassBindingSpecificationList_2D_element::drop (void) {
  mAttribute_mIsUserDefined.drop () ;
  mAttribute_mBindingName.drop () ;
  mAttribute_mOutletClassBindingSpecificationModelList.drop () ;
  mAttribute_mBindingOptionList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassBindingSpecificationList_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @outletClassBindingSpecificationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mIsUserDefined.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletClassBindingSpecificationModelList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingOptionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassBindingSpecificationList_2D_element::reader_mIsUserDefined (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsUserDefined ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletClassBindingSpecificationList_2D_element::reader_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationList_2D_element::reader_mOutletClassBindingSpecificationModelList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletClassBindingSpecificationModelList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionList GALGAS_outletClassBindingSpecificationList_2D_element::reader_mBindingOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingOptionList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @outletClassBindingSpecificationList-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletClassBindingSpecificationList_2D_element ("outletClassBindingSpecificationList-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletClassBindingSpecificationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletClassBindingSpecificationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassBindingSpecificationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList_2D_element GALGAS_outletClassBindingSpecificationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_outletClassBindingSpecificationList_2D_element result ;
  const GALGAS_outletClassBindingSpecificationList_2D_element * p = (const GALGAS_outletClassBindingSpecificationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletClassBindingSpecificationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassBindingSpecificationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationMap_2D_element::GALGAS_bindingSpecificationMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mBindingMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationMap_2D_element::~ GALGAS_bindingSpecificationMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationMap_2D_element::GALGAS_bindingSpecificationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_outletBindingSpecificationMap & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mBindingMap (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationMap_2D_element GALGAS_bindingSpecificationMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_bindingSpecificationMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_outletBindingSpecificationMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationMap_2D_element GALGAS_bindingSpecificationMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_outletBindingSpecificationMap & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bindingSpecificationMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_bindingSpecificationMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_bindingSpecificationMap_2D_element::objectCompare (const GALGAS_bindingSpecificationMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingMap.objectCompare (inOperand.mAttribute_mBindingMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_bindingSpecificationMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mBindingMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bindingSpecificationMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mBindingMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_bindingSpecificationMap_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @bindingSpecificationMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_bindingSpecificationMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationMap GALGAS_bindingSpecificationMap_2D_element::reader_mBindingMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @bindingSpecificationMap-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_bindingSpecificationMap_2D_element ("bindingSpecificationMap-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_bindingSpecificationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingSpecificationMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_bindingSpecificationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_bindingSpecificationMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationMap_2D_element GALGAS_bindingSpecificationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_bindingSpecificationMap_2D_element result ;
  const GALGAS_bindingSpecificationMap_2D_element * p = (const GALGAS_bindingSpecificationMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_bindingSpecificationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingSpecificationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList_2D_element::GALGAS_outletBindingSpecificationModelList_2D_element (void) :
mAttribute_mModelTypeProxy (),
mAttribute_mModelShouldBeWritableProperty () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList_2D_element::~ GALGAS_outletBindingSpecificationModelList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList_2D_element::GALGAS_outletBindingSpecificationModelList_2D_element (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                              const GALGAS_bool & inOperand1) :
mAttribute_mModelTypeProxy (inOperand0),
mAttribute_mModelShouldBeWritableProperty (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList_2D_element GALGAS_outletBindingSpecificationModelList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletBindingSpecificationModelList_2D_element (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (HERE),
                                                                GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList_2D_element GALGAS_outletBindingSpecificationModelList_2D_element::constructor_new (const GALGAS_unifiedTypeMap_2D_proxy & inOperand0,
                                                                                                                              const GALGAS_bool & inOperand1 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationModelList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletBindingSpecificationModelList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletBindingSpecificationModelList_2D_element::objectCompare (const GALGAS_outletBindingSpecificationModelList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mModelTypeProxy.objectCompare (inOperand.mAttribute_mModelTypeProxy) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelShouldBeWritableProperty.objectCompare (inOperand.mAttribute_mModelShouldBeWritableProperty) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletBindingSpecificationModelList_2D_element::isValid (void) const {
  return mAttribute_mModelTypeProxy.isValid () && mAttribute_mModelShouldBeWritableProperty.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingSpecificationModelList_2D_element::drop (void) {
  mAttribute_mModelTypeProxy.drop () ;
  mAttribute_mModelShouldBeWritableProperty.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingSpecificationModelList_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @outletBindingSpecificationModelList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mModelTypeProxy.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelShouldBeWritableProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_unifiedTypeMap_2D_proxy GALGAS_outletBindingSpecificationModelList_2D_element::reader_mModelTypeProxy (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelTypeProxy ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletBindingSpecificationModelList_2D_element::reader_mModelShouldBeWritableProperty (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelShouldBeWritableProperty ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @outletBindingSpecificationModelList-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2D_element ("outletBindingSpecificationModelList-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletBindingSpecificationModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletBindingSpecificationModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingSpecificationModelList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationMap_2D_element::GALGAS_outletBindingSpecificationMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mOutletBindingSpecificationModelList (),
mAttribute_mControllerBindingOptionDecoratedList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationMap_2D_element::~ GALGAS_outletBindingSpecificationMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationMap_2D_element::GALGAS_outletBindingSpecificationMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_outletBindingSpecificationModelList & inOperand1,
                                                                                                  const GALGAS_controllerBindingOptionDecoratedList & inOperand2) :
mAttribute_lkey (inOperand0),
mAttribute_mOutletBindingSpecificationModelList (inOperand1),
mAttribute_mControllerBindingOptionDecoratedList (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationMap_2D_element GALGAS_outletBindingSpecificationMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletBindingSpecificationMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_outletBindingSpecificationModelList::constructor_emptyList (HERE),
                                                          GALGAS_controllerBindingOptionDecoratedList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationMap_2D_element GALGAS_outletBindingSpecificationMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_outletBindingSpecificationModelList & inOperand1,
                                                                                                                  const GALGAS_controllerBindingOptionDecoratedList & inOperand2 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_outletBindingSpecificationMap_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletBindingSpecificationMap_2D_element::objectCompare (const GALGAS_outletBindingSpecificationMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletBindingSpecificationModelList.objectCompare (inOperand.mAttribute_mOutletBindingSpecificationModelList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mControllerBindingOptionDecoratedList.objectCompare (inOperand.mAttribute_mControllerBindingOptionDecoratedList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletBindingSpecificationMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mOutletBindingSpecificationModelList.isValid () && mAttribute_mControllerBindingOptionDecoratedList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingSpecificationMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mOutletBindingSpecificationModelList.drop () ;
  mAttribute_mControllerBindingOptionDecoratedList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingSpecificationMap_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @outletBindingSpecificationMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletBindingSpecificationModelList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mControllerBindingOptionDecoratedList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletBindingSpecificationMap_2D_element::reader_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationMap_2D_element::reader_mOutletBindingSpecificationModelList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletBindingSpecificationModelList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionDecoratedList GALGAS_outletBindingSpecificationMap_2D_element::reader_mControllerBindingOptionDecoratedList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mControllerBindingOptionDecoratedList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @outletBindingSpecificationMap-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2D_element ("outletBindingSpecificationMap-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_outletBindingSpecificationMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_outletBindingSpecificationMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingSpecificationMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationMap_2D_element GALGAS_outletBindingSpecificationMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationMap_2D_element result ;
  const GALGAS_outletBindingSpecificationMap_2D_element * p = (const GALGAS_outletBindingSpecificationMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_outletBindingSpecificationMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingSpecificationMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_astDeclarationStruct::GALGAS_astDeclarationStruct (void) :
mAttribute_mDeclarationList (),
mAttribute_mCursorList (),
mAttribute_mOutletClassDeclarationList (),
mAttribute_mControllerTemplateList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationStruct::~ GALGAS_astDeclarationStruct (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationStruct::GALGAS_astDeclarationStruct (const GALGAS_astDeclarationList & inOperand0,
                                                          const GALGAS_cursorList & inOperand1,
                                                          const GALGAS_outletClassDeclarationList & inOperand2,
                                                          const GALGAS_bindingSpecificationListMap & inOperand3) :
mAttribute_mDeclarationList (inOperand0),
mAttribute_mCursorList (inOperand1),
mAttribute_mOutletClassDeclarationList (inOperand2),
mAttribute_mControllerTemplateList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationStruct GALGAS_astDeclarationStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_astDeclarationStruct (GALGAS_astDeclarationList::constructor_emptyList (HERE),
                                      GALGAS_cursorList::constructor_emptyList (HERE),
                                      GALGAS_outletClassDeclarationList::constructor_emptyList (HERE),
                                      GALGAS_bindingSpecificationListMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationStruct GALGAS_astDeclarationStruct::constructor_new (const GALGAS_astDeclarationList & inOperand0,
                                                                          const GALGAS_cursorList & inOperand1,
                                                                          const GALGAS_outletClassDeclarationList & inOperand2,
                                                                          const GALGAS_bindingSpecificationListMap & inOperand3 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astDeclarationStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_astDeclarationStruct (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_astDeclarationStruct::objectCompare (const GALGAS_astDeclarationStruct & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDeclarationList.objectCompare (inOperand.mAttribute_mDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCursorList.objectCompare (inOperand.mAttribute_mCursorList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletClassDeclarationList.objectCompare (inOperand.mAttribute_mOutletClassDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mControllerTemplateList.objectCompare (inOperand.mAttribute_mControllerTemplateList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_astDeclarationStruct::isValid (void) const {
  return mAttribute_mDeclarationList.isValid () && mAttribute_mCursorList.isValid () && mAttribute_mOutletClassDeclarationList.isValid () && mAttribute_mControllerTemplateList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_astDeclarationStruct::drop (void) {
  mAttribute_mDeclarationList.drop () ;
  mAttribute_mCursorList.drop () ;
  mAttribute_mOutletClassDeclarationList.drop () ;
  mAttribute_mControllerTemplateList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_astDeclarationStruct::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<struct @astDeclarationStruct:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCursorList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletClassDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mControllerTemplateList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationList GALGAS_astDeclarationStruct::reader_mDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_cursorList GALGAS_astDeclarationStruct::reader_mCursorList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCursorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList GALGAS_astDeclarationStruct::reader_mOutletClassDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletClassDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap GALGAS_astDeclarationStruct::reader_mControllerTemplateList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mControllerTemplateList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @astDeclarationStruct type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astDeclarationStruct ("astDeclarationStruct",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_astDeclarationStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDeclarationStruct ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_astDeclarationStruct::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astDeclarationStruct (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationStruct GALGAS_astDeclarationStruct::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astDeclarationStruct result ;
  const GALGAS_astDeclarationStruct * p = (const GALGAS_astDeclarationStruct *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astDeclarationStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astDeclarationStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
  cEnumerator_unifiedTypeProxyList enumerator_12512 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 369)).isValidAndTrue () ;
  if (enumerator_12512.hasCurrentObject () && bool_0) {
    while (enumerator_12512.hasCurrentObject () && bool_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_12512.current_mType (HERE).reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 370)).objectCompare (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("decoratedTypes.galgas", 370)))).boolEnum () ;
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
      enumerator_12512.gotoNextObject () ;
      if (enumerator_12512.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 369)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_4 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 375)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("only a boolean attribute can be initialized by YES or NO")  COMMA_SOURCE_FILE ("decoratedTypes.galgas", 376)) ;
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
  cEnumerator_unifiedTypeProxyList enumerator_13212 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 389)).isValidAndTrue () ;
  if (enumerator_13212.hasCurrentObject () && bool_0) {
    while (enumerator_13212.hasCurrentObject () && bool_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_13212.current_mType (HERE).reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 390)).objectCompare (GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("decoratedTypes.galgas", 390)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        outArgument_outSwiftDefaultValueAsString = object->mAttribute_mValue.mAttribute_uint.reader_string (SOURCE_FILE ("decoratedTypes.galgas", 391)) ;
        var_found = GALGAS_bool (true) ;
      }
      enumerator_13212.gotoNextObject () ;
      if (enumerator_13212.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 389)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_2 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 395)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("only an integer attribute can be initialized by an integer constant")  COMMA_SOURCE_FILE ("decoratedTypes.galgas", 396)) ;
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
  cEnumerator_unifiedTypeProxyList enumerator_13902 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 409)).isValidAndTrue () ;
  if (enumerator_13902.hasCurrentObject () && bool_0) {
    while (enumerator_13902.hasCurrentObject () && bool_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_13902.current_mType (HERE).reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 410)).objectCompare (GALGAS_typeKind::constructor_doubleType (SOURCE_FILE ("decoratedTypes.galgas", 410)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        outArgument_outSwiftDefaultValueAsString = object->mAttribute_mValue.mAttribute_double.reader_string (SOURCE_FILE ("decoratedTypes.galgas", 411)) ;
        var_found = GALGAS_bool (true) ;
      }
      enumerator_13902.gotoNextObject () ;
      if (enumerator_13902.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 409)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_2 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 415)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("only a double attribute can be initialized by a floating point constant")  COMMA_SOURCE_FILE ("decoratedTypes.galgas", 416)) ;
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
  cEnumerator_unifiedTypeProxyList enumerator_14597 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 429)).isValidAndTrue () ;
  if (enumerator_14597.hasCurrentObject () && bool_0) {
    while (enumerator_14597.hasCurrentObject () && bool_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_14597.current_mType (HERE).reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 430)).objectCompare (GALGAS_typeKind::constructor_stringType (SOURCE_FILE ("decoratedTypes.galgas", 430)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        outArgument_outSwiftDefaultValueAsString = GALGAS_string ("\"").add_operation (object->mAttribute_mValue.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 431)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 431)) ;
        var_found = GALGAS_bool (true) ;
      }
      enumerator_14597.gotoNextObject () ;
      if (enumerator_14597.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 429)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_2 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 435)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("only a string attribute can be initialized by a string constant")  COMMA_SOURCE_FILE ("decoratedTypes.galgas", 436)) ;
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
  cEnumerator_unifiedTypeProxyList enumerator_17037 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 503)).isValidAndTrue () ;
  if (enumerator_17037.hasCurrentObject () && bool_0) {
    while (enumerator_17037.hasCurrentObject () && bool_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_17037.current_mType (HERE).reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 504)).objectCompare (GALGAS_typeKind::constructor_colorType (SOURCE_FILE ("decoratedTypes.galgas", 504)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_found = GALGAS_bool (true) ;
        const enumGalgasBool test_2 = function_predefinedColors (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 506)).reader_hasKey (object->mAttribute_mValue.mAttribute_string COMMA_SOURCE_FILE ("decoratedTypes.galgas", 506)).boolEnum () ;
        if (kBoolTrue == test_2) {
          outArgument_outSwiftDefaultValueAsString = GALGAS_string ("NSColor.").add_operation (object->mAttribute_mValue.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 507)).add_operation (GALGAS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 507)) ;
        }else if (kBoolFalse == test_2) {
          GALGAS_location location_3 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_3, GALGAS_string ("unknown predefined color")  COMMA_SOURCE_FILE ("decoratedTypes.galgas", 509)) ;
        }
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_17037.current_mType (HERE).reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 512)).objectCompare (GALGAS_typeKind::constructor_dateType (SOURCE_FILE ("decoratedTypes.galgas", 512)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          var_found = GALGAS_bool (true) ;
          const enumGalgasBool test_5 = function_predefinedDates (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 514)).reader_hasKey (object->mAttribute_mValue.mAttribute_string COMMA_SOURCE_FILE ("decoratedTypes.galgas", 514)).boolEnum () ;
          if (kBoolTrue == test_5) {
            outArgument_outSwiftDefaultValueAsString = GALGAS_string ("NSDate ()") ;
          }else if (kBoolFalse == test_5) {
            GALGAS_location location_6 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_6, GALGAS_string ("unknown predefined date")  COMMA_SOURCE_FILE ("decoratedTypes.galgas", 517)) ;
          }
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_17037.current_mType (HERE).reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 520)).objectCompare (GALGAS_typeKind::constructor_enumType (SOURCE_FILE ("decoratedTypes.galgas", 520)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            var_found = GALGAS_bool (true) ;
            const enumGalgasBool test_8 = enumerator_17037.current_mType (HERE).reader_mEnumConstantMap (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 522)).reader_hasKey (object->mAttribute_mValue.mAttribute_string COMMA_SOURCE_FILE ("decoratedTypes.galgas", 522)).boolEnum () ;
            if (kBoolTrue == test_8) {
              outArgument_outSwiftDefaultValueAsString = enumerator_17037.current_mType (HERE).reader_lkey (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 523)).mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 523)).add_operation (object->mAttribute_mValue.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 523)) ;
            }else if (kBoolFalse == test_8) {
              GALGAS_location location_9 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_9, GALGAS_string ("the '").add_operation (enumerator_17037.current_mType (HERE).reader_lkey (inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 526)).reader_string (SOURCE_FILE ("decoratedTypes.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 526)).add_operation (GALGAS_string ("' enumeration does not define '"), inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 526)).add_operation (object->mAttribute_mValue.reader_string (SOURCE_FILE ("decoratedTypes.galgas", 526)), inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 526)).add_operation (GALGAS_string ("' constant"), inCompiler COMMA_SOURCE_FILE ("decoratedTypes.galgas", 526))  COMMA_SOURCE_FILE ("decoratedTypes.galgas", 525)) ;
              outArgument_outSwiftDefaultValueAsString.drop () ; // Release error dropped variable
            }
          }
        }
      }
      enumerator_17037.gotoNextObject () ;
      if (enumerator_17037.hasCurrentObject ()) {
        bool_0 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 503)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_10 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 531)).boolEnum () ;
  if (kBoolTrue == test_10) {
    GALGAS_location location_11 (object->mAttribute_mValue.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_11, GALGAS_string ("unknow type for this identifier")  COMMA_SOURCE_FILE ("decoratedTypes.galgas", 532)) ;
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
  const enumGalgasBool test_0 = var_found.operator_not (SOURCE_FILE ("decoratedTypes.galgas", 621)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mStartLocation, GALGAS_string ("invalid initialization value")  COMMA_SOURCE_FILE ("decoratedTypes.galgas", 622)) ;
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
  ioArgument_ioUnifiedTypeMap.modifier_insertKey (object->mAttribute_mTypeName.reader_nowhere (SOURCE_FILE ("typeInventory.galgas", 8)), object->mAttribute_mKind, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("typeInventory.galgas", 10)), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("typeInventory.galgas", 11)), GALGAS_decoratedAttributeMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 12)), GALGAS_decoratedTransientMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 13)), GALGAS_decoratedOutletMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 14)), GALGAS_decoratedObservablePropertyMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 15)), GALGAS_decoratedEntityRelationshipMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 16)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 17)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("typeInventory.galgas", 18)), GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 19)), GALGAS_arrayControllerMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 7)) ;
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
  GALGAS_enumConstantMap var_enumConstantMap = GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 28)) ;
  cEnumerator_lstringlist enumerator_889 (object->mAttribute_mEnumConstantNameList, kEnumeration_up) ;
  while (enumerator_889.hasCurrentObject ()) {
    {
    var_enumConstantMap.modifier_insertKey (enumerator_889.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 30)) ;
    }
    enumerator_889.gotoNextObject () ;
  }
  {
  ioArgument_ioUnifiedTypeMap.modifier_insertKey (object->mAttribute_mEnumTypeName, GALGAS_typeKind::constructor_enumType (SOURCE_FILE ("typeInventory.galgas", 34)), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("typeInventory.galgas", 35)), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("typeInventory.galgas", 36)), GALGAS_decoratedAttributeMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 37)), GALGAS_decoratedTransientMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 38)), GALGAS_decoratedOutletMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 39)), GALGAS_decoratedObservablePropertyMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 40)), GALGAS_decoratedEntityRelationshipMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 41)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 42)), object->mAttribute_mEnumConstantNameList, var_enumConstantMap, GALGAS_arrayControllerMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 32)) ;
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
  cEnumerator_structFieldASTList enumerator_1570 (object->mAttribute_mFieldList, kEnumeration_up) ;
  while (enumerator_1570.hasCurrentObject ()) {
    {
    ioArgument_ioUnifiedTypeMap.modifier_enterEdge (object->mAttribute_mStructTypeName, enumerator_1570.current_mFieldTypeName (HERE) COMMA_SOURCE_FILE ("typeInventory.galgas", 54)) ;
    }
    enumerator_1570.gotoNextObject () ;
  }
  object->mAttribute_mStructTypeName.log ("mStructTypeName"  COMMA_SOURCE_FILE ("typeInventory.galgas", 59)) ;
  {
  ioArgument_ioUnifiedTypeMap.modifier_insertKey (object->mAttribute_mStructTypeName, GALGAS_typeKind::constructor_structType (SOURCE_FILE ("typeInventory.galgas", 62)), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("typeInventory.galgas", 63)), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("typeInventory.galgas", 64)), GALGAS_decoratedAttributeMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 65)), GALGAS_decoratedTransientMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 66)), GALGAS_decoratedOutletMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 67)), GALGAS_decoratedObservablePropertyMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 68)), GALGAS_decoratedEntityRelationshipMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 69)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 70)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("typeInventory.galgas", 71)), GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 72)), GALGAS_arrayControllerMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 60)) ;
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
  GALGAS_string var_kindName = categoryReader_kindName (object->mAttribute_mTypeKind, inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 81)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_superTypeProxy ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSuperTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_superTypeProxy = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("typeInventory.galgas", 85)) ;
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, object->mAttribute_mSuperTypeName, var_superTypeProxy COMMA_SOURCE_FILE ("typeInventory.galgas", 87)) ;
    }
    {
    ioArgument_ioUnifiedTypeMap.modifier_enterEdge (object->mAttribute_mTypeName, object->mAttribute_mSuperTypeName COMMA_SOURCE_FILE ("typeInventory.galgas", 92)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_rootEntityType ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mRootEntityName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_rootEntityType = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("typeInventory.galgas", 100)) ;
  }else if (kBoolFalse == test_1) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, object->mAttribute_mRootEntityName, var_rootEntityType COMMA_SOURCE_FILE ("typeInventory.galgas", 102)) ;
    }
    {
    ioArgument_ioUnifiedTypeMap.modifier_enterEdge (object->mAttribute_mTypeName, object->mAttribute_mRootEntityName COMMA_SOURCE_FILE ("typeInventory.galgas", 107)) ;
    }
  }
  GALGAS_decoratedObservablePropertyMap var_observablePropertyMap = GALGAS_decoratedObservablePropertyMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 110)) ;
  GALGAS_decoratedAttributeMap var_decoratedAttributeMap = GALGAS_decoratedAttributeMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 111)) ;
  cEnumerator_attributeList enumerator_3331 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_3331.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeType ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_3331.current_mAttributeTypeName (HERE), var_attributeType COMMA_SOURCE_FILE ("typeInventory.galgas", 113)) ;
    }
    {
    ioArgument_ioUnifiedTypeMap.modifier_enterEdge (object->mAttribute_mTypeName, enumerator_3331.current_mAttributeTypeName (HERE) COMMA_SOURCE_FILE ("typeInventory.galgas", 118)) ;
    }
    {
    var_decoratedAttributeMap.modifier_insertKey (enumerator_3331.current_mAttributeName (HERE), var_attributeType, enumerator_3331.current_mDefaultValue (HERE), enumerator_3331.current_mNeedsValidation (HERE), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 119)) ;
    }
    {
    var_observablePropertyMap.modifier_insertKey (enumerator_3331.current_mAttributeName (HERE), var_attributeType, GALGAS_bool (false), GALGAS_lstring::constructor_new (var_kindName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 129)).add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("typeInventory.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 129)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 129)).add_operation (enumerator_3331.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("typeInventory.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 129)), enumerator_3331.current_mAttributeName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("typeInventory.galgas", 129)), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 125)) ;
    }
    enumerator_3331.gotoNextObject () ;
  }
  GALGAS_decoratedEntityRelationshipMap var_currentRelationshipMap = GALGAS_decoratedEntityRelationshipMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 134)) ;
  cEnumerator_relationshipList enumerator_4121 (object->mAttribute_mRelationshipList, kEnumeration_up) ;
  while (enumerator_4121.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_destinationTypeProxy ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_4121.current_mDestinationEntityName (HERE), var_destinationTypeProxy COMMA_SOURCE_FILE ("typeInventory.galgas", 136)) ;
    }
    {
    var_currentRelationshipMap.modifier_insertKey (enumerator_4121.current_mRelationshipName (HERE), enumerator_4121.current_mIsToMany (HERE), var_destinationTypeProxy, enumerator_4121.current_mInverseRelationshipName (HERE), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 141)) ;
    }
    {
    var_observablePropertyMap.modifier_insertKey (enumerator_4121.current_mRelationshipName (HERE), var_destinationTypeProxy, GALGAS_bool (false), GALGAS_lstring::constructor_new (var_kindName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 151)).add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("typeInventory.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 151)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 151)).add_operation (enumerator_4121.current_mRelationshipName (HERE).reader_string (SOURCE_FILE ("typeInventory.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 151)), enumerator_4121.current_mRelationshipName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("typeInventory.galgas", 151)), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 147)) ;
    }
    enumerator_4121.gotoNextObject () ;
  }
  GALGAS_decoratedTransientMap var_decoratedTransientMap = GALGAS_decoratedTransientMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 156)) ;
  cEnumerator_transientList enumerator_4845 (object->mAttribute_mTransientList, kEnumeration_up) ;
  while (enumerator_4845.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_transientType ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_4845.current_mTransientTypeName (HERE), var_transientType COMMA_SOURCE_FILE ("typeInventory.galgas", 158)) ;
    }
    GALGAS_lstring var_signature = GALGAS_lstring::constructor_new (var_kindName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 163)).add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("typeInventory.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 163)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 163)).add_operation (enumerator_4845.current_mTransientName (HERE).reader_string (SOURCE_FILE ("typeInventory.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 163)), enumerator_4845.current_mTransientName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("typeInventory.galgas", 163)) ;
    {
    var_decoratedTransientMap.modifier_insertKey (enumerator_4845.current_mTransientName (HERE), var_transientType, var_signature, enumerator_4845.current_mDependencyList (HERE), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 164)) ;
    }
    {
    var_observablePropertyMap.modifier_insertKey (enumerator_4845.current_mTransientName (HERE), var_transientType, GALGAS_bool (true), var_signature, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 170)) ;
    }
    enumerator_4845.gotoNextObject () ;
  }
  cEnumerator_classArrayList enumerator_5480 (object->mAttribute_mArrayList, kEnumeration_up) ;
  while (enumerator_5480.hasCurrentObject ()) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_5578 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, enumerator_5480.current_mElementClassName (HERE), joker_5578 COMMA_SOURCE_FILE ("typeInventory.galgas", 180)) ;
    }
    {
    ioArgument_ioUnifiedTypeMap.modifier_enterEdge (object->mAttribute_mTypeName, enumerator_5480.current_mElementClassName (HERE) COMMA_SOURCE_FILE ("typeInventory.galgas", 185)) ;
    }
    enumerator_5480.gotoNextObject () ;
  }
  GALGAS_decoratedOutletMap var_decoratedOutletMap = GALGAS_decoratedOutletMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 188)) ;
  cEnumerator_outletDeclarationList enumerator_5793 (object->mAttribute_mOutletDeclarationList, kEnumeration_up) ;
  while (enumerator_5793.hasCurrentObject ()) {
    {
    var_decoratedOutletMap.modifier_insertKey (enumerator_5793.current_mOutletName (HERE), enumerator_5793.current_mOutletType (HERE), enumerator_5793.current_mRunDescriptor (HERE), enumerator_5793.current_mEnabledBindingDescriptor (HERE), enumerator_5793.current_mRegularBindingList (HERE), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 190)) ;
    }
    enumerator_5793.gotoNextObject () ;
  }
  GALGAS_actionMap var_documentActionMap = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 199)) ;
  cEnumerator_lstringlist enumerator_6112 (object->mAttribute_mActionDeclarationList, kEnumeration_up) ;
  while (enumerator_6112.hasCurrentObject ()) {
    {
    var_documentActionMap.modifier_insertKey (enumerator_6112.current (HERE).mAttribute_mValue, inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 201)) ;
    }
    enumerator_6112.gotoNextObject () ;
  }
  GALGAS_arrayControllerMap var_arrayControllerMap = GALGAS_arrayControllerMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 204)) ;
  cEnumerator_arrayControllerDeclarationListAST enumerator_6348 (object->mAttribute_mArrayControllerDeclarationListAST, kEnumeration_up) ;
  while (enumerator_6348.hasCurrentObject ()) {
    GALGAS_lstring var_arrayController_5F_propertySignature = GALGAS_lstring::constructor_new (var_kindName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 207)).add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("typeInventory.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 207)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 207)).add_operation (enumerator_6348.current_mControllerName (HERE).reader_string (SOURCE_FILE ("typeInventory.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 207)), enumerator_6348.current_mControllerName (HERE).mAttribute_location  COMMA_SOURCE_FILE ("typeInventory.galgas", 206)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_boolTypeProxy ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, GALGAS_string ("Bool").reader_nowhere (SOURCE_FILE ("typeInventory.galgas", 209)), var_boolTypeProxy COMMA_SOURCE_FILE ("typeInventory.galgas", 209)) ;
    }
    GALGAS_decoratedObservablePropertyMap temp_2 = GALGAS_decoratedObservablePropertyMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 215)) ;
    temp_2.addAssign_operation (GALGAS_string ("canRemove").reader_nowhere (SOURCE_FILE ("typeInventory.galgas", 211)), var_boolTypeProxy, GALGAS_bool (false), var_arrayController_5F_propertySignature, GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("typeInventory.galgas", 215)) ;
    GALGAS_decoratedObservablePropertyMap var_arrayControllerObservablePropertyMap = temp_2 ;
    {
    GALGAS_actionMap temp_3 = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 222)) ;
    temp_3.addAssign_operation (GALGAS_string ("add").reader_nowhere (SOURCE_FILE ("typeInventory.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("typeInventory.galgas", 222)) ;
    temp_3.addAssign_operation (GALGAS_string ("remove").reader_nowhere (SOURCE_FILE ("typeInventory.galgas", 222)), inCompiler  COMMA_SOURCE_FILE ("typeInventory.galgas", 222)) ;
    var_arrayControllerMap.modifier_insertKey (enumerator_6348.current_mControllerName (HERE), enumerator_6348.current_mBoundModel (HERE), enumerator_6348.current_mTableViewOutletName (HERE), enumerator_6348.current_mArrayControllerBoundColumnListAST (HERE), temp_3, var_arrayControllerObservablePropertyMap, var_arrayController_5F_propertySignature, callCategoryReader_arrayControllerTypeName ((const cPtr_abstractObservablePropertyAST *) enumerator_6348.current_mBoundModel (HERE).ptr (), object->mAttribute_mTypeName.mAttribute_string, var_rootEntityType, inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 217)) ;
    }
    enumerator_6348.gotoNextObject () ;
  }
  {
  ioArgument_ioUnifiedTypeMap.modifier_insertKey (object->mAttribute_mTypeName, object->mAttribute_mTypeKind, var_superTypeProxy, var_rootEntityType, var_decoratedAttributeMap, var_decoratedTransientMap, var_decoratedOutletMap, var_observablePropertyMap, var_currentRelationshipMap, var_documentActionMap, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("typeInventory.galgas", 240)), GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("typeInventory.galgas", 241)), var_arrayControllerMap, inCompiler COMMA_SOURCE_FILE ("typeInventory.galgas", 229)) ;
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
  callCategoryMethod_analyzeBoundObservablePropertyForEnabledBinding ((const cPtr_abstractObservablePropertyAST *) object->mAttribute_mProperty.ptr (), constinArgument_inSelfTypeName, constinArgument_inUnifiedTypeMap, constinArgument_inArrayControllerMap, constinArgument_inCurrentObservablePropertyMap, constinArgument_inRootEntityType, ioArgument_ioIndex, outArgument_outEnableExpression, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 318)) ;
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
  callCategoryMethod_analyzeExpressionForEnabledBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mBinding.ptr (), constinArgument_inSelfTypeName, constinArgument_inUnifiedTypeMap, constinArgument_inArrayControllerMap, constinArgument_inCurrentObservablePropertyMap, constinArgument_inRootEntityType, ioArgument_ioIndex, var_expression, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 339)) ;
  outArgument_outEnableExpression = GALGAS_negateBooleanMultipleBindingExpressionForGeneration::constructor_new (var_expression  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 348)) ;
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
  callCategoryMethod_analyzeExpressionForEnabledBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mLeftBinding.ptr (), constinArgument_inSelfTypeName, constinArgument_inUnifiedTypeMap, constinArgument_inArrayControllerMap, constinArgument_inCurrentObservablePropertyMap, constinArgument_inRootEntityType, ioArgument_ioIndex, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 361)) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeExpressionForEnabledBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mRightBinding.ptr (), constinArgument_inSelfTypeName, constinArgument_inUnifiedTypeMap, constinArgument_inArrayControllerMap, constinArgument_inCurrentObservablePropertyMap, constinArgument_inRootEntityType, ioArgument_ioIndex, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 370)) ;
  outArgument_outEnableExpression = GALGAS_orBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 379)) ;
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
  callCategoryMethod_analyzeExpressionForEnabledBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mLeftBinding.ptr (), constinArgument_inSelfTypeName, constinArgument_inUnifiedTypeMap, constinArgument_inArrayControllerMap, constinArgument_inCurrentObservablePropertyMap, constinArgument_inRootEntityType, ioArgument_ioIndex, var_leftExpression, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 392)) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression ;
  callCategoryMethod_analyzeExpressionForEnabledBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mRightBinding.ptr (), constinArgument_inSelfTypeName, constinArgument_inUnifiedTypeMap, constinArgument_inArrayControllerMap, constinArgument_inCurrentObservablePropertyMap, constinArgument_inRootEntityType, ioArgument_ioIndex, var_rightExpression, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 401)) ;
  outArgument_outEnableExpression = GALGAS_andBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 410)) ;
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
  GALGAS_stringlist temp_0 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("typeAnalysis.galgas", 428)) ;
  temp_0.addAssign_operation (object->mAttribute_mObservedObject  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 428)) ;
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
  result_outObservedObjectList = callCategoryReader_observedObjectList ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 435)) ;
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
  result_outObservedObjectList = callCategoryReader_observedObjectList ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 442)).add_operation (callCategoryReader_observedObjectList ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 442)) ;
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
  result_outObservedObjectList = callCategoryReader_observedObjectList ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 449)).add_operation (callCategoryReader_observedObjectList ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 449)) ;
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
  GALGAS_bool joker_18839 ; // Joker input parameter
  GALGAS_lstring joker_18867 ; // Joker input parameter
  constinArgument_inObservablePropertyMap.method_searchKey (object->mAttribute_mSelfObservablePropertyName, var_propertyType, joker_18839, joker_18867, var_isCollection, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 480)) ;
  const enumGalgasBool test_0 = var_propertyType.reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 487)).reader_isBoolType (SOURCE_FILE ("typeAnalysis.galgas", 487)).operator_not (SOURCE_FILE ("typeAnalysis.galgas", 487)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mSelfObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this property should be boolean")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 488)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_isCollection.boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mSelfObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the observable property should not be a collection")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 490)) ;
    }
  }
  outArgument_outExpression = GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (GALGAS_string ("self"), object->mAttribute_mSelfObservablePropertyName.mAttribute_string.add_operation (GALGAS_string (".value"), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 496)), constinArgument_inSelfTypeName, ioArgument_ioIndex  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 494)) ;
  ioArgument_ioIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 500)) ;
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
  GALGAS_bool joker_20188 ; // Joker input parameter
  GALGAS_lstring joker_20216 ; // Joker input parameter
  GALGAS_bool joker_20252 ; // Joker input parameter
  constinArgument_inRootEntityType.reader_mObservablePropertyMap (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 514)).method_searchKey (object->mAttribute_mRootObservablePropertyName, var_propertyType, joker_20188, joker_20216, joker_20252, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 514)) ;
  const enumGalgasBool test_0 = var_propertyType.reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 521)).reader_isBoolType (SOURCE_FILE ("typeAnalysis.galgas", 521)).operator_not (SOURCE_FILE ("typeAnalysis.galgas", 521)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mRootObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this property should be boolean")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 522)) ;
  }
  outArgument_outExpression = GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (GALGAS_string ("rootObject"), object->mAttribute_mRootObservablePropertyName.mAttribute_string, constinArgument_inRootEntityType.reader_key (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 532)), ioArgument_ioIndex  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 529)) ;
  ioArgument_ioIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 534)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy joker_21550_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_21550_4 ; // Joker input parameter
  GALGAS_decoratedAttributeMap joker_21550_3 ; // Joker input parameter
  GALGAS_decoratedTransientMap joker_21550_2 ; // Joker input parameter
  GALGAS_decoratedOutletMap joker_21550_1 ; // Joker input parameter
  GALGAS_decoratedEntityRelationshipMap joker_21621_5 ; // Joker input parameter
  GALGAS_actionMap joker_21621_4 ; // Joker input parameter
  GALGAS_lstringlist joker_21621_3 ; // Joker input parameter
  GALGAS_enumConstantMap joker_21621_2 ; // Joker input parameter
  GALGAS_arrayControllerMap joker_21621_1 ; // Joker input parameter
  constinArgument_inUnifiedTypeMap.method_searchKey (object->mAttribute_mPreferenceName, var_typeKind, joker_21550_5, joker_21550_4, joker_21550_3, joker_21550_2, joker_21550_1, var_observablePropertyMap, joker_21621_5, joker_21621_4, joker_21621_3, joker_21621_2, joker_21621_1, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 548)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKind.objectCompare (GALGAS_typeKind::constructor_preferencesType (SOURCE_FILE ("typeAnalysis.galgas", 555)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mPreferenceName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("there is no '").add_operation (object->mAttribute_mPreferenceName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 556)).add_operation (GALGAS_string ("' preferences"), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 556))  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 556)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_propertyType ;
  GALGAS_bool var_isCollection ;
  GALGAS_bool joker_21895 ; // Joker input parameter
  GALGAS_lstring joker_21923 ; // Joker input parameter
  var_observablePropertyMap.method_searchKey (object->mAttribute_mPreferenceObservablePropertyName, var_propertyType, joker_21895, joker_21923, var_isCollection, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 559)) ;
  const enumGalgasBool test_2 = var_propertyType.reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 566)).reader_isBoolType (SOURCE_FILE ("typeAnalysis.galgas", 566)).operator_not (SOURCE_FILE ("typeAnalysis.galgas", 566)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mPreferenceObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("this property should be boolean")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 567)) ;
  }
  const enumGalgasBool test_4 = var_isCollection.boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location location_5 (object->mAttribute_mPreferenceObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("the observable property should not be a collection")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 570)) ;
  }
  outArgument_outExpression = GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (GALGAS_string ("g_").add_operation (object->mAttribute_mPreferenceName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 573)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 573)), object->mAttribute_mPreferenceObservablePropertyName.mAttribute_string, object->mAttribute_mPreferenceName.mAttribute_string, ioArgument_ioIndex  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 572)) ;
  ioArgument_ioIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 577)) ;
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
  GALGAS_abstractObservablePropertyAST joker_23094 ; // Joker input parameter
  GALGAS_lstring joker_23146_3 ; // Joker input parameter
  GALGAS_arrayControllerBoundColumnListAST joker_23146_2 ; // Joker input parameter
  GALGAS_actionMap joker_23146_1 ; // Joker input parameter
  GALGAS_lstring joker_23232 ; // Joker input parameter
  constinArgument_inArrayControllerMap.method_searchKey (object->mAttribute_mArrayControllerName, joker_23094, joker_23146_3, joker_23146_2, joker_23146_1, var_arrayControllerObservablePropertyMap, joker_23232, var_observedTypeName, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 591)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_propertyType ;
  GALGAS_bool var_isCollection ;
  GALGAS_bool joker_23424 ; // Joker input parameter
  GALGAS_lstring joker_23453 ; // Joker input parameter
  var_arrayControllerObservablePropertyMap.method_searchKey (object->mAttribute_mArrayControllerObservablePropertyName, var_propertyType, joker_23424, joker_23453, var_isCollection, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 600)) ;
  const enumGalgasBool test_0 = var_propertyType.reader_mTypeKind (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 607)).reader_isBoolType (SOURCE_FILE ("typeAnalysis.galgas", 607)).operator_not (SOURCE_FILE ("typeAnalysis.galgas", 607)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mArrayControllerObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this property should be boolean")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 608)) ;
  }
  const enumGalgasBool test_2 = var_isCollection.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mArrayControllerObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the observable property should not be a collection")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 611)) ;
  }
  outArgument_outExpression = GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (object->mAttribute_mArrayControllerName.mAttribute_string, object->mAttribute_mArrayControllerObservablePropertyName.mAttribute_string, var_observedTypeName, ioArgument_ioIndex  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 613)) ;
  ioArgument_ioIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 619)) ;
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
  inCompiler->emitSemanticError (location_0, GALGAS_string ("the bound array should be a root object model")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 641)) ;
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
  GALGAS_lstring joker_25647 ; // Joker input parameter
  constinArgument_inCurrentRelationshipMap.method_searchKey (object->mAttribute_mRootObservablePropertyName, var_mIsToMany, outArgument_outRelationshipTypeProxy, joker_25647, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 652)) ;
  const enumGalgasBool test_0 = var_mIsToMany.operator_not (SOURCE_FILE ("typeAnalysis.galgas", 658)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mRootObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the observable property should be a tomany relationship")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 659)) ;
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
  inCompiler->emitSemanticError (location_0, GALGAS_string ("the bound array should be a root object model")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 670)) ;
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
  inCompiler->emitSemanticError (location_0, GALGAS_string ("the bound array should be a root object model")  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 681)) ;
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
  result_outSignature = GALGAS_lstring::constructor_new (constinArgument_inKind.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 708)).add_operation (constinArgument_inSelfTypeName, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 708)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 708)).add_operation (object->mAttribute_mSelfObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 708)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 708)), object->mAttribute_mSelfObservablePropertyName.mAttribute_location  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 707)) ;
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
  result_outSignature = GALGAS_lstring::constructor_new (GALGAS_string ("entity.").add_operation (constinArgument_inRootypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 720)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 720)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 720)).add_operation (object->mAttribute_mRootObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 720)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 720)), object->mAttribute_mRootObservablePropertyName.mAttribute_location  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 719)) ;
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
  result_outSignature = GALGAS_lstring::constructor_new (GALGAS_string ("preferences.").add_operation (object->mAttribute_mPreferenceName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 732)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 732)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 732)).add_operation (object->mAttribute_mPreferenceObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 732)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 732)), object->mAttribute_mPreferenceObservablePropertyName.mAttribute_location  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 731)) ;
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
  result_outSignature = GALGAS_lstring::constructor_new (constinArgument_inKind.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 744)).add_operation (constinArgument_inSelfTypeName, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 744)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 744)).add_operation (object->mAttribute_mArrayControllerObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 744)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 744)), object->mAttribute_mArrayControllerObservablePropertyName.mAttribute_location  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 743)) ;
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
  result_outTypeName = GALGAS_string ("ArrayController_").add_operation (constinArgument_inSelfTypeName, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 767)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 767)).add_operation (object->mAttribute_mSelfObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 767)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 767)) ;
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
  result_outTypeName = GALGAS_string ("ArrayController_").add_operation (constinArgument_inRootypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 776)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 776)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 776)).add_operation (object->mAttribute_mRootObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 776)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 776)) ;
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
  result_outTypeName = GALGAS_string ("ArrayController_").add_operation (object->mAttribute_mPreferenceName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 785)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 785)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 785)).add_operation (object->mAttribute_mPreferenceObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 785)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 785)) ;
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
  result_outTypeName = GALGAS_string ("ArrayController_").add_operation (constinArgument_inSelfTypeName, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 794)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 794)).add_operation (object->mAttribute_mArrayControllerObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 794)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 794)) ;
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
  result_outSignature = constinArgument_inSelfTypeName.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 816)).add_operation (object->mAttribute_mSelfObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 816)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 816)) ;
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
  result_outSignature = constinArgument_inRootypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 825)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 825)).add_operation (object->mAttribute_mRootObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 825)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 825)) ;
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
  result_outSignature = object->mAttribute_mPreferenceName.mAttribute_string.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 834)).add_operation (object->mAttribute_mPreferenceObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 834)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 834)) ;
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
  result_outSignature = constinArgument_inSelfTypeName.add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 843)).add_operation (object->mAttribute_mArrayControllerObservablePropertyName.reader_string (SOURCE_FILE ("typeAnalysis.galgas", 843)), inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 843)) ;
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
  result_outResult = GALGAS_transientRootSignDependencyForGeneration::constructor_new (object->mAttribute_mDeclarationLocation  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 859)) ;
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
  result_outResult = GALGAS_transientLocalDependencyForGeneration::constructor_new (object->mAttribute_mMasterName, object->mAttribute_mNamesCountOption  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 867)) ;
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
  result_outResult = GALGAS_transientRootDependencyForGeneration::constructor_new (object->mAttribute_mMasterName, object->mAttribute_mNamesCountOption  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 875)) ;
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
  GALGAS_bool joker_34892 ; // Joker input parameter
  GALGAS_lstring joker_34942 ; // Joker input parameter
  constinArgument_inRootEntityType.reader_mCurrentRelationshipMap (inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 883)).method_searchKey (object->mAttribute_mRelationshipName, joker_34892, var_elementType, joker_34942, inCompiler COMMA_SOURCE_FILE ("typeAnalysis.galgas", 883)) ;
  result_outResult = GALGAS_transientRootRelationshipDependencyForGeneration::constructor_new (var_elementType, object->mAttribute_mRelationshipName, object->mAttribute_mMasterName  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 889)) ;
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
  result_outResult = GALGAS_transientControllerDependencyForGeneration::constructor_new (object->mAttribute_mControllerName, object->mAttribute_mMasterName  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 897)) ;
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
  result_outResult = GALGAS_transientPreferenceDependencyForGeneration::constructor_new (object->mAttribute_mPreferencesName, object->mAttribute_mMasterName  COMMA_SOURCE_FILE ("typeAnalysis.galgas", 905)) ;
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
//       Overriding category method '@selfObservablePropertyAST analyzeBoundObservablePropertyForSimpleBinding'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfObservablePropertyAST_analyzeBoundObservablePropertyForSimpleBinding (const cPtr_abstractObservablePropertyAST * inObject,
                                                                                                     const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                                                     const GALGAS_arrayControllerMap /* constinArgument_inArrayControllerMap */,
                                                                                                     const GALGAS_string /* constinArgument_inCurrentTypeName */,
                                                                                                     const GALGAS_decoratedObservablePropertyMap constinArgument_inObservablePropertyMap,
                                                                                                     const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inRootEntityType */,
                                                                                                     GALGAS_outletBindingModelList & ioArgument_ioBoundPropertyTypeList,
                                                                                                     GALGAS_stringlist & ioArgument_ioBoundObjectNameList,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfObservablePropertyAST * object = (const cPtr_selfObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_selfObservablePropertyAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_propertyType ;
  GALGAS_bool var_modelIsTransient ;
  GALGAS_bool var_isCollection ;
  GALGAS_lstring joker_11897 ; // Joker input parameter
  constinArgument_inObservablePropertyMap.method_searchKey (object->mAttribute_mSelfObservablePropertyName, var_propertyType, var_modelIsTransient, joker_11897, var_isCollection, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 273)) ;
  const enumGalgasBool test_0 = var_isCollection.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mSelfObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the observable property should not be a collection")  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 281)) ;
  }
  ioArgument_ioBoundPropertyTypeList.addAssign_operation (var_propertyType, var_modelIsTransient, object->mAttribute_mSelfObservablePropertyName.mAttribute_location  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 283)) ;
  ioArgument_ioBoundObjectNameList.addAssign_operation (GALGAS_string ("self.").add_operation (object->mAttribute_mSelfObservablePropertyName.reader_string (SOURCE_FILE ("outlet-declaration.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 284))  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 284)) ;
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
                                                                                                     const GALGAS_string /* constinArgument_inCurrentTypeName */,
                                                                                                     const GALGAS_decoratedObservablePropertyMap /* constinArgument_inObservablePropertyMap */,
                                                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inRootEntityType,
                                                                                                     GALGAS_outletBindingModelList & ioArgument_ioBoundPropertyTypeList,
                                                                                                     GALGAS_stringlist & ioArgument_ioBoundObjectNameList,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_rootObservablePropertyAST * object = (const cPtr_rootObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_rootObservablePropertyAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_propertyType ;
  GALGAS_bool var_modelIsTransient ;
  GALGAS_bool var_isCollection ;
  GALGAS_lstring joker_12968 ; // Joker input parameter
  constinArgument_inRootEntityType.reader_mObservablePropertyMap (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 298)).method_searchKey (object->mAttribute_mRootObservablePropertyName, var_propertyType, var_modelIsTransient, joker_12968, var_isCollection, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 298)) ;
  const enumGalgasBool test_0 = var_isCollection.operator_and (object->mAttribute_mNamesCountOption.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 305)) COMMA_SOURCE_FILE ("outlet-declaration.galgas", 305)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mRootObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the observable property should not be a collection")  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 306)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = object->mAttribute_mNamesCountOption.operator_and (var_isCollection.operator_not (SOURCE_FILE ("outlet-declaration.galgas", 307)) COMMA_SOURCE_FILE ("outlet-declaration.galgas", 307)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_location location_3 (object->mAttribute_mRootObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the observable property should be a collection")  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 308)) ;
    }
  }
  const enumGalgasBool test_4 = object->mAttribute_mNamesCountOption.boolEnum () ;
  if (kBoolTrue == test_4) {
    ioArgument_ioBoundObjectNameList.addAssign_operation (GALGAS_string ("rootObject.").add_operation (object->mAttribute_mRootObservablePropertyName.reader_string (SOURCE_FILE ("outlet-declaration.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 311))  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 311)) ;
    ioArgument_ioBoundPropertyTypeList.addAssign_operation (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inUnifiedTypeMap, GALGAS_string ("Integer").reader_nowhere (SOURCE_FILE ("outlet-declaration.galgas", 313)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 313)), GALGAS_bool (true), object->mAttribute_mRootObservablePropertyName.mAttribute_location  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 312)) ;
  }else if (kBoolFalse == test_4) {
    ioArgument_ioBoundObjectNameList.addAssign_operation (GALGAS_string ("rootObject.").add_operation (object->mAttribute_mRootObservablePropertyName.reader_string (SOURCE_FILE ("outlet-declaration.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 317))  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 317)) ;
    ioArgument_ioBoundPropertyTypeList.addAssign_operation (var_propertyType, var_modelIsTransient, object->mAttribute_mRootObservablePropertyName.mAttribute_location  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 318)) ;
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
                                                                                                           const GALGAS_string /* constinArgument_inCurrentTypeName */,
                                                                                                           const GALGAS_decoratedObservablePropertyMap /* constinArgument_inObservablePropertyMap */,
                                                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inRootEntityType */,
                                                                                                           GALGAS_outletBindingModelList & ioArgument_ioBoundPropertyTypeList,
                                                                                                           GALGAS_stringlist & ioArgument_ioBoundObjectNameList,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_preferenceObservablePropertyAST * object = (const cPtr_preferenceObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_preferenceObservablePropertyAST) ;
  GALGAS_typeKind var_typeKind ;
  GALGAS_decoratedObservablePropertyMap var_observablePropertyMap ;
  GALGAS_unifiedTypeMap_2D_proxy joker_14490_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_14490_4 ; // Joker input parameter
  GALGAS_decoratedAttributeMap joker_14490_3 ; // Joker input parameter
  GALGAS_decoratedTransientMap joker_14490_2 ; // Joker input parameter
  GALGAS_decoratedOutletMap joker_14490_1 ; // Joker input parameter
  GALGAS_decoratedEntityRelationshipMap joker_14561_5 ; // Joker input parameter
  GALGAS_actionMap joker_14561_4 ; // Joker input parameter
  GALGAS_lstringlist joker_14561_3 ; // Joker input parameter
  GALGAS_enumConstantMap joker_14561_2 ; // Joker input parameter
  GALGAS_arrayControllerMap joker_14561_1 ; // Joker input parameter
  constinArgument_inUnifiedTypeMap.method_searchKey (object->mAttribute_mPreferenceName, var_typeKind, joker_14490_5, joker_14490_4, joker_14490_3, joker_14490_2, joker_14490_1, var_observablePropertyMap, joker_14561_5, joker_14561_4, joker_14561_3, joker_14561_2, joker_14561_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 334)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKind.objectCompare (GALGAS_typeKind::constructor_preferencesType (SOURCE_FILE ("outlet-declaration.galgas", 341)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mPreferenceName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("there is no '").add_operation (object->mAttribute_mPreferenceName.reader_string (SOURCE_FILE ("outlet-declaration.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 342)).add_operation (GALGAS_string ("' preferences"), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 342))  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 342)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_propertyType ;
  GALGAS_bool var_modelIsTransient ;
  GALGAS_bool var_isCollection ;
  GALGAS_lstring joker_14861 ; // Joker input parameter
  var_observablePropertyMap.method_searchKey (object->mAttribute_mPreferenceObservablePropertyName, var_propertyType, var_modelIsTransient, joker_14861, var_isCollection, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 345)) ;
  const enumGalgasBool test_2 = var_isCollection.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mPreferenceObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the observable property should not be a collection")  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 353)) ;
  }
  ioArgument_ioBoundPropertyTypeList.addAssign_operation (var_propertyType, var_modelIsTransient, object->mAttribute_mPreferenceObservablePropertyName.mAttribute_location  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 355)) ;
  ioArgument_ioBoundObjectNameList.addAssign_operation (GALGAS_string ("g_").add_operation (object->mAttribute_mPreferenceName.reader_string (SOURCE_FILE ("outlet-declaration.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 356)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 356)).add_operation (object->mAttribute_mPreferenceObservablePropertyName.reader_string (SOURCE_FILE ("outlet-declaration.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 356))  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 356)) ;
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
                                                                                                                const GALGAS_string /* constinArgument_inCurrentTypeName */,
                                                                                                                const GALGAS_decoratedObservablePropertyMap /* constinArgument_inObservablePropertyMap */,
                                                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inRootEntityType */,
                                                                                                                GALGAS_outletBindingModelList & ioArgument_ioBoundPropertyTypeList,
                                                                                                                GALGAS_stringlist & ioArgument_ioBoundObjectNameList,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayControllerObservablePropertyAST * object = (const cPtr_arrayControllerObservablePropertyAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerObservablePropertyAST) ;
  GALGAS_decoratedObservablePropertyMap var_arrayControllerObservablePropertyMap ;
  GALGAS_abstractObservablePropertyAST joker_15916 ; // Joker input parameter
  GALGAS_lstring joker_15971_3 ; // Joker input parameter
  GALGAS_arrayControllerBoundColumnListAST joker_15971_2 ; // Joker input parameter
  GALGAS_actionMap joker_15971_1 ; // Joker input parameter
  GALGAS_lstring joker_16057_2 ; // Joker input parameter
  GALGAS_string joker_16057_1 ; // Joker input parameter
  constinArgument_inArrayControllerMap.method_searchKey (object->mAttribute_mArrayControllerName, joker_15916, joker_15971_3, joker_15971_2, joker_15971_1, var_arrayControllerObservablePropertyMap, joker_16057_2, joker_16057_1, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 371)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_propertyType ;
  GALGAS_bool var_modelIsTransient ;
  GALGAS_bool var_isCollection ;
  GALGAS_lstring joker_16242 ; // Joker input parameter
  var_arrayControllerObservablePropertyMap.method_searchKey (object->mAttribute_mArrayControllerObservablePropertyName, var_propertyType, var_modelIsTransient, joker_16242, var_isCollection, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas", 379)) ;
  const enumGalgasBool test_0 = var_isCollection.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mArrayControllerObservablePropertyName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the observable property should not be a collection")  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 387)) ;
  }
  ioArgument_ioBoundPropertyTypeList.addAssign_operation (var_propertyType, var_modelIsTransient, object->mAttribute_mArrayControllerName.mAttribute_location  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 389)) ;
  ioArgument_ioBoundObjectNameList.addAssign_operation (object->mAttribute_mArrayControllerName.mAttribute_string  COMMA_SOURCE_FILE ("outlet-declaration.galgas", 390)) ;
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
  GALGAS_decoratedEntityRelationshipMap joker_6684_5 ; // Joker input parameter
  GALGAS_actionMap joker_6684_4 ; // Joker input parameter
  GALGAS_lstringlist joker_6684_3 ; // Joker input parameter
  GALGAS_enumConstantMap joker_6684_2 ; // Joker input parameter
  GALGAS_arrayControllerMap joker_6684_1 ; // Joker input parameter
  constinArgument_inUnifiedTypeMap.method_searchKey (object->mAttribute_mPreferencesName, joker_6589, joker_6613_5, joker_6613_4, joker_6613_3, joker_6613_2, joker_6613_1, var_observablePropertyMap, joker_6684_5, joker_6684_4, joker_6684_3, joker_6684_2, joker_6684_1, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 185)) ;
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
  GALGAS_bool joker_11376 ; // Joker input parameter
  GALGAS_lstring joker_11383 ; // Joker input parameter
  constinArgument_inAllObservablePropertyMap.method_searchKey (object->mAttribute_mMasterName, var_masterType, joker_11376, joker_11383, var_isCollection, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 317)) ;
  GALGAS_bool test_0 = object->mAttribute_mNamesCountOption ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = var_isCollection.operator_not (SOURCE_FILE ("transientAnalysis.galgas", 324)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mMasterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("the 'count' option is only allowed for to-many relationships")  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 325)) ;
  }else if (kBoolFalse == test_1) {
    GALGAS_bool test_3 = var_isCollection ;
    if (kBoolTrue == test_3.boolEnum ()) {
      test_3 = object->mAttribute_mNamesCountOption.operator_not (SOURCE_FILE ("transientAnalysis.galgas", 326)) ;
    }
    const enumGalgasBool test_4 = test_3.boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_location location_5 (object->mAttribute_mMasterName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_5, GALGAS_string ("to-many relationships requires the 'count' option")  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 327)) ;
    }
  }
  ioArgument_ioTransientDependencyListForGeneration.addAssign_operation (categoryReader_transientFormalArgumentTypeName (var_masterType, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 329)), object->mAttribute_mMasterName.mAttribute_string  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 329)) ;
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
  GALGAS_abstractObservablePropertyAST joker_12451_4 ; // Joker input parameter
  GALGAS_lstring joker_12451_3 ; // Joker input parameter
  GALGAS_arrayControllerBoundColumnListAST joker_12451_2 ; // Joker input parameter
  GALGAS_actionMap joker_12451_1 ; // Joker input parameter
  GALGAS_lstring joker_12537_2 ; // Joker input parameter
  GALGAS_string joker_12537_1 ; // Joker input parameter
  constinArgument_inArrayControllerMap.method_searchKey (object->mAttribute_mControllerName, joker_12451_4, joker_12451_3, joker_12451_2, joker_12451_1, var_arrayControllerObservablePropertyMap, joker_12537_2, joker_12537_1, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 342)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_masterType ;
  GALGAS_bool joker_12658 ; // Joker input parameter
  GALGAS_lstring joker_12665 ; // Joker input parameter
  GALGAS_bool joker_12672 ; // Joker input parameter
  var_arrayControllerObservablePropertyMap.method_searchKey (object->mAttribute_mMasterName, var_masterType, joker_12658, joker_12665, joker_12672, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 348)) ;
  ioArgument_ioTransientDependencyListForGeneration.addAssign_operation (categoryReader_transientFormalArgumentTypeName (var_masterType, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 356)), object->mAttribute_mMasterName.mAttribute_string  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 356)) ;
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
  GALGAS_decoratedObservablePropertyMap var_allObservablePropertyMap = constinArgument_inRootEntityType.reader_mObservablePropertyMap (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 370)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t = constinArgument_inRootEntityType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 371)) ;
  if (constinArgument_inUnifiedTypeMap.reader_count (SOURCE_FILE ("transientAnalysis.galgas", 372)).isValid ()) {
    uint32_t variant_13537 = constinArgument_inUnifiedTypeMap.reader_count (SOURCE_FILE ("transientAnalysis.galgas", 372)).uintValue () ;
    bool loop_13537 = true ;
    while (loop_13537) {
      loop_13537 = var_t.reader_isNull (SOURCE_FILE ("transientAnalysis.galgas", 372)).operator_not (SOURCE_FILE ("transientAnalysis.galgas", 372)).isValid () ;
      if (loop_13537) {
        loop_13537 = var_t.reader_isNull (SOURCE_FILE ("transientAnalysis.galgas", 372)).operator_not (SOURCE_FILE ("transientAnalysis.galgas", 372)).boolValue () ;
      }
      if (loop_13537 && (0 == variant_13537)) {
        loop_13537 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("transientAnalysis.galgas", 372)) ;
      }
      if (loop_13537) {
        variant_13537 -- ;
        cEnumerator_decoratedObservablePropertyMap enumerator_13636 (var_t.reader_mObservablePropertyMap (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 373)), kEnumeration_up) ;
        while (enumerator_13636.hasCurrentObject ()) {
          {
          var_allObservablePropertyMap.modifier_insertKey (enumerator_13636.current_lkey (HERE), enumerator_13636.current_mPropertyType (HERE), enumerator_13636.current_mIsTransient (HERE), enumerator_13636.current_mPropertySignature (HERE), enumerator_13636.current_mIsCollection (HERE), inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 374)) ;
          }
          enumerator_13636.gotoNextObject () ;
        }
        var_t = var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 382)) ;
      }
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_masterType ;
  GALGAS_bool var_isCollection ;
  GALGAS_bool joker_13971 ; // Joker input parameter
  GALGAS_lstring joker_13978 ; // Joker input parameter
  var_allObservablePropertyMap.method_searchKey (object->mAttribute_mMasterName, var_masterType, joker_13971, joker_13978, var_isCollection, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 384)) ;
  GALGAS_bool test_0 = object->mAttribute_mNamesCountOption ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = var_isCollection.operator_not (SOURCE_FILE ("transientAnalysis.galgas", 392)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_location location_2 (object->mAttribute_mMasterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_2, GALGAS_string ("the 'count' option is only allowed for to-many relationships")  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 393)) ;
  }
  ioArgument_ioTransientDependencyListForGeneration.addAssign_operation (categoryReader_transientFormalArgumentTypeName (var_masterType, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 396)), object->mAttribute_mMasterName.mAttribute_string  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 396)) ;
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
  GALGAS_decoratedObservablePropertyMap var_allObservablePropertyMap = constinArgument_inRootEntityType.reader_mObservablePropertyMap (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 410)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_t = constinArgument_inRootEntityType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 411)) ;
  if (constinArgument_inUnifiedTypeMap.reader_count (SOURCE_FILE ("transientAnalysis.galgas", 412)).isValid ()) {
    uint32_t variant_15049 = constinArgument_inUnifiedTypeMap.reader_count (SOURCE_FILE ("transientAnalysis.galgas", 412)).uintValue () ;
    bool loop_15049 = true ;
    while (loop_15049) {
      loop_15049 = var_t.reader_isNull (SOURCE_FILE ("transientAnalysis.galgas", 412)).operator_not (SOURCE_FILE ("transientAnalysis.galgas", 412)).isValid () ;
      if (loop_15049) {
        loop_15049 = var_t.reader_isNull (SOURCE_FILE ("transientAnalysis.galgas", 412)).operator_not (SOURCE_FILE ("transientAnalysis.galgas", 412)).boolValue () ;
      }
      if (loop_15049 && (0 == variant_15049)) {
        loop_15049 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("transientAnalysis.galgas", 412)) ;
      }
      if (loop_15049) {
        variant_15049 -- ;
        cEnumerator_decoratedObservablePropertyMap enumerator_15148 (var_t.reader_mObservablePropertyMap (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 413)), kEnumeration_up) ;
        while (enumerator_15148.hasCurrentObject ()) {
          {
          var_allObservablePropertyMap.modifier_insertKey (enumerator_15148.current_lkey (HERE), enumerator_15148.current_mPropertyType (HERE), enumerator_15148.current_mIsTransient (HERE), enumerator_15148.current_mPropertySignature (HERE), enumerator_15148.current_mIsCollection (HERE), inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 414)) ;
          }
          enumerator_15148.gotoNextObject () ;
        }
        var_t = var_t.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 422)) ;
      }
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_relationshipElementType ;
  GALGAS_bool var_isCollection ;
  GALGAS_bool joker_15502 ; // Joker input parameter
  GALGAS_lstring joker_15509 ; // Joker input parameter
  var_allObservablePropertyMap.method_searchKey (object->mAttribute_mRelationshipName, var_relationshipElementType, joker_15502, joker_15509, var_isCollection, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 424)) ;
  const enumGalgasBool test_0 = var_isCollection.operator_not (SOURCE_FILE ("transientAnalysis.galgas", 431)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mRelationshipName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("this property should be a tomany relationship")  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 432)) ;
  }
  GALGAS_lstring var_masterPropertySignature ;
  GALGAS_unifiedTypeMap_2D_proxy joker_15738_2 ; // Joker input parameter
  GALGAS_bool joker_15738_1 ; // Joker input parameter
  var_relationshipElementType.reader_mObservablePropertyMap (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 434)).method_searchKey (object->mAttribute_mMasterName, joker_15738_2, joker_15738_1, var_masterPropertySignature, var_isCollection, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 434)) ;
  const enumGalgasBool test_2 = var_isCollection.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mMasterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("this property should not be a collection")  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 441)) ;
  }
  ioArgument_ioTransientDependencyListForGeneration.addAssign_operation (GALGAS_string ("NSArray /* [").add_operation (var_relationshipElementType.reader_key (inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 444)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 444)).add_operation (object->mAttribute_mMasterName.reader_string (SOURCE_FILE ("transientAnalysis.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 444)).add_operation (GALGAS_string ("] */"), inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 444)), GALGAS_string ("arrayOf_").add_operation (object->mAttribute_mMasterName.reader_string (SOURCE_FILE ("transientAnalysis.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 444))  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 444)) ;
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
  GALGAS_unifiedTypeMap_2D_proxy joker_16742_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_16742_4 ; // Joker input parameter
  GALGAS_decoratedAttributeMap joker_16742_3 ; // Joker input parameter
  GALGAS_decoratedTransientMap joker_16742_2 ; // Joker input parameter
  GALGAS_decoratedOutletMap joker_16742_1 ; // Joker input parameter
  GALGAS_decoratedEntityRelationshipMap joker_16813_5 ; // Joker input parameter
  GALGAS_actionMap joker_16813_4 ; // Joker input parameter
  GALGAS_lstringlist joker_16813_3 ; // Joker input parameter
  GALGAS_enumConstantMap joker_16813_2 ; // Joker input parameter
  GALGAS_arrayControllerMap joker_16813_1 ; // Joker input parameter
  constinArgument_inUnifiedTypeMap.method_searchKey (object->mAttribute_mPreferencesName, var_kind, joker_16742_5, joker_16742_4, joker_16742_3, joker_16742_2, joker_16742_1, var_observablePropertyMap, joker_16813_5, joker_16813_4, joker_16813_3, joker_16813_2, joker_16813_1, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 458)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_kind.objectCompare (GALGAS_typeKind::constructor_preferencesType (SOURCE_FILE ("transientAnalysis.galgas", 466)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mPreferencesName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("'").add_operation (object->mAttribute_mPreferencesName.reader_string (SOURCE_FILE ("transientAnalysis.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 467)).add_operation (GALGAS_string ("' is not a preference"), inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 467))  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 467)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_masterType ;
  GALGAS_bool joker_17064 ; // Joker input parameter
  GALGAS_lstring joker_17071 ; // Joker input parameter
  GALGAS_bool joker_17114 ; // Joker input parameter
  var_observablePropertyMap.method_searchKey (object->mAttribute_mMasterName, var_masterType, joker_17064, joker_17071, joker_17114, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 470)) ;
  ioArgument_ioTransientDependencyListForGeneration.addAssign_operation (categoryReader_transientFormalArgumentTypeName (var_masterType, inCompiler COMMA_SOURCE_FILE ("transientAnalysis.galgas", 477)), object->mAttribute_mMasterName.mAttribute_string  COMMA_SOURCE_FILE ("transientAnalysis.galgas", 477)) ;
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
  result_outResult = GALGAS_string ("(").add_operation (object->mAttribute_mControllerName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 99)).add_operation (GALGAS_string (" != nil) \? ("), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 99)).add_operation (object->mAttribute_mControllerName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 99)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 99)).add_operation (object->mAttribute_mMasterName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 99)).add_operation (GALGAS_string (")! : false"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 99)) ;
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
                                                                                                                     C_Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const cPtr_transientLocalDependencyForGeneration * object = (const cPtr_transientLocalDependencyForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_transientLocalDependencyForGeneration) ;
  result_outResult = object->mAttribute_mMasterName.mAttribute_string.add_operation (GALGAS_string (".prop"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 111)) ;
  const enumGalgasBool test_0 = object->mAttribute_mNamesCountOption.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult.dotAssign_operation (GALGAS_string (".count")  COMMA_SOURCE_FILE ("transientGeneration.galgas", 113)) ;
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
  result_outResult = GALGAS_string ("g_").add_operation (object->mAttribute_mPreferencesName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 120)).add_operation (GALGAS_string ("!."), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 120)).add_operation (object->mAttribute_mMasterName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 120)).add_operation (GALGAS_string (".prop"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 120)) ;
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
  result_outResult = GALGAS_string ("rootObject.").add_operation (object->mAttribute_mMasterName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 126)).add_operation (GALGAS_string (".prop"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 126)) ;
  const enumGalgasBool test_0 = object->mAttribute_mNamesCountOption.boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult.dotAssign_operation (GALGAS_string (".count")  COMMA_SOURCE_FILE ("transientGeneration.galgas", 128)) ;
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
  result_outResult = GALGAS_string ("rootObject.").add_operation (object->mAttribute_mRelationshipName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 135)).add_operation (GALGAS_string (" /* (rootObject."), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 135)).add_operation (object->mAttribute_mRelationshipName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 135)).add_operation (GALGAS_string (" as NSArray) as ["), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 135)).add_operation (object->mAttribute_mElementType.reader_key (inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 135)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 135)).add_operation (object->mAttribute_mMasterName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 135)).add_operation (GALGAS_string ("] */"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 135)) ;
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
  result_outResult = object->mAttribute_mControllerName.mAttribute_string.add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 148)).add_operation (object->mAttribute_mMasterName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 148)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 148)).add_operation (GALGAS_string (".addObserver"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 148)) ;
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
  result_outResult = object->mAttribute_mMasterName.mAttribute_string.add_operation (GALGAS_string (".addObserver"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 160)) ;
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
  result_outResult = GALGAS_string ("g_").add_operation (object->mAttribute_mPreferencesName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 166)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 166)).add_operation (object->mAttribute_mMasterName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 166)).add_operation (GALGAS_string (".addObserver"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 166)) ;
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
  result_outResult = GALGAS_string ("rootObject.").add_operation (object->mAttribute_mMasterName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 172)).add_operation (GALGAS_string (".addObserver"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 172)) ;
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
  result_outResult = GALGAS_string ("rootObject.").add_operation (object->mAttribute_mRelationshipName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 178)).add_operation (GALGAS_string (".addObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 178)).add_operation (object->mAttribute_mMasterName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 178)) ;
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
  result_outResult = object->mAttribute_mControllerName.mAttribute_string.add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 191)).add_operation (object->mAttribute_mMasterName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 191)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 191)).add_operation (GALGAS_string (".removeObserver"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 191)) ;
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
  result_outResult = object->mAttribute_mMasterName.mAttribute_string.add_operation (GALGAS_string (".removeObserver"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 203)) ;
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
  result_outResult = GALGAS_string ("g_").add_operation (object->mAttribute_mPreferencesName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 209)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 209)).add_operation (object->mAttribute_mMasterName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 209)).add_operation (GALGAS_string (".removeObserver"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 209)) ;
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
  result_outResult = GALGAS_string ("rootObject.").add_operation (object->mAttribute_mMasterName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 215)).add_operation (GALGAS_string (".removeObserver"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 215)) ;
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
  result_outResult = GALGAS_string ("rootObject.").add_operation (object->mAttribute_mMasterName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 221)).add_operation (GALGAS_string (".removeObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 221)).add_operation (object->mAttribute_mRelationshipName.reader_string (SOURCE_FILE ("transientGeneration.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("transientGeneration.galgas", 221)) ;
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

