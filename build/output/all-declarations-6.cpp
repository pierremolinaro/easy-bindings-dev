#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-6.h"


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

GALGAS_string GALGAS_bindingSpecificationListMap_2D_element::getter_key (UNUSED_LOCATION_ARGS) const {
  return mAttribute_key ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationList GALGAS_bindingSpecificationListMap_2D_element::getter_mList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_outletBindingSpecificationModelList_2D_element::GALGAS_outletBindingSpecificationModelList_2D_element (void) :
mAttribute_mModelType (),
mAttribute_mModelShouldBeWritableProperty () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList_2D_element::~ GALGAS_outletBindingSpecificationModelList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList_2D_element::GALGAS_outletBindingSpecificationModelList_2D_element (const GALGAS_typeKind & inOperand0,
                                                                                                              const GALGAS_bool & inOperand1) :
mAttribute_mModelType (inOperand0),
mAttribute_mModelShouldBeWritableProperty (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList_2D_element GALGAS_outletBindingSpecificationModelList_2D_element::constructor_new (const GALGAS_typeKind & inOperand0,
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
    result = mAttribute_mModelType.objectCompare (inOperand.mAttribute_mModelType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelShouldBeWritableProperty.objectCompare (inOperand.mAttribute_mModelShouldBeWritableProperty) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletBindingSpecificationModelList_2D_element::isValid (void) const {
  return mAttribute_mModelType.isValid () && mAttribute_mModelShouldBeWritableProperty.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingSpecificationModelList_2D_element::drop (void) {
  mAttribute_mModelType.drop () ;
  mAttribute_mModelShouldBeWritableProperty.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingSpecificationModelList_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @outletBindingSpecificationModelList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mModelType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelShouldBeWritableProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_outletBindingSpecificationModelList_2D_element::getter_mModelType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletBindingSpecificationModelList_2D_element::getter_mModelShouldBeWritableProperty (UNUSED_LOCATION_ARGS) const {
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

GALGAS_outletBindingModelList_2D_element::GALGAS_outletBindingModelList_2D_element (void) :
mAttribute_mModelType (),
mAttribute_mKind (),
mAttribute_mErrorLocation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingModelList_2D_element::~ GALGAS_outletBindingModelList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingModelList_2D_element::GALGAS_outletBindingModelList_2D_element (const GALGAS_typeKind & inOperand0,
                                                                                    const GALGAS_propertyKind & inOperand1,
                                                                                    const GALGAS_location & inOperand2) :
mAttribute_mModelType (inOperand0),
mAttribute_mKind (inOperand1),
mAttribute_mErrorLocation (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletBindingModelList_2D_element::objectCompare (const GALGAS_outletBindingModelList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mModelType.objectCompare (inOperand.mAttribute_mModelType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mKind.objectCompare (inOperand.mAttribute_mKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mErrorLocation.objectCompare (inOperand.mAttribute_mErrorLocation) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletBindingModelList_2D_element::isValid (void) const {
  return mAttribute_mModelType.isValid () && mAttribute_mKind.isValid () && mAttribute_mErrorLocation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingModelList_2D_element::drop (void) {
  mAttribute_mModelType.drop () ;
  mAttribute_mKind.drop () ;
  mAttribute_mErrorLocation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingModelList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @outletBindingModelList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mModelType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mErrorLocation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_outletBindingModelList_2D_element::getter_mModelType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyKind GALGAS_outletBindingModelList_2D_element::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location GALGAS_outletBindingModelList_2D_element::getter_mErrorLocation (UNUSED_LOCATION_ARGS) const {
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

GALGAS_tableViewBindingGenerationList_2D_element::GALGAS_tableViewBindingGenerationList_2D_element (void) :
mAttribute_mTableValueBindingOutletName (),
mAttribute_mTableValueBindingControllerName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewBindingGenerationList_2D_element::~ GALGAS_tableViewBindingGenerationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewBindingGenerationList_2D_element::GALGAS_tableViewBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_string & inOperand1) :
mAttribute_mTableValueBindingOutletName (inOperand0),
mAttribute_mTableValueBindingControllerName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewBindingGenerationList_2D_element GALGAS_tableViewBindingGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_tableViewBindingGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewBindingGenerationList_2D_element GALGAS_tableViewBindingGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewBindingGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_tableViewBindingGenerationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_tableViewBindingGenerationList_2D_element::objectCompare (const GALGAS_tableViewBindingGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTableValueBindingOutletName.objectCompare (inOperand.mAttribute_mTableValueBindingOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTableValueBindingControllerName.objectCompare (inOperand.mAttribute_mTableValueBindingControllerName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_tableViewBindingGenerationList_2D_element::isValid (void) const {
  return mAttribute_mTableValueBindingOutletName.isValid () && mAttribute_mTableValueBindingControllerName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tableViewBindingGenerationList_2D_element::drop (void) {
  mAttribute_mTableValueBindingOutletName.drop () ;
  mAttribute_mTableValueBindingControllerName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_tableViewBindingGenerationList_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @tableViewBindingGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTableValueBindingOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTableValueBindingControllerName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_tableViewBindingGenerationList_2D_element::getter_mTableValueBindingOutletName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTableValueBindingOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_tableViewBindingGenerationList_2D_element::getter_mTableValueBindingControllerName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTableValueBindingControllerName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @tableViewBindingGenerationList-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2D_element ("tableViewBindingGenerationList-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_tableViewBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_tableViewBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::getter_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::getter_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_regularBindingsGenerationList_2D_element::getter_mBoundObjectStringList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBoundObjectStringList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_regularBindingsGenerationList_2D_element::getter_mBindingOptionsString (UNUSED_LOCATION_ARGS) const {
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

GALGAS_actionBindingListForGeneration_2D_element::GALGAS_actionBindingListForGeneration_2D_element (void) :
mAttribute_mOutletName (),
mAttribute_mTargetName (),
mAttribute_mActionName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration_2D_element::~ GALGAS_actionBindingListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration_2D_element::GALGAS_actionBindingListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_string & inOperand1,
                                                                                                    const GALGAS_string & inOperand2) :
mAttribute_mOutletName (inOperand0),
mAttribute_mTargetName (inOperand1),
mAttribute_mActionName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration_2D_element GALGAS_actionBindingListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_actionBindingListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration_2D_element GALGAS_actionBindingListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actionBindingListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_actionBindingListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_actionBindingListForGeneration_2D_element::objectCompare (const GALGAS_actionBindingListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOutletName.objectCompare (inOperand.mAttribute_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetName.objectCompare (inOperand.mAttribute_mTargetName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mActionName.objectCompare (inOperand.mAttribute_mActionName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_actionBindingListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mOutletName.isValid () && mAttribute_mTargetName.isValid () && mAttribute_mActionName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actionBindingListForGeneration_2D_element::drop (void) {
  mAttribute_mOutletName.drop () ;
  mAttribute_mTargetName.drop () ;
  mAttribute_mActionName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actionBindingListForGeneration_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @actionBindingListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mActionName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::getter_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::getter_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_actionBindingListForGeneration_2D_element::getter_mActionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @actionBindingListForGeneration-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionBindingListForGeneration_2D_element ("actionBindingListForGeneration-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actionBindingListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionBindingListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actionBindingListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionBindingListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration_2D_element::GALGAS_transientDefinitionListForGeneration_2D_element (void) :
mAttribute_mOwnerName (),
mAttribute_mTransientName (),
mAttribute_mTransientType (),
mAttribute_mDependencyList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration_2D_element::~ GALGAS_transientDefinitionListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration_2D_element::GALGAS_transientDefinitionListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                const GALGAS_typeKind & inOperand2,
                                                                                                                const GALGAS_transientDependencyListForGeneration & inOperand3) :
mAttribute_mOwnerName (inOperand0),
mAttribute_mTransientName (inOperand1),
mAttribute_mTransientType (inOperand2),
mAttribute_mDependencyList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration_2D_element GALGAS_transientDefinitionListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                                const GALGAS_typeKind & inOperand2,
                                                                                                                                const GALGAS_transientDependencyListForGeneration & inOperand3 
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
    result = mAttribute_mOwnerName.objectCompare (inOperand.mAttribute_mOwnerName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransientName.objectCompare (inOperand.mAttribute_mTransientName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransientType.objectCompare (inOperand.mAttribute_mTransientType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDependencyList.objectCompare (inOperand.mAttribute_mDependencyList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_transientDefinitionListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mOwnerName.isValid () && mAttribute_mTransientName.isValid () && mAttribute_mTransientType.isValid () && mAttribute_mDependencyList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientDefinitionListForGeneration_2D_element::drop (void) {
  mAttribute_mOwnerName.drop () ;
  mAttribute_mTransientName.drop () ;
  mAttribute_mTransientType.drop () ;
  mAttribute_mDependencyList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientDefinitionListForGeneration_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @transientDefinitionListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOwnerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransientName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransientType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDependencyList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_transientDefinitionListForGeneration_2D_element::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOwnerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_transientDefinitionListForGeneration_2D_element::getter_mTransientName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_transientDefinitionListForGeneration_2D_element::getter_mTransientType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDependencyListForGeneration GALGAS_transientDefinitionListForGeneration_2D_element::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_simpleStoredPropertyListForGeneration_2D_element::GALGAS_simpleStoredPropertyListForGeneration_2D_element (void) :
mAttribute_mType (),
mAttribute_mStoredPropertyName (),
mAttribute_mDefaultValueInSwift (),
mAttribute_mNeedsValidation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyListForGeneration_2D_element::~ GALGAS_simpleStoredPropertyListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyListForGeneration_2D_element::GALGAS_simpleStoredPropertyListForGeneration_2D_element (const GALGAS_typeKind & inOperand0,
                                                                                                                  const GALGAS_string & inOperand1,
                                                                                                                  const GALGAS_string & inOperand2,
                                                                                                                  const GALGAS_bool & inOperand3) :
mAttribute_mType (inOperand0),
mAttribute_mStoredPropertyName (inOperand1),
mAttribute_mDefaultValueInSwift (inOperand2),
mAttribute_mNeedsValidation (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_simpleStoredPropertyListForGeneration_2D_element::objectCompare (const GALGAS_simpleStoredPropertyListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStoredPropertyName.objectCompare (inOperand.mAttribute_mStoredPropertyName) ;
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

bool GALGAS_simpleStoredPropertyListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mType.isValid () && mAttribute_mStoredPropertyName.isValid () && mAttribute_mDefaultValueInSwift.isValid () && mAttribute_mNeedsValidation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_simpleStoredPropertyListForGeneration_2D_element::drop (void) {
  mAttribute_mType.drop () ;
  mAttribute_mStoredPropertyName.drop () ;
  mAttribute_mDefaultValueInSwift.drop () ;
  mAttribute_mNeedsValidation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_simpleStoredPropertyListForGeneration_2D_element::description (C_String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString << "<struct @simpleStoredPropertyListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStoredPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDefaultValueInSwift.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNeedsValidation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_simpleStoredPropertyListForGeneration_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_simpleStoredPropertyListForGeneration_2D_element::getter_mStoredPropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStoredPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_simpleStoredPropertyListForGeneration_2D_element::getter_mDefaultValueInSwift (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefaultValueInSwift ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_simpleStoredPropertyListForGeneration_2D_element::getter_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNeedsValidation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @simpleStoredPropertyListForGeneration-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_simpleStoredPropertyListForGeneration_2D_element ("simpleStoredPropertyListForGeneration-element",
                                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_simpleStoredPropertyListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleStoredPropertyListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_simpleStoredPropertyListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_simpleStoredPropertyListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storedArrayPropertyListForGeneration_2D_element::GALGAS_storedArrayPropertyListForGeneration_2D_element (void) :
mAttribute_mElementClassName (),
mAttribute_mStoredPropertyName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storedArrayPropertyListForGeneration_2D_element::~ GALGAS_storedArrayPropertyListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storedArrayPropertyListForGeneration_2D_element::GALGAS_storedArrayPropertyListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS_string & inOperand1) :
mAttribute_mElementClassName (inOperand0),
mAttribute_mStoredPropertyName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storedArrayPropertyListForGeneration_2D_element GALGAS_storedArrayPropertyListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_storedArrayPropertyListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                 GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storedArrayPropertyListForGeneration_2D_element GALGAS_storedArrayPropertyListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                const GALGAS_string & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_storedArrayPropertyListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_storedArrayPropertyListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_storedArrayPropertyListForGeneration_2D_element::objectCompare (const GALGAS_storedArrayPropertyListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mElementClassName.objectCompare (inOperand.mAttribute_mElementClassName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStoredPropertyName.objectCompare (inOperand.mAttribute_mStoredPropertyName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_storedArrayPropertyListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mElementClassName.isValid () && mAttribute_mStoredPropertyName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_storedArrayPropertyListForGeneration_2D_element::drop (void) {
  mAttribute_mElementClassName.drop () ;
  mAttribute_mStoredPropertyName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_storedArrayPropertyListForGeneration_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @storedArrayPropertyListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mElementClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStoredPropertyName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_storedArrayPropertyListForGeneration_2D_element::getter_mElementClassName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElementClassName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_storedArrayPropertyListForGeneration_2D_element::getter_mStoredPropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStoredPropertyName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @storedArrayPropertyListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storedArrayPropertyListForGeneration_2D_element ("storedArrayPropertyListForGeneration-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_storedArrayPropertyListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storedArrayPropertyListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_storedArrayPropertyListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storedArrayPropertyListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration_2D_element::GALGAS_validationStubRoutineListForGeneration_2D_element (void) :
mAttribute_mObjectTypeName (),
mAttribute_mModelName (),
mAttribute_mModelTypeName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration_2D_element::~ GALGAS_validationStubRoutineListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration_2D_element::GALGAS_validationStubRoutineListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2) :
mAttribute_mObjectTypeName (inOperand0),
mAttribute_mModelName (inOperand1),
mAttribute_mModelTypeName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration_2D_element GALGAS_validationStubRoutineListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_validationStubRoutineListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_validationStubRoutineListForGeneration_2D_element::objectCompare (const GALGAS_validationStubRoutineListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mObjectTypeName.objectCompare (inOperand.mAttribute_mObjectTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelName.objectCompare (inOperand.mAttribute_mModelName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelTypeName.objectCompare (inOperand.mAttribute_mModelTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_validationStubRoutineListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mObjectTypeName.isValid () && mAttribute_mModelName.isValid () && mAttribute_mModelTypeName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_validationStubRoutineListForGeneration_2D_element::drop (void) {
  mAttribute_mObjectTypeName.drop () ;
  mAttribute_mModelName.drop () ;
  mAttribute_mModelTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_validationStubRoutineListForGeneration_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @validationStubRoutineListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mObjectTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_validationStubRoutineListForGeneration_2D_element::getter_mObjectTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObjectTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_validationStubRoutineListForGeneration_2D_element::getter_mModelName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_validationStubRoutineListForGeneration_2D_element::getter_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelTypeName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @validationStubRoutineListForGeneration-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2D_element ("validationStubRoutineListForGeneration-element",
                                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_validationStubRoutineListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_validationStubRoutineListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_validationStubRoutineListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionListForGeneration_2D_element::GALGAS_actionListForGeneration_2D_element (void) :
mAttribute_mClassName (),
mAttribute_mActionName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionListForGeneration_2D_element::~ GALGAS_actionListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionListForGeneration_2D_element::GALGAS_actionListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                      const GALGAS_string & inOperand1) :
mAttribute_mClassName (inOperand0),
mAttribute_mActionName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionListForGeneration_2D_element GALGAS_actionListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_actionListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                    GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionListForGeneration_2D_element GALGAS_actionListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                      const GALGAS_string & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_actionListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_actionListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_actionListForGeneration_2D_element::objectCompare (const GALGAS_actionListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mClassName.objectCompare (inOperand.mAttribute_mClassName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mActionName.objectCompare (inOperand.mAttribute_mActionName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_actionListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mClassName.isValid () && mAttribute_mActionName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actionListForGeneration_2D_element::drop (void) {
  mAttribute_mClassName.drop () ;
  mAttribute_mActionName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_actionListForGeneration_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @actionListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mActionName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_actionListForGeneration_2D_element::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mClassName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_actionListForGeneration_2D_element::getter_mActionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @actionListForGeneration-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionListForGeneration_2D_element ("actionListForGeneration-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_actionListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_actionListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList_2D_element::GALGAS_multipleBindingGenerationList_2D_element (void) :
mAttribute_mOutletName (),
mAttribute_mBindingName (),
mAttribute_mBoundObjectExpression () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList_2D_element::~ GALGAS_multipleBindingGenerationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList_2D_element::GALGAS_multipleBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_string & inOperand1,
                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2) :
mAttribute_mOutletName (inOperand0),
mAttribute_mBindingName (inOperand1),
mAttribute_mBoundObjectExpression (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_multipleBindingGenerationList_2D_element::objectCompare (const GALGAS_multipleBindingGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOutletName.objectCompare (inOperand.mAttribute_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingName.objectCompare (inOperand.mAttribute_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBoundObjectExpression.objectCompare (inOperand.mAttribute_mBoundObjectExpression) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_multipleBindingGenerationList_2D_element::isValid (void) const {
  return mAttribute_mOutletName.isValid () && mAttribute_mBindingName.isValid () && mAttribute_mBoundObjectExpression.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_multipleBindingGenerationList_2D_element::drop (void) {
  mAttribute_mOutletName.drop () ;
  mAttribute_mBindingName.drop () ;
  mAttribute_mBoundObjectExpression.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_multipleBindingGenerationList_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @multipleBindingGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBoundObjectExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_multipleBindingGenerationList_2D_element::getter_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_multipleBindingGenerationList_2D_element::getter_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractBooleanMultipleBindingExpressionForGeneration GALGAS_multipleBindingGenerationList_2D_element::getter_mBoundObjectExpression (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBoundObjectExpression ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @multipleBindingGenerationList-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleBindingGenerationList_2D_element ("multipleBindingGenerationList-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_multipleBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingGenerationList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_multipleBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration_2D_element::GALGAS_arrayControllerForGeneration_2D_element (void) :
mAttribute_mOwnerName (),
mAttribute_mControllerName (),
mAttribute_mArrayControllerFilterListForGeneration (),
mAttribute_mModelString (),
mAttribute_mArrayControllerBoundColumnListForGeneration (),
mAttribute_mModelTypeName (),
mAttribute_mModelTypeName_32_ (),
mAttribute_mModelKind (),
mAttribute_mElementTypeName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration_2D_element::~ GALGAS_arrayControllerForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration_2D_element::GALGAS_arrayControllerForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                const GALGAS_string & inOperand1,
                                                                                                const GALGAS_arrayControllerFilterListForGeneration & inOperand2,
                                                                                                const GALGAS_string & inOperand3,
                                                                                                const GALGAS_arrayControllerBoundColumnListForGeneration & inOperand4,
                                                                                                const GALGAS_string & inOperand5,
                                                                                                const GALGAS_string & inOperand6,
                                                                                                const GALGAS_arrayControllerModelKind & inOperand7,
                                                                                                const GALGAS_string & inOperand8) :
mAttribute_mOwnerName (inOperand0),
mAttribute_mControllerName (inOperand1),
mAttribute_mArrayControllerFilterListForGeneration (inOperand2),
mAttribute_mModelString (inOperand3),
mAttribute_mArrayControllerBoundColumnListForGeneration (inOperand4),
mAttribute_mModelTypeName (inOperand5),
mAttribute_mModelTypeName_32_ (inOperand6),
mAttribute_mModelKind (inOperand7),
mAttribute_mElementTypeName (inOperand8) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration_2D_element GALGAS_arrayControllerForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                const GALGAS_arrayControllerFilterListForGeneration & inOperand2,
                                                                                                                const GALGAS_string & inOperand3,
                                                                                                                const GALGAS_arrayControllerBoundColumnListForGeneration & inOperand4,
                                                                                                                const GALGAS_string & inOperand5,
                                                                                                                const GALGAS_string & inOperand6,
                                                                                                                const GALGAS_arrayControllerModelKind & inOperand7,
                                                                                                                const GALGAS_string & inOperand8 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid ()) {
    result = GALGAS_arrayControllerForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_arrayControllerForGeneration_2D_element::objectCompare (const GALGAS_arrayControllerForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOwnerName.objectCompare (inOperand.mAttribute_mOwnerName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mControllerName.objectCompare (inOperand.mAttribute_mControllerName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArrayControllerFilterListForGeneration.objectCompare (inOperand.mAttribute_mArrayControllerFilterListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelString.objectCompare (inOperand.mAttribute_mModelString) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArrayControllerBoundColumnListForGeneration.objectCompare (inOperand.mAttribute_mArrayControllerBoundColumnListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelTypeName.objectCompare (inOperand.mAttribute_mModelTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelTypeName_32_.objectCompare (inOperand.mAttribute_mModelTypeName_32_) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mModelKind.objectCompare (inOperand.mAttribute_mModelKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mElementTypeName.objectCompare (inOperand.mAttribute_mElementTypeName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_arrayControllerForGeneration_2D_element::isValid (void) const {
  return mAttribute_mOwnerName.isValid () && mAttribute_mControllerName.isValid () && mAttribute_mArrayControllerFilterListForGeneration.isValid () && mAttribute_mModelString.isValid () && mAttribute_mArrayControllerBoundColumnListForGeneration.isValid () && mAttribute_mModelTypeName.isValid () && mAttribute_mModelTypeName_32_.isValid () && mAttribute_mModelKind.isValid () && mAttribute_mElementTypeName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerForGeneration_2D_element::drop (void) {
  mAttribute_mOwnerName.drop () ;
  mAttribute_mControllerName.drop () ;
  mAttribute_mArrayControllerFilterListForGeneration.drop () ;
  mAttribute_mModelString.drop () ;
  mAttribute_mArrayControllerBoundColumnListForGeneration.drop () ;
  mAttribute_mModelTypeName.drop () ;
  mAttribute_mModelTypeName_32_.drop () ;
  mAttribute_mModelKind.drop () ;
  mAttribute_mElementTypeName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerForGeneration_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @arrayControllerForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOwnerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mControllerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArrayControllerFilterListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelString.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArrayControllerBoundColumnListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelTypeName_32_.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mModelKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mElementTypeName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOwnerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mControllerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration GALGAS_arrayControllerForGeneration_2D_element::getter_mArrayControllerFilterListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArrayControllerFilterListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::getter_mModelString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelString ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration GALGAS_arrayControllerForGeneration_2D_element::getter_mArrayControllerBoundColumnListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArrayControllerBoundColumnListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::getter_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::getter_mModelTypeName_32_ (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelTypeName_32_ ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerModelKind GALGAS_arrayControllerForGeneration_2D_element::getter_mModelKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerForGeneration_2D_element::getter_mElementTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElementTypeName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @arrayControllerForGeneration-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerForGeneration_2D_element ("arrayControllerForGeneration-element",
                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration_2D_element::GALGAS_arrayControllerFilterListForGeneration_2D_element (void) :
mAttribute_mFilterPropertyName (),
mAttribute_mFilterPropertyType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration_2D_element::~ GALGAS_arrayControllerFilterListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration_2D_element::GALGAS_arrayControllerFilterListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_typeKind & inOperand1) :
mAttribute_mFilterPropertyName (inOperand0),
mAttribute_mFilterPropertyType (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerFilterListForGeneration_2D_element GALGAS_arrayControllerFilterListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                    const GALGAS_typeKind & inOperand1 
                                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerFilterListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_arrayControllerFilterListForGeneration_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_arrayControllerFilterListForGeneration_2D_element::objectCompare (const GALGAS_arrayControllerFilterListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFilterPropertyName.objectCompare (inOperand.mAttribute_mFilterPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFilterPropertyType.objectCompare (inOperand.mAttribute_mFilterPropertyType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_arrayControllerFilterListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mFilterPropertyName.isValid () && mAttribute_mFilterPropertyType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerFilterListForGeneration_2D_element::drop (void) {
  mAttribute_mFilterPropertyName.drop () ;
  mAttribute_mFilterPropertyType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerFilterListForGeneration_2D_element::description (C_String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString << "<struct @arrayControllerFilterListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFilterPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFilterPropertyType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerFilterListForGeneration_2D_element::getter_mFilterPropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilterPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_arrayControllerFilterListForGeneration_2D_element::getter_mFilterPropertyType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFilterPropertyType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                @arrayControllerFilterListForGeneration-element type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerFilterListForGeneration_2D_element ("arrayControllerFilterListForGeneration-element",
                                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerFilterListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerFilterListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerFilterListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerFilterListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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
                                                                                                                              const GALGAS_typeKind & inOperand3,
                                                                                                                              const GALGAS_bindingOptionList & inOperand4) :
mAttribute_mColumnName (inOperand0),
mAttribute_mColumnOutletTypeName (inOperand1),
mAttribute_mObservablePropertyName (inOperand2),
mAttribute_mPropertyType (inOperand3),
mAttribute_mBindingOptionList (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListForGeneration_2D_element GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                              const GALGAS_string & inOperand1,
                                                                                                                                              const GALGAS_string & inOperand2,
                                                                                                                                              const GALGAS_typeKind & inOperand3,
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

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::getter_mColumnName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mColumnName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::getter_mColumnOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mColumnOutletTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::getter_mObservablePropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservablePropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::getter_mPropertyType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList GALGAS_arrayControllerBoundColumnListForGeneration_2D_element::getter_mBindingOptionList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_selectionControllerForGeneration_2D_element::GALGAS_selectionControllerForGeneration_2D_element (void) :
mAttribute_mOwnerName (),
mAttribute_mSelectionControllerName (),
mAttribute_mBoundControllerName (),
mAttribute_mBoundControllerPropertyName (),
mAttribute_mSelectionTypeName (),
mAttribute_mSelectionObservablePropertyMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectionControllerForGeneration_2D_element::~ GALGAS_selectionControllerForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectionControllerForGeneration_2D_element::GALGAS_selectionControllerForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                        const GALGAS_string & inOperand1,
                                                                                                        const GALGAS_string & inOperand2,
                                                                                                        const GALGAS_string & inOperand3,
                                                                                                        const GALGAS_string & inOperand4,
                                                                                                        const GALGAS_observablePropertyMap & inOperand5) :
mAttribute_mOwnerName (inOperand0),
mAttribute_mSelectionControllerName (inOperand1),
mAttribute_mBoundControllerName (inOperand2),
mAttribute_mBoundControllerPropertyName (inOperand3),
mAttribute_mSelectionTypeName (inOperand4),
mAttribute_mSelectionObservablePropertyMap (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectionControllerForGeneration_2D_element GALGAS_selectionControllerForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_selectionControllerForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_string::constructor_default (HERE),
                                                             GALGAS_observablePropertyMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_selectionControllerForGeneration_2D_element::objectCompare (const GALGAS_selectionControllerForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOwnerName.objectCompare (inOperand.mAttribute_mOwnerName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelectionControllerName.objectCompare (inOperand.mAttribute_mSelectionControllerName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBoundControllerName.objectCompare (inOperand.mAttribute_mBoundControllerName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBoundControllerPropertyName.objectCompare (inOperand.mAttribute_mBoundControllerPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelectionTypeName.objectCompare (inOperand.mAttribute_mSelectionTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelectionObservablePropertyMap.objectCompare (inOperand.mAttribute_mSelectionObservablePropertyMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_selectionControllerForGeneration_2D_element::isValid (void) const {
  return mAttribute_mOwnerName.isValid () && mAttribute_mSelectionControllerName.isValid () && mAttribute_mBoundControllerName.isValid () && mAttribute_mBoundControllerPropertyName.isValid () && mAttribute_mSelectionTypeName.isValid () && mAttribute_mSelectionObservablePropertyMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_selectionControllerForGeneration_2D_element::drop (void) {
  mAttribute_mOwnerName.drop () ;
  mAttribute_mSelectionControllerName.drop () ;
  mAttribute_mBoundControllerName.drop () ;
  mAttribute_mBoundControllerPropertyName.drop () ;
  mAttribute_mSelectionTypeName.drop () ;
  mAttribute_mSelectionObservablePropertyMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_selectionControllerForGeneration_2D_element::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "<struct @selectionControllerForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOwnerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelectionControllerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBoundControllerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBoundControllerPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelectionTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelectionObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOwnerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mSelectionControllerName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelectionControllerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mBoundControllerName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBoundControllerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mBoundControllerPropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBoundControllerPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_selectionControllerForGeneration_2D_element::getter_mSelectionTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelectionTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap GALGAS_selectionControllerForGeneration_2D_element::getter_mSelectionObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelectionObservablePropertyMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   @selectionControllerForGeneration-element type                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectionControllerForGeneration_2D_element ("selectionControllerForGeneration-element",
                                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_selectionControllerForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_selectionControllerForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList_2D_element::GALGAS_defaultValueList_2D_element (void) :
mAttribute_mDefaultValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList_2D_element::~ GALGAS_defaultValueList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList_2D_element::GALGAS_defaultValueList_2D_element (const GALGAS_abstractDefaultValue & inOperand0) :
mAttribute_mDefaultValue (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList_2D_element GALGAS_defaultValueList_2D_element::constructor_new (const GALGAS_abstractDefaultValue & inOperand0 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_defaultValueList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_defaultValueList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_defaultValueList_2D_element::objectCompare (const GALGAS_defaultValueList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDefaultValue.objectCompare (inOperand.mAttribute_mDefaultValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_defaultValueList_2D_element::isValid (void) const {
  return mAttribute_mDefaultValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList_2D_element::drop (void) {
  mAttribute_mDefaultValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @defaultValueList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDefaultValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue GALGAS_defaultValueList_2D_element::getter_mDefaultValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefaultValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @defaultValueList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_defaultValueList_2D_element ("defaultValueList-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_defaultValueList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_defaultValueList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_defaultValueList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_defaultValueList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList_2D_element::GALGAS_typeKindList_2D_element (void) :
mAttribute_mType () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList_2D_element::~ GALGAS_typeKindList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList_2D_element::GALGAS_typeKindList_2D_element (const GALGAS_typeKind & inOperand0) :
mAttribute_mType (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKindList_2D_element GALGAS_typeKindList_2D_element::constructor_new (const GALGAS_typeKind & inOperand0 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_typeKindList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_typeKindList_2D_element::objectCompare (const GALGAS_typeKindList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_typeKindList_2D_element::isValid (void) const {
  return mAttribute_mType.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindList_2D_element::drop (void) {
  mAttribute_mType.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_typeKindList_2D_element::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "<struct @typeKindList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mType.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_typeKindList_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @typeKindList-element type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeKindList_2D_element ("typeKindList-element",
                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_typeKindList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_typeKindList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKindList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (void) :
mAttribute_mGroupReference (),
mAttribute_mGroupName (),
mAttribute_mGroupPath (),
mAttribute_mChildrenRefs () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element::~ GALGAS_XCodeGroupList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (const GALGAS_string & inOperand0,
                                                                    const GALGAS_string & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_stringlist & inOperand3) :
mAttribute_mGroupReference (inOperand0),
mAttribute_mGroupName (inOperand1),
mAttribute_mGroupPath (inOperand2),
mAttribute_mChildrenRefs (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeGroupList_2D_element (GALGAS_string::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_stringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_XCodeGroupList_2D_element::objectCompare (const GALGAS_XCodeGroupList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mGroupReference.objectCompare (inOperand.mAttribute_mGroupReference) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGroupName.objectCompare (inOperand.mAttribute_mGroupName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGroupPath.objectCompare (inOperand.mAttribute_mGroupPath) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mChildrenRefs.objectCompare (inOperand.mAttribute_mChildrenRefs) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_XCodeGroupList_2D_element::isValid (void) const {
  return mAttribute_mGroupReference.isValid () && mAttribute_mGroupName.isValid () && mAttribute_mGroupPath.isValid () && mAttribute_mChildrenRefs.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList_2D_element::drop (void) {
  mAttribute_mGroupReference.drop () ;
  mAttribute_mGroupName.drop () ;
  mAttribute_mGroupPath.drop () ;
  mAttribute_mChildrenRefs.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeGroupList_2D_element::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "<struct @XCodeGroupList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mGroupReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGroupName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGroupPath.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mChildrenRefs.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupReference (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGroupReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGroupName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeGroupList_2D_element::getter_mGroupPath (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGroupPath ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeGroupList_2D_element::getter_mChildrenRefs (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mChildrenRefs ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @XCodeGroupList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ("XCodeGroupList-element",
                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_XCodeGroupList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_XCodeGroupList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeGroupList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList_2D_element::GALGAS_XCodeToolTargetList_2D_element (void) :
mAttribute_mTargetRef (),
mAttribute_mTargetName (),
mAttribute_mProductFileReference (),
mAttribute_mProductFileName (),
mAttribute_mBuildPhaseRefList (),
mAttribute_mBuildPhaseRef (),
mAttribute_mBuildConfigurationListRef (),
mAttribute_mBuildConfigurationSettingList (),
mAttribute_mBuildConfigurationRef (),
mAttribute_mFrameworksFileRefList (),
mAttribute_mFrameworkBuildPhaseRef () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList_2D_element::~ GALGAS_XCodeToolTargetList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

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
mAttribute_mTargetRef (inOperand0),
mAttribute_mTargetName (inOperand1),
mAttribute_mProductFileReference (inOperand2),
mAttribute_mProductFileName (inOperand3),
mAttribute_mBuildPhaseRefList (inOperand4),
mAttribute_mBuildPhaseRef (inOperand5),
mAttribute_mBuildConfigurationListRef (inOperand6),
mAttribute_mBuildConfigurationSettingList (inOperand7),
mAttribute_mBuildConfigurationRef (inOperand8),
mAttribute_mFrameworksFileRefList (inOperand9),
mAttribute_mFrameworkBuildPhaseRef (inOperand10) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_XCodeToolTargetList_2D_element::objectCompare (const GALGAS_XCodeToolTargetList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTargetRef.objectCompare (inOperand.mAttribute_mTargetRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetName.objectCompare (inOperand.mAttribute_mTargetName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProductFileReference.objectCompare (inOperand.mAttribute_mProductFileReference) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProductFileName.objectCompare (inOperand.mAttribute_mProductFileName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildPhaseRefList.objectCompare (inOperand.mAttribute_mBuildPhaseRefList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildPhaseRef.objectCompare (inOperand.mAttribute_mBuildPhaseRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildConfigurationListRef.objectCompare (inOperand.mAttribute_mBuildConfigurationListRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildConfigurationSettingList.objectCompare (inOperand.mAttribute_mBuildConfigurationSettingList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildConfigurationRef.objectCompare (inOperand.mAttribute_mBuildConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFrameworksFileRefList.objectCompare (inOperand.mAttribute_mFrameworksFileRefList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFrameworkBuildPhaseRef.objectCompare (inOperand.mAttribute_mFrameworkBuildPhaseRef) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_XCodeToolTargetList_2D_element::isValid (void) const {
  return mAttribute_mTargetRef.isValid () && mAttribute_mTargetName.isValid () && mAttribute_mProductFileReference.isValid () && mAttribute_mProductFileName.isValid () && mAttribute_mBuildPhaseRefList.isValid () && mAttribute_mBuildPhaseRef.isValid () && mAttribute_mBuildConfigurationListRef.isValid () && mAttribute_mBuildConfigurationSettingList.isValid () && mAttribute_mBuildConfigurationRef.isValid () && mAttribute_mFrameworksFileRefList.isValid () && mAttribute_mFrameworkBuildPhaseRef.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList_2D_element::drop (void) {
  mAttribute_mTargetRef.drop () ;
  mAttribute_mTargetName.drop () ;
  mAttribute_mProductFileReference.drop () ;
  mAttribute_mProductFileName.drop () ;
  mAttribute_mBuildPhaseRefList.drop () ;
  mAttribute_mBuildPhaseRef.drop () ;
  mAttribute_mBuildConfigurationListRef.drop () ;
  mAttribute_mBuildConfigurationSettingList.drop () ;
  mAttribute_mBuildConfigurationRef.drop () ;
  mAttribute_mFrameworksFileRefList.drop () ;
  mAttribute_mFrameworkBuildPhaseRef.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeToolTargetList_2D_element::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "<struct @XCodeToolTargetList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTargetRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProductFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mTargetRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mProductFileReference (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProductFileReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mProductFileName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProductFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mBuildPhaseRefList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildPhaseRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildPhaseRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationListRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildConfigurationListRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationSettingList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildConfigurationSettingList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mBuildConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildConfigurationRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeToolTargetList_2D_element::getter_mFrameworksFileRefList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFrameworksFileRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeToolTargetList_2D_element::getter_mFrameworkBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFrameworkBuildPhaseRef ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @XCodeToolTargetList-element type                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ("XCodeToolTargetList-element",
                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_XCodeToolTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_XCodeToolTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeToolTargetList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList_2D_element::GALGAS_XCodeAppTargetList_2D_element (void) :
mAttribute_mTargetRef (),
mAttribute_mTargetName (),
mAttribute_mProductFileReference (),
mAttribute_mProductFileName (),
mAttribute_mBuildPhaseRefList (),
mAttribute_mBuildPhaseRef (),
mAttribute_mBuildConfigurationListRef (),
mAttribute_mBuildConfigurationSettingList (),
mAttribute_mBuildConfigurationRef (),
mAttribute_mFrameworksFileRefList (),
mAttribute_mFrameworkBuildPhaseRef (),
mAttribute_mDependentTargets (),
mAttribute_mResourceBuildRef (),
mAttribute_mResourceFileBuildRefs (),
mAttribute_mInfoPListFile () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList_2D_element::~ GALGAS_XCodeAppTargetList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

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
mAttribute_mTargetRef (inOperand0),
mAttribute_mTargetName (inOperand1),
mAttribute_mProductFileReference (inOperand2),
mAttribute_mProductFileName (inOperand3),
mAttribute_mBuildPhaseRefList (inOperand4),
mAttribute_mBuildPhaseRef (inOperand5),
mAttribute_mBuildConfigurationListRef (inOperand6),
mAttribute_mBuildConfigurationSettingList (inOperand7),
mAttribute_mBuildConfigurationRef (inOperand8),
mAttribute_mFrameworksFileRefList (inOperand9),
mAttribute_mFrameworkBuildPhaseRef (inOperand10),
mAttribute_mDependentTargets (inOperand11),
mAttribute_mResourceBuildRef (inOperand12),
mAttribute_mResourceFileBuildRefs (inOperand13),
mAttribute_mInfoPListFile (inOperand14) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_XCodeAppTargetList_2D_element::objectCompare (const GALGAS_XCodeAppTargetList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mTargetRef.objectCompare (inOperand.mAttribute_mTargetRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTargetName.objectCompare (inOperand.mAttribute_mTargetName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProductFileReference.objectCompare (inOperand.mAttribute_mProductFileReference) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProductFileName.objectCompare (inOperand.mAttribute_mProductFileName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildPhaseRefList.objectCompare (inOperand.mAttribute_mBuildPhaseRefList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildPhaseRef.objectCompare (inOperand.mAttribute_mBuildPhaseRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildConfigurationListRef.objectCompare (inOperand.mAttribute_mBuildConfigurationListRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildConfigurationSettingList.objectCompare (inOperand.mAttribute_mBuildConfigurationSettingList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildConfigurationRef.objectCompare (inOperand.mAttribute_mBuildConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFrameworksFileRefList.objectCompare (inOperand.mAttribute_mFrameworksFileRefList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFrameworkBuildPhaseRef.objectCompare (inOperand.mAttribute_mFrameworkBuildPhaseRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDependentTargets.objectCompare (inOperand.mAttribute_mDependentTargets) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResourceBuildRef.objectCompare (inOperand.mAttribute_mResourceBuildRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mResourceFileBuildRefs.objectCompare (inOperand.mAttribute_mResourceFileBuildRefs) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInfoPListFile.objectCompare (inOperand.mAttribute_mInfoPListFile) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_XCodeAppTargetList_2D_element::isValid (void) const {
  return mAttribute_mTargetRef.isValid () && mAttribute_mTargetName.isValid () && mAttribute_mProductFileReference.isValid () && mAttribute_mProductFileName.isValid () && mAttribute_mBuildPhaseRefList.isValid () && mAttribute_mBuildPhaseRef.isValid () && mAttribute_mBuildConfigurationListRef.isValid () && mAttribute_mBuildConfigurationSettingList.isValid () && mAttribute_mBuildConfigurationRef.isValid () && mAttribute_mFrameworksFileRefList.isValid () && mAttribute_mFrameworkBuildPhaseRef.isValid () && mAttribute_mDependentTargets.isValid () && mAttribute_mResourceBuildRef.isValid () && mAttribute_mResourceFileBuildRefs.isValid () && mAttribute_mInfoPListFile.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList_2D_element::drop (void) {
  mAttribute_mTargetRef.drop () ;
  mAttribute_mTargetName.drop () ;
  mAttribute_mProductFileReference.drop () ;
  mAttribute_mProductFileName.drop () ;
  mAttribute_mBuildPhaseRefList.drop () ;
  mAttribute_mBuildPhaseRef.drop () ;
  mAttribute_mBuildConfigurationListRef.drop () ;
  mAttribute_mBuildConfigurationSettingList.drop () ;
  mAttribute_mBuildConfigurationRef.drop () ;
  mAttribute_mFrameworksFileRefList.drop () ;
  mAttribute_mFrameworkBuildPhaseRef.drop () ;
  mAttribute_mDependentTargets.drop () ;
  mAttribute_mResourceBuildRef.drop () ;
  mAttribute_mResourceFileBuildRefs.drop () ;
  mAttribute_mInfoPListFile.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XCodeAppTargetList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @XCodeAppTargetList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mTargetRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTargetName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProductFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDependentTargets.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResourceBuildRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mResourceFileBuildRefs.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInfoPListFile.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mTargetRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mTargetName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTargetName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mProductFileReference (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProductFileReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mProductFileName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProductFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mBuildPhaseRefList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildPhaseRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildPhaseRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationListRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildConfigurationListRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationSettingList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildConfigurationSettingList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mBuildConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildConfigurationRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mFrameworksFileRefList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFrameworksFileRefList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mFrameworkBuildPhaseRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFrameworkBuildPhaseRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mDependentTargets (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDependentTargets ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mResourceBuildRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResourceBuildRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XCodeAppTargetList_2D_element::getter_mResourceFileBuildRefs (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mResourceFileBuildRefs ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XCodeAppTargetList_2D_element::getter_mInfoPListFile (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInfoPListFile ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @XCodeAppTargetList-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ("XCodeAppTargetList-element",
                                                      NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_XCodeAppTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_XCodeAppTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeAppTargetList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (void) :
mAttribute_mFileReference (),
mAttribute_mFileName (),
mAttribute_mBuildReference () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element::~ GALGAS_BuildFileList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (const GALGAS_string & inOperand0,
                                                                  const GALGAS_string & inOperand1,
                                                                  const GALGAS_string & inOperand2) :
mAttribute_mFileReference (inOperand0),
mAttribute_mFileName (inOperand1),
mAttribute_mBuildReference (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_BuildFileList_2D_element (GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_BuildFileList_2D_element::objectCompare (const GALGAS_BuildFileList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mFileReference.objectCompare (inOperand.mAttribute_mFileReference) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFileName.objectCompare (inOperand.mAttribute_mFileName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildReference.objectCompare (inOperand.mAttribute_mBuildReference) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_BuildFileList_2D_element::isValid (void) const {
  return mAttribute_mFileReference.isValid () && mAttribute_mFileName.isValid () && mAttribute_mBuildReference.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList_2D_element::drop (void) {
  mAttribute_mFileReference.drop () ;
  mAttribute_mFileName.drop () ;
  mAttribute_mBuildReference.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_BuildFileList_2D_element::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @BuildFileList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mFileReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFileName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildReference.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mFileReference (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFileReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mFileName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFileName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_BuildFileList_2D_element::getter_mBuildReference (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildReference ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             @BuildFileList-element type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_BuildFileList_2D_element ("BuildFileList-element",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_BuildFileList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_BuildFileList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_BuildFileList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibDescriptorList_2D_element::GALGAS_mainXibDescriptorList_2D_element (void) :
mAttribute_mLine () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibDescriptorList_2D_element::~ GALGAS_mainXibDescriptorList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibDescriptorList_2D_element::GALGAS_mainXibDescriptorList_2D_element (const GALGAS_mainXibLineDescriptorList & inOperand0) :
mAttribute_mLine (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibDescriptorList_2D_element GALGAS_mainXibDescriptorList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_mainXibDescriptorList_2D_element (GALGAS_mainXibLineDescriptorList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibDescriptorList_2D_element GALGAS_mainXibDescriptorList_2D_element::constructor_new (const GALGAS_mainXibLineDescriptorList & inOperand0 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mainXibDescriptorList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_mainXibDescriptorList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_mainXibDescriptorList_2D_element::objectCompare (const GALGAS_mainXibDescriptorList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mLine.objectCompare (inOperand.mAttribute_mLine) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_mainXibDescriptorList_2D_element::isValid (void) const {
  return mAttribute_mLine.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibDescriptorList_2D_element::drop (void) {
  mAttribute_mLine.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibDescriptorList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @mainXibDescriptorList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mLine.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList GALGAS_mainXibDescriptorList_2D_element::getter_mLine (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mLine ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @mainXibDescriptorList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibDescriptorList_2D_element ("mainXibDescriptorList-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mainXibDescriptorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibDescriptorList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mainXibDescriptorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibDescriptorList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefDeclaration::GALGAS_prefDeclaration (void) :
mAttribute_mOutletDeclarationList (),
mAttribute_mSimpleStoredAttributeList (),
mAttribute_mActionDeclarationList (),
mAttribute_mSecondaryPropertyList (),
mAttribute_mMainXibDescriptorList (),
mAttribute_mExternSwiftFunctionList (),
mAttribute_mStoredArrayList (),
mAttribute_mArrayControllerForGeneration (),
mAttribute_mSignatureList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefDeclaration::~ GALGAS_prefDeclaration (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefDeclaration::GALGAS_prefDeclaration (const GALGAS_outletDeclarationList & inOperand0,
                                                const GALGAS_simpleStoredPropertyList & inOperand1,
                                                const GALGAS_lstringlist & inOperand2,
                                                const GALGAS_secondaryPropertyList & inOperand3,
                                                const GALGAS_mainXibDescriptorList & inOperand4,
                                                const GALGAS_externSwiftFunctionList & inOperand5,
                                                const GALGAS_storedArrayPropertyList & inOperand6,
                                                const GALGAS_arrayControllerForGeneration & inOperand7,
                                                const GALGAS_stringset & inOperand8) :
mAttribute_mOutletDeclarationList (inOperand0),
mAttribute_mSimpleStoredAttributeList (inOperand1),
mAttribute_mActionDeclarationList (inOperand2),
mAttribute_mSecondaryPropertyList (inOperand3),
mAttribute_mMainXibDescriptorList (inOperand4),
mAttribute_mExternSwiftFunctionList (inOperand5),
mAttribute_mStoredArrayList (inOperand6),
mAttribute_mArrayControllerForGeneration (inOperand7),
mAttribute_mSignatureList (inOperand8) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_prefDeclaration::objectCompare (const GALGAS_prefDeclaration & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOutletDeclarationList.objectCompare (inOperand.mAttribute_mOutletDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSimpleStoredAttributeList.objectCompare (inOperand.mAttribute_mSimpleStoredAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mActionDeclarationList.objectCompare (inOperand.mAttribute_mActionDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSecondaryPropertyList.objectCompare (inOperand.mAttribute_mSecondaryPropertyList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMainXibDescriptorList.objectCompare (inOperand.mAttribute_mMainXibDescriptorList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExternSwiftFunctionList.objectCompare (inOperand.mAttribute_mExternSwiftFunctionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStoredArrayList.objectCompare (inOperand.mAttribute_mStoredArrayList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArrayControllerForGeneration.objectCompare (inOperand.mAttribute_mArrayControllerForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSignatureList.objectCompare (inOperand.mAttribute_mSignatureList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_prefDeclaration::isValid (void) const {
  return mAttribute_mOutletDeclarationList.isValid () && mAttribute_mSimpleStoredAttributeList.isValid () && mAttribute_mActionDeclarationList.isValid () && mAttribute_mSecondaryPropertyList.isValid () && mAttribute_mMainXibDescriptorList.isValid () && mAttribute_mExternSwiftFunctionList.isValid () && mAttribute_mStoredArrayList.isValid () && mAttribute_mArrayControllerForGeneration.isValid () && mAttribute_mSignatureList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefDeclaration::drop (void) {
  mAttribute_mOutletDeclarationList.drop () ;
  mAttribute_mSimpleStoredAttributeList.drop () ;
  mAttribute_mActionDeclarationList.drop () ;
  mAttribute_mSecondaryPropertyList.drop () ;
  mAttribute_mMainXibDescriptorList.drop () ;
  mAttribute_mExternSwiftFunctionList.drop () ;
  mAttribute_mStoredArrayList.drop () ;
  mAttribute_mArrayControllerForGeneration.drop () ;
  mAttribute_mSignatureList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefDeclaration::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @prefDeclaration:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOutletDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSimpleStoredAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mActionDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSecondaryPropertyList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMainXibDescriptorList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStoredArrayList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArrayControllerForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSignatureList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList GALGAS_prefDeclaration::getter_mOutletDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyList GALGAS_prefDeclaration::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSimpleStoredAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_prefDeclaration::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryPropertyList GALGAS_prefDeclaration::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSecondaryPropertyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibDescriptorList GALGAS_prefDeclaration::getter_mMainXibDescriptorList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMainXibDescriptorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftFunctionList GALGAS_prefDeclaration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternSwiftFunctionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storedArrayPropertyList GALGAS_prefDeclaration::getter_mStoredArrayList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStoredArrayList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration GALGAS_prefDeclaration::getter_mArrayControllerForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArrayControllerForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_prefDeclaration::getter_mSignatureList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSignatureList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @prefDeclaration type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefDeclaration ("prefDeclaration",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prefDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prefDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category method '@prefDeclaration typeInventory'                                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_typeInventory (const GALGAS_prefDeclaration inObject,
                                   GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                   C_Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  categoryMethod_typeInventory (inObject.mAttribute_mSimpleStoredAttributeList, ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 65)) ;
  cEnumerator_secondaryPropertyList enumerator_2985 (inObject.mAttribute_mSecondaryPropertyList, kEnumeration_up) ;
  while (enumerator_2985.hasCurrentObject ()) {
    callCategoryMethod_typeInventory ((const cPtr_abstractSecondaryProperty *) enumerator_2985.current_mSecondaryProperty (HERE).ptr (), ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 67)) ;
    enumerator_2985.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@prefDeclaration solveSecondaryProperty'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_solveSecondaryProperty (const GALGAS_prefDeclaration /* inObject */,
                                            GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                            const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                            const GALGAS_secondaryPropertyList constinArgument_inPropertiesToSolve,
                                            GALGAS_secondaryPropertyList & outArgument_outUnsolvedProperties,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnsolvedProperties.drop () ; // Release 'out' argument
  outArgument_outUnsolvedProperties = GALGAS_secondaryPropertyList::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 81)) ;
  GALGAS_observablePropertyMap var_preferencesObservablePropertyMap = ioArgument_ioSemanticContext.mAttribute_mPreferencesObservablePropertyMap ;
  cEnumerator_secondaryPropertyList enumerator_3569 (constinArgument_inPropertiesToSolve, kEnumeration_up) ;
  while (enumerator_3569.hasCurrentObject ()) {
    callCategoryMethod_tryToSolveSecondaryProperty ((const cPtr_abstractSecondaryProperty *) enumerator_3569.current_mSecondaryProperty (HERE).ptr (), ioArgument_ioSemanticContext, GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.galgas", 86)), var_preferencesObservablePropertyMap, outArgument_outUnsolvedProperties, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 84)) ;
    enumerator_3569.gotoNextObject () ;
  }
  ioArgument_ioSemanticContext.mAttribute_mPreferencesObservablePropertyMap = var_preferencesObservablePropertyMap ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category method '@prefDeclaration buildObservablePropertyMapsFromStoredProperties'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_buildObservablePropertyMapsFromStoredProperties (const GALGAS_prefDeclaration inObject,
                                                                     const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                     GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  categoryMethod_buildObservablePropertyMap (inObject.mAttribute_mSimpleStoredAttributeList, constinArgument_inUnifiedTypeMap, ioArgument_ioSemanticContext.mAttribute_mPreferencesObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 113)) ;
  categoryMethod_buildObservablePropertyMap (inObject.mAttribute_mStoredArrayList, constinArgument_inUnifiedTypeMap, ioArgument_ioSemanticContext.mAttribute_mPreferencesObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 118)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@prefDeclaration semanticAnalysis'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_semanticAnalysis (const GALGAS_prefDeclaration inObject,
                                      const GALGAS_externSwiftFunctionList constinArgument_inExternSwiftFunctionList,
                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                      GALGAS_structForGeneration & ioArgument_ioGeneration,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("preferences.galgas", 132)) ;
  temp_0.addAssign_operation (GALGAS_string ("awakeFromNib")  COMMA_SOURCE_FILE ("preferences.galgas", 132)) ;
  temp_0.addAssign_operation (GALGAS_string ("init")  COMMA_SOURCE_FILE ("preferences.galgas", 132)) ;
  GALGAS_stringset var_availableCallers = temp_0 ;
  GALGAS_externFunctionMap var_externFunctionMap = GALGAS_externFunctionMap::constructor_emptyMap (SOURCE_FILE ("preferences.galgas", 133)) ;
  cEnumerator_externSwiftFunctionList enumerator_5770 (constinArgument_inExternSwiftFunctionList, kEnumeration_up) ;
  while (enumerator_5770.hasCurrentObject ()) {
    {
    var_externFunctionMap.modifier_insertKey (enumerator_5770.current_mExternSwiftFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 135)) ;
    }
    const enumGalgasBool test_1 = var_availableCallers.getter_hasKey (enumerator_5770.current_mCallerName (HERE).mAttribute_string COMMA_SOURCE_FILE ("preferences.galgas", 136)).operator_not (SOURCE_FILE ("preferences.galgas", 136)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_s = GALGAS_string ("invalid caller; available callers:") ;
      cEnumerator_stringset enumerator_5984 (var_availableCallers, kEnumeration_up) ;
      while (enumerator_5984.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("\n"
          "  - ").add_operation (enumerator_5984.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 139))  COMMA_SOURCE_FILE ("preferences.galgas", 139)) ;
        enumerator_5984.gotoNextObject () ;
      }
      GALGAS_location location_2 (enumerator_5770.current_mCallerName (HERE).getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, var_s  COMMA_SOURCE_FILE ("preferences.galgas", 141)) ;
    }
    enumerator_5770.gotoNextObject () ;
  }
  GALGAS_simpleStoredPropertyListForGeneration var_simpleStoredPropertyListForGeneration ;
  categoryMethod_simpleStoredPropertySemanticAnalysis (inObject.mAttribute_mSimpleStoredAttributeList, function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 146)), constinArgument_inSemanticContext.mAttribute_mUnifiedTypeMap, ioArgument_ioGeneration.mAttribute_mValidationStubRoutineListForGeneration, var_simpleStoredPropertyListForGeneration, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 145)) ;
  GALGAS_storedArrayPropertyListForGeneration var_storedArrayPropertyListForGeneration ;
  categoryMethod_storedArrayPropertySemanticAnalysis (inObject.mAttribute_mStoredArrayList, constinArgument_inSemanticContext.mAttribute_mUnifiedTypeMap, var_storedArrayPropertyListForGeneration, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 152)) ;
  GALGAS_transientDefinitionListForGeneration var_transientDefinitionListForGeneration = GALGAS_transientDefinitionListForGeneration::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 157)) ;
  GALGAS_arrayControllerForGeneration var_arrayControllerListForGeneration = GALGAS_arrayControllerForGeneration::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 158)) ;
  cEnumerator_secondaryPropertyList enumerator_6819 (inObject.mAttribute_mSecondaryPropertyList, kEnumeration_up) ;
  while (enumerator_6819.hasCurrentObject ()) {
    GALGAS_selectionControllerForGeneration joker_7130 = GALGAS_selectionControllerForGeneration::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 168)) ;
    callCategoryMethod_secondaryPropertySemanticAnalysis ((const cPtr_abstractSecondaryProperty *) enumerator_6819.current_mSecondaryProperty (HERE).ptr (), function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 161)), GALGAS_string::makeEmptyString (), GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.galgas", 163)), constinArgument_inSemanticContext, constinArgument_inSemanticContext.mAttribute_mPreferencesObservablePropertyMap, var_transientDefinitionListForGeneration, var_arrayControllerListForGeneration, joker_7130, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 160)) ;
    enumerator_6819.gotoNextObject () ;
  }
  ioArgument_ioGeneration.mAttribute_mTransientListForGeneration.dotAssign_operation (var_transientDefinitionListForGeneration  COMMA_SOURCE_FILE ("preferences.galgas", 171)) ;
  ioArgument_ioGeneration.mAttribute_mAllArrayControllerForGeneration.dotAssign_operation (var_arrayControllerListForGeneration  COMMA_SOURCE_FILE ("preferences.galgas", 172)) ;
  GALGAS_actionMap var_actionMap ;
  {
  routine_buildActionMap (inObject.mAttribute_mActionDeclarationList, var_actionMap, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 174)) ;
  }
  cEnumerator_actionMap enumerator_7449 (var_actionMap, kEnumeration_up) ;
  while (enumerator_7449.hasCurrentObject ()) {
    ioArgument_ioGeneration.mAttribute_mActionListForGeneration.addAssign_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 177)), enumerator_7449.current_lkey (HERE).mAttribute_string  COMMA_SOURCE_FILE ("preferences.galgas", 176)) ;
    enumerator_7449.gotoNextObject () ;
  }
  GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList ;
  GALGAS_multipleBindingGenerationList var_multipleBindingGenerationList ;
  GALGAS_actionBindingListForGeneration var_actionBindingListForGeneration ;
  GALGAS_decoratedOutletMap var_outletMap ;
  GALGAS_tableViewBindingGenerationList var_tableViewBindingGenerationList ;
  {
  routine_analyzeOutlets (GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.galgas", 182)), constinArgument_inSemanticContext, inObject.mAttribute_mOutletDeclarationList, constinArgument_inSemanticContext.mAttribute_mPreferencesObservablePropertyMap, var_actionMap, ioArgument_ioGeneration, var_regularBindingsGenerationList, var_multipleBindingGenerationList, var_actionBindingListForGeneration, var_outletMap, var_tableViewBindingGenerationList, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 181)) ;
  }
  ioArgument_ioGeneration.mAttribute_mPreferencesForGeneration.mAttribute_mSimpleStoredPropertyListForGeneration = var_simpleStoredPropertyListForGeneration ;
  ioArgument_ioGeneration.mAttribute_mPreferencesForGeneration.mAttribute_mTransientDefinitionListForGeneration = var_transientDefinitionListForGeneration ;
  ioArgument_ioGeneration.mAttribute_mPreferencesForGeneration.mAttribute_mRegularBindingsGenerationList = var_regularBindingsGenerationList ;
  ioArgument_ioGeneration.mAttribute_mPreferencesForGeneration.mAttribute_mActionBindingListForGeneration = var_actionBindingListForGeneration ;
  ioArgument_ioGeneration.mAttribute_mPreferencesForGeneration.mAttribute_mMultipleBindingGenerationList = var_multipleBindingGenerationList ;
  ioArgument_ioGeneration.mAttribute_mPreferencesForGeneration.mAttribute_mOutletMap = var_outletMap ;
  ioArgument_ioGeneration.mAttribute_mPreferencesForGeneration.mAttribute_mMainXibDescriptorList = inObject.mAttribute_mMainXibDescriptorList ;
  ioArgument_ioGeneration.mAttribute_mPreferencesForGeneration.mAttribute_mExternSwiftFunctionList = constinArgument_inExternSwiftFunctionList ;
  ioArgument_ioGeneration.mAttribute_mPreferencesForGeneration.mAttribute_mStoredArrayPropertyListForGeneration = var_storedArrayPropertyListForGeneration ;
  ioArgument_ioGeneration.mAttribute_mPreferencesForGeneration.mAttribute_mArrayControllerForGeneration = var_arrayControllerListForGeneration ;
  ioArgument_ioGeneration.mAttribute_mPreferencesForGeneration.mAttribute_mTableViewBindingGenerationList = var_tableViewBindingGenerationList ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferencesForGeneration::GALGAS_preferencesForGeneration (void) :
mAttribute_mSimpleStoredPropertyListForGeneration (),
mAttribute_mTransientDefinitionListForGeneration (),
mAttribute_mRegularBindingsGenerationList (),
mAttribute_mMultipleBindingGenerationList (),
mAttribute_mActionBindingListForGeneration (),
mAttribute_mOutletMap (),
mAttribute_mMainXibDescriptorList (),
mAttribute_mExternSwiftFunctionList (),
mAttribute_mStoredArrayPropertyListForGeneration (),
mAttribute_mArrayControllerForGeneration (),
mAttribute_mTableViewBindingGenerationList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferencesForGeneration::~ GALGAS_preferencesForGeneration (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

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
mAttribute_mSimpleStoredPropertyListForGeneration (inOperand0),
mAttribute_mTransientDefinitionListForGeneration (inOperand1),
mAttribute_mRegularBindingsGenerationList (inOperand2),
mAttribute_mMultipleBindingGenerationList (inOperand3),
mAttribute_mActionBindingListForGeneration (inOperand4),
mAttribute_mOutletMap (inOperand5),
mAttribute_mMainXibDescriptorList (inOperand6),
mAttribute_mExternSwiftFunctionList (inOperand7),
mAttribute_mStoredArrayPropertyListForGeneration (inOperand8),
mAttribute_mArrayControllerForGeneration (inOperand9),
mAttribute_mTableViewBindingGenerationList (inOperand10) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_preferencesForGeneration::objectCompare (const GALGAS_preferencesForGeneration & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSimpleStoredPropertyListForGeneration.objectCompare (inOperand.mAttribute_mSimpleStoredPropertyListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTransientDefinitionListForGeneration.objectCompare (inOperand.mAttribute_mTransientDefinitionListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegularBindingsGenerationList.objectCompare (inOperand.mAttribute_mRegularBindingsGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMultipleBindingGenerationList.objectCompare (inOperand.mAttribute_mMultipleBindingGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mActionBindingListForGeneration.objectCompare (inOperand.mAttribute_mActionBindingListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletMap.objectCompare (inOperand.mAttribute_mOutletMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMainXibDescriptorList.objectCompare (inOperand.mAttribute_mMainXibDescriptorList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mExternSwiftFunctionList.objectCompare (inOperand.mAttribute_mExternSwiftFunctionList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStoredArrayPropertyListForGeneration.objectCompare (inOperand.mAttribute_mStoredArrayPropertyListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mArrayControllerForGeneration.objectCompare (inOperand.mAttribute_mArrayControllerForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTableViewBindingGenerationList.objectCompare (inOperand.mAttribute_mTableViewBindingGenerationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_preferencesForGeneration::isValid (void) const {
  return mAttribute_mSimpleStoredPropertyListForGeneration.isValid () && mAttribute_mTransientDefinitionListForGeneration.isValid () && mAttribute_mRegularBindingsGenerationList.isValid () && mAttribute_mMultipleBindingGenerationList.isValid () && mAttribute_mActionBindingListForGeneration.isValid () && mAttribute_mOutletMap.isValid () && mAttribute_mMainXibDescriptorList.isValid () && mAttribute_mExternSwiftFunctionList.isValid () && mAttribute_mStoredArrayPropertyListForGeneration.isValid () && mAttribute_mArrayControllerForGeneration.isValid () && mAttribute_mTableViewBindingGenerationList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_preferencesForGeneration::drop (void) {
  mAttribute_mSimpleStoredPropertyListForGeneration.drop () ;
  mAttribute_mTransientDefinitionListForGeneration.drop () ;
  mAttribute_mRegularBindingsGenerationList.drop () ;
  mAttribute_mMultipleBindingGenerationList.drop () ;
  mAttribute_mActionBindingListForGeneration.drop () ;
  mAttribute_mOutletMap.drop () ;
  mAttribute_mMainXibDescriptorList.drop () ;
  mAttribute_mExternSwiftFunctionList.drop () ;
  mAttribute_mStoredArrayPropertyListForGeneration.drop () ;
  mAttribute_mArrayControllerForGeneration.drop () ;
  mAttribute_mTableViewBindingGenerationList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_preferencesForGeneration::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @preferencesForGeneration:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSimpleStoredPropertyListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTransientDefinitionListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMultipleBindingGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mActionBindingListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMainXibDescriptorList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStoredArrayPropertyListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mArrayControllerForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTableViewBindingGenerationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyListForGeneration GALGAS_preferencesForGeneration::getter_mSimpleStoredPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSimpleStoredPropertyListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration GALGAS_preferencesForGeneration::getter_mTransientDefinitionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientDefinitionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList GALGAS_preferencesForGeneration::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRegularBindingsGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList GALGAS_preferencesForGeneration::getter_mMultipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMultipleBindingGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration GALGAS_preferencesForGeneration::getter_mActionBindingListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionBindingListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap GALGAS_preferencesForGeneration::getter_mOutletMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibDescriptorList GALGAS_preferencesForGeneration::getter_mMainXibDescriptorList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMainXibDescriptorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftFunctionList GALGAS_preferencesForGeneration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternSwiftFunctionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storedArrayPropertyListForGeneration GALGAS_preferencesForGeneration::getter_mStoredArrayPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStoredArrayPropertyListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration GALGAS_preferencesForGeneration::getter_mArrayControllerForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mArrayControllerForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewBindingGenerationList GALGAS_preferencesForGeneration::getter_mTableViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTableViewBindingGenerationList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @preferencesForGeneration type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_preferencesForGeneration ("preferencesForGeneration",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_preferencesForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_preferencesForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_preferencesForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_preferencesForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Getter '@observablePropertyAST modelString'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_modelString (const GALGAS_observablePropertyAST & inObject,
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
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_4526 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_4526->mAssociatedValue0 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string (".rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 113)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 113)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_4676 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_4676->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_4676->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string (".rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 115)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 115)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 115)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("observable-property.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 115)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_4799 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_4799->mAssociatedValue0 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string (".rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 117)).add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("observable-property.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 117)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_4989 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_4989->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_4989->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 119)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 119)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        result_outResult.dotAssign_operation (GALGAS_string (".").add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("observable-property.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 121))  COMMA_SOURCE_FILE ("observable-property.galgas", 121)) ;
      }
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_5200 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_5200->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_5200->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 124)).add_operation (GALGAS_string ("!."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 124)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 124)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_2) {
        result_outResult.dotAssign_operation (GALGAS_string (".").add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("observable-property.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 126))  COMMA_SOURCE_FILE ("observable-property.galgas", 126)) ;
      }
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_5343 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_5343->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_5343->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 129)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("observable-property.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 129)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 129)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 129)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty * extractPtr_5556 = (const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_5556->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_5556->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_5556->mAssociatedValue2 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 131)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("observable-property.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 131)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 131)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 131)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 131)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 131)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      result_outResult = GALGAS_string ("self.signatureObserver ()") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      result_outResult = GALGAS_string ("self.versionObserver ()") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      result_outResult = GALGAS_string ("self.versionShouldChangeObserver ()") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category Getter '@observablePropertyAST needs_unwSelf'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerSecondaryProperty:
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




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category Getter '@observablePropertyAST isPropertyDefined'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_isPropertyDefined (const GALGAS_observablePropertyAST & inObject,
                                               const GALGAS_semanticContext & constinArgument_inSemanticContext,
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
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_7050 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_7050->mAssociatedValue0 ;
      result_outResult = constinArgument_inRootObservableProperties.getter_hasKey (extractedValue_propertyName.mAttribute_string COMMA_SOURCE_FILE ("observable-property.galgas", 178)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_7206 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_7206->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_7206->mAssociatedValue1 ;
      result_outResult = constinArgument_inRootObservableProperties.getter_hasKey (extractedValue_propertyName.mAttribute_string COMMA_SOURCE_FILE ("observable-property.galgas", 180)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_7347 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_7347->mAssociatedValue0 ;
      result_outResult = constinArgument_inRootObservableProperties.getter_hasKey (extractedValue_relationshipName.mAttribute_string COMMA_SOURCE_FILE ("observable-property.galgas", 182)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_7489 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_7489->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_7489->mAssociatedValue1 ;
      result_outResult = constinArgument_inObservableProperties.getter_hasKey (extractedValue_propertyName.mAttribute_string COMMA_SOURCE_FILE ("observable-property.galgas", 184)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_7661 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_7661->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_7661->mAssociatedValue1 ;
      result_outResult = constinArgument_inSemanticContext.mAttribute_mPreferencesObservablePropertyMap.getter_hasKey (extractedValue_propertyName.mAttribute_string COMMA_SOURCE_FILE ("observable-property.galgas", 186)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_7815 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_7815->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_7815->mAssociatedValue1 ;
      result_outResult = constinArgument_inObservableProperties.getter_hasKey (extractedValue_controllerName.mAttribute_string COMMA_SOURCE_FILE ("observable-property.galgas", 188)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty * extractPtr_8016 = (const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_8016->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8016->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_8016->mAssociatedValue2 ;
      result_outResult = constinArgument_inObservableProperties.getter_hasKey (extractedValue_controllerName.mAttribute_string COMMA_SOURCE_FILE ("observable-property.galgas", 190)) ;
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




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Category Getter '@observablePropertyAST location'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_8475 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8475->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.mAttribute_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_8567 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_8567->mAssociatedValue1 ;
      result_outResult = extractedValue_optionName.mAttribute_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_8665 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8665->mAssociatedValue1 ;
      result_outResult = extractedValue_propertyName.mAttribute_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_8751 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8751->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.mAttribute_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_8838 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8838->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.mAttribute_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_8930 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8930->mAssociatedValue1 ;
      result_outResult = extractedValue_propertyName.mAttribute_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty * extractPtr_9051 = (const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_9051->mAssociatedValue2 ;
      result_outResult = extractedValue_secondaryPropertyName.mAttribute_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_signatureProperty * extractPtr_9124 = (const cEnumAssociatedValues_observablePropertyAST_signatureProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_location = extractPtr_9124->mAssociatedValue0 ;
      result_outResult = extractedValue_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_versionProperty * extractPtr_9195 = (const cEnumAssociatedValues_observablePropertyAST_versionProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_location = extractPtr_9195->mAssociatedValue0 ;
      result_outResult = extractedValue_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty * extractPtr_9278 = (const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_location = extractPtr_9278->mAssociatedValue0 ;
      result_outResult = extractedValue_location ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@observablePropertyAST analyzeObservableProperty'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_analyzeObservableProperty (const GALGAS_observablePropertyAST inObject,
                                               const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                               const GALGAS_observablePropertyMap constinArgument_inObservablePropertyMap,
                                               GALGAS_typeKind & outArgument_outType,
                                               GALGAS_propertyKind & outArgument_outKind,
                                               GALGAS_propertyMultiplicity & outArgument_outMultiplicity,
                                               GALGAS_string & outArgument_outSwiftTypeStringForTransientFunctionArgument,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outKind.drop () ; // Release 'out' argument
  outArgument_outMultiplicity.drop () ; // Release 'out' argument
  outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release 'out' argument
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 242)) ;
      outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 243)) ;
      outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 244)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 245)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 247)) ;
      outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 248)) ;
      outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 249)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 250)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 252)) ;
      outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 253)) ;
      outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 254)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 255)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_10854 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10854->mAssociatedValue0 ;
      GALGAS_string joker_10769_2 ; // Joker input parameter
      GALGAS_actionMap joker_10769_1 ; // Joker input parameter
      constinArgument_inRootObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_10769_2, joker_10769_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 257)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 264)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_11559 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_11559->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_11559->mAssociatedValue1 ;
      GALGAS_string joker_11054_2 ; // Joker input parameter
      GALGAS_actionMap joker_11054_1 ; // Joker input parameter
      constinArgument_inRootObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_11054_2, joker_11054_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 266)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 273)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (extractedValue_optionName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_2, GALGAS_string ("a property cannot accept any option")  COMMA_SOURCE_FILE ("observable-property.galgas", 274)) ;
      }else if (kBoolFalse == test_1) {
        outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 276)) ;
        outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 277)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string ("count"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 279)) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string ("empty"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 281)) ;
          }else if (kBoolFalse == test_4) {
            GALGAS_location location_5 (extractedValue_optionName.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_5, GALGAS_string ("uknown option (accepted : 'count', 'empty')")  COMMA_SOURCE_FILE ("observable-property.galgas", 283)) ;
          }
        }
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 286)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_12919 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_12919->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_12919->mAssociatedValue1 ;
      GALGAS_typeKind var_relationshipType ;
      GALGAS_string joker_11798_2 ; // Joker input parameter
      GALGAS_actionMap joker_11798_1 ; // Joker input parameter
      constinArgument_inRootObservablePropertyMap.method_searchKey (extractedValue_relationshipName, var_relationshipType, outArgument_outKind, outArgument_outMultiplicity, joker_11798_2, joker_11798_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 288)) ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 295)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (extractedValue_relationshipName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_7, GALGAS_string ("a property cannot accept 'all'")  COMMA_SOURCE_FILE ("observable-property.galgas", 296)) ;
      }
      switch (var_relationshipType.enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_colorType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_fontType:
        {
          GALGAS_location location_8 (extractedValue_relationshipName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_8, GALGAS_string ("a property cannot accept 'all'")  COMMA_SOURCE_FILE ("observable-property.galgas", 300)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          GALGAS_location location_9 (extractedValue_relationshipName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_9, GALGAS_string ("a property cannot accept 'all'")  COMMA_SOURCE_FILE ("observable-property.galgas", 302)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
          GALGAS_location location_10 (extractedValue_relationshipName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_10, GALGAS_string ("a property cannot accept 'all'")  COMMA_SOURCE_FILE ("observable-property.galgas", 304)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
          const cEnumAssociatedValues_typeKind_entityType * extractPtr_12792 = (const cEnumAssociatedValues_typeKind_entityType *) (var_relationshipType.unsafePointer ()) ;
          const GALGAS_string extractedValue_entityName = extractPtr_12792->mAssociatedValue0 ;
          GALGAS_observablePropertyMap var_entityObservablePropertyMap ;
          constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (extractedValue_entityName.getter_nowhere (SOURCE_FILE ("observable-property.galgas", 307)), var_entityObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 306)) ;
          GALGAS_string joker_12651_2 ; // Joker input parameter
          GALGAS_actionMap joker_12651_1 ; // Joker input parameter
          var_entityObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_12651_2, joker_12651_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 310)) ;
          const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("observable-property.galgas", 317)))).boolEnum () ;
          if (kBoolTrue == test_11) {
            GALGAS_location location_12 (extractedValue_propertyName.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_12, GALGAS_string ("the observed property cannot be a collection")  COMMA_SOURCE_FILE ("observable-property.galgas", 318)) ;
          }
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GALGAS_string ("[").add_operation (extensionGetter_swiftTypeName (var_relationshipType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 321)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 321)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 321)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 321)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_13635 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_13635->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_13635->mAssociatedValue1 ;
      GALGAS_string joker_13105_2 ; // Joker input parameter
      GALGAS_actionMap joker_13105_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_13105_2, joker_13105_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 323)) ;
      GALGAS_bool test_13 = GALGAS_bool (kIsNotEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
      if (kBoolTrue == test_13.boolEnum ()) {
        test_13 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 330)))) ;
      }
      const enumGalgasBool test_14 = test_13.boolEnum () ;
      if (kBoolTrue == test_14) {
        GALGAS_location location_15 (extractedValue_optionName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_15, GALGAS_string ("a property cannot accept any option")  COMMA_SOURCE_FILE ("observable-property.galgas", 331)) ;
      }else if (kBoolFalse == test_14) {
        GALGAS_bool test_16 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("observable-property.galgas", 332)))) ;
        if (kBoolTrue == test_16.boolEnum ()) {
          test_16 = GALGAS_bool (kIsNotEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
        }
        const enumGalgasBool test_17 = test_16.boolEnum () ;
        if (kBoolTrue == test_17) {
          outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 333)) ;
          outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 334)) ;
          const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string ("count"))).boolEnum () ;
          if (kBoolTrue == test_18) {
            outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 336)) ;
          }else if (kBoolFalse == test_18) {
            GALGAS_location location_19 (extractedValue_optionName.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_19, GALGAS_string ("uknown option (accepted : 'count', 'empty')")  COMMA_SOURCE_FILE ("observable-property.galgas", 338)) ;
          }
        }
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 341)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_14387 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_14387->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_14387->mAssociatedValue1 ;
      GALGAS_string joker_13850_2 ; // Joker input parameter
      GALGAS_actionMap joker_13850_1 ; // Joker input parameter
      constinArgument_inSemanticContext.mAttribute_mPreferencesObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_13850_2, joker_13850_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 343)) ;
      GALGAS_bool test_20 = GALGAS_bool (kIsNotEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
      if (kBoolTrue == test_20.boolEnum ()) {
        test_20 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 350)))) ;
      }
      const enumGalgasBool test_21 = test_20.boolEnum () ;
      if (kBoolTrue == test_21) {
        GALGAS_location location_22 (extractedValue_optionName.getter_location (HERE)) ; // Implicit use of 'location' getter
        inCompiler->emitSemanticError (location_22, GALGAS_string ("a single property cannot accept any option")  COMMA_SOURCE_FILE ("observable-property.galgas", 351)) ;
      }else if (kBoolFalse == test_21) {
        GALGAS_bool test_23 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("observable-property.galgas", 352)))) ;
        if (kBoolTrue == test_23.boolEnum ()) {
          test_23 = GALGAS_bool (kIsNotEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())) ;
        }
        const enumGalgasBool test_24 = test_23.boolEnum () ;
        if (kBoolTrue == test_24) {
          outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 353)) ;
          outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 354)) ;
          const enumGalgasBool test_25 = GALGAS_bool (kIsEqual, extractedValue_optionName.mAttribute_string.objectCompare (GALGAS_string ("count"))).boolEnum () ;
          if (kBoolTrue == test_25) {
            outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 356)) ;
          }else if (kBoolFalse == test_25) {
            GALGAS_location location_26 (extractedValue_optionName.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_26, GALGAS_string ("uknown option (accepted : 'count', 'empty')")  COMMA_SOURCE_FILE ("observable-property.galgas", 358)) ;
          }
        }
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 361)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_16129 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_16129->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_16129->mAssociatedValue1 ;
      GALGAS_typeKind var_type ;
      GALGAS_propertyKind var_propertyKind ;
      GALGAS_propertyMultiplicity joker_14596_3 ; // Joker input parameter
      GALGAS_string joker_14596_2 ; // Joker input parameter
      GALGAS_actionMap joker_14596_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_controllerName, var_type, var_propertyKind, joker_14596_3, joker_14596_2, joker_14596_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 363)) ;
      switch (var_propertyKind.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          switch (var_type.enumValue ()) {
          case GALGAS_typeKind::kNotBuilt:
            break ;
          case GALGAS_typeKind::kEnum_stringType:
          case GALGAS_typeKind::kEnum_boolType:
          case GALGAS_typeKind::kEnum_colorType:
          case GALGAS_typeKind::kEnum_dateType:
          case GALGAS_typeKind::kEnum_doubleType:
          case GALGAS_typeKind::kEnum_integerType:
          case GALGAS_typeKind::kEnum_fontType:
            {
              GALGAS_location location_27 (extractedValue_controllerName.getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_27, GALGAS_string ("the bound model should be an entity")  COMMA_SOURCE_FILE ("observable-property.galgas", 373)) ;
              outArgument_outMultiplicity.drop () ; // Release error dropped variable
              outArgument_outKind.drop () ; // Release error dropped variable
              outArgument_outType.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_classType:
            {
              GALGAS_location location_28 (extractedValue_controllerName.getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_28, GALGAS_string ("the bound model should be an entity")  COMMA_SOURCE_FILE ("observable-property.galgas", 375)) ;
              outArgument_outMultiplicity.drop () ; // Release error dropped variable
              outArgument_outKind.drop () ; // Release error dropped variable
              outArgument_outType.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_enumType:
            {
              GALGAS_location location_29 (extractedValue_controllerName.getter_location (HERE)) ; // Implicit use of 'location' getter
              inCompiler->emitSemanticError (location_29, GALGAS_string ("the bound model should be an entity")  COMMA_SOURCE_FILE ("observable-property.galgas", 377)) ;
              outArgument_outMultiplicity.drop () ; // Release error dropped variable
              outArgument_outKind.drop () ; // Release error dropped variable
              outArgument_outType.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_entityType:
            {
              const cEnumAssociatedValues_typeKind_entityType * extractPtr_15519 = (const cEnumAssociatedValues_typeKind_entityType *) (var_type.unsafePointer ()) ;
              const GALGAS_string extractedValue_entityName = extractPtr_15519->mAssociatedValue0 ;
              GALGAS_observablePropertyMap var_observablePropertyMap ;
              constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (GALGAS_lstring::constructor_new (extractedValue_entityName, extractedValue_controllerName.mAttribute_location  COMMA_SOURCE_FILE ("observable-property.galgas", 380)), var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 379)) ;
              GALGAS_string joker_15507_2 ; // Joker input parameter
              GALGAS_actionMap joker_15507_1 ; // Joker input parameter
              var_observablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_15507_2, joker_15507_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 383)) ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          GALGAS_bool test_30 = GALGAS_bool (kIsEqual, extractedValue_propertyName.mAttribute_string.objectCompare (GALGAS_string ("sortedArray"))) ;
          if (kBoolTrue != test_30.boolEnum ()) {
            test_30 = GALGAS_bool (kIsEqual, extractedValue_propertyName.mAttribute_string.objectCompare (GALGAS_string ("selectedArray"))) ;
          }
          const enumGalgasBool test_31 = test_30.boolEnum () ;
          if (kBoolTrue == test_31) {
            outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("observable-property.galgas", 393)) ;
            outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 394)) ;
            outArgument_outType = var_type ;
          }else if (kBoolFalse == test_31) {
            GALGAS_location location_32 (extractedValue_propertyName.getter_location (HERE)) ; // Implicit use of 'location' getter
            inCompiler->emitSemanticError (location_32, GALGAS_string ("uknown option (accepted : 'sortedArray' or 'selectedArray')")  COMMA_SOURCE_FILE ("observable-property.galgas", 397)) ;
            outArgument_outMultiplicity.drop () ; // Release error dropped variable
            outArgument_outKind.drop () ; // Release error dropped variable
            outArgument_outType.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_stored:
      case GALGAS_propertyKind::kEnum_transient:
        {
          GALGAS_location location_33 (extractedValue_controllerName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_33, GALGAS_string ("this property should be a controller")  COMMA_SOURCE_FILE ("observable-property.galgas", 402)) ;
          outArgument_outMultiplicity.drop () ; // Release error dropped variable
          outArgument_outKind.drop () ; // Release error dropped variable
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 404)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty * extractPtr_16884 = (const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_16884->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_16884->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_16884->mAssociatedValue2 ;
      GALGAS_typeKind joker_16314_5 ; // Joker input parameter
      GALGAS_propertyKind joker_16314_4 ; // Joker input parameter
      GALGAS_propertyMultiplicity joker_16314_3 ; // Joker input parameter
      GALGAS_string joker_16314_2 ; // Joker input parameter
      GALGAS_actionMap joker_16314_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_controllerName, joker_16314_5, joker_16314_4, joker_16314_3, joker_16314_2, joker_16314_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 406)) ;
      GALGAS_bool test_34 = GALGAS_bool (kIsEqual, extractedValue_propertyName.mAttribute_string.objectCompare (GALGAS_string ("sortedArray"))) ;
      if (kBoolTrue == test_34.boolEnum ()) {
        test_34 = GALGAS_bool (kIsEqual, extractedValue_secondaryPropertyName.mAttribute_string.objectCompare (GALGAS_string ("count"))) ;
      }
      const enumGalgasBool test_35 = test_34.boolEnum () ;
      if (kBoolTrue == test_35) {
        outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 411)) ;
        outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 412)) ;
        outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 413)) ;
      }else if (kBoolFalse == test_35) {
        GALGAS_bool test_36 = GALGAS_bool (kIsEqual, extractedValue_propertyName.mAttribute_string.objectCompare (GALGAS_string ("selectedArray"))) ;
        if (kBoolTrue == test_36.boolEnum ()) {
          test_36 = GALGAS_bool (kIsEqual, extractedValue_secondaryPropertyName.mAttribute_string.objectCompare (GALGAS_string ("count"))) ;
        }
        const enumGalgasBool test_37 = test_36.boolEnum () ;
        if (kBoolTrue == test_37) {
          outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 415)) ;
          outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 416)) ;
          outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 417)) ;
        }else if (kBoolFalse == test_37) {
          GALGAS_location location_38 (extractedValue_propertyName.getter_location (HERE)) ; // Implicit use of 'location' getter
          inCompiler->emitSemanticError (location_38, GALGAS_string ("uknown option")  COMMA_SOURCE_FILE ("observable-property.galgas", 419)) ;
          outArgument_outMultiplicity.drop () ; // Release error dropped variable
          outArgument_outKind.drop () ; // Release error dropped variable
          outArgument_outType.drop () ; // Release error dropped variable
        }
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 423)) ;
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category Getter '@observablePropertyAST generateAddObserverCall'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_generateAddObserverCall (const GALGAS_observablePropertyAST & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_9131 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_9131->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9131->mAssociatedValue1 ;
      result_outResult = extractedValue_controllerName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 229)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 229)).add_operation (GALGAS_string (".addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 229)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty * extractPtr_9356 = (const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_9356->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9356->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_9356->mAssociatedValue2 ;
      result_outResult = extractedValue_controllerName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 231)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 231)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 231)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 231)).add_operation (GALGAS_string (".addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 231)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_9455 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_9455->mAssociatedValue0 ;
      result_outResult = extractedValue_masterName.mAttribute_string.add_operation (GALGAS_string (".addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 233)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_9588 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9588->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 235)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 235)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 235)).add_operation (GALGAS_string (".addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 235)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_9694 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_9694->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 237)).add_operation (GALGAS_string (".addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 237)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_9849 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_9849->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_9849->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 239)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 239)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("transient-property.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 239)).add_operation (GALGAS_string (".addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 239)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_10024 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_10024->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10024->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("transient-property.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 241)).add_operation (GALGAS_string (".addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 241)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 241)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 241)) ;
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




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category Getter '@observablePropertyAST generateRemoveObserverCall'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_generateRemoveObserverCall (const GALGAS_observablePropertyAST & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_10610 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_10610->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10610->mAssociatedValue1 ;
      result_outResult = extractedValue_controllerName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 256)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 256)).add_operation (GALGAS_string (".removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 256)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty * extractPtr_10838 = (const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_10838->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10838->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_10838->mAssociatedValue2 ;
      result_outResult = extractedValue_controllerName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 258)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 258)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 258)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 258)).add_operation (GALGAS_string (".removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 258)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_10940 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_10940->mAssociatedValue0 ;
      result_outResult = extractedValue_masterName.mAttribute_string.add_operation (GALGAS_string (".removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 260)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_11076 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_11076->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 262)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 262)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 262)).add_operation (GALGAS_string (".removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 262)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_11185 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_11185->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 264)).add_operation (GALGAS_string (".removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 264)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_11343 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_11343->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_11343->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 266)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 266)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("transient-property.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 266)).add_operation (GALGAS_string (".removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 266)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_11521 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_11521->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_11521->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("transient-property.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 268)).add_operation (GALGAS_string (".removeEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 268)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 268)) ;
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




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category Getter '@arrayControllerModel modelString'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_modelString (const GALGAS_arrayControllerModel & inObject,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_arrayControllerModel temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_arrayControllerModel::kNotBuilt:
    break ;
  case GALGAS_arrayControllerModel::kEnum_selfCollection:
    {
      const cEnumAssociatedValues_arrayControllerModel_selfCollection * extractPtr_14336 = (const cEnumAssociatedValues_arrayControllerModel_selfCollection *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_storedPropertyName = extractPtr_14336->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_storedPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 379)) ;
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_rootToManyRelationship:
    {
      const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship * extractPtr_14453 = (const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_rootRelationshipName = extractPtr_14453->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("rootObject.").add_operation (extractedValue_rootRelationshipName.getter_string (SOURCE_FILE ("array-controller.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 381)) ;
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_controllerArray:
    {
      const cEnumAssociatedValues_arrayControllerModel_controllerArray * extractPtr_14585 = (const cEnumAssociatedValues_arrayControllerModel_controllerArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_14585->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_14585->mAssociatedValue1 ;
      result_outResult = extractedValue_controllerName.mAttribute_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 383)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 383)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category Getter '@arrayControllerModel modelTypeName'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_modelTypeName (const GALGAS_arrayControllerModel & inObject,
                                             const GALGAS_string & constinArgument_inRootEntityName,
                                             const GALGAS_observablePropertyMap & constinArgument_inObservablePropertyMap,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_arrayControllerModel temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_arrayControllerModel::kNotBuilt:
    break ;
  case GALGAS_arrayControllerModel::kEnum_selfCollection:
    {
      const cEnumAssociatedValues_arrayControllerModel_selfCollection * extractPtr_15013 = (const cEnumAssociatedValues_arrayControllerModel_selfCollection *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_storedPropertyName = extractPtr_15013->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("Ligne328_").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 396)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 396)).add_operation (extractedValue_storedPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 396)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 396)) ;
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_rootToManyRelationship:
    {
      const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship * extractPtr_15163 = (const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_rootRelationshipName = extractPtr_15163->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("ToManyRelationship_").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 398)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 398)).add_operation (extractedValue_rootRelationshipName.getter_string (SOURCE_FILE ("array-controller.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 398)) ;
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_controllerArray:
    {
      const cEnumAssociatedValues_arrayControllerModel_controllerArray * extractPtr_15378 = (const cEnumAssociatedValues_arrayControllerModel_controllerArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_15378->mAssociatedValue0 ;
      GALGAS_typeKind var_modelType ;
      GALGAS_propertyKind joker_15306_4 ; // Joker input parameter
      GALGAS_propertyMultiplicity joker_15306_3 ; // Joker input parameter
      GALGAS_string joker_15306_2 ; // Joker input parameter
      GALGAS_actionMap joker_15306_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_controllerName, var_modelType, joker_15306_4, joker_15306_3, joker_15306_2, joker_15306_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 400)) ;
      result_outResult = GALGAS_string ("TransientArrayOf_").add_operation (extensionGetter_swiftTypeName (var_modelType, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 405)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category Getter '@arrayControllerModel modelTypeName2'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_modelTypeName_32_ (const GALGAS_arrayControllerModel & inObject,
                                                 const GALGAS_string & constinArgument_inRootEntityName,
                                                 const GALGAS_observablePropertyMap & constinArgument_inObservablePropertyMap,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_arrayControllerModel temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_arrayControllerModel::kNotBuilt:
    break ;
  case GALGAS_arrayControllerModel::kEnum_selfCollection:
    {
      const cEnumAssociatedValues_arrayControllerModel_selfCollection * extractPtr_15933 = (const cEnumAssociatedValues_arrayControllerModel_selfCollection *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_storedProprtyName = extractPtr_15933->mAssociatedValue0 ;
      GALGAS_typeKind var_modelType ;
      GALGAS_propertyKind joker_15865_4 ; // Joker input parameter
      GALGAS_propertyMultiplicity joker_15865_3 ; // Joker input parameter
      GALGAS_string joker_15865_2 ; // Joker input parameter
      GALGAS_actionMap joker_15865_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_storedProprtyName, var_modelType, joker_15865_4, joker_15865_3, joker_15865_2, joker_15865_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 418)) ;
      result_outResult = GALGAS_string ("EBClassArray_").add_operation (extensionGetter_swiftTypeName (var_modelType, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 423)) ;
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_rootToManyRelationship:
    {
      const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship * extractPtr_16083 = (const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_rootRelationshipName = extractPtr_16083->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("ToManyRelationship_").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 425)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 425)).add_operation (extractedValue_rootRelationshipName.getter_string (SOURCE_FILE ("array-controller.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 425)) ;
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_controllerArray:
    {
      const cEnumAssociatedValues_arrayControllerModel_controllerArray * extractPtr_16297 = (const cEnumAssociatedValues_arrayControllerModel_controllerArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_16297->mAssociatedValue0 ;
      GALGAS_typeKind var_modelType ;
      GALGAS_propertyKind joker_16226_4 ; // Joker input parameter
      GALGAS_propertyMultiplicity joker_16226_3 ; // Joker input parameter
      GALGAS_string joker_16226_2 ; // Joker input parameter
      GALGAS_actionMap joker_16226_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_controllerName, var_modelType, joker_16226_4, joker_16226_3, joker_16226_2, joker_16226_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 427)) ;
      result_outResult = GALGAS_string ("ReadOnlyArrayOf_").add_operation (extensionGetter_swiftTypeName (var_modelType, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 432)) ;
    }
    break ;
  }
//---
  return result_outResult ;
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
//             Abstract category method '@astDeclaration buildObservablePropertyMapsFromStoredProperties'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_astDeclaration_buildObservablePropertyMapsFromStoredProperties> gCategoryMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildObservablePropertyMapsFromStoredProperties (const int32_t inClassIndex,
                                                                          categoryMethodSignature_astDeclaration_buildObservablePropertyMapsFromStoredProperties inMethod) {
  gCategoryMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_astDeclaration_buildObservablePropertyMapsFromStoredProperties (void) {
  gCategoryMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_astDeclaration_buildObservablePropertyMapsFromStoredProperties (NULL,
                                                                                           freeCategoryMethod_astDeclaration_buildObservablePropertyMapsFromStoredProperties) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildObservablePropertyMapsFromStoredProperties (const cPtr_astDeclaration * inObject,
                                                                         const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                                         GALGAS_semanticContext & io_ioSemanticContext,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_astDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_astDeclaration_buildObservablePropertyMapsFromStoredProperties f = NULL ;
    if (classIndex < gCategoryMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties.count ()) {
      f = gCategoryMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties.count ()) {
           f = gCategoryMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_astDeclaration_buildObservablePropertyMapsFromStoredProperties.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inUnifiedTypeMap, io_ioSemanticContext, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Abstract category method '@astDeclaration semanticAnalysis'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_astDeclaration_semanticAnalysis> gCategoryMethodTable_astDeclaration_semanticAnalysis ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_semanticAnalysis (const int32_t inClassIndex,
                                           categoryMethodSignature_astDeclaration_semanticAnalysis inMethod) {
  gCategoryMethodTable_astDeclaration_semanticAnalysis.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_astDeclaration_semanticAnalysis (void) {
  gCategoryMethodTable_astDeclaration_semanticAnalysis.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_astDeclaration_semanticAnalysis (NULL,
                                                            freeCategoryMethod_astDeclaration_semanticAnalysis) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_semanticAnalysis (const cPtr_astDeclaration * inObject,
                                          const GALGAS_semanticContext constin_inSemanticContext,
                                          GALGAS_structForGeneration & io_ioGeneration,
                                          C_Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_astDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_astDeclaration_semanticAnalysis f = NULL ;
    if (classIndex < gCategoryMethodTable_astDeclaration_semanticAnalysis.count ()) {
      f = gCategoryMethodTable_astDeclaration_semanticAnalysis (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_astDeclaration_semanticAnalysis.count ()) {
           f = gCategoryMethodTable_astDeclaration_semanticAnalysis (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_astDeclaration_semanticAnalysis.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, constin_inSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category method '@astDeclaration buildInitialSecondaryPropertyListMap'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_astDeclaration_buildInitialSecondaryPropertyListMap> gCategoryMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_buildInitialSecondaryPropertyListMap (const int32_t inClassIndex,
                                                               categoryMethodSignature_astDeclaration_buildInitialSecondaryPropertyListMap inMethod) {
  gCategoryMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_astDeclaration_buildInitialSecondaryPropertyListMap (void) {
  gCategoryMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_astDeclaration_buildInitialSecondaryPropertyListMap (NULL,
                                                                                freeCategoryMethod_astDeclaration_buildInitialSecondaryPropertyListMap) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_buildInitialSecondaryPropertyListMap (const cPtr_astDeclaration * inObject,
                                                              GALGAS_secondaryDeclarationListWorkingList & io_ioSecondaryDeclarationListWorkingList,
                                                              GALGAS_uint & io_ioSecondaryDeclarationCount,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_astDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_astDeclaration_buildInitialSecondaryPropertyListMap f = NULL ;
    if (classIndex < gCategoryMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap.count ()) {
      f = gCategoryMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap.count ()) {
           f = gCategoryMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_astDeclaration_buildInitialSecondaryPropertyListMap.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioSecondaryDeclarationListWorkingList, io_ioSecondaryDeclarationCount, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract category method '@astDeclaration solveSecondaryProperty'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static TC_UniqueArray <categoryMethodSignature_astDeclaration_solveSecondaryProperty> gCategoryMethodTable_astDeclaration_solveSecondaryProperty ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_solveSecondaryProperty (const int32_t inClassIndex,
                                                 categoryMethodSignature_astDeclaration_solveSecondaryProperty inMethod) {
  gCategoryMethodTable_astDeclaration_solveSecondaryProperty.forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void freeCategoryMethod_astDeclaration_solveSecondaryProperty (void) {
  gCategoryMethodTable_astDeclaration_solveSecondaryProperty.free () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_astDeclaration_solveSecondaryProperty (NULL,
                                                                  freeCategoryMethod_astDeclaration_solveSecondaryProperty) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_solveSecondaryProperty (const cPtr_astDeclaration * inObject,
                                                GALGAS_semanticContext & io_ioSemanticContext,
                                                const GALGAS_unifiedTypeMap constin_inUnifiedTypeMap,
                                                const GALGAS_secondaryPropertyList constin_inPropertiesToSolve,
                                                GALGAS_secondaryPropertyList & out_outUnsolvedProperties,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outUnsolvedProperties.drop () ;
//--- Find method
  if (NULL != inObject) {
    macroValidSharedObject (inObject, cPtr_astDeclaration) ;
    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;
    const int32_t classIndex = info->mSlotID ;
    categoryMethodSignature_astDeclaration_solveSecondaryProperty f = NULL ;
    if (classIndex < gCategoryMethodTable_astDeclaration_solveSecondaryProperty.count ()) {
      f = gCategoryMethodTable_astDeclaration_solveSecondaryProperty (classIndex COMMA_HERE) ;
    }
    if (NULL == f) {
       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;
       while ((NULL == f) && (NULL != p)) {
         if (p->mSlotID < gCategoryMethodTable_astDeclaration_solveSecondaryProperty.count ()) {
           f = gCategoryMethodTable_astDeclaration_solveSecondaryProperty (p->mSlotID COMMA_HERE) ;
         }
         p = p->mSuperclassDescriptor ;
       }
       gCategoryMethodTable_astDeclaration_solveSecondaryProperty.forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;
    }
    if (NULL == f) {
      fatalError ("FATAL CATEGORY METHOD CALL ERROR", __FILE__, __LINE__) ;
    }else{
      f (inObject, io_ioSemanticContext, constin_inUnifiedTypeMap, constin_inPropertiesToSolve, out_outUnsolvedProperties, inCompiler COMMA_THERE) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structForGeneration::GALGAS_structForGeneration (void) :
mAttribute_mTransientListForGeneration (),
mAttribute_mActionListForGeneration (),
mAttribute_mPreferencesForGeneration (),
mAttribute_mDocumentListForGeneration (),
mAttribute_mEntityListForGeneration (),
mAttribute_mClassListForGeneration (),
mAttribute_mEnumListForGeneration (),
mAttribute_mNeededOutletClasses (),
mAttribute_mAllArrayControllerForGeneration (),
mAttribute_mValidationStubRoutineListForGeneration (),
mAttribute_mSelectionControllerListForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structForGeneration::~ GALGAS_structForGeneration (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structForGeneration::GALGAS_structForGeneration (const GALGAS_transientDefinitionListForGeneration & inOperand0,
                                                        const GALGAS_actionListForGeneration & inOperand1,
                                                        const GALGAS_preferencesForGeneration & inOperand2,
                                                        const GALGAS_documentListForGeneration & inOperand3,
                                                        const GALGAS_entityListForGeneration & inOperand4,
                                                        const GALGAS_classListForGeneration & inOperand5,
                                                        const GALGAS_enumListForGeneration & inOperand6,
                                                        const GALGAS_stringset & inOperand7,
                                                        const GALGAS_arrayControllerForGeneration & inOperand8,
                                                        const GALGAS_validationStubRoutineListForGeneration & inOperand9,
                                                        const GALGAS_selectionControllerForGeneration & inOperand10) :
mAttribute_mTransientListForGeneration (inOperand0),
mAttribute_mActionListForGeneration (inOperand1),
mAttribute_mPreferencesForGeneration (inOperand2),
mAttribute_mDocumentListForGeneration (inOperand3),
mAttribute_mEntityListForGeneration (inOperand4),
mAttribute_mClassListForGeneration (inOperand5),
mAttribute_mEnumListForGeneration (inOperand6),
mAttribute_mNeededOutletClasses (inOperand7),
mAttribute_mAllArrayControllerForGeneration (inOperand8),
mAttribute_mValidationStubRoutineListForGeneration (inOperand9),
mAttribute_mSelectionControllerListForGeneration (inOperand10) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structForGeneration GALGAS_structForGeneration::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_structForGeneration (GALGAS_transientDefinitionListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_actionListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_preferencesForGeneration::constructor_default (HERE),
                                     GALGAS_documentListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_entityListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_classListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_enumListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_stringset::constructor_emptySet (HERE),
                                     GALGAS_arrayControllerForGeneration::constructor_emptyList (HERE),
                                     GALGAS_validationStubRoutineListForGeneration::constructor_emptyList (HERE),
                                     GALGAS_selectionControllerForGeneration::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_structForGeneration GALGAS_structForGeneration::constructor_new (const GALGAS_transientDefinitionListForGeneration & inOperand0,
                                                                        const GALGAS_actionListForGeneration & inOperand1,
                                                                        const GALGAS_preferencesForGeneration & inOperand2,
                                                                        const GALGAS_documentListForGeneration & inOperand3,
                                                                        const GALGAS_entityListForGeneration & inOperand4,
                                                                        const GALGAS_classListForGeneration & inOperand5,
                                                                        const GALGAS_enumListForGeneration & inOperand6,
                                                                        const GALGAS_stringset & inOperand7,
                                                                        const GALGAS_arrayControllerForGeneration & inOperand8,
                                                                        const GALGAS_validationStubRoutineListForGeneration & inOperand9,
                                                                        const GALGAS_selectionControllerForGeneration & inOperand10 
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_structForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_structForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
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
    result = mAttribute_mPreferencesForGeneration.objectCompare (inOperand.mAttribute_mPreferencesForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDocumentListForGeneration.objectCompare (inOperand.mAttribute_mDocumentListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEntityListForGeneration.objectCompare (inOperand.mAttribute_mEntityListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mClassListForGeneration.objectCompare (inOperand.mAttribute_mClassListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEnumListForGeneration.objectCompare (inOperand.mAttribute_mEnumListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mNeededOutletClasses.objectCompare (inOperand.mAttribute_mNeededOutletClasses) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAllArrayControllerForGeneration.objectCompare (inOperand.mAttribute_mAllArrayControllerForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mValidationStubRoutineListForGeneration.objectCompare (inOperand.mAttribute_mValidationStubRoutineListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSelectionControllerListForGeneration.objectCompare (inOperand.mAttribute_mSelectionControllerListForGeneration) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_structForGeneration::isValid (void) const {
  return mAttribute_mTransientListForGeneration.isValid () && mAttribute_mActionListForGeneration.isValid () && mAttribute_mPreferencesForGeneration.isValid () && mAttribute_mDocumentListForGeneration.isValid () && mAttribute_mEntityListForGeneration.isValid () && mAttribute_mClassListForGeneration.isValid () && mAttribute_mEnumListForGeneration.isValid () && mAttribute_mNeededOutletClasses.isValid () && mAttribute_mAllArrayControllerForGeneration.isValid () && mAttribute_mValidationStubRoutineListForGeneration.isValid () && mAttribute_mSelectionControllerListForGeneration.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_structForGeneration::drop (void) {
  mAttribute_mTransientListForGeneration.drop () ;
  mAttribute_mActionListForGeneration.drop () ;
  mAttribute_mPreferencesForGeneration.drop () ;
  mAttribute_mDocumentListForGeneration.drop () ;
  mAttribute_mEntityListForGeneration.drop () ;
  mAttribute_mClassListForGeneration.drop () ;
  mAttribute_mEnumListForGeneration.drop () ;
  mAttribute_mNeededOutletClasses.drop () ;
  mAttribute_mAllArrayControllerForGeneration.drop () ;
  mAttribute_mValidationStubRoutineListForGeneration.drop () ;
  mAttribute_mSelectionControllerListForGeneration.drop () ;
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
    mAttribute_mPreferencesForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDocumentListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEntityListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mClassListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEnumListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNeededOutletClasses.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAllArrayControllerForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mValidationStubRoutineListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSelectionControllerListForGeneration.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration GALGAS_structForGeneration::getter_mTransientListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTransientListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionListForGeneration GALGAS_structForGeneration::getter_mActionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferencesForGeneration GALGAS_structForGeneration::getter_mPreferencesForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreferencesForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentListForGeneration GALGAS_structForGeneration::getter_mDocumentListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDocumentListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityListForGeneration GALGAS_structForGeneration::getter_mEntityListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEntityListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classListForGeneration GALGAS_structForGeneration::getter_mClassListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mClassListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumListForGeneration GALGAS_structForGeneration::getter_mEnumListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnumListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_structForGeneration::getter_mNeededOutletClasses (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNeededOutletClasses ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration GALGAS_structForGeneration::getter_mAllArrayControllerForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAllArrayControllerForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_validationStubRoutineListForGeneration GALGAS_structForGeneration::getter_mValidationStubRoutineListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mValidationStubRoutineListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectionControllerForGeneration GALGAS_structForGeneration::getter_mSelectionControllerListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSelectionControllerListForGeneration ;
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

GALGAS_XcodeProjectDescriptor::GALGAS_XcodeProjectDescriptor (void) :
mAttribute_mSequenceNumber (),
mAttribute_mMainGroupReference (),
mAttribute_mMainGroupChildrenRefs (),
mAttribute_mProjectObjectReference (),
mAttribute_mGroupList (),
mAttribute_mToolTargetList (),
mAttribute_mAppTargetList (),
mAttribute_mCppFileList (),
mAttribute_m_5F_M_5F_FileList (),
mAttribute_m_5F_MM_5F_FileList (),
mAttribute_m_5F_SwiftFileList (),
mAttribute_mFrameworkFileList (),
mAttribute_mHeaderFileList (),
mAttribute_mBuildFileList (),
mAttribute_mDefaultConfigurationRef (),
mAttribute_mDefaultConfigurationSettingList (),
mAttribute_mProjectBuildConfigurationRef (),
mAttribute_mInfoPlistFileList (),
mAttribute_mXIB_5F_fileList (),
mAttribute_mTIFF_5F_fileList (),
mAttribute_mICNS_5F_fileList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XcodeProjectDescriptor::~ GALGAS_XcodeProjectDescriptor (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XcodeProjectDescriptor::GALGAS_XcodeProjectDescriptor (const GALGAS_uint & inOperand0,
                                                              const GALGAS_string & inOperand1,
                                                              const GALGAS_stringlist & inOperand2,
                                                              const GALGAS_string & inOperand3,
                                                              const GALGAS_XCodeGroupList & inOperand4,
                                                              const GALGAS_XCodeToolTargetList & inOperand5,
                                                              const GALGAS_XCodeAppTargetList & inOperand6,
                                                              const GALGAS__32_stringlist & inOperand7,
                                                              const GALGAS__32_stringlist & inOperand8,
                                                              const GALGAS__32_stringlist & inOperand9,
                                                              const GALGAS__32_stringlist & inOperand10,
                                                              const GALGAS__32_stringlist & inOperand11,
                                                              const GALGAS__32_stringlist & inOperand12,
                                                              const GALGAS_BuildFileList & inOperand13,
                                                              const GALGAS_string & inOperand14,
                                                              const GALGAS_stringlist & inOperand15,
                                                              const GALGAS_string & inOperand16,
                                                              const GALGAS__32_stringlist & inOperand17,
                                                              const GALGAS__32_stringlist & inOperand18,
                                                              const GALGAS__32_stringlist & inOperand19,
                                                              const GALGAS__32_stringlist & inOperand20) :
mAttribute_mSequenceNumber (inOperand0),
mAttribute_mMainGroupReference (inOperand1),
mAttribute_mMainGroupChildrenRefs (inOperand2),
mAttribute_mProjectObjectReference (inOperand3),
mAttribute_mGroupList (inOperand4),
mAttribute_mToolTargetList (inOperand5),
mAttribute_mAppTargetList (inOperand6),
mAttribute_mCppFileList (inOperand7),
mAttribute_m_5F_M_5F_FileList (inOperand8),
mAttribute_m_5F_MM_5F_FileList (inOperand9),
mAttribute_m_5F_SwiftFileList (inOperand10),
mAttribute_mFrameworkFileList (inOperand11),
mAttribute_mHeaderFileList (inOperand12),
mAttribute_mBuildFileList (inOperand13),
mAttribute_mDefaultConfigurationRef (inOperand14),
mAttribute_mDefaultConfigurationSettingList (inOperand15),
mAttribute_mProjectBuildConfigurationRef (inOperand16),
mAttribute_mInfoPlistFileList (inOperand17),
mAttribute_mXIB_5F_fileList (inOperand18),
mAttribute_mTIFF_5F_fileList (inOperand19),
mAttribute_mICNS_5F_fileList (inOperand20) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XcodeProjectDescriptor GALGAS_XcodeProjectDescriptor::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XcodeProjectDescriptor (GALGAS_uint::constructor_default (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS_stringlist::constructor_emptyList (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS_XCodeGroupList::constructor_emptyList (HERE),
                                        GALGAS_XCodeToolTargetList::constructor_emptyList (HERE),
                                        GALGAS_XCodeAppTargetList::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS_BuildFileList::constructor_emptyList (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS_stringlist::constructor_emptyList (HERE),
                                        GALGAS_string::constructor_default (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE),
                                        GALGAS__32_stringlist::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XcodeProjectDescriptor GALGAS_XcodeProjectDescriptor::constructor_new (const GALGAS_uint & inOperand0,
                                                                              const GALGAS_string & inOperand1,
                                                                              const GALGAS_stringlist & inOperand2,
                                                                              const GALGAS_string & inOperand3,
                                                                              const GALGAS_XCodeGroupList & inOperand4,
                                                                              const GALGAS_XCodeToolTargetList & inOperand5,
                                                                              const GALGAS_XCodeAppTargetList & inOperand6,
                                                                              const GALGAS__32_stringlist & inOperand7,
                                                                              const GALGAS__32_stringlist & inOperand8,
                                                                              const GALGAS__32_stringlist & inOperand9,
                                                                              const GALGAS__32_stringlist & inOperand10,
                                                                              const GALGAS__32_stringlist & inOperand11,
                                                                              const GALGAS__32_stringlist & inOperand12,
                                                                              const GALGAS_BuildFileList & inOperand13,
                                                                              const GALGAS_string & inOperand14,
                                                                              const GALGAS_stringlist & inOperand15,
                                                                              const GALGAS_string & inOperand16,
                                                                              const GALGAS__32_stringlist & inOperand17,
                                                                              const GALGAS__32_stringlist & inOperand18,
                                                                              const GALGAS__32_stringlist & inOperand19,
                                                                              const GALGAS__32_stringlist & inOperand20 
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XcodeProjectDescriptor result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid () && inOperand15.isValid () && inOperand16.isValid () && inOperand17.isValid () && inOperand18.isValid () && inOperand19.isValid () && inOperand20.isValid ()) {
    result = GALGAS_XcodeProjectDescriptor (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14, inOperand15, inOperand16, inOperand17, inOperand18, inOperand19, inOperand20) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_XcodeProjectDescriptor::objectCompare (const GALGAS_XcodeProjectDescriptor & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mSequenceNumber.objectCompare (inOperand.mAttribute_mSequenceNumber) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMainGroupReference.objectCompare (inOperand.mAttribute_mMainGroupReference) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMainGroupChildrenRefs.objectCompare (inOperand.mAttribute_mMainGroupChildrenRefs) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProjectObjectReference.objectCompare (inOperand.mAttribute_mProjectObjectReference) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mGroupList.objectCompare (inOperand.mAttribute_mGroupList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mToolTargetList.objectCompare (inOperand.mAttribute_mToolTargetList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAppTargetList.objectCompare (inOperand.mAttribute_mAppTargetList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCppFileList.objectCompare (inOperand.mAttribute_mCppFileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_m_5F_M_5F_FileList.objectCompare (inOperand.mAttribute_m_5F_M_5F_FileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_m_5F_MM_5F_FileList.objectCompare (inOperand.mAttribute_m_5F_MM_5F_FileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_m_5F_SwiftFileList.objectCompare (inOperand.mAttribute_m_5F_SwiftFileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFrameworkFileList.objectCompare (inOperand.mAttribute_mFrameworkFileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHeaderFileList.objectCompare (inOperand.mAttribute_mHeaderFileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBuildFileList.objectCompare (inOperand.mAttribute_mBuildFileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDefaultConfigurationRef.objectCompare (inOperand.mAttribute_mDefaultConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mDefaultConfigurationSettingList.objectCompare (inOperand.mAttribute_mDefaultConfigurationSettingList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mProjectBuildConfigurationRef.objectCompare (inOperand.mAttribute_mProjectBuildConfigurationRef) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInfoPlistFileList.objectCompare (inOperand.mAttribute_mInfoPlistFileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mXIB_5F_fileList.objectCompare (inOperand.mAttribute_mXIB_5F_fileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTIFF_5F_fileList.objectCompare (inOperand.mAttribute_mTIFF_5F_fileList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mICNS_5F_fileList.objectCompare (inOperand.mAttribute_mICNS_5F_fileList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_XcodeProjectDescriptor::isValid (void) const {
  return mAttribute_mSequenceNumber.isValid () && mAttribute_mMainGroupReference.isValid () && mAttribute_mMainGroupChildrenRefs.isValid () && mAttribute_mProjectObjectReference.isValid () && mAttribute_mGroupList.isValid () && mAttribute_mToolTargetList.isValid () && mAttribute_mAppTargetList.isValid () && mAttribute_mCppFileList.isValid () && mAttribute_m_5F_M_5F_FileList.isValid () && mAttribute_m_5F_MM_5F_FileList.isValid () && mAttribute_m_5F_SwiftFileList.isValid () && mAttribute_mFrameworkFileList.isValid () && mAttribute_mHeaderFileList.isValid () && mAttribute_mBuildFileList.isValid () && mAttribute_mDefaultConfigurationRef.isValid () && mAttribute_mDefaultConfigurationSettingList.isValid () && mAttribute_mProjectBuildConfigurationRef.isValid () && mAttribute_mInfoPlistFileList.isValid () && mAttribute_mXIB_5F_fileList.isValid () && mAttribute_mTIFF_5F_fileList.isValid () && mAttribute_mICNS_5F_fileList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XcodeProjectDescriptor::drop (void) {
  mAttribute_mSequenceNumber.drop () ;
  mAttribute_mMainGroupReference.drop () ;
  mAttribute_mMainGroupChildrenRefs.drop () ;
  mAttribute_mProjectObjectReference.drop () ;
  mAttribute_mGroupList.drop () ;
  mAttribute_mToolTargetList.drop () ;
  mAttribute_mAppTargetList.drop () ;
  mAttribute_mCppFileList.drop () ;
  mAttribute_m_5F_M_5F_FileList.drop () ;
  mAttribute_m_5F_MM_5F_FileList.drop () ;
  mAttribute_m_5F_SwiftFileList.drop () ;
  mAttribute_mFrameworkFileList.drop () ;
  mAttribute_mHeaderFileList.drop () ;
  mAttribute_mBuildFileList.drop () ;
  mAttribute_mDefaultConfigurationRef.drop () ;
  mAttribute_mDefaultConfigurationSettingList.drop () ;
  mAttribute_mProjectBuildConfigurationRef.drop () ;
  mAttribute_mInfoPlistFileList.drop () ;
  mAttribute_mXIB_5F_fileList.drop () ;
  mAttribute_mTIFF_5F_fileList.drop () ;
  mAttribute_mICNS_5F_fileList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_XcodeProjectDescriptor::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "<struct @XcodeProjectDescriptor:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mSequenceNumber.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMainGroupReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMainGroupChildrenRefs.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProjectObjectReference.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mGroupList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mToolTargetList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAppTargetList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCppFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_m_5F_M_5F_FileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_m_5F_MM_5F_FileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_m_5F_SwiftFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFrameworkFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHeaderFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBuildFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDefaultConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDefaultConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mProjectBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInfoPlistFileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mXIB_5F_fileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTIFF_5F_fileList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mICNS_5F_fileList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_XcodeProjectDescriptor::getter_mSequenceNumber (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSequenceNumber ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XcodeProjectDescriptor::getter_mMainGroupReference (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMainGroupReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XcodeProjectDescriptor::getter_mMainGroupChildrenRefs (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMainGroupChildrenRefs ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XcodeProjectDescriptor::getter_mProjectObjectReference (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProjectObjectReference ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeGroupList GALGAS_XcodeProjectDescriptor::getter_mGroupList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mGroupList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeToolTargetList GALGAS_XcodeProjectDescriptor::getter_mToolTargetList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mToolTargetList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XCodeAppTargetList GALGAS_XcodeProjectDescriptor::getter_mAppTargetList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAppTargetList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mCppFileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCppFileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_m_5F_M_5F_FileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_M_5F_FileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_m_5F_MM_5F_FileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_MM_5F_FileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_m_5F_SwiftFileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_m_5F_SwiftFileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mFrameworkFileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFrameworkFileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mHeaderFileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHeaderFileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_BuildFileList GALGAS_XcodeProjectDescriptor::getter_mBuildFileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBuildFileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XcodeProjectDescriptor::getter_mDefaultConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefaultConfigurationRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringlist GALGAS_XcodeProjectDescriptor::getter_mDefaultConfigurationSettingList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefaultConfigurationSettingList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_XcodeProjectDescriptor::getter_mProjectBuildConfigurationRef (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mProjectBuildConfigurationRef ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mInfoPlistFileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInfoPlistFileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mXIB_5F_fileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mXIB_5F_fileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mTIFF_5F_fileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTIFF_5F_fileList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS__32_stringlist GALGAS_XcodeProjectDescriptor::getter_mICNS_5F_fileList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mICNS_5F_fileList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            @XcodeProjectDescriptor type                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XcodeProjectDescriptor ("XcodeProjectDescriptor",
                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_XcodeProjectDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XcodeProjectDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_XcodeProjectDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XcodeProjectDescriptor (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_XcodeProjectDescriptor GALGAS_XcodeProjectDescriptor::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_XcodeProjectDescriptor result ;
  const GALGAS_XcodeProjectDescriptor * p = (const GALGAS_XcodeProjectDescriptor *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_XcodeProjectDescriptor *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XcodeProjectDescriptor", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@XcodeProjectDescriptor addTIFF_file'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addTIFF_5F_file (GALGAS_XcodeProjectDescriptor & ioObject,
                                       const GALGAS_string constinArgument_inFileName,
                                       GALGAS_string & outArgument_outFileRef,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 22)) ;
  }
  ioObject.mAttribute_mTIFF_5F_fileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 23)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@XcodeProjectDescriptor addInfoPlistFile'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addInfoPlistFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                        const GALGAS_string constinArgument_inFileName,
                                        GALGAS_string & outArgument_outFileRef,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 31)) ;
  }
  ioObject.mAttribute_mInfoPlistFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 32)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category method '@XcodeProjectDescriptor addXIBFile'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addXIBFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                  const GALGAS_string constinArgument_inFileName,
                                  GALGAS_string & outArgument_outFileRef,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 40)) ;
  }
  ioObject.mAttribute_mXIB_5F_fileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 41)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@XcodeProjectDescriptor addFrameworkFile'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addFrameworkFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                        const GALGAS_string constinArgument_inFileName,
                                        GALGAS_string & outArgument_outFileRef,
                                        C_Compiler * inCompiler
                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 49)) ;
  }
  ioObject.mAttribute_mFrameworkFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 50)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@XcodeProjectDescriptor addMFile'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addMFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                const GALGAS_string constinArgument_inFileName,
                                GALGAS_string & outArgument_outFileRef,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 58)) ;
  }
  ioObject.mAttribute_m_5F_M_5F_FileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 59)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@XcodeProjectDescriptor addSwiftFile'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addSwiftFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                    const GALGAS_string constinArgument_inFileName,
                                    GALGAS_string & outArgument_outFileRef,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 67)) ;
  }
  ioObject.mAttribute_m_5F_SwiftFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 68)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@XcodeProjectDescriptor addMMFile'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addMMFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                 const GALGAS_string constinArgument_inFileName,
                                 GALGAS_string & outArgument_outFileRef,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 76)) ;
  }
  ioObject.mAttribute_m_5F_MM_5F_FileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 77)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Category method '@XcodeProjectDescriptor addCppFile'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addCppFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                  const GALGAS_string constinArgument_inFileName,
                                  GALGAS_string & outArgument_outFileRef,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 85)) ;
  }
  ioObject.mAttribute_mCppFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 86)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@XcodeProjectDescriptor addHeaderFile'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addHeaderFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                     const GALGAS_string constinArgument_inFileName,
                                     GALGAS_string & outArgument_outFileRef,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 94)) ;
  }
  ioObject.mAttribute_mHeaderFileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 95)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@XcodeProjectDescriptor addBuildFile'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addBuildFile (GALGAS_XcodeProjectDescriptor & ioObject,
                                    const GALGAS_string constinArgument_inFileReference,
                                    const GALGAS_string constinArgument_inFileName,
                                    GALGAS_string & outArgument_outBuildRef,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outBuildRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 104)) ;
  }
  ioObject.mAttribute_mBuildFileList.addAssign_operation (constinArgument_inFileReference, constinArgument_inFileName, outArgument_outBuildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 105)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@XcodeProjectDescriptor addToolTarget'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addToolTarget (GALGAS_XcodeProjectDescriptor & ioObject,
                                     const GALGAS_string constinArgument_inTargetName,
                                     const GALGAS_string constinArgument_inProductFileName,
                                     const GALGAS_stringlist constinArgument_inSourceList,
                                     const GALGAS_stringlist constinArgument_inToolFrameworksFileRefList,
                                     const GALGAS_stringlist constinArgument_inBuildConfigurationSettingList,
                                     GALGAS_string & outArgument_outTargetRef,
                                     GALGAS_string & outArgument_outProductFileRef,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outTargetRef.drop () ; // Release 'out' argument
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 118)) ;
  }
  GALGAS_string var_buildPhaseRef ;
  {
  categoryModifier_getReferenceKey (ioObject, var_buildPhaseRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 119)) ;
  }
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outTargetRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 120)) ;
  }
  GALGAS_string var_buildConfigurationListRef ;
  {
  categoryModifier_getReferenceKey (ioObject, var_buildConfigurationListRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 121)) ;
  }
  GALGAS_string var_buildConfigurationRef ;
  {
  categoryModifier_getReferenceKey (ioObject, var_buildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 122)) ;
  }
  GALGAS_string var_frameworkBuildRef ;
  {
  categoryModifier_getReferenceKey (ioObject, var_frameworkBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 123)) ;
  }
  ioObject.mAttribute_mToolTargetList.addAssign_operation (outArgument_outTargetRef, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef, var_buildConfigurationListRef, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef, constinArgument_inToolFrameworksFileRefList, var_frameworkBuildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 124)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Category method '@XcodeProjectDescriptor addAppTarget'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addAppTarget (GALGAS_XcodeProjectDescriptor & ioObject,
                                    const GALGAS_string constinArgument_inTargetName,
                                    const GALGAS_string constinArgument_inProductFileName,
                                    const GALGAS_stringlist constinArgument_inSourceList,
                                    const GALGAS_stringlist constinArgument_inFrameworksFileRefList,
                                    const GALGAS_stringlist constinArgument_inResourceFileBuildRefs,
                                    const GALGAS_stringlist constinArgument_inBuildConfigurationSettingList,
                                    const GALGAS_stringlist constinArgument_inDependentTargetRefList,
                                    const GALGAS__32_stringlist constinArgument_inProductCopyList,
                                    const GALGAS_string constinArgument_inInfoPList,
                                    GALGAS_string & outArgument_outProductFileRef,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProductFileRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outProductFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 152)) ;
  }
  GALGAS_string var_buildPhaseRef ;
  {
  categoryModifier_getReferenceKey (ioObject, var_buildPhaseRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 153)) ;
  }
  GALGAS_string var_targetRef ;
  {
  categoryModifier_getReferenceKey (ioObject, var_targetRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 154)) ;
  }
  GALGAS_string var_buildConfigurationListRef ;
  {
  categoryModifier_getReferenceKey (ioObject, var_buildConfigurationListRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 155)) ;
  }
  GALGAS_string var_buildConfigurationRef ;
  {
  categoryModifier_getReferenceKey (ioObject, var_buildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 156)) ;
  }
  GALGAS_string var_frameworkBuildRef ;
  {
  categoryModifier_getReferenceKey (ioObject, var_frameworkBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 157)) ;
  }
  GALGAS_string var_resourceBuildRef ;
  {
  categoryModifier_getReferenceKey (ioObject, var_resourceBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 158)) ;
  }
  GALGAS__32_stringlist var_dependentTargets = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 159)) ;
  cEnumerator_stringlist enumerator_6737 (constinArgument_inDependentTargetRefList, kEnumeration_up) ;
  while (enumerator_6737.hasCurrentObject ()) {
    GALGAS_string var_dependencyBuildRef ;
    {
    categoryModifier_getReferenceKey (ioObject, var_dependencyBuildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 161)) ;
    }
    var_dependentTargets.addAssign_operation (var_dependencyBuildRef, enumerator_6737.current_mValue (HERE)  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 162)) ;
    enumerator_6737.gotoNextObject () ;
  }
  GALGAS_stringlist var_resourceFileBuildRefs = constinArgument_inResourceFileBuildRefs ;
  cEnumerator__32_stringlist enumerator_6952 (constinArgument_inProductCopyList, kEnumeration_up) ;
  while (enumerator_6952.hasCurrentObject ()) {
    GALGAS_string var_buildRef ;
    {
    categoryModifier_addBuildFile (ioObject, enumerator_6952.current_mValue_30_ (HERE), enumerator_6952.current_mValue_31_ (HERE), var_buildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 166)) ;
    }
    var_resourceFileBuildRefs.addAssign_operation (var_buildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 167)) ;
    enumerator_6952.gotoNextObject () ;
  }
  ioObject.mAttribute_mAppTargetList.addAssign_operation (var_targetRef, constinArgument_inTargetName, outArgument_outProductFileRef, constinArgument_inProductFileName, constinArgument_inSourceList, var_buildPhaseRef, var_buildConfigurationListRef, constinArgument_inBuildConfigurationSettingList, var_buildConfigurationRef, constinArgument_inFrameworksFileRefList, var_frameworkBuildRef, var_dependentTargets, var_resourceBuildRef, var_resourceFileBuildRefs, constinArgument_inInfoPList  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 169)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Category method '@XcodeProjectDescriptor addGroup'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addGroup (GALGAS_XcodeProjectDescriptor & ioObject,
                                const GALGAS_string constinArgument_inGroupName,
                                const GALGAS_string constinArgument_inGroupPath,
                                const GALGAS_stringlist constinArgument_inChildrenRefs,
                                GALGAS_string & outArgument_outGroupRef,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGroupRef.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioObject.mAttribute_mDefaultConfigurationRef.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    categoryModifier_getReferenceKey (ioObject, ioObject.mAttribute_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 195)) ;
    }
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioObject.mAttribute_mProjectBuildConfigurationRef.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    categoryModifier_getReferenceKey (ioObject, ioObject.mAttribute_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 198)) ;
    }
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, ioObject.mAttribute_mMainGroupReference.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    categoryModifier_getReferenceKey (ioObject, ioObject.mAttribute_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 201)) ;
    }
  }
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 203)) ;
  }
  ioObject.mAttribute_mGroupList.addAssign_operation (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, constinArgument_inChildrenRefs  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 204)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@XcodeProjectDescriptor addGroupWithFiles'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addGroupWithFiles (GALGAS_XcodeProjectDescriptor & ioObject,
                                         const GALGAS_string constinArgument_inGroupName,
                                         const GALGAS_string constinArgument_inGroupPath,
                                         const GALGAS_stringset constinArgument_inFileNames,
                                         GALGAS_stringlist & ioArgument_ioCppFileBuildRefs,
                                         GALGAS_stringlist & ioArgument_ioMFileBuildRefs,
                                         GALGAS_stringlist & ioArgument_ioMMFileBuildRefs,
                                         GALGAS_stringlist & ioArgument_ioSwiftFileBuildRefs,
                                         GALGAS_stringlist & ioArgument_ioFrameWorkFileBuildRefs,
                                         GALGAS_stringlist & ioArgument_ioResourceFileBuildRefs,
                                         GALGAS_string & outArgument_outGroupRef,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGroupRef.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioObject.mAttribute_mDefaultConfigurationRef.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    categoryModifier_getReferenceKey (ioObject, ioObject.mAttribute_mDefaultConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 221)) ;
    }
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, ioObject.mAttribute_mProjectBuildConfigurationRef.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    categoryModifier_getReferenceKey (ioObject, ioObject.mAttribute_mProjectBuildConfigurationRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 224)) ;
    }
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, ioObject.mAttribute_mMainGroupReference.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    categoryModifier_getReferenceKey (ioObject, ioObject.mAttribute_mMainGroupReference, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 227)) ;
    }
  }
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outGroupRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 229)) ;
  }
  GALGAS_stringlist var_childrenRefs = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 231)) ;
  cEnumerator_stringset enumerator_9257 (constinArgument_inFileNames, kEnumeration_up) ;
  while (enumerator_9257.hasCurrentObject ()) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_9257.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 233)).objectCompare (GALGAS_string ("cpp"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_string var_cppFileRef ;
      {
      categoryModifier_addCppFile (ioObject, enumerator_9257.current_key (HERE), var_cppFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 234)) ;
      }
      var_childrenRefs.addAssign_operation (var_cppFileRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 235)) ;
      GALGAS_string var_buildRef ;
      {
      categoryModifier_addBuildFile (ioObject, var_cppFileRef, enumerator_9257.current_key (HERE), var_buildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 236)) ;
      }
      ioArgument_ioCppFileBuildRefs.addAssign_operation (var_buildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 237)) ;
    }else if (kBoolFalse == test_3) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_9257.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 238)).objectCompare (GALGAS_string ("h"))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_headerFileRef ;
        {
        categoryModifier_addHeaderFile (ioObject, enumerator_9257.current_key (HERE), var_headerFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 239)) ;
        }
        var_childrenRefs.addAssign_operation (var_headerFileRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 240)) ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_9257.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 241)).objectCompare (GALGAS_string ("m"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_string var_m_5F_FileRef ;
          {
          categoryModifier_addMFile (ioObject, enumerator_9257.current_key (HERE), var_m_5F_FileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 242)) ;
          }
          GALGAS_string var_buildRef ;
          {
          categoryModifier_addBuildFile (ioObject, var_m_5F_FileRef, enumerator_9257.current_key (HERE), var_buildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 243)) ;
          }
          var_childrenRefs.addAssign_operation (var_m_5F_FileRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 244)) ;
          ioArgument_ioMFileBuildRefs.addAssign_operation (var_buildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 245)) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_9257.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 246)).objectCompare (GALGAS_string ("swift"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_string var_swift_5F_FileRef ;
            {
            categoryModifier_addSwiftFile (ioObject, enumerator_9257.current_key (HERE), var_swift_5F_FileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 247)) ;
            }
            GALGAS_string var_buildRef ;
            {
            categoryModifier_addBuildFile (ioObject, var_swift_5F_FileRef, enumerator_9257.current_key (HERE), var_buildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 248)) ;
            }
            var_childrenRefs.addAssign_operation (var_swift_5F_FileRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 249)) ;
            ioArgument_ioSwiftFileBuildRefs.addAssign_operation (var_buildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 250)) ;
          }else if (kBoolFalse == test_6) {
            const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_9257.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 251)).objectCompare (GALGAS_string ("mm"))).boolEnum () ;
            if (kBoolTrue == test_7) {
              GALGAS_string var_m_5F_FileRef ;
              {
              categoryModifier_addMMFile (ioObject, enumerator_9257.current_key (HERE), var_m_5F_FileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 252)) ;
              }
              GALGAS_string var_buildRef ;
              {
              categoryModifier_addBuildFile (ioObject, var_m_5F_FileRef, enumerator_9257.current_key (HERE), var_buildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 253)) ;
              }
              var_childrenRefs.addAssign_operation (var_m_5F_FileRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 254)) ;
              ioArgument_ioMMFileBuildRefs.addAssign_operation (var_buildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 255)) ;
            }else if (kBoolFalse == test_7) {
              const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_9257.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 256)).objectCompare (GALGAS_string ("framework"))).boolEnum () ;
              if (kBoolTrue == test_8) {
                GALGAS_string var_framework_5F_FileRef ;
                {
                categoryModifier_addFrameworkFile (ioObject, enumerator_9257.current_key (HERE), var_framework_5F_FileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 257)) ;
                }
                GALGAS_string var_buildRef ;
                {
                categoryModifier_addBuildFile (ioObject, var_framework_5F_FileRef, enumerator_9257.current_key (HERE), var_buildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 258)) ;
                }
                var_childrenRefs.addAssign_operation (var_framework_5F_FileRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 259)) ;
                ioArgument_ioFrameWorkFileBuildRefs.addAssign_operation (var_buildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 260)) ;
              }else if (kBoolFalse == test_8) {
                const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, enumerator_9257.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 261)).objectCompare (GALGAS_string ("plist"))).boolEnum () ;
                if (kBoolTrue == test_9) {
                  GALGAS_string var_resource_5F_FileRef ;
                  {
                  categoryModifier_addInfoPlistFile (ioObject, enumerator_9257.current_key (HERE), var_resource_5F_FileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 262)) ;
                  }
                  var_childrenRefs.addAssign_operation (var_resource_5F_FileRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 263)) ;
                }else if (kBoolFalse == test_9) {
                  const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_9257.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 264)).objectCompare (GALGAS_string ("xib"))).boolEnum () ;
                  if (kBoolTrue == test_10) {
                    GALGAS_string var_resource_5F_FileRef ;
                    {
                    categoryModifier_addXIBFile (ioObject, enumerator_9257.current_key (HERE), var_resource_5F_FileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 265)) ;
                    }
                    var_childrenRefs.addAssign_operation (var_resource_5F_FileRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 266)) ;
                    GALGAS_string var_buildRef ;
                    {
                    categoryModifier_addBuildFile (ioObject, var_resource_5F_FileRef, enumerator_9257.current_key (HERE), var_buildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 267)) ;
                    }
                    ioArgument_ioResourceFileBuildRefs.addAssign_operation (var_buildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 268)) ;
                  }else if (kBoolFalse == test_10) {
                    const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, enumerator_9257.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 269)).objectCompare (GALGAS_string ("tiff"))).boolEnum () ;
                    if (kBoolTrue == test_11) {
                      GALGAS_string var_resource_5F_FileRef ;
                      {
                      categoryModifier_addTIFF_5F_file (ioObject, enumerator_9257.current_key (HERE), var_resource_5F_FileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 270)) ;
                      }
                      var_childrenRefs.addAssign_operation (var_resource_5F_FileRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 271)) ;
                      GALGAS_string var_buildRef ;
                      {
                      categoryModifier_addBuildFile (ioObject, var_resource_5F_FileRef, enumerator_9257.current_key (HERE), var_buildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 272)) ;
                      }
                      ioArgument_ioResourceFileBuildRefs.addAssign_operation (var_buildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 273)) ;
                    }else if (kBoolFalse == test_11) {
                      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_9257.current_key (HERE).getter_pathExtension (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 274)).objectCompare (GALGAS_string ("icns"))).boolEnum () ;
                      if (kBoolTrue == test_12) {
                        GALGAS_string var_resource_5F_FileRef ;
                        {
                        categoryModifier_addICNS_5F_file (ioObject, enumerator_9257.current_key (HERE), var_resource_5F_FileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 275)) ;
                        }
                        var_childrenRefs.addAssign_operation (var_resource_5F_FileRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 276)) ;
                        GALGAS_string var_buildRef ;
                        {
                        categoryModifier_addBuildFile (ioObject, var_resource_5F_FileRef, enumerator_9257.current_key (HERE), var_buildRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 277)) ;
                        }
                        ioArgument_ioResourceFileBuildRefs.addAssign_operation (var_buildRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 278)) ;
                      }else if (kBoolFalse == test_12) {
                        inCompiler->emitSemanticError (GALGAS_location::constructor_nowhere (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 280)), GALGAS_string ("unhandled extension for file '").add_operation (enumerator_9257.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 280)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 280))  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 280)) ;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    enumerator_9257.gotoNextObject () ;
  }
  ioObject.mAttribute_mGroupList.addAssign_operation (outArgument_outGroupRef, constinArgument_inGroupName, constinArgument_inGroupPath, var_childrenRefs  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 283)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category method '@XcodeProjectDescriptor placeGroupAsMainGroup'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_placeGroupAsMainGroup (GALGAS_XcodeProjectDescriptor & ioObject,
                                             const GALGAS_string constinArgument_inGroupRef,
                                             C_Compiler * /* inCompiler */
                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mAttribute_mMainGroupChildrenRefs.addAssign_operation (constinArgument_inGroupRef  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 290)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Category method '@XcodeProjectDescriptor addSettingsToDefaultConfiguration'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addSettingsToDefaultConfiguration (GALGAS_XcodeProjectDescriptor & ioObject,
                                                         const GALGAS_stringlist constinArgument_inSettingList,
                                                         C_Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  ioObject.mAttribute_mDefaultConfigurationSettingList.dotAssign_operation (constinArgument_inSettingList  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 297)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@XcodeProjectDescriptor getReferenceKey'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_getReferenceKey (GALGAS_XcodeProjectDescriptor & ioObject,
                                       GALGAS_string & outArgument_outRef,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRef.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, ioObject.mAttribute_mProjectObjectReference.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioObject.mAttribute_mProjectObjectReference = ioObject.mAttribute_mSequenceNumber.getter_string (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 358)).getter_md_35_ (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 358)).getter_rightSubString (GALGAS_uint ((uint32_t) 24U) COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 358)) ;
    ioObject.mAttribute_mSequenceNumber.increment_operation (inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 359)) ;
  }
  outArgument_outRef = ioObject.mAttribute_mSequenceNumber.getter_string (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 361)).getter_md_35_ (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 361)).getter_rightSubString (GALGAS_uint ((uint32_t) 24U) COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 361)) ;
  ioObject.mAttribute_mSequenceNumber.increment_operation (inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 362)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Category method '@XcodeProjectDescriptor generateAtPath'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryMethod_generateAtPath (const GALGAS_XcodeProjectDescriptor inObject,
                                    const GALGAS_string constinArgument_inPath,
                                    const GALGAS_string constinArgument_inCacheFilePath,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_contents = GALGAS_string (filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (inCompiler, inObject.mAttribute_mProjectObjectReference, inObject.mAttribute_mMainGroupReference, inObject.mAttribute_mGroupList, inObject.mAttribute_mMainGroupChildrenRefs, inObject.mAttribute_mToolTargetList, inObject.mAttribute_mAppTargetList, inObject.mAttribute_mCppFileList, inObject.mAttribute_m_5F_M_5F_FileList, inObject.mAttribute_m_5F_MM_5F_FileList, inObject.mAttribute_m_5F_SwiftFileList, inObject.mAttribute_mFrameworkFileList, inObject.mAttribute_mHeaderFileList, inObject.mAttribute_mInfoPlistFileList, inObject.mAttribute_mTIFF_5F_fileList, inObject.mAttribute_mICNS_5F_fileList, inObject.mAttribute_mXIB_5F_fileList, inObject.mAttribute_mBuildFileList, inObject.mAttribute_mDefaultConfigurationRef, inObject.mAttribute_mDefaultConfigurationSettingList, inObject.mAttribute_mProjectBuildConfigurationRef COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 426))) ;
  GALGAS_string var_projectCoreFile = constinArgument_inPath.add_operation (GALGAS_string ("/project.pbxproj"), inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 448)) ;
  GALGAS_bool test_0 = var_projectCoreFile.getter_fileExists (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 449)).operator_not (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 449)) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = constinArgument_inCacheFilePath.getter_fileExists (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 449)).operator_not (SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 449)) ;
  }
  GALGAS_bool test_1 = test_0 ;
  if (kBoolTrue != test_1.boolEnum ()) {
    test_1 = GALGAS_bool (kIsNotEqual, GALGAS_string::constructor_stringWithContentsOfFile (constinArgument_inCacheFilePath, inCompiler  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 449)).objectCompare (var_contents)) ;
  }
  const enumGalgasBool test_2 = test_1.boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_bool joker_17579 ; // Joker input parameter
    var_contents.method_writeToFileWhenDifferentContents (constinArgument_inCacheFilePath, joker_17579, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 450)) ;
    var_contents.method_makeDirectoryAndWriteToFile (var_projectCoreFile, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 451)) ;
  }
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

GALGAS_astDeclaration GALGAS_astDeclarationList_2D_element::getter_mDeclaration (UNUSED_LOCATION_ARGS) const {
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

GALGAS_externSwiftFunctionList_2D_element::GALGAS_externSwiftFunctionList_2D_element (void) :
mAttribute_mExternSwiftFunctionName (),
mAttribute_mCallerName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftFunctionList_2D_element::~ GALGAS_externSwiftFunctionList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftFunctionList_2D_element::GALGAS_externSwiftFunctionList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1) :
mAttribute_mExternSwiftFunctionName (inOperand0),
mAttribute_mCallerName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftFunctionList_2D_element GALGAS_externSwiftFunctionList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externSwiftFunctionList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftFunctionList_2D_element GALGAS_externSwiftFunctionList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externSwiftFunctionList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_externSwiftFunctionList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_externSwiftFunctionList_2D_element::objectCompare (const GALGAS_externSwiftFunctionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mExternSwiftFunctionName.objectCompare (inOperand.mAttribute_mExternSwiftFunctionName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mCallerName.objectCompare (inOperand.mAttribute_mCallerName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_externSwiftFunctionList_2D_element::isValid (void) const {
  return mAttribute_mExternSwiftFunctionName.isValid () && mAttribute_mCallerName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externSwiftFunctionList_2D_element::drop (void) {
  mAttribute_mExternSwiftFunctionName.drop () ;
  mAttribute_mCallerName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externSwiftFunctionList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @externSwiftFunctionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mExternSwiftFunctionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mCallerName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externSwiftFunctionList_2D_element::getter_mExternSwiftFunctionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mExternSwiftFunctionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externSwiftFunctionList_2D_element::getter_mCallerName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mCallerName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @externSwiftFunctionList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externSwiftFunctionList_2D_element ("externSwiftFunctionList-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externSwiftFunctionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externSwiftFunctionList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externSwiftFunctionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externSwiftFunctionList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftFunctionList_2D_element GALGAS_externSwiftFunctionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_externSwiftFunctionList_2D_element result ;
  const GALGAS_externSwiftFunctionList_2D_element * p = (const GALGAS_externSwiftFunctionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externSwiftFunctionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externSwiftFunctionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionMap_2D_element::GALGAS_externFunctionMap_2D_element (void) :
mAttribute_lkey () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionMap_2D_element::~ GALGAS_externFunctionMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionMap_2D_element::GALGAS_externFunctionMap_2D_element (const GALGAS_lstring & inOperand0) :
mAttribute_lkey (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionMap_2D_element GALGAS_externFunctionMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_externFunctionMap_2D_element (GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionMap_2D_element GALGAS_externFunctionMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0 
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_externFunctionMap_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_externFunctionMap_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_externFunctionMap_2D_element::objectCompare (const GALGAS_externFunctionMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_externFunctionMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externFunctionMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_externFunctionMap_2D_element::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "<struct @externFunctionMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_externFunctionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @externFunctionMap-element type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_externFunctionMap_2D_element ("externFunctionMap-element",
                                                     NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_externFunctionMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_externFunctionMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_externFunctionMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externFunctionMap_2D_element GALGAS_externFunctionMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_externFunctionMap_2D_element result ;
  const GALGAS_externFunctionMap_2D_element * p = (const GALGAS_externFunctionMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_externFunctionMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_lstring GALGAS_enumConstantMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
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

GALGAS_toOneRelationshipList_2D_element::GALGAS_toOneRelationshipList_2D_element (void) :
mAttribute_mDestinationEntityName (),
mAttribute_mToOneRelationshipName (),
mAttribute_mInverseRelationshipName (),
mAttribute_mInverseRelationMultiplicity () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneRelationshipList_2D_element::~ GALGAS_toOneRelationshipList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneRelationshipList_2D_element::GALGAS_toOneRelationshipList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_lstring & inOperand2,
                                                                                  const GALGAS_propertyMultiplicity & inOperand3) :
mAttribute_mDestinationEntityName (inOperand0),
mAttribute_mToOneRelationshipName (inOperand1),
mAttribute_mInverseRelationshipName (inOperand2),
mAttribute_mInverseRelationMultiplicity (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneRelationshipList_2D_element GALGAS_toOneRelationshipList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_lstring & inOperand2,
                                                                                                  const GALGAS_propertyMultiplicity & inOperand3 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toOneRelationshipList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_toOneRelationshipList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_toOneRelationshipList_2D_element::objectCompare (const GALGAS_toOneRelationshipList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDestinationEntityName.objectCompare (inOperand.mAttribute_mDestinationEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mToOneRelationshipName.objectCompare (inOperand.mAttribute_mToOneRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInverseRelationshipName.objectCompare (inOperand.mAttribute_mInverseRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInverseRelationMultiplicity.objectCompare (inOperand.mAttribute_mInverseRelationMultiplicity) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_toOneRelationshipList_2D_element::isValid (void) const {
  return mAttribute_mDestinationEntityName.isValid () && mAttribute_mToOneRelationshipName.isValid () && mAttribute_mInverseRelationshipName.isValid () && mAttribute_mInverseRelationMultiplicity.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toOneRelationshipList_2D_element::drop (void) {
  mAttribute_mDestinationEntityName.drop () ;
  mAttribute_mToOneRelationshipName.drop () ;
  mAttribute_mInverseRelationshipName.drop () ;
  mAttribute_mInverseRelationMultiplicity.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toOneRelationshipList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @toOneRelationshipList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDestinationEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mToOneRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInverseRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInverseRelationMultiplicity.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_toOneRelationshipList_2D_element::getter_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDestinationEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_toOneRelationshipList_2D_element::getter_mToOneRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mToOneRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_toOneRelationshipList_2D_element::getter_mInverseRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInverseRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMultiplicity GALGAS_toOneRelationshipList_2D_element::getter_mInverseRelationMultiplicity (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInverseRelationMultiplicity ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @toOneRelationshipList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOneRelationshipList_2D_element ("toOneRelationshipList-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_toOneRelationshipList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneRelationshipList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_toOneRelationshipList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneRelationshipList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneRelationshipList_2D_element GALGAS_toOneRelationshipList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toOneRelationshipList_2D_element result ;
  const GALGAS_toOneRelationshipList_2D_element * p = (const GALGAS_toOneRelationshipList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOneRelationshipList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneRelationshipList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyRelationshipList_2D_element::GALGAS_toManyRelationshipList_2D_element (void) :
mAttribute_mDestinationEntityName (),
mAttribute_mToManyRelationshipName (),
mAttribute_mInverseRelationshipName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyRelationshipList_2D_element::~ GALGAS_toManyRelationshipList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyRelationshipList_2D_element::GALGAS_toManyRelationshipList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_lstring & inOperand1,
                                                                                    const GALGAS_lstring & inOperand2) :
mAttribute_mDestinationEntityName (inOperand0),
mAttribute_mToManyRelationshipName (inOperand1),
mAttribute_mInverseRelationshipName (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyRelationshipList_2D_element GALGAS_toManyRelationshipList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_toManyRelationshipList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyRelationshipList_2D_element GALGAS_toManyRelationshipList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_lstring & inOperand1,
                                                                                                    const GALGAS_lstring & inOperand2 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toManyRelationshipList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_toManyRelationshipList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_toManyRelationshipList_2D_element::objectCompare (const GALGAS_toManyRelationshipList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDestinationEntityName.objectCompare (inOperand.mAttribute_mDestinationEntityName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mToManyRelationshipName.objectCompare (inOperand.mAttribute_mToManyRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInverseRelationshipName.objectCompare (inOperand.mAttribute_mInverseRelationshipName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_toManyRelationshipList_2D_element::isValid (void) const {
  return mAttribute_mDestinationEntityName.isValid () && mAttribute_mToManyRelationshipName.isValid () && mAttribute_mInverseRelationshipName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toManyRelationshipList_2D_element::drop (void) {
  mAttribute_mDestinationEntityName.drop () ;
  mAttribute_mToManyRelationshipName.drop () ;
  mAttribute_mInverseRelationshipName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_toManyRelationshipList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @toManyRelationshipList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDestinationEntityName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mToManyRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInverseRelationshipName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_toManyRelationshipList_2D_element::getter_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDestinationEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_toManyRelationshipList_2D_element::getter_mToManyRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mToManyRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_toManyRelationshipList_2D_element::getter_mInverseRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInverseRelationshipName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @toManyRelationshipList-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyRelationshipList_2D_element ("toManyRelationshipList-element",
                                                          NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_toManyRelationshipList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_toManyRelationshipList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyRelationshipList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyRelationshipList_2D_element GALGAS_toManyRelationshipList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipList_2D_element result ;
  const GALGAS_toManyRelationshipList_2D_element * p = (const GALGAS_toManyRelationshipList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyRelationshipList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classObservablePropertyMap_2D_element::GALGAS_classObservablePropertyMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mObservablePropertyMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classObservablePropertyMap_2D_element::~ GALGAS_classObservablePropertyMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classObservablePropertyMap_2D_element::GALGAS_classObservablePropertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_observablePropertyMap & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mObservablePropertyMap (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classObservablePropertyMap_2D_element GALGAS_classObservablePropertyMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_classObservablePropertyMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_observablePropertyMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classObservablePropertyMap_2D_element GALGAS_classObservablePropertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_observablePropertyMap & inOperand1 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_classObservablePropertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_classObservablePropertyMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_classObservablePropertyMap_2D_element::objectCompare (const GALGAS_classObservablePropertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mObservablePropertyMap.objectCompare (inOperand.mAttribute_mObservablePropertyMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_classObservablePropertyMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mObservablePropertyMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classObservablePropertyMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mObservablePropertyMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_classObservablePropertyMap_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @classObservablePropertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_classObservablePropertyMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap GALGAS_classObservablePropertyMap_2D_element::getter_mObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservablePropertyMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @classObservablePropertyMap-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classObservablePropertyMap_2D_element ("classObservablePropertyMap-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_classObservablePropertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classObservablePropertyMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_classObservablePropertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classObservablePropertyMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classObservablePropertyMap_2D_element GALGAS_classObservablePropertyMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_classObservablePropertyMap_2D_element result ;
  const GALGAS_classObservablePropertyMap_2D_element * p = (const GALGAS_classObservablePropertyMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classObservablePropertyMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classObservablePropertyMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityObservablePropertyMap_2D_element::GALGAS_entityObservablePropertyMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mObservablePropertyMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityObservablePropertyMap_2D_element::~ GALGAS_entityObservablePropertyMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityObservablePropertyMap_2D_element::GALGAS_entityObservablePropertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                              const GALGAS_observablePropertyMap & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mObservablePropertyMap (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityObservablePropertyMap_2D_element GALGAS_entityObservablePropertyMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_entityObservablePropertyMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                        GALGAS_observablePropertyMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityObservablePropertyMap_2D_element GALGAS_entityObservablePropertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                              const GALGAS_observablePropertyMap & inOperand1 
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_entityObservablePropertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_entityObservablePropertyMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_entityObservablePropertyMap_2D_element::objectCompare (const GALGAS_entityObservablePropertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mObservablePropertyMap.objectCompare (inOperand.mAttribute_mObservablePropertyMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_entityObservablePropertyMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mObservablePropertyMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_entityObservablePropertyMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mObservablePropertyMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_entityObservablePropertyMap_2D_element::description (C_String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString << "<struct @entityObservablePropertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_entityObservablePropertyMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap GALGAS_entityObservablePropertyMap_2D_element::getter_mObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservablePropertyMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @entityObservablePropertyMap-element type                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityObservablePropertyMap_2D_element ("entityObservablePropertyMap-element",
                                                               NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_entityObservablePropertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityObservablePropertyMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_entityObservablePropertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityObservablePropertyMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityObservablePropertyMap_2D_element GALGAS_entityObservablePropertyMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                            C_Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_entityObservablePropertyMap_2D_element result ;
  const GALGAS_entityObservablePropertyMap_2D_element * p = (const GALGAS_entityObservablePropertyMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityObservablePropertyMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityObservablePropertyMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentObservablePropertyMap_2D_element::GALGAS_documentObservablePropertyMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mObservablePropertyMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentObservablePropertyMap_2D_element::~ GALGAS_documentObservablePropertyMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentObservablePropertyMap_2D_element::GALGAS_documentObservablePropertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_observablePropertyMap & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mObservablePropertyMap (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentObservablePropertyMap_2D_element GALGAS_documentObservablePropertyMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_documentObservablePropertyMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                          GALGAS_observablePropertyMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentObservablePropertyMap_2D_element GALGAS_documentObservablePropertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                  const GALGAS_observablePropertyMap & inOperand1 
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_documentObservablePropertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_documentObservablePropertyMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_documentObservablePropertyMap_2D_element::objectCompare (const GALGAS_documentObservablePropertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mObservablePropertyMap.objectCompare (inOperand.mAttribute_mObservablePropertyMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_documentObservablePropertyMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mObservablePropertyMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_documentObservablePropertyMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mObservablePropertyMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_documentObservablePropertyMap_2D_element::description (C_String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString << "<struct @documentObservablePropertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_documentObservablePropertyMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap GALGAS_documentObservablePropertyMap_2D_element::getter_mObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservablePropertyMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     @documentObservablePropertyMap-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_documentObservablePropertyMap_2D_element ("documentObservablePropertyMap-element",
                                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_documentObservablePropertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentObservablePropertyMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_documentObservablePropertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_documentObservablePropertyMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentObservablePropertyMap_2D_element GALGAS_documentObservablePropertyMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_documentObservablePropertyMap_2D_element result ;
  const GALGAS_documentObservablePropertyMap_2D_element * p = (const GALGAS_documentObservablePropertyMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_documentObservablePropertyMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("documentObservablePropertyMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefsObservablePropertyMap_2D_element::GALGAS_prefsObservablePropertyMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mObservablePropertyMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefsObservablePropertyMap_2D_element::~ GALGAS_prefsObservablePropertyMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefsObservablePropertyMap_2D_element::GALGAS_prefsObservablePropertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_observablePropertyMap & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mObservablePropertyMap (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefsObservablePropertyMap_2D_element GALGAS_prefsObservablePropertyMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_prefsObservablePropertyMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_observablePropertyMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefsObservablePropertyMap_2D_element GALGAS_prefsObservablePropertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                            const GALGAS_observablePropertyMap & inOperand1 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefsObservablePropertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_prefsObservablePropertyMap_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_prefsObservablePropertyMap_2D_element::objectCompare (const GALGAS_prefsObservablePropertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mObservablePropertyMap.objectCompare (inOperand.mAttribute_mObservablePropertyMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_prefsObservablePropertyMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mObservablePropertyMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefsObservablePropertyMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mObservablePropertyMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefsObservablePropertyMap_2D_element::description (C_String & ioString,
                                                                const int32_t inIndentation) const {
  ioString << "<struct @prefsObservablePropertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_prefsObservablePropertyMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap GALGAS_prefsObservablePropertyMap_2D_element::getter_mObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservablePropertyMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      @prefsObservablePropertyMap-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefsObservablePropertyMap_2D_element ("prefsObservablePropertyMap-element",
                                                              NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prefsObservablePropertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsObservablePropertyMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prefsObservablePropertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefsObservablePropertyMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefsObservablePropertyMap_2D_element GALGAS_prefsObservablePropertyMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_prefsObservablePropertyMap_2D_element result ;
  const GALGAS_prefsObservablePropertyMap_2D_element * p = (const GALGAS_prefsObservablePropertyMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefsObservablePropertyMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefsObservablePropertyMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList_2D_element::GALGAS_outletClassDeclarationList_2D_element (void) :
mAttribute_mUserDefined (),
mAttribute_mOutletClassName (),
mAttribute_mHasRunAction (),
mAttribute_mHasEnabled (),
mAttribute_mHandlesTableViewBinding () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList_2D_element::~ GALGAS_outletClassDeclarationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList_2D_element::GALGAS_outletClassDeclarationList_2D_element (const GALGAS_bool & inOperand0,
                                                                                            const GALGAS_lstring & inOperand1,
                                                                                            const GALGAS_bool & inOperand2,
                                                                                            const GALGAS_bool & inOperand3,
                                                                                            const GALGAS_bool & inOperand4) :
mAttribute_mUserDefined (inOperand0),
mAttribute_mOutletClassName (inOperand1),
mAttribute_mHasRunAction (inOperand2),
mAttribute_mHasEnabled (inOperand3),
mAttribute_mHandlesTableViewBinding (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList_2D_element GALGAS_outletClassDeclarationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassDeclarationList_2D_element (GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList_2D_element GALGAS_outletClassDeclarationList_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                                            const GALGAS_lstring & inOperand1,
                                                                                                            const GALGAS_bool & inOperand2,
                                                                                                            const GALGAS_bool & inOperand3,
                                                                                                            const GALGAS_bool & inOperand4 
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_outletClassDeclarationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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
  if (result == kOperandEqual) {
    result = mAttribute_mHandlesTableViewBinding.objectCompare (inOperand.mAttribute_mHandlesTableViewBinding) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletClassDeclarationList_2D_element::isValid (void) const {
  return mAttribute_mUserDefined.isValid () && mAttribute_mOutletClassName.isValid () && mAttribute_mHasRunAction.isValid () && mAttribute_mHasEnabled.isValid () && mAttribute_mHandlesTableViewBinding.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassDeclarationList_2D_element::drop (void) {
  mAttribute_mUserDefined.drop () ;
  mAttribute_mOutletClassName.drop () ;
  mAttribute_mHasRunAction.drop () ;
  mAttribute_mHasEnabled.drop () ;
  mAttribute_mHandlesTableViewBinding.drop () ;
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
    ioString << ", " ;
    mAttribute_mHandlesTableViewBinding.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassDeclarationList_2D_element::getter_mUserDefined (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUserDefined ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletClassDeclarationList_2D_element::getter_mOutletClassName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletClassName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassDeclarationList_2D_element::getter_mHasRunAction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasRunAction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassDeclarationList_2D_element::getter_mHasEnabled (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHasEnabled ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassDeclarationList_2D_element::getter_mHandlesTableViewBinding (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHandlesTableViewBinding ;
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

GALGAS_outletClassMap_2D_element::GALGAS_outletClassMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mHandlesRunAction (),
mAttribute_mHandlesTableViewBinding (),
mAttribute_mUserDefined () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassMap_2D_element::~ GALGAS_outletClassMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassMap_2D_element::GALGAS_outletClassMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                    const GALGAS_bool & inOperand1,
                                                                    const GALGAS_bool & inOperand2,
                                                                    const GALGAS_bool & inOperand3) :
mAttribute_lkey (inOperand0),
mAttribute_mHandlesRunAction (inOperand1),
mAttribute_mHandlesTableViewBinding (inOperand2),
mAttribute_mUserDefined (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassMap_2D_element GALGAS_outletClassMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_outletClassMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE),
                                           GALGAS_bool::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassMap_2D_element GALGAS_outletClassMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                    const GALGAS_bool & inOperand1,
                                                                                    const GALGAS_bool & inOperand2,
                                                                                    const GALGAS_bool & inOperand3 
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletClassMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_outletClassMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
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
  if (result == kOperandEqual) {
    result = mAttribute_mHandlesTableViewBinding.objectCompare (inOperand.mAttribute_mHandlesTableViewBinding) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mUserDefined.objectCompare (inOperand.mAttribute_mUserDefined) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletClassMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mHandlesRunAction.isValid () && mAttribute_mHandlesTableViewBinding.isValid () && mAttribute_mUserDefined.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletClassMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mHandlesRunAction.drop () ;
  mAttribute_mHandlesTableViewBinding.drop () ;
  mAttribute_mUserDefined.drop () ;
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
    ioString << ", " ;
    mAttribute_mHandlesTableViewBinding.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mUserDefined.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletClassMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassMap_2D_element::getter_mHandlesRunAction (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHandlesRunAction ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassMap_2D_element::getter_mHandlesTableViewBinding (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHandlesTableViewBinding ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassMap_2D_element::getter_mUserDefined (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mUserDefined ;
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

GALGAS_lstring GALGAS_controllerBindingOptionList_2D_element::getter_mOptionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controllerBindingOptionList_2D_element::getter_mOptionTypeName (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_outletClassBindingSpecificationModelList_2D_element::getter_mModelTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mModelTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_outletClassBindingSpecificationModelList_2D_element::getter_mModelShouldBeWritableProperty (UNUSED_LOCATION_ARGS) const {
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

GALGAS_bool GALGAS_outletClassBindingSpecificationList_2D_element::getter_mIsUserDefined (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsUserDefined ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletClassBindingSpecificationList_2D_element::getter_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassBindingSpecificationModelList GALGAS_outletClassBindingSpecificationList_2D_element::getter_mOutletClassBindingSpecificationModelList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletClassBindingSpecificationModelList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionList GALGAS_outletClassBindingSpecificationList_2D_element::getter_mBindingOptionList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_bindingSpecificationMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationMap GALGAS_bindingSpecificationMap_2D_element::getter_mBindingMap (UNUSED_LOCATION_ARGS) const {
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

GALGAS_controllerBindingOptionDecoratedList_2D_element::GALGAS_controllerBindingOptionDecoratedList_2D_element (void) :
mAttribute_mOptionType (),
mAttribute_mOptionName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionDecoratedList_2D_element::~ GALGAS_controllerBindingOptionDecoratedList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionDecoratedList_2D_element::GALGAS_controllerBindingOptionDecoratedList_2D_element (const GALGAS_typeKind & inOperand0,
                                                                                                                const GALGAS_lstring & inOperand1) :
mAttribute_mOptionType (inOperand0),
mAttribute_mOptionName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionDecoratedList_2D_element GALGAS_controllerBindingOptionDecoratedList_2D_element::constructor_new (const GALGAS_typeKind & inOperand0,
                                                                                                                                const GALGAS_lstring & inOperand1 
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
    result = mAttribute_mOptionType.objectCompare (inOperand.mAttribute_mOptionType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOptionName.objectCompare (inOperand.mAttribute_mOptionName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_controllerBindingOptionDecoratedList_2D_element::isValid (void) const {
  return mAttribute_mOptionType.isValid () && mAttribute_mOptionName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controllerBindingOptionDecoratedList_2D_element::drop (void) {
  mAttribute_mOptionType.drop () ;
  mAttribute_mOptionName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_controllerBindingOptionDecoratedList_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @controllerBindingOptionDecoratedList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOptionType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOptionName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_controllerBindingOptionDecoratedList_2D_element::getter_mOptionType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_controllerBindingOptionDecoratedList_2D_element::getter_mOptionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionName ;
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

GALGAS_outletBindingSpecificationMap_2D_element::GALGAS_outletBindingSpecificationMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mOutletBindingSpecificationModelList (),
mAttribute_mControllerBindingOptionList () {
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
mAttribute_mControllerBindingOptionList (inOperand2) {
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
    result = mAttribute_mControllerBindingOptionList.objectCompare (inOperand.mAttribute_mControllerBindingOptionList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletBindingSpecificationMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mOutletBindingSpecificationModelList.isValid () && mAttribute_mControllerBindingOptionList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletBindingSpecificationMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mOutletBindingSpecificationModelList.drop () ;
  mAttribute_mControllerBindingOptionList.drop () ;
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
    mAttribute_mControllerBindingOptionList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletBindingSpecificationMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletBindingSpecificationModelList GALGAS_outletBindingSpecificationMap_2D_element::getter_mOutletBindingSpecificationModelList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletBindingSpecificationModelList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_controllerBindingOptionDecoratedList GALGAS_outletBindingSpecificationMap_2D_element::getter_mControllerBindingOptionList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mControllerBindingOptionList ;
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

GALGAS_lstring GALGAS_bindingOptionList_2D_element::getter_mOptionName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOptionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue GALGAS_bindingOptionList_2D_element::getter_mOptionValue (UNUSED_LOCATION_ARGS) const {
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

GALGAS_outletDeclarationList_2D_element::GALGAS_outletDeclarationList_2D_element (void) :
mAttribute_mOutletTypeName (),
mAttribute_mOutletName (),
mAttribute_mTableValueBindingDescriptor (),
mAttribute_mRunDescriptor (),
mAttribute_mEnabledBindingDescriptor (),
mAttribute_mHiddenBindingDescriptor (),
mAttribute_mRegularBindingList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList_2D_element::~ GALGAS_outletDeclarationList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList_2D_element::GALGAS_outletDeclarationList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_lstring & inOperand1,
                                                                                  const GALGAS_tableValueBinding & inOperand2,
                                                                                  const GALGAS_runActionDescriptor & inOperand3,
                                                                                  const GALGAS_multipleBindingDescriptor & inOperand4,
                                                                                  const GALGAS_multipleBindingDescriptor & inOperand5,
                                                                                  const GALGAS_regularBindingList & inOperand6) :
mAttribute_mOutletTypeName (inOperand0),
mAttribute_mOutletName (inOperand1),
mAttribute_mTableValueBindingDescriptor (inOperand2),
mAttribute_mRunDescriptor (inOperand3),
mAttribute_mEnabledBindingDescriptor (inOperand4),
mAttribute_mHiddenBindingDescriptor (inOperand5),
mAttribute_mRegularBindingList (inOperand6) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList_2D_element GALGAS_outletDeclarationList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_lstring & inOperand1,
                                                                                                  const GALGAS_tableValueBinding & inOperand2,
                                                                                                  const GALGAS_runActionDescriptor & inOperand3,
                                                                                                  const GALGAS_multipleBindingDescriptor & inOperand4,
                                                                                                  const GALGAS_multipleBindingDescriptor & inOperand5,
                                                                                                  const GALGAS_regularBindingList & inOperand6 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletDeclarationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_outletDeclarationList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_outletDeclarationList_2D_element::objectCompare (const GALGAS_outletDeclarationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mOutletTypeName.objectCompare (inOperand.mAttribute_mOutletTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mOutletName.objectCompare (inOperand.mAttribute_mOutletName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mTableValueBindingDescriptor.objectCompare (inOperand.mAttribute_mTableValueBindingDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRunDescriptor.objectCompare (inOperand.mAttribute_mRunDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mEnabledBindingDescriptor.objectCompare (inOperand.mAttribute_mEnabledBindingDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mHiddenBindingDescriptor.objectCompare (inOperand.mAttribute_mHiddenBindingDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mRegularBindingList.objectCompare (inOperand.mAttribute_mRegularBindingList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_outletDeclarationList_2D_element::isValid (void) const {
  return mAttribute_mOutletTypeName.isValid () && mAttribute_mOutletName.isValid () && mAttribute_mTableValueBindingDescriptor.isValid () && mAttribute_mRunDescriptor.isValid () && mAttribute_mEnabledBindingDescriptor.isValid () && mAttribute_mHiddenBindingDescriptor.isValid () && mAttribute_mRegularBindingList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletDeclarationList_2D_element::drop (void) {
  mAttribute_mOutletTypeName.drop () ;
  mAttribute_mOutletName.drop () ;
  mAttribute_mTableValueBindingDescriptor.drop () ;
  mAttribute_mRunDescriptor.drop () ;
  mAttribute_mEnabledBindingDescriptor.drop () ;
  mAttribute_mHiddenBindingDescriptor.drop () ;
  mAttribute_mRegularBindingList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_outletDeclarationList_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @outletDeclarationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mOutletTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mOutletName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mTableValueBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRunDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mEnabledBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mHiddenBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mRegularBindingList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletDeclarationList_2D_element::getter_mOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_outletDeclarationList_2D_element::getter_mOutletName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableValueBinding GALGAS_outletDeclarationList_2D_element::getter_mTableValueBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mTableValueBindingDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_runActionDescriptor GALGAS_outletDeclarationList_2D_element::getter_mRunDescriptor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mRunDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingDescriptor GALGAS_outletDeclarationList_2D_element::getter_mEnabledBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mEnabledBindingDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingDescriptor GALGAS_outletDeclarationList_2D_element::getter_mHiddenBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mHiddenBindingDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingList GALGAS_outletDeclarationList_2D_element::getter_mRegularBindingList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_decoratedOutletMap_2D_element::GALGAS_decoratedOutletMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mOutletTypeName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap_2D_element::~ GALGAS_decoratedOutletMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap_2D_element::GALGAS_decoratedOutletMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                            const GALGAS_string & inOperand1) :
mAttribute_lkey (inOperand0),
mAttribute_mOutletTypeName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap_2D_element GALGAS_decoratedOutletMap_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_decoratedOutletMap_2D_element (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_string::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap_2D_element GALGAS_decoratedOutletMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                            const GALGAS_string & inOperand1 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_decoratedOutletMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_decoratedOutletMap_2D_element (inOperand0, inOperand1) ;
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
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_decoratedOutletMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mOutletTypeName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_decoratedOutletMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mOutletTypeName.drop () ;
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
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_decoratedOutletMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_decoratedOutletMap_2D_element::getter_mOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletTypeName ;
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

GALGAS_observablePropertyList_2D_element::GALGAS_observablePropertyList_2D_element (void) :
mAttribute_mObservableProperty () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyList_2D_element::~ GALGAS_observablePropertyList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyList_2D_element::GALGAS_observablePropertyList_2D_element (const GALGAS_observablePropertyAST & inOperand0) :
mAttribute_mObservableProperty (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyList_2D_element GALGAS_observablePropertyList_2D_element::constructor_new (const GALGAS_observablePropertyAST & inOperand0 
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

GALGAS_observablePropertyAST GALGAS_observablePropertyList_2D_element::getter_mObservableProperty (UNUSED_LOCATION_ARGS) const {
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

GALGAS_transientDependencyListForGeneration_2D_element::GALGAS_transientDependencyListForGeneration_2D_element (void) :
mAttribute_mDependency (),
mAttribute_mFunctionArgumentName (),
mAttribute_mFunctionArgumentTypeString () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDependencyListForGeneration_2D_element::~ GALGAS_transientDependencyListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDependencyListForGeneration_2D_element::GALGAS_transientDependencyListForGeneration_2D_element (const GALGAS_observablePropertyAST & inOperand0,
                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                const GALGAS_string & inOperand2) :
mAttribute_mDependency (inOperand0),
mAttribute_mFunctionArgumentName (inOperand1),
mAttribute_mFunctionArgumentTypeString (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_transientDependencyListForGeneration_2D_element::objectCompare (const GALGAS_transientDependencyListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDependency.objectCompare (inOperand.mAttribute_mDependency) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionArgumentName.objectCompare (inOperand.mAttribute_mFunctionArgumentName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mFunctionArgumentTypeString.objectCompare (inOperand.mAttribute_mFunctionArgumentTypeString) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_transientDependencyListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mDependency.isValid () && mAttribute_mFunctionArgumentName.isValid () && mAttribute_mFunctionArgumentTypeString.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientDependencyListForGeneration_2D_element::drop (void) {
  mAttribute_mDependency.drop () ;
  mAttribute_mFunctionArgumentName.drop () ;
  mAttribute_mFunctionArgumentTypeString.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientDependencyListForGeneration_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @transientDependencyListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDependency.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionArgumentName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mFunctionArgumentTypeString.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_transientDependencyListForGeneration_2D_element::getter_mDependency (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDependency ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_transientDependencyListForGeneration_2D_element::getter_mFunctionArgumentName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionArgumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_transientDependencyListForGeneration_2D_element::getter_mFunctionArgumentTypeString (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mFunctionArgumentTypeString ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @transientDependencyListForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2D_element ("transientDependencyListForGeneration-element",
                                                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_transientDependencyListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_transientDependencyListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientDependencyListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyList_2D_element::GALGAS_simpleStoredPropertyList_2D_element (void) :
mAttribute_mPropertyTypeName (),
mAttribute_mPropertyName (),
mAttribute_mDefaultValue (),
mAttribute_mNeedsValidation () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyList_2D_element::~ GALGAS_simpleStoredPropertyList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyList_2D_element::GALGAS_simpleStoredPropertyList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                        const GALGAS_lstring & inOperand1,
                                                                                        const GALGAS_abstractDefaultValue & inOperand2,
                                                                                        const GALGAS_bool & inOperand3) :
mAttribute_mPropertyTypeName (inOperand0),
mAttribute_mPropertyName (inOperand1),
mAttribute_mDefaultValue (inOperand2),
mAttribute_mNeedsValidation (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyList_2D_element GALGAS_simpleStoredPropertyList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                        const GALGAS_lstring & inOperand1,
                                                                                                        const GALGAS_abstractDefaultValue & inOperand2,
                                                                                                        const GALGAS_bool & inOperand3 
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_simpleStoredPropertyList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_simpleStoredPropertyList_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_simpleStoredPropertyList_2D_element::objectCompare (const GALGAS_simpleStoredPropertyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mPropertyTypeName.objectCompare (inOperand.mAttribute_mPropertyTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPropertyName.objectCompare (inOperand.mAttribute_mPropertyName) ;
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

bool GALGAS_simpleStoredPropertyList_2D_element::isValid (void) const {
  return mAttribute_mPropertyTypeName.isValid () && mAttribute_mPropertyName.isValid () && mAttribute_mDefaultValue.isValid () && mAttribute_mNeedsValidation.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_simpleStoredPropertyList_2D_element::drop (void) {
  mAttribute_mPropertyTypeName.drop () ;
  mAttribute_mPropertyName.drop () ;
  mAttribute_mDefaultValue.drop () ;
  mAttribute_mNeedsValidation.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_simpleStoredPropertyList_2D_element::description (C_String & ioString,
                                                              const int32_t inIndentation) const {
  ioString << "<struct @simpleStoredPropertyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mPropertyTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mDefaultValue.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mNeedsValidation.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_simpleStoredPropertyList_2D_element::getter_mPropertyTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_simpleStoredPropertyList_2D_element::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue GALGAS_simpleStoredPropertyList_2D_element::getter_mDefaultValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDefaultValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_simpleStoredPropertyList_2D_element::getter_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mNeedsValidation ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @simpleStoredPropertyList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_simpleStoredPropertyList_2D_element ("simpleStoredPropertyList-element",
                                                            NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_simpleStoredPropertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleStoredPropertyList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_simpleStoredPropertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_simpleStoredPropertyList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyList_2D_element GALGAS_simpleStoredPropertyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_simpleStoredPropertyList_2D_element result ;
  const GALGAS_simpleStoredPropertyList_2D_element * p = (const GALGAS_simpleStoredPropertyList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_simpleStoredPropertyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleStoredPropertyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storedArrayPropertyList_2D_element::GALGAS_storedArrayPropertyList_2D_element (void) :
mAttribute_mElementClassName (),
mAttribute_mStoredArrayPropertyName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storedArrayPropertyList_2D_element::~ GALGAS_storedArrayPropertyList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storedArrayPropertyList_2D_element::GALGAS_storedArrayPropertyList_2D_element (const GALGAS_lstring & inOperand0,
                                                                                      const GALGAS_lstring & inOperand1) :
mAttribute_mElementClassName (inOperand0),
mAttribute_mStoredArrayPropertyName (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storedArrayPropertyList_2D_element GALGAS_storedArrayPropertyList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_storedArrayPropertyList_2D_element (GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storedArrayPropertyList_2D_element GALGAS_storedArrayPropertyList_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                      const GALGAS_lstring & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_storedArrayPropertyList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_storedArrayPropertyList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_storedArrayPropertyList_2D_element::objectCompare (const GALGAS_storedArrayPropertyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mElementClassName.objectCompare (inOperand.mAttribute_mElementClassName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mStoredArrayPropertyName.objectCompare (inOperand.mAttribute_mStoredArrayPropertyName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_storedArrayPropertyList_2D_element::isValid (void) const {
  return mAttribute_mElementClassName.isValid () && mAttribute_mStoredArrayPropertyName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_storedArrayPropertyList_2D_element::drop (void) {
  mAttribute_mElementClassName.drop () ;
  mAttribute_mStoredArrayPropertyName.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_storedArrayPropertyList_2D_element::description (C_String & ioString,
                                                             const int32_t inIndentation) const {
  ioString << "<struct @storedArrayPropertyList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mElementClassName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mStoredArrayPropertyName.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_storedArrayPropertyList_2D_element::getter_mElementClassName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElementClassName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_storedArrayPropertyList_2D_element::getter_mStoredArrayPropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mStoredArrayPropertyName ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @storedArrayPropertyList-element type                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_storedArrayPropertyList_2D_element ("storedArrayPropertyList-element",
                                                           NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_storedArrayPropertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_storedArrayPropertyList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_storedArrayPropertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_storedArrayPropertyList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storedArrayPropertyList_2D_element GALGAS_storedArrayPropertyList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_storedArrayPropertyList_2D_element result ;
  const GALGAS_storedArrayPropertyList_2D_element * p = (const GALGAS_storedArrayPropertyList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_storedArrayPropertyList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("storedArrayPropertyList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_lstring GALGAS_actionMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_regularBindingList_2D_element::getter_mBindingName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyList GALGAS_regularBindingList_2D_element::getter_mObservablePropertyList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservablePropertyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList GALGAS_regularBindingList_2D_element::getter_mBindingOptionList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_lstring GALGAS_arrayControllerBoundColumnListAST_2D_element::getter_mColumnName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mColumnName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerBoundColumnListAST_2D_element::getter_mColumnOutletTypeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mColumnOutletTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerBoundColumnListAST_2D_element::getter_mObservablePropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservablePropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingOptionList GALGAS_arrayControllerBoundColumnListAST_2D_element::getter_mBindingOptionList (UNUSED_LOCATION_ARGS) const {
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

GALGAS_observablePropertyMap_2D_element::GALGAS_observablePropertyMap_2D_element (void) :
mAttribute_lkey (),
mAttribute_mType (),
mAttribute_mKind (),
mAttribute_mMultiplicity (),
mAttribute_mInverseRelationshipName (),
mAttribute_mActionMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap_2D_element::~ GALGAS_observablePropertyMap_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap_2D_element::GALGAS_observablePropertyMap_2D_element (const GALGAS_lstring & inOperand0,
                                                                                  const GALGAS_typeKind & inOperand1,
                                                                                  const GALGAS_propertyKind & inOperand2,
                                                                                  const GALGAS_propertyMultiplicity & inOperand3,
                                                                                  const GALGAS_string & inOperand4,
                                                                                  const GALGAS_actionMap & inOperand5) :
mAttribute_lkey (inOperand0),
mAttribute_mType (inOperand1),
mAttribute_mKind (inOperand2),
mAttribute_mMultiplicity (inOperand3),
mAttribute_mInverseRelationshipName (inOperand4),
mAttribute_mActionMap (inOperand5) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap_2D_element GALGAS_observablePropertyMap_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                  const GALGAS_typeKind & inOperand1,
                                                                                                  const GALGAS_propertyKind & inOperand2,
                                                                                                  const GALGAS_propertyMultiplicity & inOperand3,
                                                                                                  const GALGAS_string & inOperand4,
                                                                                                  const GALGAS_actionMap & inOperand5 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_observablePropertyMap_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_observablePropertyMap_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_observablePropertyMap_2D_element::objectCompare (const GALGAS_observablePropertyMap_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_lkey.objectCompare (inOperand.mAttribute_lkey) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mType.objectCompare (inOperand.mAttribute_mType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mKind.objectCompare (inOperand.mAttribute_mKind) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mMultiplicity.objectCompare (inOperand.mAttribute_mMultiplicity) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mInverseRelationshipName.objectCompare (inOperand.mAttribute_mInverseRelationshipName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mActionMap.objectCompare (inOperand.mAttribute_mActionMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_observablePropertyMap_2D_element::isValid (void) const {
  return mAttribute_lkey.isValid () && mAttribute_mType.isValid () && mAttribute_mKind.isValid () && mAttribute_mMultiplicity.isValid () && mAttribute_mInverseRelationshipName.isValid () && mAttribute_mActionMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyMap_2D_element::drop (void) {
  mAttribute_lkey.drop () ;
  mAttribute_mType.drop () ;
  mAttribute_mKind.drop () ;
  mAttribute_mMultiplicity.drop () ;
  mAttribute_mInverseRelationshipName.drop () ;
  mAttribute_mActionMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_observablePropertyMap_2D_element::description (C_String & ioString,
                                                           const int32_t inIndentation) const {
  ioString << "<struct @observablePropertyMap-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_lkey.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mKind.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mMultiplicity.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mInverseRelationshipName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mActionMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_observablePropertyMap_2D_element::getter_lkey (UNUSED_LOCATION_ARGS) const {
  return mAttribute_lkey ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_observablePropertyMap_2D_element::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyKind GALGAS_observablePropertyMap_2D_element::getter_mKind (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mKind ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyMultiplicity GALGAS_observablePropertyMap_2D_element::getter_mMultiplicity (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mMultiplicity ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_observablePropertyMap_2D_element::getter_mInverseRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mInverseRelationshipName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionMap GALGAS_observablePropertyMap_2D_element::getter_mActionMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mActionMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         @observablePropertyMap-element type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyMap_2D_element ("observablePropertyMap-element",
                                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_observablePropertyMap_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyMap_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_observablePropertyMap_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyMap_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap_2D_element GALGAS_observablePropertyMap_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyMap_2D_element result ;
  const GALGAS_observablePropertyMap_2D_element * p = (const GALGAS_observablePropertyMap_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_observablePropertyMap_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyMap-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryDeclarationListWorkingList_2D_element::GALGAS_secondaryDeclarationListWorkingList_2D_element (void) :
mAttribute_mDeclaration (),
mAttribute_mSecondaryPropertyList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryDeclarationListWorkingList_2D_element::~ GALGAS_secondaryDeclarationListWorkingList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryDeclarationListWorkingList_2D_element::GALGAS_secondaryDeclarationListWorkingList_2D_element (const GALGAS_astDeclaration & inOperand0,
                                                                                                              const GALGAS_secondaryPropertyList & inOperand1) :
mAttribute_mDeclaration (inOperand0),
mAttribute_mSecondaryPropertyList (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryDeclarationListWorkingList_2D_element GALGAS_secondaryDeclarationListWorkingList_2D_element::constructor_new (const GALGAS_astDeclaration & inOperand0,
                                                                                                                              const GALGAS_secondaryPropertyList & inOperand1 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_secondaryDeclarationListWorkingList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_secondaryDeclarationListWorkingList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_secondaryDeclarationListWorkingList_2D_element::objectCompare (const GALGAS_secondaryDeclarationListWorkingList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mDeclaration.objectCompare (inOperand.mAttribute_mDeclaration) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSecondaryPropertyList.objectCompare (inOperand.mAttribute_mSecondaryPropertyList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_secondaryDeclarationListWorkingList_2D_element::isValid (void) const {
  return mAttribute_mDeclaration.isValid () && mAttribute_mSecondaryPropertyList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_secondaryDeclarationListWorkingList_2D_element::drop (void) {
  mAttribute_mDeclaration.drop () ;
  mAttribute_mSecondaryPropertyList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_secondaryDeclarationListWorkingList_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @secondaryDeclarationListWorkingList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mDeclaration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSecondaryPropertyList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclaration GALGAS_secondaryDeclarationListWorkingList_2D_element::getter_mDeclaration (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryPropertyList GALGAS_secondaryDeclarationListWorkingList_2D_element::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSecondaryPropertyList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @secondaryDeclarationListWorkingList-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_secondaryDeclarationListWorkingList_2D_element ("secondaryDeclarationListWorkingList-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_secondaryDeclarationListWorkingList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_secondaryDeclarationListWorkingList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_secondaryDeclarationListWorkingList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_secondaryDeclarationListWorkingList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryDeclarationListWorkingList_2D_element GALGAS_secondaryDeclarationListWorkingList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_secondaryDeclarationListWorkingList_2D_element result ;
  const GALGAS_secondaryDeclarationListWorkingList_2D_element * p = (const GALGAS_secondaryDeclarationListWorkingList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_secondaryDeclarationListWorkingList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("secondaryDeclarationListWorkingList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList_2D_element::GALGAS_mainXibLineDescriptorList_2D_element (void) :
mAttribute_mElement () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList_2D_element::~ GALGAS_mainXibLineDescriptorList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList_2D_element::GALGAS_mainXibLineDescriptorList_2D_element (const GALGAS_mainXibElement & inOperand0) :
mAttribute_mElement (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibLineDescriptorList_2D_element GALGAS_mainXibLineDescriptorList_2D_element::constructor_new (const GALGAS_mainXibElement & inOperand0 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mainXibLineDescriptorList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_mainXibLineDescriptorList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_mainXibLineDescriptorList_2D_element::objectCompare (const GALGAS_mainXibLineDescriptorList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mElement.objectCompare (inOperand.mAttribute_mElement) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_mainXibLineDescriptorList_2D_element::isValid (void) const {
  return mAttribute_mElement.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList_2D_element::drop (void) {
  mAttribute_mElement.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_mainXibLineDescriptorList_2D_element::description (C_String & ioString,
                                                               const int32_t inIndentation) const {
  ioString << "<struct @mainXibLineDescriptorList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mElement.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibElement GALGAS_mainXibLineDescriptorList_2D_element::getter_mElement (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mElement ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @mainXibLineDescriptorList-element type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibLineDescriptorList_2D_element ("mainXibLineDescriptorList-element",
                                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_mainXibLineDescriptorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibLineDescriptorList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_mainXibLineDescriptorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibLineDescriptorList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

GALGAS_astDeclarationStruct::GALGAS_astDeclarationStruct (void) :
mAttribute_mDeclarationList (),
mAttribute_mOutletClassDeclarationList (),
mAttribute_mBindingSpecificationListMap (),
mAttribute_mPreferences (),
mAttribute_mXcodeProject () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationStruct::~ GALGAS_astDeclarationStruct (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationStruct::GALGAS_astDeclarationStruct (const GALGAS_astDeclarationList & inOperand0,
                                                          const GALGAS_outletClassDeclarationList & inOperand1,
                                                          const GALGAS_bindingSpecificationListMap & inOperand2,
                                                          const GALGAS_prefDeclaration & inOperand3,
                                                          const GALGAS_lstring & inOperand4) :
mAttribute_mDeclarationList (inOperand0),
mAttribute_mOutletClassDeclarationList (inOperand1),
mAttribute_mBindingSpecificationListMap (inOperand2),
mAttribute_mPreferences (inOperand3),
mAttribute_mXcodeProject (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationStruct GALGAS_astDeclarationStruct::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_astDeclarationStruct (GALGAS_astDeclarationList::constructor_emptyList (HERE),
                                      GALGAS_outletClassDeclarationList::constructor_emptyList (HERE),
                                      GALGAS_bindingSpecificationListMap::constructor_emptyMap (HERE),
                                      GALGAS_prefDeclaration::constructor_default (HERE),
                                      GALGAS_lstring::constructor_default (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationStruct GALGAS_astDeclarationStruct::constructor_new (const GALGAS_astDeclarationList & inOperand0,
                                                                          const GALGAS_outletClassDeclarationList & inOperand1,
                                                                          const GALGAS_bindingSpecificationListMap & inOperand2,
                                                                          const GALGAS_prefDeclaration & inOperand3,
                                                                          const GALGAS_lstring & inOperand4 
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astDeclarationStruct result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_astDeclarationStruct (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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
    result = mAttribute_mOutletClassDeclarationList.objectCompare (inOperand.mAttribute_mOutletClassDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mBindingSpecificationListMap.objectCompare (inOperand.mAttribute_mBindingSpecificationListMap) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mPreferences.objectCompare (inOperand.mAttribute_mPreferences) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mXcodeProject.objectCompare (inOperand.mAttribute_mXcodeProject) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_astDeclarationStruct::isValid (void) const {
  return mAttribute_mDeclarationList.isValid () && mAttribute_mOutletClassDeclarationList.isValid () && mAttribute_mBindingSpecificationListMap.isValid () && mAttribute_mPreferences.isValid () && mAttribute_mXcodeProject.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_astDeclarationStruct::drop (void) {
  mAttribute_mDeclarationList.drop () ;
  mAttribute_mOutletClassDeclarationList.drop () ;
  mAttribute_mBindingSpecificationListMap.drop () ;
  mAttribute_mPreferences.drop () ;
  mAttribute_mXcodeProject.drop () ;
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
    mAttribute_mOutletClassDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mBindingSpecificationListMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mPreferences.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mXcodeProject.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclarationList GALGAS_astDeclarationStruct::getter_mDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletClassDeclarationList GALGAS_astDeclarationStruct::getter_mOutletClassDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mOutletClassDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bindingSpecificationListMap GALGAS_astDeclarationStruct::getter_mBindingSpecificationListMap (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mBindingSpecificationListMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefDeclaration GALGAS_astDeclarationStruct::getter_mPreferences (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mPreferences ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_astDeclarationStruct::getter_mXcodeProject (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mXcodeProject ;
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
//                               Category method '@XcodeProjectDescriptor addICNS_file'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void categoryModifier_addICNS_5F_file (GALGAS_XcodeProjectDescriptor & ioObject,
                                       const GALGAS_string constinArgument_inFileName,
                                       GALGAS_string & outArgument_outFileRef,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  categoryModifier_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 13)) ;
  }
  ioObject.mAttribute_mICNS_5F_fileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 14)) ;
}


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
  GALGAS_enumConstantMap var_enumConstantMap = GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("enumeration.galgas", 55)) ;
  cEnumerator_lstringlist enumerator_2629 (object->mAttribute_mEnumConstantNameList, kEnumeration_up) ;
  while (enumerator_2629.hasCurrentObject ()) {
    {
    var_enumConstantMap.modifier_insertKey (enumerator_2629.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas", 57)) ;
    }
    enumerator_2629.gotoNextObject () ;
  }
  {
  ioArgument_ioUnifiedTypeMap.modifier_insertKey (object->mAttribute_mEnumTypeName, GALGAS_typeKind::constructor_enumType (object->mAttribute_mEnumTypeName.mAttribute_string, var_enumConstantMap  COMMA_SOURCE_FILE ("enumeration.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas", 59)) ;
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
//            Overriding category method '@enumDeclaration buildObservablePropertyMapsFromStoredProperties'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumDeclaration_buildObservablePropertyMapsFromStoredProperties (const cPtr_astDeclaration * /* inObject */,
                                                                                            const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                                            GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumDeclaration_buildObservablePropertyMapsFromStoredProperties (void) {
  enterCategoryMethod_buildObservablePropertyMapsFromStoredProperties (kTypeDescriptor_GALGAS_enumDeclaration.mSlotID,
                                                                       categoryMethod_enumDeclaration_buildObservablePropertyMapsFromStoredProperties) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclaration_buildObservablePropertyMapsFromStoredProperties (defineCategoryMethod_enumDeclaration_buildObservablePropertyMapsFromStoredProperties, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@enumDeclaration buildInitialSecondaryPropertyListMap'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumDeclaration_buildInitialSecondaryPropertyListMap (const cPtr_astDeclaration * /* inObject */,
                                                                                 GALGAS_secondaryDeclarationListWorkingList & /* ioArgument_ioSecondaryDeclarationListWorkingList */,
                                                                                 GALGAS_uint & /* ioArgument_ioSecondaryDeclarationCount */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumDeclaration_buildInitialSecondaryPropertyListMap (void) {
  enterCategoryMethod_buildInitialSecondaryPropertyListMap (kTypeDescriptor_GALGAS_enumDeclaration.mSlotID,
                                                            categoryMethod_enumDeclaration_buildInitialSecondaryPropertyListMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclaration_buildInitialSecondaryPropertyListMap (defineCategoryMethod_enumDeclaration_buildInitialSecondaryPropertyListMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@enumDeclaration solveSecondaryProperty'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumDeclaration_solveSecondaryProperty (const cPtr_astDeclaration * /* inObject */,
                                                                   GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                   const GALGAS_unifiedTypeMap /* constinArgument_mUnifiedTypeMap */,
                                                                   const GALGAS_secondaryPropertyList /* constinArgument_inPropertiesToSolve */,
                                                                   GALGAS_secondaryPropertyList & outArgument_outUnsolvedProperties,
                                                                   C_Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnsolvedProperties = GALGAS_secondaryPropertyList::constructor_emptyList (SOURCE_FILE ("enumeration.galgas", 91)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumDeclaration_solveSecondaryProperty (void) {
  enterCategoryMethod_solveSecondaryProperty (kTypeDescriptor_GALGAS_enumDeclaration.mSlotID,
                                              categoryMethod_enumDeclaration_solveSecondaryProperty) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclaration_solveSecondaryProperty (defineCategoryMethod_enumDeclaration_solveSecondaryProperty, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@enumDeclaration semanticAnalysis'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumDeclaration_semanticAnalysis (const cPtr_astDeclaration * inObject,
                                                             const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                             GALGAS_structForGeneration & ioArgument_ioGeneration,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclaration * object = (const cPtr_enumDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclaration) ;
  ioArgument_ioGeneration.mAttribute_mEnumListForGeneration.addAssign_operation (object->mAttribute_mEnumTypeName.mAttribute_string, object->mAttribute_mEnumConstantNameList  COMMA_SOURCE_FILE ("enumeration.galgas", 100)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_enumDeclaration.mSlotID,
                                        categoryMethod_enumDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclaration_semanticAnalysis (defineCategoryMethod_enumDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category method '@classDeclaration typeInventory'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_classDeclaration_typeInventory (const cPtr_astDeclaration * inObject,
                                                           GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclaration * object = (const cPtr_classDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclaration) ;
  categoryMethod_typeInventory (object->mAttribute_mSimpleStoredAttributeList, ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("class.galgas", 74)) ;
  cEnumerator_secondaryPropertyList enumerator_3011 (object->mAttribute_mSecondaryPropertyList, kEnumeration_up) ;
  while (enumerator_3011.hasCurrentObject ()) {
    callCategoryMethod_typeInventory ((const cPtr_abstractSecondaryProperty *) enumerator_3011.current_mSecondaryProperty (HERE).ptr (), ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("class.galgas", 76)) ;
    enumerator_3011.gotoNextObject () ;
  }
  {
  ioArgument_ioUnifiedTypeMap.modifier_insertKey (object->mAttribute_mClassName, GALGAS_typeKind::constructor_classType (object->mAttribute_mClassName.mAttribute_string  COMMA_SOURCE_FILE ("class.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("class.galgas", 82)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_classDeclaration_typeInventory (void) {
  enterCategoryMethod_typeInventory (kTypeDescriptor_GALGAS_classDeclaration.mSlotID,
                                     categoryMethod_classDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclaration_typeInventory (defineCategoryMethod_classDeclaration_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@classDeclaration buildObservablePropertyMapsFromStoredProperties'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_classDeclaration_buildObservablePropertyMapsFromStoredProperties (const cPtr_astDeclaration * inObject,
                                                                                             const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                             GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclaration * object = (const cPtr_classDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclaration) ;
  GALGAS_observablePropertyMap var_observablePropertyMap = GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("class.galgas", 107)) ;
  categoryMethod_buildObservablePropertyMap (object->mAttribute_mSimpleStoredAttributeList, constinArgument_inUnifiedTypeMap, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("class.galgas", 109)) ;
  {
  ioArgument_ioSemanticContext.mAttribute_mEntityObservablePropertyMap.modifier_insertKey (object->mAttribute_mClassName, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("class.galgas", 123)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_classDeclaration_buildObservablePropertyMapsFromStoredProperties (void) {
  enterCategoryMethod_buildObservablePropertyMapsFromStoredProperties (kTypeDescriptor_GALGAS_classDeclaration.mSlotID,
                                                                       categoryMethod_classDeclaration_buildObservablePropertyMapsFromStoredProperties) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclaration_buildObservablePropertyMapsFromStoredProperties (defineCategoryMethod_classDeclaration_buildObservablePropertyMapsFromStoredProperties, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@classDeclaration buildInitialSecondaryPropertyListMap'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_classDeclaration_buildInitialSecondaryPropertyListMap (const cPtr_astDeclaration * inObject,
                                                                                  GALGAS_secondaryDeclarationListWorkingList & ioArgument_ioSecondaryDeclarationListWorkingList,
                                                                                  GALGAS_uint & ioArgument_ioSecondaryDeclarationCount,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclaration * object = (const cPtr_classDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclaration) ;
  ioArgument_ioSecondaryDeclarationCount = ioArgument_ioSecondaryDeclarationCount.add_operation (object->mAttribute_mSecondaryPropertyList.getter_length (SOURCE_FILE ("class.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("class.galgas", 135)) ;
  const GALGAS_classDeclaration temp_0 = object ;
  ioArgument_ioSecondaryDeclarationListWorkingList.addAssign_operation (temp_0, object->mAttribute_mSecondaryPropertyList  COMMA_SOURCE_FILE ("class.galgas", 136)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_classDeclaration_buildInitialSecondaryPropertyListMap (void) {
  enterCategoryMethod_buildInitialSecondaryPropertyListMap (kTypeDescriptor_GALGAS_classDeclaration.mSlotID,
                                                            categoryMethod_classDeclaration_buildInitialSecondaryPropertyListMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclaration_buildInitialSecondaryPropertyListMap (defineCategoryMethod_classDeclaration_buildInitialSecondaryPropertyListMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@classDeclaration solveSecondaryProperty'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_classDeclaration_solveSecondaryProperty (const cPtr_astDeclaration * inObject,
                                                                    GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                    const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                    const GALGAS_secondaryPropertyList constinArgument_inPropertiesToSolve,
                                                                    GALGAS_secondaryPropertyList & outArgument_outUnsolvedProperties,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclaration * object = (const cPtr_classDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclaration) ;
  outArgument_outUnsolvedProperties = GALGAS_secondaryPropertyList::constructor_emptyList (SOURCE_FILE ("class.galgas", 147)) ;
  GALGAS_observablePropertyMap var_observablePropertyMap ;
  ioArgument_ioSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (object->mAttribute_mClassName, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("class.galgas", 148)) ;
  cEnumerator_secondaryPropertyList enumerator_6255 (constinArgument_inPropertiesToSolve, kEnumeration_up) ;
  while (enumerator_6255.hasCurrentObject ()) {
    callCategoryMethod_tryToSolveSecondaryProperty ((const cPtr_abstractSecondaryProperty *) enumerator_6255.current_mSecondaryProperty (HERE).ptr (), ioArgument_ioSemanticContext, GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("class.galgas", 155)), var_observablePropertyMap, outArgument_outUnsolvedProperties, inCompiler COMMA_SOURCE_FILE ("class.galgas", 153)) ;
    enumerator_6255.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mEntityObservablePropertyMap.modifier_setMObservablePropertyMapForKey (var_observablePropertyMap, object->mAttribute_mClassName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("class.galgas", 160)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_classDeclaration_solveSecondaryProperty (void) {
  enterCategoryMethod_solveSecondaryProperty (kTypeDescriptor_GALGAS_classDeclaration.mSlotID,
                                              categoryMethod_classDeclaration_solveSecondaryProperty) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclaration_solveSecondaryProperty (defineCategoryMethod_classDeclaration_solveSecondaryProperty, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@classDeclaration semanticAnalysis'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_classDeclaration_semanticAnalysis (const cPtr_astDeclaration * inObject,
                                                              const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                              GALGAS_structForGeneration & ioArgument_ioGeneration,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclaration * object = (const cPtr_classDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclaration) ;
  GALGAS_observablePropertyMap var_observablePropertyMap ;
  constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (object->mAttribute_mClassName, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("class.galgas", 172)) ;
  GALGAS_simpleStoredPropertyListForGeneration var_simpleStoredPropertyListForGeneration ;
  categoryMethod_simpleStoredPropertySemanticAnalysis (object->mAttribute_mSimpleStoredAttributeList, object->mAttribute_mClassName.mAttribute_string, constinArgument_inSemanticContext.mAttribute_mUnifiedTypeMap, ioArgument_ioGeneration.mAttribute_mValidationStubRoutineListForGeneration, var_simpleStoredPropertyListForGeneration, inCompiler COMMA_SOURCE_FILE ("class.galgas", 178)) ;
  GALGAS_transientDefinitionListForGeneration var_transientDefinitionListForGeneration = GALGAS_transientDefinitionListForGeneration::constructor_emptyList (SOURCE_FILE ("class.galgas", 185)) ;
  cEnumerator_secondaryPropertyList enumerator_7473 (object->mAttribute_mSecondaryPropertyList, kEnumeration_up) ;
  while (enumerator_7473.hasCurrentObject ()) {
    GALGAS_arrayControllerForGeneration joker_7712 = GALGAS_arrayControllerForGeneration::constructor_emptyList (SOURCE_FILE ("class.galgas", 194)) ;
    GALGAS_selectionControllerForGeneration joker_7744 = GALGAS_selectionControllerForGeneration::constructor_emptyList (SOURCE_FILE ("class.galgas", 195)) ;
    callCategoryMethod_secondaryPropertySemanticAnalysis ((const cPtr_abstractSecondaryProperty *) enumerator_7473.current_mSecondaryProperty (HERE).ptr (), object->mAttribute_mClassName.mAttribute_string, GALGAS_string::makeEmptyString (), GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("class.galgas", 190)), constinArgument_inSemanticContext, var_observablePropertyMap, var_transientDefinitionListForGeneration, joker_7712, joker_7744, inCompiler COMMA_SOURCE_FILE ("class.galgas", 187)) ;
    enumerator_7473.gotoNextObject () ;
  }
  ioArgument_ioGeneration.mAttribute_mTransientListForGeneration.dotAssign_operation (var_transientDefinitionListForGeneration  COMMA_SOURCE_FILE ("class.galgas", 198)) ;
  ioArgument_ioGeneration.mAttribute_mClassListForGeneration.addAssign_operation (object->mAttribute_mClassName.mAttribute_string, var_simpleStoredPropertyListForGeneration, var_transientDefinitionListForGeneration  COMMA_SOURCE_FILE ("class.galgas", 210)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_classDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_classDeclaration.mSlotID,
                                        categoryMethod_classDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclaration_semanticAnalysis (defineCategoryMethod_classDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category method '@entityDeclaration typeInventory'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_entityDeclaration_typeInventory (const cPtr_astDeclaration * inObject,
                                                            GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_entityDeclaration * object = (const cPtr_entityDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_entityDeclaration) ;
  categoryMethod_typeInventory (object->mAttribute_mSimpleStoredAttributeList, ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 76)) ;
  cEnumerator_secondaryPropertyList enumerator_3070 (object->mAttribute_mSecondaryPropertyList, kEnumeration_up) ;
  while (enumerator_3070.hasCurrentObject ()) {
    callCategoryMethod_typeInventory ((const cPtr_abstractSecondaryProperty *) enumerator_3070.current_mSecondaryProperty (HERE).ptr (), ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 78)) ;
    enumerator_3070.gotoNextObject () ;
  }
  categoryMethod_typeInventory (object->mAttribute_mToOneRelationshipList, ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 82)) ;
  categoryMethod_typeInventory (object->mAttribute_mToManyRelationshipList, ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 83)) ;
  {
  ioArgument_ioUnifiedTypeMap.modifier_insertKey (object->mAttribute_mEntityName, GALGAS_typeKind::constructor_entityType (object->mAttribute_mEntityName.mAttribute_string  COMMA_SOURCE_FILE ("entity.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 84)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSuperEntityName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_3463 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, object->mAttribute_mSuperEntityName, joker_3463 COMMA_SOURCE_FILE ("entity.galgas", 86)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_entityDeclaration_typeInventory (void) {
  enterCategoryMethod_typeInventory (kTypeDescriptor_GALGAS_entityDeclaration.mSlotID,
                                     categoryMethod_entityDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_entityDeclaration_typeInventory (defineCategoryMethod_entityDeclaration_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@entityDeclaration buildObservablePropertyMapsFromStoredProperties'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_entityDeclaration_buildObservablePropertyMapsFromStoredProperties (const cPtr_astDeclaration * inObject,
                                                                                              const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                              GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_entityDeclaration * object = (const cPtr_entityDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_entityDeclaration) ;
  GALGAS_observablePropertyMap var_observablePropertyMap = GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("entity.galgas", 109)) ;
  categoryMethod_buildObservablePropertyMap (object->mAttribute_mSimpleStoredAttributeList, constinArgument_inUnifiedTypeMap, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 111)) ;
  categoryMethod_buildObservablePropertyMap (object->mAttribute_mToOneRelationshipList, constinArgument_inUnifiedTypeMap, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 116)) ;
  categoryMethod_buildObservablePropertyMap (object->mAttribute_mToManyRelationshipList, constinArgument_inUnifiedTypeMap, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 120)) ;
  {
  ioArgument_ioSemanticContext.mAttribute_mEntityObservablePropertyMap.modifier_insertKey (object->mAttribute_mEntityName, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 125)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_entityDeclaration_buildObservablePropertyMapsFromStoredProperties (void) {
  enterCategoryMethod_buildObservablePropertyMapsFromStoredProperties (kTypeDescriptor_GALGAS_entityDeclaration.mSlotID,
                                                                       categoryMethod_entityDeclaration_buildObservablePropertyMapsFromStoredProperties) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_entityDeclaration_buildObservablePropertyMapsFromStoredProperties (defineCategoryMethod_entityDeclaration_buildObservablePropertyMapsFromStoredProperties, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@entityDeclaration buildInitialSecondaryPropertyListMap'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_entityDeclaration_buildInitialSecondaryPropertyListMap (const cPtr_astDeclaration * inObject,
                                                                                   GALGAS_secondaryDeclarationListWorkingList & ioArgument_ioSecondaryDeclarationListWorkingList,
                                                                                   GALGAS_uint & ioArgument_ioSecondaryDeclarationCount,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_entityDeclaration * object = (const cPtr_entityDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_entityDeclaration) ;
  ioArgument_ioSecondaryDeclarationCount = ioArgument_ioSecondaryDeclarationCount.add_operation (object->mAttribute_mSecondaryPropertyList.getter_length (SOURCE_FILE ("entity.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 137)) ;
  const GALGAS_entityDeclaration temp_0 = object ;
  ioArgument_ioSecondaryDeclarationListWorkingList.addAssign_operation (temp_0, object->mAttribute_mSecondaryPropertyList  COMMA_SOURCE_FILE ("entity.galgas", 138)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_entityDeclaration_buildInitialSecondaryPropertyListMap (void) {
  enterCategoryMethod_buildInitialSecondaryPropertyListMap (kTypeDescriptor_GALGAS_entityDeclaration.mSlotID,
                                                            categoryMethod_entityDeclaration_buildInitialSecondaryPropertyListMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_entityDeclaration_buildInitialSecondaryPropertyListMap (defineCategoryMethod_entityDeclaration_buildInitialSecondaryPropertyListMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@entityDeclaration solveSecondaryProperty'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_entityDeclaration_solveSecondaryProperty (const cPtr_astDeclaration * inObject,
                                                                     GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                     const GALGAS_secondaryPropertyList constinArgument_inPropertiesToSolve,
                                                                     GALGAS_secondaryPropertyList & outArgument_outUnsolvedProperties,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_entityDeclaration * object = (const cPtr_entityDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_entityDeclaration) ;
  outArgument_outUnsolvedProperties = GALGAS_secondaryPropertyList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 149)) ;
  GALGAS_observablePropertyMap var_observablePropertyMap ;
  ioArgument_ioSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (object->mAttribute_mEntityName, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 150)) ;
  cEnumerator_secondaryPropertyList enumerator_6313 (constinArgument_inPropertiesToSolve, kEnumeration_up) ;
  while (enumerator_6313.hasCurrentObject ()) {
    callCategoryMethod_tryToSolveSecondaryProperty ((const cPtr_abstractSecondaryProperty *) enumerator_6313.current_mSecondaryProperty (HERE).ptr (), ioArgument_ioSemanticContext, GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("entity.galgas", 157)), var_observablePropertyMap, outArgument_outUnsolvedProperties, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 155)) ;
    enumerator_6313.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mEntityObservablePropertyMap.modifier_setMObservablePropertyMapForKey (var_observablePropertyMap, object->mAttribute_mEntityName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 162)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_entityDeclaration_solveSecondaryProperty (void) {
  enterCategoryMethod_solveSecondaryProperty (kTypeDescriptor_GALGAS_entityDeclaration.mSlotID,
                                              categoryMethod_entityDeclaration_solveSecondaryProperty) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_entityDeclaration_solveSecondaryProperty (defineCategoryMethod_entityDeclaration_solveSecondaryProperty, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding category method '@entityDeclaration semanticAnalysis'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_entityDeclaration_semanticAnalysis (const cPtr_astDeclaration * inObject,
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               GALGAS_structForGeneration & ioArgument_ioGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_entityDeclaration * object = (const cPtr_entityDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_entityDeclaration) ;
  GALGAS_observablePropertyMap var_observablePropertyMap ;
  constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (object->mAttribute_mEntityName, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 174)) ;
  GALGAS_simpleStoredPropertyListForGeneration var_simpleStoredPropertyListForGeneration ;
  categoryMethod_simpleStoredPropertySemanticAnalysis (object->mAttribute_mSimpleStoredAttributeList, object->mAttribute_mEntityName.mAttribute_string, constinArgument_inSemanticContext.mAttribute_mUnifiedTypeMap, ioArgument_ioGeneration.mAttribute_mValidationStubRoutineListForGeneration, var_simpleStoredPropertyListForGeneration, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 180)) ;
  GALGAS_transientDefinitionListForGeneration var_transientDefinitionListForGeneration = GALGAS_transientDefinitionListForGeneration::constructor_emptyList (SOURCE_FILE ("entity.galgas", 187)) ;
  cEnumerator_secondaryPropertyList enumerator_7535 (object->mAttribute_mSecondaryPropertyList, kEnumeration_up) ;
  while (enumerator_7535.hasCurrentObject ()) {
    GALGAS_arrayControllerForGeneration joker_7775 = GALGAS_arrayControllerForGeneration::constructor_emptyList (SOURCE_FILE ("entity.galgas", 196)) ;
    GALGAS_selectionControllerForGeneration joker_7807 = GALGAS_selectionControllerForGeneration::constructor_emptyList (SOURCE_FILE ("entity.galgas", 197)) ;
    callCategoryMethod_secondaryPropertySemanticAnalysis ((const cPtr_abstractSecondaryProperty *) enumerator_7535.current_mSecondaryProperty (HERE).ptr (), object->mAttribute_mEntityName.mAttribute_string, GALGAS_string::makeEmptyString (), GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("entity.galgas", 192)), constinArgument_inSemanticContext, var_observablePropertyMap, var_transientDefinitionListForGeneration, joker_7775, joker_7807, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 189)) ;
    enumerator_7535.gotoNextObject () ;
  }
  ioArgument_ioGeneration.mAttribute_mTransientListForGeneration.dotAssign_operation (var_transientDefinitionListForGeneration  COMMA_SOURCE_FILE ("entity.galgas", 200)) ;
  GALGAS_toOneEntityRelationshipListForGeneration var_toOneEntityRelationshipListForGeneration ;
  categoryMethod_semanticAnalysis (object->mAttribute_mToOneRelationshipList, constinArgument_inSemanticContext, var_toOneEntityRelationshipListForGeneration, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 202)) ;
  GALGAS_toManyEntityRelationshipListForGeneration var_toManyEntityRelationshipListForGeneration ;
  categoryMethod_semanticAnalysis (object->mAttribute_mToManyRelationshipList, constinArgument_inSemanticContext, var_toManyEntityRelationshipListForGeneration, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 207)) ;
  ioArgument_ioGeneration.mAttribute_mEntityListForGeneration.addAssign_operation (object->mAttribute_mEntityName.mAttribute_string, object->mAttribute_mSuperEntityName.mAttribute_string, var_simpleStoredPropertyListForGeneration, var_transientDefinitionListForGeneration, var_toOneEntityRelationshipListForGeneration, var_toManyEntityRelationshipListForGeneration, object->mAttribute_mSignatureList  COMMA_SOURCE_FILE ("entity.galgas", 212)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_entityDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_entityDeclaration.mSlotID,
                                        categoryMethod_entityDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_entityDeclaration_semanticAnalysis (defineCategoryMethod_entityDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category method '@documentDeclaration typeInventory'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_documentDeclaration_typeInventory (const cPtr_astDeclaration * inObject,
                                                              GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_documentDeclaration * object = (const cPtr_documentDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_documentDeclaration) ;
  categoryMethod_typeInventory (object->mAttribute_mSimpleStoredAttributeList, ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 72)) ;
  cEnumerator_secondaryPropertyList enumerator_3019 (object->mAttribute_mSecondaryPropertyList, kEnumeration_up) ;
  while (enumerator_3019.hasCurrentObject ()) {
    callCategoryMethod_typeInventory ((const cPtr_abstractSecondaryProperty *) enumerator_3019.current_mSecondaryProperty (HERE).ptr (), ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 74)) ;
    enumerator_3019.gotoNextObject () ;
  }
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_3156 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, object->mAttribute_mRootEntityName, joker_3156 COMMA_SOURCE_FILE ("document.galgas", 78)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_documentDeclaration_typeInventory (void) {
  enterCategoryMethod_typeInventory (kTypeDescriptor_GALGAS_documentDeclaration.mSlotID,
                                     categoryMethod_documentDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_documentDeclaration_typeInventory (defineCategoryMethod_documentDeclaration_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@documentDeclaration buildInitialSecondaryPropertyListMap'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_documentDeclaration_buildInitialSecondaryPropertyListMap (const cPtr_astDeclaration * inObject,
                                                                                     GALGAS_secondaryDeclarationListWorkingList & ioArgument_ioSecondaryDeclarationListWorkingList,
                                                                                     GALGAS_uint & ioArgument_ioSecondaryDeclarationCount,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_documentDeclaration * object = (const cPtr_documentDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_documentDeclaration) ;
  ioArgument_ioSecondaryDeclarationCount = ioArgument_ioSecondaryDeclarationCount.add_operation (object->mAttribute_mSecondaryPropertyList.getter_length (SOURCE_FILE ("document.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("document.galgas", 97)) ;
  const GALGAS_documentDeclaration temp_0 = object ;
  ioArgument_ioSecondaryDeclarationListWorkingList.addAssign_operation (temp_0, object->mAttribute_mSecondaryPropertyList  COMMA_SOURCE_FILE ("document.galgas", 98)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_documentDeclaration_buildInitialSecondaryPropertyListMap (void) {
  enterCategoryMethod_buildInitialSecondaryPropertyListMap (kTypeDescriptor_GALGAS_documentDeclaration.mSlotID,
                                                            categoryMethod_documentDeclaration_buildInitialSecondaryPropertyListMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_documentDeclaration_buildInitialSecondaryPropertyListMap (defineCategoryMethod_documentDeclaration_buildInitialSecondaryPropertyListMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@documentDeclaration buildObservablePropertyMapsFromStoredProperties'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_documentDeclaration_buildObservablePropertyMapsFromStoredProperties (const cPtr_astDeclaration * inObject,
                                                                                                const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                                GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_documentDeclaration * object = (const cPtr_documentDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_documentDeclaration) ;
  GALGAS_observablePropertyMap var_observablePropertyMap = GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("document.galgas", 109)) ;
  categoryMethod_buildObservablePropertyMap (object->mAttribute_mSimpleStoredAttributeList, constinArgument_inUnifiedTypeMap, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 111)) ;
  {
  ioArgument_ioSemanticContext.mAttribute_mDocumentObservablePropertyMap.modifier_insertKey (object->mAttribute_mDocumentName, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 116)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_documentDeclaration_buildObservablePropertyMapsFromStoredProperties (void) {
  enterCategoryMethod_buildObservablePropertyMapsFromStoredProperties (kTypeDescriptor_GALGAS_documentDeclaration.mSlotID,
                                                                       categoryMethod_documentDeclaration_buildObservablePropertyMapsFromStoredProperties) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_documentDeclaration_buildObservablePropertyMapsFromStoredProperties (defineCategoryMethod_documentDeclaration_buildObservablePropertyMapsFromStoredProperties, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@documentDeclaration solveSecondaryProperty'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_documentDeclaration_solveSecondaryProperty (const cPtr_astDeclaration * inObject,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                       const GALGAS_secondaryPropertyList constinArgument_inPropertiesToSolve,
                                                                       GALGAS_secondaryPropertyList & outArgument_outUnsolvedProperties,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_documentDeclaration * object = (const cPtr_documentDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_documentDeclaration) ;
  outArgument_outUnsolvedProperties = GALGAS_secondaryPropertyList::constructor_emptyList (SOURCE_FILE ("document.galgas", 130)) ;
  GALGAS_observablePropertyMap var_observablePropertyMap ;
  ioArgument_ioSemanticContext.mAttribute_mDocumentObservablePropertyMap.method_searchKey (object->mAttribute_mDocumentName, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 131)) ;
  GALGAS_observablePropertyMap var_rootObservablePropertyMap ;
  ioArgument_ioSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (object->mAttribute_mRootEntityName, var_rootObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 135)) ;
  cEnumerator_secondaryPropertyList enumerator_5831 (constinArgument_inPropertiesToSolve, kEnumeration_up) ;
  while (enumerator_5831.hasCurrentObject ()) {
    callCategoryMethod_tryToSolveSecondaryProperty ((const cPtr_abstractSecondaryProperty *) enumerator_5831.current_mSecondaryProperty (HERE).ptr (), ioArgument_ioSemanticContext, var_rootObservablePropertyMap, var_observablePropertyMap, outArgument_outUnsolvedProperties, inCompiler COMMA_SOURCE_FILE ("document.galgas", 140)) ;
    enumerator_5831.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mDocumentObservablePropertyMap.modifier_setMObservablePropertyMapForKey (var_observablePropertyMap, object->mAttribute_mDocumentName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("document.galgas", 147)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_documentDeclaration_solveSecondaryProperty (void) {
  enterCategoryMethod_solveSecondaryProperty (kTypeDescriptor_GALGAS_documentDeclaration.mSlotID,
                                              categoryMethod_documentDeclaration_solveSecondaryProperty) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_documentDeclaration_solveSecondaryProperty (defineCategoryMethod_documentDeclaration_solveSecondaryProperty, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@documentDeclaration semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_documentDeclaration_semanticAnalysis (const cPtr_astDeclaration * inObject,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 GALGAS_structForGeneration & ioArgument_ioGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_documentDeclaration * object = (const cPtr_documentDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_documentDeclaration) ;
  GALGAS_observablePropertyMap var_observablePropertyMap ;
  constinArgument_inSemanticContext.mAttribute_mDocumentObservablePropertyMap.method_searchKey (object->mAttribute_mDocumentName, var_observablePropertyMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 159)) ;
  GALGAS_observablePropertyMap var_rootObservablePropertyMap ;
  constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (object->mAttribute_mRootEntityName, var_rootObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 163)) ;
  GALGAS_simpleStoredPropertyListForGeneration var_simpleStoredPropertyListForGeneration ;
  categoryMethod_simpleStoredPropertySemanticAnalysis (object->mAttribute_mSimpleStoredAttributeList, object->mAttribute_mDocumentName.mAttribute_string, constinArgument_inSemanticContext.mAttribute_mUnifiedTypeMap, ioArgument_ioGeneration.mAttribute_mValidationStubRoutineListForGeneration, var_simpleStoredPropertyListForGeneration, inCompiler COMMA_SOURCE_FILE ("document.galgas", 168)) ;
  GALGAS_transientDefinitionListForGeneration var_transientDefinitionListForGeneration = GALGAS_transientDefinitionListForGeneration::constructor_emptyList (SOURCE_FILE ("document.galgas", 175)) ;
  GALGAS_arrayControllerForGeneration var_documentArrayControllerListForGeneration = GALGAS_arrayControllerForGeneration::constructor_emptyList (SOURCE_FILE ("document.galgas", 176)) ;
  GALGAS_selectionControllerForGeneration var_selectionControllerListForGeneration = GALGAS_selectionControllerForGeneration::constructor_emptyList (SOURCE_FILE ("document.galgas", 177)) ;
  cEnumerator_secondaryPropertyList enumerator_7313 (object->mAttribute_mSecondaryPropertyList, kEnumeration_up) ;
  while (enumerator_7313.hasCurrentObject ()) {
    callCategoryMethod_secondaryPropertySemanticAnalysis ((const cPtr_abstractSecondaryProperty *) enumerator_7313.current_mSecondaryProperty (HERE).ptr (), object->mAttribute_mDocumentName.mAttribute_string, object->mAttribute_mRootEntityName.mAttribute_string, var_rootObservablePropertyMap, constinArgument_inSemanticContext, var_observablePropertyMap, var_transientDefinitionListForGeneration, var_documentArrayControllerListForGeneration, var_selectionControllerListForGeneration, inCompiler COMMA_SOURCE_FILE ("document.galgas", 179)) ;
    enumerator_7313.gotoNextObject () ;
  }
  ioArgument_ioGeneration.mAttribute_mTransientListForGeneration.dotAssign_operation (var_transientDefinitionListForGeneration  COMMA_SOURCE_FILE ("document.galgas", 190)) ;
  ioArgument_ioGeneration.mAttribute_mAllArrayControllerForGeneration.dotAssign_operation (var_documentArrayControllerListForGeneration  COMMA_SOURCE_FILE ("document.galgas", 191)) ;
  ioArgument_ioGeneration.mAttribute_mSelectionControllerListForGeneration.dotAssign_operation (var_selectionControllerListForGeneration  COMMA_SOURCE_FILE ("document.galgas", 192)) ;
  GALGAS_actionMap var_actionMap ;
  {
  routine_buildActionMap (object->mAttribute_mActionDeclarationList, var_actionMap, inCompiler  COMMA_SOURCE_FILE ("document.galgas", 194)) ;
  }
  cEnumerator_actionMap enumerator_8037 (var_actionMap, kEnumeration_up) ;
  while (enumerator_8037.hasCurrentObject ()) {
    ioArgument_ioGeneration.mAttribute_mActionListForGeneration.addAssign_operation (object->mAttribute_mDocumentName.mAttribute_string, enumerator_8037.current_lkey (HERE).mAttribute_string  COMMA_SOURCE_FILE ("document.galgas", 196)) ;
    enumerator_8037.gotoNextObject () ;
  }
  GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList ;
  GALGAS_multipleBindingGenerationList var_multipleBindingGenerationList ;
  GALGAS_actionBindingListForGeneration var_actionBindingListForGeneration ;
  GALGAS_decoratedOutletMap var_outletMap ;
  GALGAS_tableViewBindingGenerationList var_tableViewBindingGenerationList ;
  {
  routine_analyzeOutlets (var_rootObservablePropertyMap, constinArgument_inSemanticContext, object->mAttribute_mOutletDeclarationList, var_observablePropertyMap, var_actionMap, ioArgument_ioGeneration, var_regularBindingsGenerationList, var_multipleBindingGenerationList, var_actionBindingListForGeneration, var_outletMap, var_tableViewBindingGenerationList, inCompiler  COMMA_SOURCE_FILE ("document.galgas", 201)) ;
  }
  ioArgument_ioGeneration.mAttribute_mDocumentListForGeneration.addAssign_operation (object->mAttribute_mDocumentName.mAttribute_string, object->mAttribute_mRootEntityName.mAttribute_string, var_simpleStoredPropertyListForGeneration, var_transientDefinitionListForGeneration, var_outletMap, var_actionBindingListForGeneration, var_regularBindingsGenerationList, var_multipleBindingGenerationList, var_documentArrayControllerListForGeneration, var_tableViewBindingGenerationList, var_selectionControllerListForGeneration  COMMA_SOURCE_FILE ("document.galgas", 215)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_documentDeclaration_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_documentDeclaration.mSlotID,
                                        categoryMethod_documentDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_documentDeclaration_semanticAnalysis (defineCategoryMethod_documentDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding category method '@transientAST typeInventory'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_transientAST_typeInventory (const cPtr_abstractSecondaryProperty * inObject,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                       C_Compiler * /* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientAST * object = (const cPtr_transientAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientAST) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_2269 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, object->mAttribute_mTransientTypeName, joker_2269 COMMA_SOURCE_FILE ("transient-property.galgas", 52)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_transientAST_typeInventory (void) {
  enterCategoryMethod_typeInventory (kTypeDescriptor_GALGAS_transientAST.mSlotID,
                                     categoryMethod_transientAST_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientAST_typeInventory (defineCategoryMethod_transientAST_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@transientAST tryToSolveSecondaryProperty'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_transientAST_tryToSolveSecondaryProperty (const cPtr_abstractSecondaryProperty * inObject,
                                                                     GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     const GALGAS_observablePropertyMap constinArgument_inRootObservableProperties,
                                                                     GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                                     GALGAS_secondaryPropertyList & ioArgument_ioUnsolvedProperties,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientAST * object = (const cPtr_transientAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientAST) ;
  GALGAS_bool var_solved = GALGAS_bool (true) ;
  cEnumerator_observablePropertyList enumerator_2945 (object->mAttribute_mDependencyList, kEnumeration_up) ;
  bool bool_0 = var_solved.isValidAndTrue () ;
  if (enumerator_2945.hasCurrentObject () && bool_0) {
    while (enumerator_2945.hasCurrentObject () && bool_0) {
      var_solved = extensionGetter_isPropertyDefined (enumerator_2945.current_mObservableProperty (HERE), ioArgument_ioSemanticContext, constinArgument_inRootObservableProperties, ioArgument_ioObservableProperties, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 71)) ;
      enumerator_2945.gotoNextObject () ;
      if (enumerator_2945.hasCurrentObject ()) {
        bool_0 = var_solved.isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_solved.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_typeKind var_type ;
    ioArgument_ioSemanticContext.mAttribute_mUnifiedTypeMap.method_searchKey (object->mAttribute_mTransientTypeName, var_type, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 78)) ;
    {
    ioArgument_ioObservableProperties.modifier_insertKey (object->mAttribute_mTransientName, var_type, GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("transient-property.galgas", 82)), GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("transient-property.galgas", 83)), GALGAS_string::makeEmptyString (), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("transient-property.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 79)) ;
    }
  }else if (kBoolFalse == test_1) {
    const GALGAS_transientAST temp_2 = object ;
    ioArgument_ioUnsolvedProperties.addAssign_operation (temp_2  COMMA_SOURCE_FILE ("transient-property.galgas", 88)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_transientAST_tryToSolveSecondaryProperty (void) {
  enterCategoryMethod_tryToSolveSecondaryProperty (kTypeDescriptor_GALGAS_transientAST.mSlotID,
                                                   categoryMethod_transientAST_tryToSolveSecondaryProperty) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientAST_tryToSolveSecondaryProperty (defineCategoryMethod_transientAST_tryToSolveSecondaryProperty, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@transientAST secondaryPropertySemanticAnalysis'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_transientAST_secondaryPropertySemanticAnalysis (const cPtr_abstractSecondaryProperty * inObject,
                                                                           const GALGAS_string constinArgument_inOwnerName,
                                                                           const GALGAS_string /* constinArgument_inRootEntityName */,
                                                                           const GALGAS_observablePropertyMap constinArgument_inRootObservableProperties,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_observablePropertyMap constinArgument_inObservableProperties,
                                                                           GALGAS_transientDefinitionListForGeneration & ioArgument_ioTransientDefinitionListForGeneration,
                                                                           GALGAS_arrayControllerForGeneration & /* ioArgument_ioArrayControllerForGeneration */,
                                                                           GALGAS_selectionControllerForGeneration & /* ioArgument_ioSelectionControllerForGeneration */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientAST * object = (const cPtr_transientAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientAST) ;
  GALGAS_typeKind var_type ;
  constinArgument_inSemanticContext.mAttribute_mUnifiedTypeMap.method_searchKey (object->mAttribute_mTransientTypeName, var_type, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 105)) ;
  GALGAS_typeKindList var_typeList ;
  switch (var_type.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolType:
  case GALGAS_typeKind::kEnum_integerType:
  case GALGAS_typeKind::kEnum_stringType:
  case GALGAS_typeKind::kEnum_colorType:
  case GALGAS_typeKind::kEnum_dateType:
  case GALGAS_typeKind::kEnum_doubleType:
  case GALGAS_typeKind::kEnum_fontType:
    {
      GALGAS_typeKindList temp_0 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 110)) ;
      temp_0.addAssign_operation (var_type  COMMA_SOURCE_FILE ("transient-property.galgas", 110)) ;
      var_typeList = temp_0 ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      GALGAS_typeKindList temp_1 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 112)) ;
      temp_1.addAssign_operation (var_type  COMMA_SOURCE_FILE ("transient-property.galgas", 112)) ;
      var_typeList = temp_1 ;
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      GALGAS_location location_2 (object->mAttribute_mTransientName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_2, GALGAS_string ("an entity cannot be used as simple property type")  COMMA_SOURCE_FILE ("transient-property.galgas", 114)) ;
      var_typeList.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      GALGAS_location location_3 (object->mAttribute_mTransientName.getter_location (HERE)) ; // Implicit use of 'location' getter
      inCompiler->emitSemanticError (location_3, GALGAS_string ("a class cannot be used as simple property type")  COMMA_SOURCE_FILE ("transient-property.galgas", 116)) ;
      var_typeList.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_transientDependencyListForGeneration var_dependencies = GALGAS_transientDependencyListForGeneration::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 119)) ;
  cEnumerator_observablePropertyList enumerator_4711 (object->mAttribute_mDependencyList, kEnumeration_up) ;
  while (enumerator_4711.hasCurrentObject ()) {
    GALGAS_typeKind var_dependencyType ;
    GALGAS_propertyKind var_dependencyKind ;
    GALGAS_propertyMultiplicity var_outMultiplicity ;
    GALGAS_string var_swiftTypeStringForTransientFunctionArgument ;
    categoryMethod_analyzeObservableProperty (enumerator_4711.current_mObservableProperty (HERE), constinArgument_inRootObservableProperties, constinArgument_inSemanticContext, constinArgument_inObservableProperties, var_dependencyType, var_dependencyKind, var_outMultiplicity, var_swiftTypeStringForTransientFunctionArgument, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 121)) ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("transient-property.galgas", 130)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      inCompiler->emitSemanticError (extensionGetter_location (enumerator_4711.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 131)), GALGAS_string ("a collection cannot be observed")  COMMA_SOURCE_FILE ("transient-property.galgas", 131)) ;
    }
    var_dependencies.addAssign_operation (enumerator_4711.current_mObservableProperty (HERE), extensionGetter_modelString (enumerator_4711.current_mObservableProperty (HERE), GALGAS_string ("self"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 135)).getter_nameRepresentation (SOURCE_FILE ("transient-property.galgas", 135)), var_swiftTypeStringForTransientFunctionArgument  COMMA_SOURCE_FILE ("transient-property.galgas", 133)) ;
    enumerator_4711.gotoNextObject () ;
  }
  ioArgument_ioTransientDefinitionListForGeneration.addAssign_operation (constinArgument_inOwnerName, object->mAttribute_mTransientName.mAttribute_string, var_type, var_dependencies  COMMA_SOURCE_FILE ("transient-property.galgas", 139)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_transientAST_secondaryPropertySemanticAnalysis (void) {
  enterCategoryMethod_secondaryPropertySemanticAnalysis (kTypeDescriptor_GALGAS_transientAST.mSlotID,
                                                         categoryMethod_transientAST_secondaryPropertySemanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientAST_secondaryPropertySemanticAnalysis (defineCategoryMethod_transientAST_secondaryPropertySemanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category method '@literalIntMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                       const GALGAS_observablePropertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                                                       const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                                                       const GALGAS_observablePropertyMap /* constinArgument_inCurrentObservablePropertyMap */,
                                                                                                       GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                       GALGAS_typeKind & outArgument_outType,
                                                                                                       GALGAS_location & outArgument_outErrorLocation,
                                                                                                       C_Compiler * /* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalIntMultipleBindingExpressionAST * object = (const cPtr_literalIntMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalIntMultipleBindingExpressionAST) ;
  outArgument_outEnableExpression = GALGAS_booleanMultipleBindingLiteralIntForGeneration::constructor_new (object->mAttribute_mValue.mAttribute_uint  COMMA_SOURCE_FILE ("multiple-binding.galgas", 227)) ;
  outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("multiple-binding.galgas", 228)) ;
  outArgument_outErrorLocation = object->mAttribute_mValue.mAttribute_location ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterCategoryMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST.mSlotID,
                                                           categoryMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineCategoryMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Overriding category method '@observablePropertyInMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                                 const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                                 const GALGAS_observablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                                 GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                                 GALGAS_typeKind & outArgument_outType,
                                                                                                                 GALGAS_location & outArgument_outErrorLocation,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_observablePropertyInMultipleBindingExpressionAST * object = (const cPtr_observablePropertyInMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
  GALGAS_propertyKind var_outKind ;
  GALGAS_propertyMultiplicity var_outMultiplicity ;
  GALGAS_string var_swiftTypeStringForTransientFunctionArgument ;
  categoryMethod_analyzeObservableProperty (object->mAttribute_mProperty, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, outArgument_outType, var_outKind, var_outMultiplicity, var_swiftTypeStringForTransientFunctionArgument, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 242)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("multiple-binding.galgas", 251)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (extensionGetter_location (object->mAttribute_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 252)), GALGAS_string ("a collection cannot be observed")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 252)) ;
  }
  switch (outArgument_outType.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_stringType:
  case GALGAS_typeKind::kEnum_boolType:
  case GALGAS_typeKind::kEnum_colorType:
  case GALGAS_typeKind::kEnum_dateType:
  case GALGAS_typeKind::kEnum_doubleType:
  case GALGAS_typeKind::kEnum_integerType:
  case GALGAS_typeKind::kEnum_fontType:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      inCompiler->emitSemanticError (extensionGetter_location (object->mAttribute_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 258)), GALGAS_string ("an entity cannot be observed")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 258)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      inCompiler->emitSemanticError (extensionGetter_location (object->mAttribute_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 260)), GALGAS_string ("a class cannot be observed")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 260)) ;
    }
    break ;
  }
  outArgument_outEnableExpression = GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (extensionGetter_modelString (object->mAttribute_mProperty, GALGAS_string ("self"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 263))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 262)) ;
  outArgument_outErrorLocation = extensionGetter_location (object->mAttribute_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 265)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterCategoryMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST.mSlotID,
                                                           categoryMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineCategoryMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding category method '@negateBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                          const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                          const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                          const GALGAS_observablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                          GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                          GALGAS_typeKind & outArgument_outType,
                                                                                                          GALGAS_location & outArgument_outErrorLocation,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_negateBooleanMultipleBindingExpressionAST * object = (const cPtr_negateBooleanMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_negateBooleanMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_expression, outArgument_outType, outArgument_outErrorLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 278)) ;
  const enumGalgasBool test_0 = outArgument_outType.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 286)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 286)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (outArgument_outErrorLocation, GALGAS_string ("cannot apply negation: operand is not boolean")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 287)) ;
  }
  outArgument_outEnableExpression = GALGAS_negateBooleanMultipleBindingExpressionForGeneration::constructor_new (var_expression  COMMA_SOURCE_FILE ("multiple-binding.galgas", 289)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterCategoryMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST.mSlotID,
                                                           categoryMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineCategoryMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@orBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                      const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                      const GALGAS_observablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                      GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                      GALGAS_typeKind & outArgument_outType,
                                                                                                      GALGAS_location & outArgument_outErrorLocation,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orBooleanMultipleBindingExpressionAST * object = (const cPtr_orBooleanMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orBooleanMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression ;
  GALGAS_typeKind var_outLeftType ;
  GALGAS_location var_outLeftLocation ;
  callCategoryMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression, var_outLeftType, var_outLeftLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 302)) ;
  const enumGalgasBool test_0 = var_outLeftType.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 310)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 310)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (var_outLeftLocation, GALGAS_string ("cannot apply 'or': left operand is not boolean")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 311)) ;
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression ;
  GALGAS_typeKind var_outRightType ;
  GALGAS_location var_outRightLocation ;
  callCategoryMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression, var_outRightType, var_outRightLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 313)) ;
  const enumGalgasBool test_1 = var_outRightType.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 321)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 321)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (var_outRightLocation, GALGAS_string ("cannot apply 'or': right operand is not boolean")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 322)) ;
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 324)) ;
  outArgument_outErrorLocation = var_outRightLocation ;
  outArgument_outEnableExpression = GALGAS_orBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression, var_rightExpression  COMMA_SOURCE_FILE ("multiple-binding.galgas", 326)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterCategoryMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST.mSlotID,
                                                           categoryMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineCategoryMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

