#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-7.h"


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

GALGAS_transientDefinitionListForGeneration_2D_element::GALGAS_transientDefinitionListForGeneration_2D_element (void) :
mAttribute_mOwnerName (),
mAttribute_mTransientName (),
mAttribute_mIsArray (),
mAttribute_mTransientType (),
mAttribute_mDependencyList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration_2D_element::~ GALGAS_transientDefinitionListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration_2D_element::GALGAS_transientDefinitionListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                const GALGAS_bool & inOperand2,
                                                                                                                const GALGAS_typeKind & inOperand3,
                                                                                                                const GALGAS_transientDependencyListForGeneration & inOperand4) :
mAttribute_mOwnerName (inOperand0),
mAttribute_mTransientName (inOperand1),
mAttribute_mIsArray (inOperand2),
mAttribute_mTransientType (inOperand3),
mAttribute_mDependencyList (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration_2D_element GALGAS_transientDefinitionListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                                const GALGAS_bool & inOperand2,
                                                                                                                                const GALGAS_typeKind & inOperand3,
                                                                                                                                const GALGAS_transientDependencyListForGeneration & inOperand4 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientDefinitionListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_transientDefinitionListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
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
    result = mAttribute_mIsArray.objectCompare (inOperand.mAttribute_mIsArray) ;
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
  return mAttribute_mOwnerName.isValid () && mAttribute_mTransientName.isValid () && mAttribute_mIsArray.isValid () && mAttribute_mTransientType.isValid () && mAttribute_mDependencyList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_transientDefinitionListForGeneration_2D_element::drop (void) {
  mAttribute_mOwnerName.drop () ;
  mAttribute_mTransientName.drop () ;
  mAttribute_mIsArray.drop () ;
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
    mAttribute_mIsArray.description (ioString, inIndentation+1) ;
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

GALGAS_bool GALGAS_transientDefinitionListForGeneration_2D_element::getter_mIsArray (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mIsArray ;
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
mAttribute_mColumnBindingAST (),
mAttribute_mSortPropertyName () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST_2D_element::~ GALGAS_arrayControllerBoundColumnListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST_2D_element::GALGAS_arrayControllerBoundColumnListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                          const GALGAS_columnBindingAST & inOperand2,
                                                                                                          const GALGAS_lstring & inOperand3) :
mAttribute_mColumnName (inOperand0),
mAttribute_mColumnOutletTypeName (inOperand1),
mAttribute_mColumnBindingAST (inOperand2),
mAttribute_mSortPropertyName (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST_2D_element GALGAS_arrayControllerBoundColumnListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                          const GALGAS_lstring & inOperand1,
                                                                                                                          const GALGAS_columnBindingAST & inOperand2,
                                                                                                                          const GALGAS_lstring & inOperand3 
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
    result = mAttribute_mColumnBindingAST.objectCompare (inOperand.mAttribute_mColumnBindingAST) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSortPropertyName.objectCompare (inOperand.mAttribute_mSortPropertyName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_arrayControllerBoundColumnListAST_2D_element::isValid (void) const {
  return mAttribute_mColumnName.isValid () && mAttribute_mColumnOutletTypeName.isValid () && mAttribute_mColumnBindingAST.isValid () && mAttribute_mSortPropertyName.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerBoundColumnListAST_2D_element::drop (void) {
  mAttribute_mColumnName.drop () ;
  mAttribute_mColumnOutletTypeName.drop () ;
  mAttribute_mColumnBindingAST.drop () ;
  mAttribute_mSortPropertyName.drop () ;
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
    mAttribute_mColumnBindingAST.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSortPropertyName.description (ioString, inIndentation+1) ;
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

GALGAS_columnBindingAST GALGAS_arrayControllerBoundColumnListAST_2D_element::getter_mColumnBindingAST (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mColumnBindingAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerBoundColumnListAST_2D_element::getter_mSortPropertyName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSortPropertyName ;
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

GALGAS_arrayControllerAttributListAST_2D_element::GALGAS_arrayControllerAttributListAST_2D_element (void) :
mAttribute_mAttributeName (),
mAttribute_mAttributeValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST_2D_element::~ GALGAS_arrayControllerAttributListAST_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST_2D_element::GALGAS_arrayControllerAttributListAST_2D_element (const GALGAS_lstring & inOperand0,
                                                                                                    const GALGAS_abstractDefaultValue & inOperand1) :
mAttribute_mAttributeName (inOperand0),
mAttribute_mAttributeValue (inOperand1) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST_2D_element GALGAS_arrayControllerAttributListAST_2D_element::constructor_new (const GALGAS_lstring & inOperand0,
                                                                                                                    const GALGAS_abstractDefaultValue & inOperand1 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_arrayControllerAttributListAST_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_arrayControllerAttributListAST_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_arrayControllerAttributListAST_2D_element::objectCompare (const GALGAS_arrayControllerAttributListAST_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeName.objectCompare (inOperand.mAttribute_mAttributeName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mAttributeValue.objectCompare (inOperand.mAttribute_mAttributeValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_arrayControllerAttributListAST_2D_element::isValid (void) const {
  return mAttribute_mAttributeName.isValid () && mAttribute_mAttributeValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerAttributListAST_2D_element::drop (void) {
  mAttribute_mAttributeName.drop () ;
  mAttribute_mAttributeValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerAttributListAST_2D_element::description (C_String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString << "<struct @arrayControllerAttributListAST-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mAttributeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mAttributeValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerAttributListAST_2D_element::getter_mAttributeName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue GALGAS_arrayControllerAttributListAST_2D_element::getter_mAttributeValue (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mAttributeValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                    @arrayControllerAttributListAST-element type                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerAttributListAST_2D_element ("arrayControllerAttributListAST-element",
                                                                  NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerAttributListAST_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerAttributListAST_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerAttributListAST_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerAttributListAST_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST_2D_element GALGAS_arrayControllerAttributListAST_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                  C_Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerAttributListAST_2D_element result ;
  const GALGAS_arrayControllerAttributListAST_2D_element * p = (const GALGAS_arrayControllerAttributListAST_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerAttributListAST_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerAttributListAST-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::GALGAS_arrayControllerSortedColumnListForGeneration_2D_element (void) :
mAttribute_mColumnName (),
mAttribute_mSortPropertyType (),
mAttribute_mObservablePropertyForSorting () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::~ GALGAS_arrayControllerSortedColumnListForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::GALGAS_arrayControllerSortedColumnListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                const GALGAS_typeKind & inOperand1,
                                                                                                                                const GALGAS_string & inOperand2) :
mAttribute_mColumnName (inOperand0),
mAttribute_mSortPropertyType (inOperand1),
mAttribute_mObservablePropertyForSorting (inOperand2) {
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::objectCompare (const GALGAS_arrayControllerSortedColumnListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAttribute_mColumnName.objectCompare (inOperand.mAttribute_mColumnName) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mSortPropertyType.objectCompare (inOperand.mAttribute_mSortPropertyType) ;
  }
  if (result == kOperandEqual) {
    result = mAttribute_mObservablePropertyForSorting.objectCompare (inOperand.mAttribute_mObservablePropertyForSorting) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::isValid (void) const {
  return mAttribute_mColumnName.isValid () && mAttribute_mSortPropertyType.isValid () && mAttribute_mObservablePropertyForSorting.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::drop (void) {
  mAttribute_mColumnName.drop () ;
  mAttribute_mSortPropertyType.drop () ;
  mAttribute_mObservablePropertyForSorting.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::description (C_String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString << "<struct @arrayControllerSortedColumnListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mAttribute_mColumnName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mSortPropertyType.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mAttribute_mObservablePropertyForSorting.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::getter_mColumnName (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mColumnName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_typeKind GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::getter_mSortPropertyType (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mSortPropertyType ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::getter_mObservablePropertyForSorting (UNUSED_LOCATION_ARGS) const {
  return mAttribute_mObservablePropertyForSorting ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             @arrayControllerSortedColumnListForGeneration-element type                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerSortedColumnListForGeneration_2D_element ("arrayControllerSortedColumnListForGeneration-element",
                                                                                NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerSortedColumnListForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerSortedColumnListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerSortedColumnListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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
//                               Extension method '@XcodeProjectDescriptor addICNS_file'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionSetter_addICNS_5F_file (GALGAS_XcodeProjectDescriptor & ioObject,
                                      const GALGAS_string constinArgument_inFileName,
                                      GALGAS_string & outArgument_outFileRef,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 13)) ;
  }
  ioObject.mAttribute_mICNS_5F_fileList.addAssign_operation (outArgument_outFileRef, constinArgument_inFileName  COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.galgas", 14)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@propertyClassDeclaration typeInventory'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_propertyClassDeclaration_typeInventory (const cPtr_astDeclaration * inObject,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_propertyClassDeclaration * object = (const cPtr_propertyClassDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_propertyClassDeclaration) ;
  {
  ioArgument_ioUnifiedTypeMap.setter_insertKey (object->mAttribute_mClassPropertyName, GALGAS_typeKind::constructor_propertyClassType (object->mAttribute_mClassPropertyName.mAttribute_string, object->mAttribute_mDefaultValues  COMMA_SOURCE_FILE ("property-class.galgas", 64)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("property-class.galgas", 65)), inCompiler COMMA_SOURCE_FILE ("property-class.galgas", 62)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_propertyClassDeclaration_typeInventory (void) {
  enterExtensionMethod_typeInventory (kTypeDescriptor_GALGAS_propertyClassDeclaration.mSlotID,
                                      extensionMethod_propertyClassDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_propertyClassDeclaration_typeInventory (defineExtensionMethod_propertyClassDeclaration_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding extension method '@propertyClassDeclaration buildObservablePropertyMapsFromStoredProperties'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_propertyClassDeclaration_buildObservablePropertyMapsFromStoredProperties (const cPtr_astDeclaration * /* inObject */,
                                                                                                      const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                                                      GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_propertyClassDeclaration_buildObservablePropertyMapsFromStoredProperties (void) {
  enterExtensionMethod_buildObservablePropertyMapsFromStoredProperties (kTypeDescriptor_GALGAS_propertyClassDeclaration.mSlotID,
                                                                        extensionMethod_propertyClassDeclaration_buildObservablePropertyMapsFromStoredProperties) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_propertyClassDeclaration_buildObservablePropertyMapsFromStoredProperties (defineExtensionMethod_propertyClassDeclaration_buildObservablePropertyMapsFromStoredProperties, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@propertyClassDeclaration buildInitialSecondaryPropertyListMap'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_propertyClassDeclaration_buildInitialSecondaryPropertyListMap (const cPtr_astDeclaration * /* inObject */,
                                                                                           GALGAS_secondaryDeclarationListWorkingList & /* ioArgument_ioSecondaryDeclarationListWorkingList */,
                                                                                           GALGAS_uint & /* ioArgument_ioSecondaryDeclarationCount */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_propertyClassDeclaration_buildInitialSecondaryPropertyListMap (void) {
  enterExtensionMethod_buildInitialSecondaryPropertyListMap (kTypeDescriptor_GALGAS_propertyClassDeclaration.mSlotID,
                                                             extensionMethod_propertyClassDeclaration_buildInitialSecondaryPropertyListMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_propertyClassDeclaration_buildInitialSecondaryPropertyListMap (defineExtensionMethod_propertyClassDeclaration_buildInitialSecondaryPropertyListMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@propertyClassDeclaration solveSecondaryProperty'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_propertyClassDeclaration_solveSecondaryProperty (const cPtr_astDeclaration * /* inObject */,
                                                                             GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                             const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                             const GALGAS_secondaryPropertyList /* constinArgument_inPropertiesToSolve */,
                                                                             GALGAS_secondaryPropertyList & outArgument_outUnsolvedProperties,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnsolvedProperties = GALGAS_secondaryPropertyList::constructor_emptyList (SOURCE_FILE ("property-class.galgas", 96)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_propertyClassDeclaration_solveSecondaryProperty (void) {
  enterExtensionMethod_solveSecondaryProperty (kTypeDescriptor_GALGAS_propertyClassDeclaration.mSlotID,
                                               extensionMethod_propertyClassDeclaration_solveSecondaryProperty) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_propertyClassDeclaration_solveSecondaryProperty (defineExtensionMethod_propertyClassDeclaration_solveSecondaryProperty, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@propertyClassDeclaration semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_propertyClassDeclaration_semanticAnalysis (const cPtr_astDeclaration * inObject,
                                                                       const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                       GALGAS_structForGeneration & ioArgument_ioGeneration,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_propertyClassDeclaration * object = (const cPtr_propertyClassDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_propertyClassDeclaration) ;
  ioArgument_ioGeneration.mAttribute_mPropertyClassList.addAssign_operation (object->mAttribute_mClassPropertyName.mAttribute_string  COMMA_SOURCE_FILE ("property-class.galgas", 105)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_propertyClassDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_propertyClassDeclaration.mSlotID,
                                         extensionMethod_propertyClassDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_propertyClassDeclaration_semanticAnalysis (defineExtensionMethod_propertyClassDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@transientPropertyClassDeclaration typeInventory'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_transientPropertyClassDeclaration_typeInventory (const cPtr_astDeclaration * inObject,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientPropertyClassDeclaration * object = (const cPtr_transientPropertyClassDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_transientPropertyClassDeclaration) ;
  {
  ioArgument_ioUnifiedTypeMap.setter_insertKey (object->mAttribute_mClassPropertyName, GALGAS_typeKind::constructor_transientPropertyClassType (object->mAttribute_mClassPropertyName.mAttribute_string  COMMA_SOURCE_FILE ("transient-property-class.galgas", 45)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("transient-property-class.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("transient-property-class.galgas", 43)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_transientPropertyClassDeclaration_typeInventory (void) {
  enterExtensionMethod_typeInventory (kTypeDescriptor_GALGAS_transientPropertyClassDeclaration.mSlotID,
                                      extensionMethod_transientPropertyClassDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientPropertyClassDeclaration_typeInventory (defineExtensionMethod_transientPropertyClassDeclaration_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding extension method '@transientPropertyClassDeclaration buildObservablePropertyMapsFromStoredProperties'   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_transientPropertyClassDeclaration_buildObservablePropertyMapsFromStoredProperties (const cPtr_astDeclaration * /* inObject */,
                                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                                                               GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                                               C_Compiler * /* inCompiler */
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_transientPropertyClassDeclaration_buildObservablePropertyMapsFromStoredProperties (void) {
  enterExtensionMethod_buildObservablePropertyMapsFromStoredProperties (kTypeDescriptor_GALGAS_transientPropertyClassDeclaration.mSlotID,
                                                                        extensionMethod_transientPropertyClassDeclaration_buildObservablePropertyMapsFromStoredProperties) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientPropertyClassDeclaration_buildObservablePropertyMapsFromStoredProperties (defineExtensionMethod_transientPropertyClassDeclaration_buildObservablePropertyMapsFromStoredProperties, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Overriding extension method '@transientPropertyClassDeclaration buildInitialSecondaryPropertyListMap'        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_transientPropertyClassDeclaration_buildInitialSecondaryPropertyListMap (const cPtr_astDeclaration * /* inObject */,
                                                                                                    GALGAS_secondaryDeclarationListWorkingList & /* ioArgument_ioSecondaryDeclarationListWorkingList */,
                                                                                                    GALGAS_uint & /* ioArgument_ioSecondaryDeclarationCount */,
                                                                                                    C_Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_transientPropertyClassDeclaration_buildInitialSecondaryPropertyListMap (void) {
  enterExtensionMethod_buildInitialSecondaryPropertyListMap (kTypeDescriptor_GALGAS_transientPropertyClassDeclaration.mSlotID,
                                                             extensionMethod_transientPropertyClassDeclaration_buildInitialSecondaryPropertyListMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientPropertyClassDeclaration_buildInitialSecondaryPropertyListMap (defineExtensionMethod_transientPropertyClassDeclaration_buildInitialSecondaryPropertyListMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@transientPropertyClassDeclaration solveSecondaryProperty'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_transientPropertyClassDeclaration_solveSecondaryProperty (const cPtr_astDeclaration * /* inObject */,
                                                                                      GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                      const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                                      const GALGAS_secondaryPropertyList /* constinArgument_inPropertiesToSolve */,
                                                                                      GALGAS_secondaryPropertyList & outArgument_outUnsolvedProperties,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnsolvedProperties = GALGAS_secondaryPropertyList::constructor_emptyList (SOURCE_FILE ("transient-property-class.galgas", 77)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_transientPropertyClassDeclaration_solveSecondaryProperty (void) {
  enterExtensionMethod_solveSecondaryProperty (kTypeDescriptor_GALGAS_transientPropertyClassDeclaration.mSlotID,
                                               extensionMethod_transientPropertyClassDeclaration_solveSecondaryProperty) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientPropertyClassDeclaration_solveSecondaryProperty (defineExtensionMethod_transientPropertyClassDeclaration_solveSecondaryProperty, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@transientPropertyClassDeclaration semanticAnalysis'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_transientPropertyClassDeclaration_semanticAnalysis (const cPtr_astDeclaration * inObject,
                                                                                const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                                GALGAS_structForGeneration & ioArgument_ioGeneration,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientPropertyClassDeclaration * object = (const cPtr_transientPropertyClassDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_transientPropertyClassDeclaration) ;
  ioArgument_ioGeneration.mAttribute_mTransientPropertyClassList.addAssign_operation (object->mAttribute_mClassPropertyName.mAttribute_string  COMMA_SOURCE_FILE ("transient-property-class.galgas", 86)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_transientPropertyClassDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_transientPropertyClassDeclaration.mSlotID,
                                         extensionMethod_transientPropertyClassDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientPropertyClassDeclaration_semanticAnalysis (defineExtensionMethod_transientPropertyClassDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@enumDeclaration typeInventory'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumDeclaration_typeInventory (const cPtr_astDeclaration * inObject,
                                                           GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclaration * object = (const cPtr_enumDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclaration) ;
  GALGAS_enumConstantMap var_enumConstantMap_2589 = GALGAS_enumConstantMap::constructor_emptyMap (SOURCE_FILE ("enumeration.galgas", 55)) ;
  cEnumerator_lstringlist enumerator_2629 (object->mAttribute_mEnumConstantNameList, kEnumeration_up) ;
  while (enumerator_2629.hasCurrentObject ()) {
    {
    var_enumConstantMap_2589.setter_insertKey (enumerator_2629.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas", 57)) ;
    }
    enumerator_2629.gotoNextObject () ;
  }
  {
  ioArgument_ioUnifiedTypeMap.setter_insertKey (object->mAttribute_mEnumTypeName, GALGAS_typeKind::constructor_enumType (object->mAttribute_mEnumTypeName.mAttribute_string, var_enumConstantMap_2589  COMMA_SOURCE_FILE ("enumeration.galgas", 61)), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("enumeration.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas", 59)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumDeclaration_typeInventory (void) {
  enterExtensionMethod_typeInventory (kTypeDescriptor_GALGAS_enumDeclaration.mSlotID,
                                      extensionMethod_enumDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclaration_typeInventory (defineExtensionMethod_enumDeclaration_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@enumDeclaration buildObservablePropertyMapsFromStoredProperties'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumDeclaration_buildObservablePropertyMapsFromStoredProperties (const cPtr_astDeclaration * /* inObject */,
                                                                                             const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                                             GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumDeclaration_buildObservablePropertyMapsFromStoredProperties (void) {
  enterExtensionMethod_buildObservablePropertyMapsFromStoredProperties (kTypeDescriptor_GALGAS_enumDeclaration.mSlotID,
                                                                        extensionMethod_enumDeclaration_buildObservablePropertyMapsFromStoredProperties) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclaration_buildObservablePropertyMapsFromStoredProperties (defineExtensionMethod_enumDeclaration_buildObservablePropertyMapsFromStoredProperties, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@enumDeclaration buildInitialSecondaryPropertyListMap'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumDeclaration_buildInitialSecondaryPropertyListMap (const cPtr_astDeclaration * /* inObject */,
                                                                                  GALGAS_secondaryDeclarationListWorkingList & /* ioArgument_ioSecondaryDeclarationListWorkingList */,
                                                                                  GALGAS_uint & /* ioArgument_ioSecondaryDeclarationCount */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumDeclaration_buildInitialSecondaryPropertyListMap (void) {
  enterExtensionMethod_buildInitialSecondaryPropertyListMap (kTypeDescriptor_GALGAS_enumDeclaration.mSlotID,
                                                             extensionMethod_enumDeclaration_buildInitialSecondaryPropertyListMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclaration_buildInitialSecondaryPropertyListMap (defineExtensionMethod_enumDeclaration_buildInitialSecondaryPropertyListMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@enumDeclaration solveSecondaryProperty'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumDeclaration_solveSecondaryProperty (const cPtr_astDeclaration * /* inObject */,
                                                                    GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                    const GALGAS_unifiedTypeMap /* constinArgument_mUnifiedTypeMap */,
                                                                    const GALGAS_secondaryPropertyList /* constinArgument_inPropertiesToSolve */,
                                                                    GALGAS_secondaryPropertyList & outArgument_outUnsolvedProperties,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnsolvedProperties = GALGAS_secondaryPropertyList::constructor_emptyList (SOURCE_FILE ("enumeration.galgas", 92)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumDeclaration_solveSecondaryProperty (void) {
  enterExtensionMethod_solveSecondaryProperty (kTypeDescriptor_GALGAS_enumDeclaration.mSlotID,
                                               extensionMethod_enumDeclaration_solveSecondaryProperty) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclaration_solveSecondaryProperty (defineExtensionMethod_enumDeclaration_solveSecondaryProperty, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@enumDeclaration semanticAnalysis'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_enumDeclaration_semanticAnalysis (const cPtr_astDeclaration * inObject,
                                                              const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                              GALGAS_structForGeneration & ioArgument_ioGeneration,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclaration * object = (const cPtr_enumDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclaration) ;
  ioArgument_ioGeneration.mAttribute_mEnumListForGeneration.addAssign_operation (object->mAttribute_mEnumTypeName.mAttribute_string, object->mAttribute_mEnumConstantNameList  COMMA_SOURCE_FILE ("enumeration.galgas", 101)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_enumDeclaration.mSlotID,
                                         extensionMethod_enumDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclaration_semanticAnalysis (defineExtensionMethod_enumDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding extension method '@classDeclaration typeInventory'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_classDeclaration_typeInventory (const cPtr_astDeclaration * inObject,
                                                            GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                            C_Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclaration * object = (const cPtr_classDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclaration) ;
  extensionMethod_typeInventory (object->mAttribute_mSimpleStoredAttributeList, ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("class.galgas", 89)) ;
  cEnumerator_secondaryPropertyList enumerator_3592 (object->mAttribute_mSecondaryPropertyList, kEnumeration_up) ;
  while (enumerator_3592.hasCurrentObject ()) {
    callExtensionMethod_typeInventory ((const cPtr_abstractSecondaryProperty *) enumerator_3592.current_mSecondaryProperty (HERE).ptr (), ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("class.galgas", 91)) ;
    enumerator_3592.gotoNextObject () ;
  }
  GALGAS_actionMap var_actionMap_3668 = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("class.galgas", 93)) ;
  cEnumerator_lstringlist enumerator_3711 (object->mAttribute_mActionDeclarationList, kEnumeration_up) ;
  while (enumerator_3711.hasCurrentObject ()) {
    {
    var_actionMap_3668.setter_insertKey (enumerator_3711.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("class.galgas", 95)) ;
    }
    enumerator_3711.gotoNextObject () ;
  }
  {
  ioArgument_ioUnifiedTypeMap.setter_insertKey (object->mAttribute_mClassName, GALGAS_typeKind::constructor_classType (object->mAttribute_mClassName.mAttribute_string  COMMA_SOURCE_FILE ("class.galgas", 99)), var_actionMap_3668, inCompiler COMMA_SOURCE_FILE ("class.galgas", 99)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_classDeclaration_typeInventory (void) {
  enterExtensionMethod_typeInventory (kTypeDescriptor_GALGAS_classDeclaration.mSlotID,
                                      extensionMethod_classDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclaration_typeInventory (defineExtensionMethod_classDeclaration_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@classDeclaration buildObservablePropertyMapsFromStoredProperties'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_classDeclaration_buildObservablePropertyMapsFromStoredProperties (const cPtr_astDeclaration * inObject,
                                                                                              const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                              GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclaration * object = (const cPtr_classDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclaration) ;
  GALGAS_observablePropertyMap var_observablePropertyMap_5348 = GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("class.galgas", 124)) ;
  extensionMethod_buildObservablePropertyMap (object->mAttribute_mSimpleStoredAttributeList, constinArgument_inUnifiedTypeMap, var_observablePropertyMap_5348, inCompiler COMMA_SOURCE_FILE ("class.galgas", 126)) ;
  {
  ioArgument_ioSemanticContext.mAttribute_mEntityObservablePropertyMap.setter_insertKey (object->mAttribute_mClassName, var_observablePropertyMap_5348, inCompiler COMMA_SOURCE_FILE ("class.galgas", 140)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_classDeclaration_buildObservablePropertyMapsFromStoredProperties (void) {
  enterExtensionMethod_buildObservablePropertyMapsFromStoredProperties (kTypeDescriptor_GALGAS_classDeclaration.mSlotID,
                                                                        extensionMethod_classDeclaration_buildObservablePropertyMapsFromStoredProperties) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclaration_buildObservablePropertyMapsFromStoredProperties (defineExtensionMethod_classDeclaration_buildObservablePropertyMapsFromStoredProperties, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@classDeclaration buildInitialSecondaryPropertyListMap'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_classDeclaration_buildInitialSecondaryPropertyListMap (const cPtr_astDeclaration * inObject,
                                                                                   GALGAS_secondaryDeclarationListWorkingList & ioArgument_ioSecondaryDeclarationListWorkingList,
                                                                                   GALGAS_uint & ioArgument_ioSecondaryDeclarationCount,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclaration * object = (const cPtr_classDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclaration) ;
  ioArgument_ioSecondaryDeclarationCount = ioArgument_ioSecondaryDeclarationCount.add_operation (object->mAttribute_mSecondaryPropertyList.getter_length (SOURCE_FILE ("class.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("class.galgas", 152)) ;
  const GALGAS_classDeclaration temp_0 = object ;
  ioArgument_ioSecondaryDeclarationListWorkingList.addAssign_operation (temp_0, object->mAttribute_mSecondaryPropertyList  COMMA_SOURCE_FILE ("class.galgas", 153)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_classDeclaration_buildInitialSecondaryPropertyListMap (void) {
  enterExtensionMethod_buildInitialSecondaryPropertyListMap (kTypeDescriptor_GALGAS_classDeclaration.mSlotID,
                                                             extensionMethod_classDeclaration_buildInitialSecondaryPropertyListMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclaration_buildInitialSecondaryPropertyListMap (defineExtensionMethod_classDeclaration_buildInitialSecondaryPropertyListMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@classDeclaration solveSecondaryProperty'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_classDeclaration_solveSecondaryProperty (const cPtr_astDeclaration * inObject,
                                                                     GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                     const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                     const GALGAS_secondaryPropertyList constinArgument_inPropertiesToSolve,
                                                                     GALGAS_secondaryPropertyList & outArgument_outUnsolvedProperties,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclaration * object = (const cPtr_classDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclaration) ;
  outArgument_outUnsolvedProperties = GALGAS_secondaryPropertyList::constructor_emptyList (SOURCE_FILE ("class.galgas", 164)) ;
  GALGAS_observablePropertyMap var_observablePropertyMap_6900 ;
  ioArgument_ioSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (object->mAttribute_mClassName, var_observablePropertyMap_6900, inCompiler COMMA_SOURCE_FILE ("class.galgas", 165)) ;
  cEnumerator_secondaryPropertyList enumerator_6944 (constinArgument_inPropertiesToSolve, kEnumeration_up) ;
  while (enumerator_6944.hasCurrentObject ()) {
    callExtensionMethod_tryToSolveSecondaryProperty ((const cPtr_abstractSecondaryProperty *) enumerator_6944.current_mSecondaryProperty (HERE).ptr (), ioArgument_ioSemanticContext, GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("class.galgas", 172)), var_observablePropertyMap_6900, outArgument_outUnsolvedProperties, inCompiler COMMA_SOURCE_FILE ("class.galgas", 170)) ;
    enumerator_6944.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mEntityObservablePropertyMap.setter_setMObservablePropertyMapForKey (var_observablePropertyMap_6900, object->mAttribute_mClassName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("class.galgas", 177)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_classDeclaration_solveSecondaryProperty (void) {
  enterExtensionMethod_solveSecondaryProperty (kTypeDescriptor_GALGAS_classDeclaration.mSlotID,
                                               extensionMethod_classDeclaration_solveSecondaryProperty) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclaration_solveSecondaryProperty (defineExtensionMethod_classDeclaration_solveSecondaryProperty, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@classDeclaration semanticAnalysis'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_classDeclaration_semanticAnalysis (const cPtr_astDeclaration * inObject,
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               GALGAS_structForGeneration & ioArgument_ioGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclaration * object = (const cPtr_classDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclaration) ;
  GALGAS_observablePropertyMap var_observablePropertyMap_7902 ;
  constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (object->mAttribute_mClassName, var_observablePropertyMap_7902, inCompiler COMMA_SOURCE_FILE ("class.galgas", 195)) ;
  GALGAS_simpleStoredPropertyListForGeneration var_simpleStoredPropertyListForGeneration_8275 ;
  extensionMethod_simpleStoredPropertySemanticAnalysis (object->mAttribute_mSimpleStoredAttributeList, object->mAttribute_mClassName.mAttribute_string, constinArgument_inSemanticContext.mAttribute_mUnifiedTypeMap, ioArgument_ioGeneration.mAttribute_mValidationStubRoutineListForGeneration, var_simpleStoredPropertyListForGeneration_8275, inCompiler COMMA_SOURCE_FILE ("class.galgas", 201)) ;
  GALGAS_transientDefinitionListForGeneration var_transientDefinitionListForGeneration_8380 = GALGAS_transientDefinitionListForGeneration::constructor_emptyList (SOURCE_FILE ("class.galgas", 208)) ;
  cEnumerator_secondaryPropertyList enumerator_8424 (object->mAttribute_mSecondaryPropertyList, kEnumeration_up) ;
  while (enumerator_8424.hasCurrentObject ()) {
    GALGAS_arrayControllerForGeneration joker_8663 = GALGAS_arrayControllerForGeneration::constructor_emptyList (SOURCE_FILE ("class.galgas", 217)) ;
    GALGAS_selectionControllerForGeneration joker_8695 = GALGAS_selectionControllerForGeneration::constructor_emptyList (SOURCE_FILE ("class.galgas", 218)) ;
    GALGAS_customObjectControllerForGeneration joker_8731 = GALGAS_customObjectControllerForGeneration::constructor_emptyList (SOURCE_FILE ("class.galgas", 219)) ;
    callExtensionMethod_secondaryPropertySemanticAnalysis ((const cPtr_abstractSecondaryProperty *) enumerator_8424.current_mSecondaryProperty (HERE).ptr (), object->mAttribute_mClassName.mAttribute_string, GALGAS_string::makeEmptyString (), GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("class.galgas", 213)), constinArgument_inSemanticContext, var_observablePropertyMap_7902, var_transientDefinitionListForGeneration_8380, joker_8663, joker_8695, joker_8731, ioArgument_ioGeneration.mAttribute_mNeededOutletClasses, inCompiler COMMA_SOURCE_FILE ("class.galgas", 210)) ;
    enumerator_8424.gotoNextObject () ;
  }
  ioArgument_ioGeneration.mAttribute_mTransientListForGeneration.plusAssign_operation(var_transientDefinitionListForGeneration_8380, inCompiler  COMMA_SOURCE_FILE ("class.galgas", 223)) ;
  cEnumerator_externSwiftFunctionList enumerator_8967 (object->mAttribute_mExternSwiftFunctionList, kEnumeration_up) ;
  while (enumerator_8967.hasCurrentObject ()) {
    const enumGalgasBool test_0 = function_externSwiftFunctionCallerSet (inCompiler COMMA_SOURCE_FILE ("class.galgas", 226)).getter_hasKey (enumerator_8967.current_mCallerName (HERE).mAttribute_string COMMA_SOURCE_FILE ("class.galgas", 226)).operator_not (SOURCE_FILE ("class.galgas", 226)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_m_9059 = GALGAS_string ("allowed here:") ;
      cEnumerator_stringset enumerator_9124 (function_externSwiftFunctionCallerSet (inCompiler COMMA_SOURCE_FILE ("class.galgas", 228)), kEnumeration_up) ;
      while (enumerator_9124.hasCurrentObject ()) {
        var_m_9059.plusAssign_operation(GALGAS_string (" '").add_operation (enumerator_9124.current (HERE), inCompiler COMMA_SOURCE_FILE ("class.galgas", 229)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("class.galgas", 229)), inCompiler  COMMA_SOURCE_FILE ("class.galgas", 229)) ;
        if (enumerator_9124.hasNextObject ()) {
          var_m_9059.plusAssign_operation(GALGAS_string (","), inCompiler  COMMA_SOURCE_FILE ("class.galgas", 230)) ;
        }
        enumerator_9124.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (enumerator_8967.current_mCallerName (HERE).getter_location (SOURCE_FILE ("class.galgas", 232)), var_m_9059  COMMA_SOURCE_FILE ("class.galgas", 232)) ;
    }
    enumerator_8967.gotoNextObject () ;
  }
  GALGAS_actionMap var_actionMap_9294 = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("class.galgas", 236)) ;
  cEnumerator_lstringlist enumerator_9344 (object->mAttribute_mActionDeclarationList, kEnumeration_up) ;
  while (enumerator_9344.hasCurrentObject ()) {
    {
    var_actionMap_9294.setter_insertKey (enumerator_9344.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("class.galgas", 238)) ;
    }
    ioArgument_ioGeneration.mAttribute_mActionListForGeneration.addAssign_operation (object->mAttribute_mClassName.mAttribute_string, enumerator_9344.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("class.galgas", 239)) ;
    enumerator_9344.gotoNextObject () ;
  }
  ioArgument_ioGeneration.mAttribute_mClassListForGeneration.addAssign_operation (object->mAttribute_mClassName.mAttribute_string, var_simpleStoredPropertyListForGeneration_8275, var_transientDefinitionListForGeneration_8380, object->mAttribute_mExternSwiftFunctionList, object->mAttribute_mExternSwiftDelegateList  COMMA_SOURCE_FILE ("class.galgas", 242)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_classDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_classDeclaration.mSlotID,
                                         extensionMethod_classDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclaration_semanticAnalysis (defineExtensionMethod_classDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding extension method '@entityDeclaration typeInventory'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_entityDeclaration_typeInventory (const cPtr_astDeclaration * inObject,
                                                             GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                             C_Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_entityDeclaration * object = (const cPtr_entityDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_entityDeclaration) ;
  extensionMethod_typeInventory (object->mAttribute_mSimpleStoredAttributeList, ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 81)) ;
  cEnumerator_secondaryPropertyList enumerator_3242 (object->mAttribute_mSecondaryPropertyList, kEnumeration_up) ;
  while (enumerator_3242.hasCurrentObject ()) {
    callExtensionMethod_typeInventory ((const cPtr_abstractSecondaryProperty *) enumerator_3242.current_mSecondaryProperty (HERE).ptr (), ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 83)) ;
    enumerator_3242.gotoNextObject () ;
  }
  GALGAS_actionMap var_actionMap_3329 = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("entity.galgas", 87)) ;
  cEnumerator_lstringlist enumerator_3372 (object->mAttribute_mActionDeclarationList, kEnumeration_up) ;
  while (enumerator_3372.hasCurrentObject ()) {
    {
    var_actionMap_3329.setter_insertKey (enumerator_3372.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 89)) ;
    }
    enumerator_3372.gotoNextObject () ;
  }
  extensionMethod_typeInventory (object->mAttribute_mToOneRelationshipList, ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 91)) ;
  extensionMethod_typeInventory (object->mAttribute_mToManyRelationshipList, ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 92)) ;
  {
  ioArgument_ioUnifiedTypeMap.setter_insertKey (object->mAttribute_mEntityName, GALGAS_typeKind::constructor_entityType (object->mAttribute_mEntityName.mAttribute_string  COMMA_SOURCE_FILE ("entity.galgas", 93)), var_actionMap_3329, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 93)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mSuperEntityName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy joker_3754 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, object->mAttribute_mSuperEntityName, joker_3754 COMMA_SOURCE_FILE ("entity.galgas", 95)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_entityDeclaration_typeInventory (void) {
  enterExtensionMethod_typeInventory (kTypeDescriptor_GALGAS_entityDeclaration.mSlotID,
                                      extensionMethod_entityDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_entityDeclaration_typeInventory (defineExtensionMethod_entityDeclaration_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension method '@entityDeclaration buildObservablePropertyMapsFromStoredProperties'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_entityDeclaration_buildObservablePropertyMapsFromStoredProperties (const cPtr_astDeclaration * inObject,
                                                                                               const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                               GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_entityDeclaration * object = (const cPtr_entityDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_entityDeclaration) ;
  GALGAS_observablePropertyMap var_observablePropertyMap_5012 = GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("entity.galgas", 118)) ;
  extensionMethod_buildObservablePropertyMap (object->mAttribute_mSimpleStoredAttributeList, constinArgument_inUnifiedTypeMap, var_observablePropertyMap_5012, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 120)) ;
  extensionMethod_buildObservablePropertyMap (object->mAttribute_mToOneRelationshipList, constinArgument_inUnifiedTypeMap, var_observablePropertyMap_5012, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 125)) ;
  extensionMethod_buildObservablePropertyMap (object->mAttribute_mToManyRelationshipList, constinArgument_inUnifiedTypeMap, var_observablePropertyMap_5012, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 129)) ;
  {
  ioArgument_ioSemanticContext.mAttribute_mEntityObservablePropertyMap.setter_insertKey (object->mAttribute_mEntityName, var_observablePropertyMap_5012, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 134)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_entityDeclaration_buildObservablePropertyMapsFromStoredProperties (void) {
  enterExtensionMethod_buildObservablePropertyMapsFromStoredProperties (kTypeDescriptor_GALGAS_entityDeclaration.mSlotID,
                                                                        extensionMethod_entityDeclaration_buildObservablePropertyMapsFromStoredProperties) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_entityDeclaration_buildObservablePropertyMapsFromStoredProperties (defineExtensionMethod_entityDeclaration_buildObservablePropertyMapsFromStoredProperties, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@entityDeclaration buildInitialSecondaryPropertyListMap'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_entityDeclaration_buildInitialSecondaryPropertyListMap (const cPtr_astDeclaration * inObject,
                                                                                    GALGAS_secondaryDeclarationListWorkingList & ioArgument_ioSecondaryDeclarationListWorkingList,
                                                                                    GALGAS_uint & ioArgument_ioSecondaryDeclarationCount,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_entityDeclaration * object = (const cPtr_entityDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_entityDeclaration) ;
  ioArgument_ioSecondaryDeclarationCount = ioArgument_ioSecondaryDeclarationCount.add_operation (object->mAttribute_mSecondaryPropertyList.getter_length (SOURCE_FILE ("entity.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("entity.galgas", 146)) ;
  const GALGAS_entityDeclaration temp_0 = object ;
  ioArgument_ioSecondaryDeclarationListWorkingList.addAssign_operation (temp_0, object->mAttribute_mSecondaryPropertyList  COMMA_SOURCE_FILE ("entity.galgas", 147)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_entityDeclaration_buildInitialSecondaryPropertyListMap (void) {
  enterExtensionMethod_buildInitialSecondaryPropertyListMap (kTypeDescriptor_GALGAS_entityDeclaration.mSlotID,
                                                             extensionMethod_entityDeclaration_buildInitialSecondaryPropertyListMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_entityDeclaration_buildInitialSecondaryPropertyListMap (defineExtensionMethod_entityDeclaration_buildInitialSecondaryPropertyListMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@entityDeclaration solveSecondaryProperty'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_entityDeclaration_solveSecondaryProperty (const cPtr_astDeclaration * inObject,
                                                                      GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                      const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                      const GALGAS_secondaryPropertyList constinArgument_inPropertiesToSolve,
                                                                      GALGAS_secondaryPropertyList & outArgument_outUnsolvedProperties,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_entityDeclaration * object = (const cPtr_entityDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_entityDeclaration) ;
  outArgument_outUnsolvedProperties = GALGAS_secondaryPropertyList::constructor_emptyList (SOURCE_FILE ("entity.galgas", 158)) ;
  GALGAS_observablePropertyMap var_observablePropertyMap_6560 ;
  ioArgument_ioSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (object->mAttribute_mEntityName, var_observablePropertyMap_6560, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 159)) ;
  cEnumerator_secondaryPropertyList enumerator_6604 (constinArgument_inPropertiesToSolve, kEnumeration_up) ;
  while (enumerator_6604.hasCurrentObject ()) {
    callExtensionMethod_tryToSolveSecondaryProperty ((const cPtr_abstractSecondaryProperty *) enumerator_6604.current_mSecondaryProperty (HERE).ptr (), ioArgument_ioSemanticContext, GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("entity.galgas", 166)), var_observablePropertyMap_6560, outArgument_outUnsolvedProperties, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 164)) ;
    enumerator_6604.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mEntityObservablePropertyMap.setter_setMObservablePropertyMapForKey (var_observablePropertyMap_6560, object->mAttribute_mEntityName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 171)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_entityDeclaration_solveSecondaryProperty (void) {
  enterExtensionMethod_solveSecondaryProperty (kTypeDescriptor_GALGAS_entityDeclaration.mSlotID,
                                               extensionMethod_entityDeclaration_solveSecondaryProperty) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_entityDeclaration_solveSecondaryProperty (defineExtensionMethod_entityDeclaration_solveSecondaryProperty, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@entityDeclaration semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_entityDeclaration_semanticAnalysis (const cPtr_astDeclaration * inObject,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                GALGAS_structForGeneration & ioArgument_ioGeneration,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_entityDeclaration * object = (const cPtr_entityDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_entityDeclaration) ;
  GALGAS_observablePropertyMap var_observablePropertyMap_7303 ;
  constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (object->mAttribute_mEntityName, var_observablePropertyMap_7303, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 183)) ;
  GALGAS_simpleStoredPropertyListForGeneration var_simpleStoredPropertyListForGeneration_7677 ;
  extensionMethod_simpleStoredPropertySemanticAnalysis (object->mAttribute_mSimpleStoredAttributeList, object->mAttribute_mEntityName.mAttribute_string, constinArgument_inSemanticContext.mAttribute_mUnifiedTypeMap, ioArgument_ioGeneration.mAttribute_mValidationStubRoutineListForGeneration, var_simpleStoredPropertyListForGeneration_7677, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 189)) ;
  GALGAS_transientDefinitionListForGeneration var_transientDefinitionListForGeneration_7782 = GALGAS_transientDefinitionListForGeneration::constructor_emptyList (SOURCE_FILE ("entity.galgas", 196)) ;
  cEnumerator_secondaryPropertyList enumerator_7826 (object->mAttribute_mSecondaryPropertyList, kEnumeration_up) ;
  while (enumerator_7826.hasCurrentObject ()) {
    GALGAS_arrayControllerForGeneration joker_8066 = GALGAS_arrayControllerForGeneration::constructor_emptyList (SOURCE_FILE ("entity.galgas", 205)) ;
    GALGAS_selectionControllerForGeneration joker_8098 = GALGAS_selectionControllerForGeneration::constructor_emptyList (SOURCE_FILE ("entity.galgas", 206)) ;
    GALGAS_customObjectControllerForGeneration joker_8134 = GALGAS_customObjectControllerForGeneration::constructor_emptyList (SOURCE_FILE ("entity.galgas", 207)) ;
    callExtensionMethod_secondaryPropertySemanticAnalysis ((const cPtr_abstractSecondaryProperty *) enumerator_7826.current_mSecondaryProperty (HERE).ptr (), object->mAttribute_mEntityName.mAttribute_string, GALGAS_string::makeEmptyString (), GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("entity.galgas", 201)), constinArgument_inSemanticContext, var_observablePropertyMap_7303, var_transientDefinitionListForGeneration_7782, joker_8066, joker_8098, joker_8134, ioArgument_ioGeneration.mAttribute_mNeededOutletClasses, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 198)) ;
    enumerator_7826.gotoNextObject () ;
  }
  ioArgument_ioGeneration.mAttribute_mTransientListForGeneration.plusAssign_operation(var_transientDefinitionListForGeneration_7782, inCompiler  COMMA_SOURCE_FILE ("entity.galgas", 211)) ;
  GALGAS_toOneEntityRelationshipListForGeneration var_toOneEntityRelationshipListForGeneration_8493 ;
  extensionMethod_semanticAnalysis (object->mAttribute_mToOneRelationshipList, constinArgument_inSemanticContext, var_toOneEntityRelationshipListForGeneration_8493, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 213)) ;
  GALGAS_toManyEntityRelationshipListForGeneration var_toManyEntityRelationshipListForGeneration_8692 ;
  extensionMethod_semanticAnalysis (object->mAttribute_mToManyRelationshipList, constinArgument_inSemanticContext, var_toManyEntityRelationshipListForGeneration_8692, inCompiler COMMA_SOURCE_FILE ("entity.galgas", 218)) ;
  ioArgument_ioGeneration.mAttribute_mEntityListForGeneration.addAssign_operation (object->mAttribute_mEntityName.mAttribute_string, object->mAttribute_mSuperEntityName.mAttribute_string, var_simpleStoredPropertyListForGeneration_7677, var_transientDefinitionListForGeneration_7782, var_toOneEntityRelationshipListForGeneration_8493, var_toManyEntityRelationshipListForGeneration_8692, object->mAttribute_mSignatureList  COMMA_SOURCE_FILE ("entity.galgas", 223)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_entityDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_entityDeclaration.mSlotID,
                                         extensionMethod_entityDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_entityDeclaration_semanticAnalysis (defineExtensionMethod_entityDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@documentDeclaration typeInventory'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_documentDeclaration_typeInventory (const cPtr_astDeclaration * inObject,
                                                               GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_documentDeclaration * object = (const cPtr_documentDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_documentDeclaration) ;
  extensionMethod_typeInventory (object->mAttribute_mSimpleStoredAttributeList, ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 72)) ;
  cEnumerator_secondaryPropertyList enumerator_3019 (object->mAttribute_mSecondaryPropertyList, kEnumeration_up) ;
  while (enumerator_3019.hasCurrentObject ()) {
    callExtensionMethod_typeInventory ((const cPtr_abstractSecondaryProperty *) enumerator_3019.current_mSecondaryProperty (HERE).ptr (), ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("document.galgas", 74)) ;
    enumerator_3019.gotoNextObject () ;
  }
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_3156 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, object->mAttribute_mRootEntityName, joker_3156 COMMA_SOURCE_FILE ("document.galgas", 78)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_documentDeclaration_typeInventory (void) {
  enterExtensionMethod_typeInventory (kTypeDescriptor_GALGAS_documentDeclaration.mSlotID,
                                      extensionMethod_documentDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_documentDeclaration_typeInventory (defineExtensionMethod_documentDeclaration_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding extension method '@documentDeclaration buildInitialSecondaryPropertyListMap'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_documentDeclaration_buildInitialSecondaryPropertyListMap (const cPtr_astDeclaration * inObject,
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

static void defineExtensionMethod_documentDeclaration_buildInitialSecondaryPropertyListMap (void) {
  enterExtensionMethod_buildInitialSecondaryPropertyListMap (kTypeDescriptor_GALGAS_documentDeclaration.mSlotID,
                                                             extensionMethod_documentDeclaration_buildInitialSecondaryPropertyListMap) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_documentDeclaration_buildInitialSecondaryPropertyListMap (defineExtensionMethod_documentDeclaration_buildInitialSecondaryPropertyListMap, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@documentDeclaration buildObservablePropertyMapsFromStoredProperties'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_documentDeclaration_buildObservablePropertyMapsFromStoredProperties (const cPtr_astDeclaration * inObject,
                                                                                                 const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                                                 GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_documentDeclaration * object = (const cPtr_documentDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_documentDeclaration) ;
  GALGAS_observablePropertyMap var_observablePropertyMap_4815 = GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("document.galgas", 109)) ;
  extensionMethod_buildObservablePropertyMap (object->mAttribute_mSimpleStoredAttributeList, constinArgument_inUnifiedTypeMap, var_observablePropertyMap_4815, inCompiler COMMA_SOURCE_FILE ("document.galgas", 111)) ;
  {
  ioArgument_ioSemanticContext.mAttribute_mDocumentObservablePropertyMap.setter_insertKey (object->mAttribute_mDocumentName, var_observablePropertyMap_4815, inCompiler COMMA_SOURCE_FILE ("document.galgas", 116)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_documentDeclaration_buildObservablePropertyMapsFromStoredProperties (void) {
  enterExtensionMethod_buildObservablePropertyMapsFromStoredProperties (kTypeDescriptor_GALGAS_documentDeclaration.mSlotID,
                                                                        extensionMethod_documentDeclaration_buildObservablePropertyMapsFromStoredProperties) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_documentDeclaration_buildObservablePropertyMapsFromStoredProperties (defineExtensionMethod_documentDeclaration_buildObservablePropertyMapsFromStoredProperties, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@documentDeclaration solveSecondaryProperty'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_documentDeclaration_solveSecondaryProperty (const cPtr_astDeclaration * inObject,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                                                        const GALGAS_secondaryPropertyList constinArgument_inPropertiesToSolve,
                                                                        GALGAS_secondaryPropertyList & outArgument_outUnsolvedProperties,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_documentDeclaration * object = (const cPtr_documentDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_documentDeclaration) ;
  outArgument_outUnsolvedProperties = GALGAS_secondaryPropertyList::constructor_emptyList (SOURCE_FILE ("document.galgas", 130)) ;
  GALGAS_observablePropertyMap var_observablePropertyMap_5648 ;
  ioArgument_ioSemanticContext.mAttribute_mDocumentObservablePropertyMap.method_searchKey (object->mAttribute_mDocumentName, var_observablePropertyMap_5648, inCompiler COMMA_SOURCE_FILE ("document.galgas", 131)) ;
  GALGAS_observablePropertyMap var_rootObservablePropertyMap_5787 ;
  ioArgument_ioSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (object->mAttribute_mRootEntityName, var_rootObservablePropertyMap_5787, inCompiler COMMA_SOURCE_FILE ("document.galgas", 135)) ;
  cEnumerator_secondaryPropertyList enumerator_5831 (constinArgument_inPropertiesToSolve, kEnumeration_up) ;
  while (enumerator_5831.hasCurrentObject ()) {
    callExtensionMethod_tryToSolveSecondaryProperty ((const cPtr_abstractSecondaryProperty *) enumerator_5831.current_mSecondaryProperty (HERE).ptr (), ioArgument_ioSemanticContext, var_rootObservablePropertyMap_5787, var_observablePropertyMap_5648, outArgument_outUnsolvedProperties, inCompiler COMMA_SOURCE_FILE ("document.galgas", 140)) ;
    enumerator_5831.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mDocumentObservablePropertyMap.setter_setMObservablePropertyMapForKey (var_observablePropertyMap_5648, object->mAttribute_mDocumentName.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("document.galgas", 147)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_documentDeclaration_solveSecondaryProperty (void) {
  enterExtensionMethod_solveSecondaryProperty (kTypeDescriptor_GALGAS_documentDeclaration.mSlotID,
                                               extensionMethod_documentDeclaration_solveSecondaryProperty) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_documentDeclaration_solveSecondaryProperty (defineExtensionMethod_documentDeclaration_solveSecondaryProperty, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@documentDeclaration semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_documentDeclaration_semanticAnalysis (const cPtr_astDeclaration * inObject,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  GALGAS_structForGeneration & ioArgument_ioGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_documentDeclaration * object = (const cPtr_documentDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_documentDeclaration) ;
  GALGAS_observablePropertyMap var_observablePropertyMap_6546 ;
  constinArgument_inSemanticContext.mAttribute_mDocumentObservablePropertyMap.method_searchKey (object->mAttribute_mDocumentName, var_observablePropertyMap_6546, inCompiler COMMA_SOURCE_FILE ("document.galgas", 159)) ;
  GALGAS_observablePropertyMap var_rootObservablePropertyMap_6689 ;
  constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (object->mAttribute_mRootEntityName, var_rootObservablePropertyMap_6689, inCompiler COMMA_SOURCE_FILE ("document.galgas", 163)) ;
  GALGAS_simpleStoredPropertyListForGeneration var_simpleStoredPropertyListForGeneration_7008 ;
  extensionMethod_simpleStoredPropertySemanticAnalysis (object->mAttribute_mSimpleStoredAttributeList, object->mAttribute_mDocumentName.mAttribute_string, constinArgument_inSemanticContext.mAttribute_mUnifiedTypeMap, ioArgument_ioGeneration.mAttribute_mValidationStubRoutineListForGeneration, var_simpleStoredPropertyListForGeneration_7008, inCompiler COMMA_SOURCE_FILE ("document.galgas", 168)) ;
  GALGAS_transientDefinitionListForGeneration var_transientDefinitionListForGeneration_7113 = GALGAS_transientDefinitionListForGeneration::constructor_emptyList (SOURCE_FILE ("document.galgas", 175)) ;
  GALGAS_arrayControllerForGeneration var_documentArrayControllerListForGeneration_7191 = GALGAS_arrayControllerForGeneration::constructor_emptyList (SOURCE_FILE ("document.galgas", 176)) ;
  GALGAS_selectionControllerForGeneration var_selectionControllerListForGeneration_7269 = GALGAS_selectionControllerForGeneration::constructor_emptyList (SOURCE_FILE ("document.galgas", 177)) ;
  GALGAS_customObjectControllerForGeneration var_customObjectControllerListForGeneration_7353 = GALGAS_customObjectControllerForGeneration::constructor_emptyList (SOURCE_FILE ("document.galgas", 178)) ;
  cEnumerator_secondaryPropertyList enumerator_7397 (object->mAttribute_mSecondaryPropertyList, kEnumeration_up) ;
  while (enumerator_7397.hasCurrentObject ()) {
    callExtensionMethod_secondaryPropertySemanticAnalysis ((const cPtr_abstractSecondaryProperty *) enumerator_7397.current_mSecondaryProperty (HERE).ptr (), object->mAttribute_mDocumentName.mAttribute_string, object->mAttribute_mRootEntityName.mAttribute_string, var_rootObservablePropertyMap_6689, constinArgument_inSemanticContext, var_observablePropertyMap_6546, var_transientDefinitionListForGeneration_7113, var_documentArrayControllerListForGeneration_7191, var_selectionControllerListForGeneration_7269, var_customObjectControllerListForGeneration_7353, ioArgument_ioGeneration.mAttribute_mNeededOutletClasses, inCompiler COMMA_SOURCE_FILE ("document.galgas", 180)) ;
    enumerator_7397.gotoNextObject () ;
  }
  ioArgument_ioGeneration.mAttribute_mTransientListForGeneration.plusAssign_operation(var_transientDefinitionListForGeneration_7113, inCompiler  COMMA_SOURCE_FILE ("document.galgas", 193)) ;
  ioArgument_ioGeneration.mAttribute_mAllArrayControllerForGeneration.plusAssign_operation(var_documentArrayControllerListForGeneration_7191, inCompiler  COMMA_SOURCE_FILE ("document.galgas", 194)) ;
  ioArgument_ioGeneration.mAttribute_mSelectionControllerListForGeneration.plusAssign_operation(var_selectionControllerListForGeneration_7269, inCompiler  COMMA_SOURCE_FILE ("document.galgas", 195)) ;
  ioArgument_ioGeneration.mAttribute_mCustomObjectControllerListForGeneration.plusAssign_operation(var_customObjectControllerListForGeneration_7353, inCompiler  COMMA_SOURCE_FILE ("document.galgas", 196)) ;
  GALGAS_actionMap var_actionMap_8287 ;
  {
  routine_buildActionMap (object->mAttribute_mActionDeclarationList, var_actionMap_8287, inCompiler  COMMA_SOURCE_FILE ("document.galgas", 198)) ;
  }
  cEnumerator_actionMap enumerator_8310 (var_actionMap_8287, kEnumeration_up) ;
  while (enumerator_8310.hasCurrentObject ()) {
    ioArgument_ioGeneration.mAttribute_mActionListForGeneration.addAssign_operation (object->mAttribute_mDocumentName.mAttribute_string, enumerator_8310.current_lkey (HERE).mAttribute_string  COMMA_SOURCE_FILE ("document.galgas", 200)) ;
    enumerator_8310.gotoNextObject () ;
  }
  GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList_8703 ;
  GALGAS_multipleBindingGenerationList var_multipleBindingGenerationList_8773 ;
  GALGAS_actionBindingListForGeneration var_actionBindingListForGeneration_8845 ;
  GALGAS_decoratedOutletMap var_outletMap_8884 ;
  GALGAS_tableViewBindingGenerationList var_tableViewBindingGenerationList_8956 ;
  {
  routine_analyzeOutlets (var_rootObservablePropertyMap_6689, constinArgument_inSemanticContext, object->mAttribute_mOutletDeclarationList, var_observablePropertyMap_6546, var_actionMap_8287, object->mAttribute_mDocumentName.mAttribute_string, ioArgument_ioGeneration, var_regularBindingsGenerationList_8703, var_multipleBindingGenerationList_8773, var_actionBindingListForGeneration_8845, var_outletMap_8884, var_tableViewBindingGenerationList_8956, inCompiler  COMMA_SOURCE_FILE ("document.galgas", 205)) ;
  }
  ioArgument_ioGeneration.mAttribute_mDocumentListForGeneration.addAssign_operation (object->mAttribute_mDocumentName.mAttribute_string, object->mAttribute_mRootEntityName.mAttribute_string, var_simpleStoredPropertyListForGeneration_7008, var_transientDefinitionListForGeneration_7113, var_outletMap_8884, var_actionBindingListForGeneration_8845, var_regularBindingsGenerationList_8703, var_multipleBindingGenerationList_8773, var_documentArrayControllerListForGeneration_7191, var_tableViewBindingGenerationList_8956, var_selectionControllerListForGeneration_7269, var_customObjectControllerListForGeneration_7353  COMMA_SOURCE_FILE ("document.galgas", 220)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_documentDeclaration_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_documentDeclaration.mSlotID,
                                         extensionMethod_documentDeclaration_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_documentDeclaration_semanticAnalysis (defineExtensionMethod_documentDeclaration_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                              Overriding extension method '@transientAST typeInventory'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_transientAST_typeInventory (const cPtr_abstractSecondaryProperty * inObject,
                                                        GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                        C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientAST * object = (const cPtr_transientAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientAST) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_2402 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioUnifiedTypeMap, object->mAttribute_mTransientTypeName, joker_2402 COMMA_SOURCE_FILE ("transient-property.galgas", 61)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_transientAST_typeInventory (void) {
  enterExtensionMethod_typeInventory (kTypeDescriptor_GALGAS_transientAST.mSlotID,
                                      extensionMethod_transientAST_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientAST_typeInventory (defineExtensionMethod_transientAST_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@transientAST tryToSolveSecondaryProperty'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_transientAST_tryToSolveSecondaryProperty (const cPtr_abstractSecondaryProperty * inObject,
                                                                      GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                      const GALGAS_observablePropertyMap constinArgument_inRootObservableProperties,
                                                                      GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                                      GALGAS_secondaryPropertyList & ioArgument_ioUnsolvedProperties,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientAST * object = (const cPtr_transientAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientAST) ;
  GALGAS_bool var_solved_3043 = GALGAS_bool (true) ;
  cEnumerator_observablePropertyList enumerator_3078 (object->mAttribute_mDependencyList, kEnumeration_up) ;
  bool bool_0 = var_solved_3043.isValidAndTrue () ;
  if (enumerator_3078.hasCurrentObject () && bool_0) {
    while (enumerator_3078.hasCurrentObject () && bool_0) {
      var_solved_3043 = extensionGetter_isPropertyDefined (enumerator_3078.current_mObservableProperty (HERE), ioArgument_ioSemanticContext, constinArgument_inRootObservableProperties, ioArgument_ioObservableProperties, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 80)) ;
      enumerator_3078.gotoNextObject () ;
      if (enumerator_3078.hasCurrentObject ()) {
        bool_0 = var_solved_3043.isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_solved_3043.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_typeKind var_type_3343 ;
    GALGAS_actionMap var_actionMap_3358 ;
    ioArgument_ioSemanticContext.mAttribute_mUnifiedTypeMap.method_searchKey (object->mAttribute_mTransientTypeName, var_type_3343, var_actionMap_3358, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 87)) ;
    {
    GALGAS_propertyMultiplicity temp_2 ;
    const enumGalgasBool test_3 = object->mAttribute_mIsArray.boolEnum () ;
    if (kBoolTrue == test_3) {
      temp_2 = GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("transient-property.galgas", 92)) ;
    }else if (kBoolFalse == test_3) {
      temp_2 = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("transient-property.galgas", 92)) ;
    }
    ioArgument_ioObservableProperties.setter_insertKey (object->mAttribute_mTransientName, var_type_3343, GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("transient-property.galgas", 91)), temp_2, GALGAS_string::makeEmptyString (), var_actionMap_3358, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 88)) ;
    }
  }else if (kBoolFalse == test_1) {
    const GALGAS_transientAST temp_4 = object ;
    ioArgument_ioUnsolvedProperties.addAssign_operation (temp_4  COMMA_SOURCE_FILE ("transient-property.galgas", 97)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_transientAST_tryToSolveSecondaryProperty (void) {
  enterExtensionMethod_tryToSolveSecondaryProperty (kTypeDescriptor_GALGAS_transientAST.mSlotID,
                                                    extensionMethod_transientAST_tryToSolveSecondaryProperty) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientAST_tryToSolveSecondaryProperty (defineExtensionMethod_transientAST_tryToSolveSecondaryProperty, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@transientAST secondaryPropertySemanticAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_transientAST_secondaryPropertySemanticAnalysis (const cPtr_abstractSecondaryProperty * inObject,
                                                                            const GALGAS_string constinArgument_inOwnerName,
                                                                            const GALGAS_string /* constinArgument_inRootEntityName */,
                                                                            const GALGAS_observablePropertyMap constinArgument_inRootObservableProperties,
                                                                            const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                            const GALGAS_observablePropertyMap constinArgument_inObservableProperties,
                                                                            GALGAS_transientDefinitionListForGeneration & ioArgument_ioTransientDefinitionListForGeneration,
                                                                            GALGAS_arrayControllerForGeneration & /* ioArgument_ioArrayControllerForGeneration */,
                                                                            GALGAS_selectionControllerForGeneration & /* ioArgument_ioSelectionControllerForGeneration */,
                                                                            GALGAS_customObjectControllerForGeneration & /* ioArgument_ioCustomObjectControllerDeclaration */,
                                                                            GALGAS_stringset & /* ioArgument_ioNeededOutletClasses */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_transientAST * object = (const cPtr_transientAST *) inObject ;
  macroValidSharedObject (object, cPtr_transientAST) ;
  GALGAS_typeKind var_type_4450 ;
  GALGAS_actionMap joker_4452 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mUnifiedTypeMap.method_searchKey (object->mAttribute_mTransientTypeName, var_type_4450, joker_4452, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 116)) ;
  GALGAS_typeKindList var_typeList_4495 ;
  switch (var_type_4450.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_boolType:
  case GALGAS_typeKind::kEnum_integerType:
  case GALGAS_typeKind::kEnum_stringType:
  case GALGAS_typeKind::kEnum_dateType:
  case GALGAS_typeKind::kEnum_doubleType:
  case GALGAS_typeKind::kEnum_fontType:
    {
      GALGAS_typeKindList temp_0 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 121)) ;
      temp_0.addAssign_operation (var_type_4450  COMMA_SOURCE_FILE ("transient-property.galgas", 121)) ;
      var_typeList_4495 = temp_0 ;
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      GALGAS_typeKindList temp_1 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 123)) ;
      temp_1.addAssign_operation (var_type_4450  COMMA_SOURCE_FILE ("transient-property.galgas", 123)) ;
      var_typeList_4495 = temp_1 ;
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      inCompiler->emitSemanticError (object->mAttribute_mTransientName.getter_location (SOURCE_FILE ("transient-property.galgas", 125)), GALGAS_string ("an entity cannot be used as simple property type")  COMMA_SOURCE_FILE ("transient-property.galgas", 125)) ;
      var_typeList_4495.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      GALGAS_typeKindList temp_2 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 127)) ;
      temp_2.addAssign_operation (var_type_4450  COMMA_SOURCE_FILE ("transient-property.galgas", 127)) ;
      var_typeList_4495 = temp_2 ;
    }
    break ;
  case GALGAS_typeKind::kEnum_transientPropertyClassType:
    {
      GALGAS_typeKindList temp_3 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 129)) ;
      temp_3.addAssign_operation (var_type_4450  COMMA_SOURCE_FILE ("transient-property.galgas", 129)) ;
      var_typeList_4495 = temp_3 ;
    }
    break ;
  case GALGAS_typeKind::kEnum_propertyClassType:
    {
      GALGAS_typeKindList temp_4 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 131)) ;
      temp_4.addAssign_operation (var_type_4450  COMMA_SOURCE_FILE ("transient-property.galgas", 131)) ;
      var_typeList_4495 = temp_4 ;
    }
    break ;
  }
  GALGAS_transientDependencyListForGeneration var_dependencies_5030 = GALGAS_transientDependencyListForGeneration::constructor_emptyList (SOURCE_FILE ("transient-property.galgas", 134)) ;
  cEnumerator_observablePropertyList enumerator_5063 (object->mAttribute_mDependencyList, kEnumeration_up) ;
  while (enumerator_5063.hasCurrentObject ()) {
    GALGAS_typeKind var_dependencyType_5249 ;
    GALGAS_propertyKind var_dependencyKind_5296 ;
    GALGAS_propertyMultiplicity var_outMultiplicity_5341 ;
    GALGAS_string var_swiftTypeStringForTransientFunctionArgument_5404 ;
    extensionMethod_analyzeObservableProperty (enumerator_5063.current_mObservableProperty (HERE), constinArgument_inRootObservableProperties, constinArgument_inSemanticContext, constinArgument_inObservableProperties, var_dependencyType_5249, var_dependencyKind_5296, var_outMultiplicity_5341, var_swiftTypeStringForTransientFunctionArgument_5404, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 136)) ;
    GALGAS_bool test_5 = GALGAS_bool (kIsEqual, var_outMultiplicity_5341.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("transient-property.galgas", 145)))) ;
    if (kBoolTrue == test_5.boolEnum ()) {
      test_5 = GALGAS_bool (kIsEqual, var_dependencyKind_5296.objectCompare (GALGAS_propertyKind::constructor_stored (SOURCE_FILE ("transient-property.galgas", 145)))) ;
    }
    const enumGalgasBool test_6 = test_5.boolEnum () ;
    if (kBoolTrue == test_6) {
      inCompiler->emitSemanticError (extensionGetter_location (enumerator_5063.current_mObservableProperty (HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 146)), GALGAS_string ("a collection property cannot be observed")  COMMA_SOURCE_FILE ("transient-property.galgas", 146)) ;
    }
    var_dependencies_5030.addAssign_operation (enumerator_5063.current_mObservableProperty (HERE), extensionGetter_modelString (enumerator_5063.current_mObservableProperty (HERE), GALGAS_string ("self"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 150)).getter_nameRepresentation (SOURCE_FILE ("transient-property.galgas", 150)), var_swiftTypeStringForTransientFunctionArgument_5404  COMMA_SOURCE_FILE ("transient-property.galgas", 148)) ;
    enumerator_5063.gotoNextObject () ;
  }
  ioArgument_ioTransientDefinitionListForGeneration.addAssign_operation (constinArgument_inOwnerName, object->mAttribute_mTransientName.mAttribute_string, object->mAttribute_mIsArray, var_type_4450, var_dependencies_5030  COMMA_SOURCE_FILE ("transient-property.galgas", 154)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_transientAST_secondaryPropertySemanticAnalysis (void) {
  enterExtensionMethod_secondaryPropertySemanticAnalysis (kTypeDescriptor_GALGAS_transientAST.mSlotID,
                                                          extensionMethod_transientAST_secondaryPropertySemanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_transientAST_secondaryPropertySemanticAnalysis (defineExtensionMethod_transientAST_secondaryPropertySemanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension method '@literalIntMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
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

static void defineExtensionMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST.mSlotID,
                                                            extensionMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineExtensionMethod_literalIntMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
// Overriding extension method '@observablePropertyInMultipleBindingExpressionAST analyzeExpressionForMultipleBinding' *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
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
  GALGAS_propertyKind var_outKind_10844 ;
  GALGAS_propertyMultiplicity var_outMultiplicity_10891 ;
  GALGAS_string var_swiftTypeStringForTransientFunctionArgument_10959 ;
  extensionMethod_analyzeObservableProperty (object->mAttribute_mProperty, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, outArgument_outType, var_outKind_10844, var_outMultiplicity_10891, var_swiftTypeStringForTransientFunctionArgument_10959, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 242)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_outMultiplicity_10891.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("multiple-binding.galgas", 251)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (extensionGetter_location (object->mAttribute_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 252)), GALGAS_string ("a collection cannot be observed")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 252)) ;
  }
  switch (outArgument_outType.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_stringType:
  case GALGAS_typeKind::kEnum_boolType:
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
  case GALGAS_typeKind::kEnum_transientPropertyClassType:
    {
      inCompiler->emitSemanticError (extensionGetter_location (object->mAttribute_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 262)), GALGAS_string ("a class cannot be observed")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 262)) ;
    }
    break ;
  case GALGAS_typeKind::kEnum_propertyClassType:
    {
    }
    break ;
  }
  outArgument_outEnableExpression = GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::constructor_new (extensionGetter_modelString (object->mAttribute_mProperty, GALGAS_string ("self"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 266))  COMMA_SOURCE_FILE ("multiple-binding.galgas", 265)) ;
  outArgument_outErrorLocation = extensionGetter_location (object->mAttribute_mProperty, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 268)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST.mSlotID,
                                                            extensionMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineExtensionMethod_observablePropertyInMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding extension method '@negateBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
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
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_expression_12428 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_expression_12428, outArgument_outType, outArgument_outErrorLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 281)) ;
  const enumGalgasBool test_0 = outArgument_outType.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 289)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 289)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (outArgument_outErrorLocation, GALGAS_string ("cannot apply negation: operand is not boolean")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 290)) ;
  }
  outArgument_outEnableExpression = GALGAS_negateBooleanMultipleBindingExpressionForGeneration::constructor_new (var_expression_12428  COMMA_SOURCE_FILE ("multiple-binding.galgas", 292)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST.mSlotID,
                                                            extensionMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineExtensionMethod_negateBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension method '@orBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
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
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_13411 ;
  GALGAS_typeKind var_outLeftType_13432 ;
  GALGAS_location var_outLeftLocation_13457 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_13411, var_outLeftType_13432, var_outLeftLocation_13457, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 305)) ;
  const enumGalgasBool test_0 = var_outLeftType_13432.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 313)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 313)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (var_outLeftLocation_13457, GALGAS_string ("cannot apply 'or': left operand is not boolean")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 314)) ;
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_13808 ;
  GALGAS_typeKind var_outRightType_13830 ;
  GALGAS_location var_outRightLocation_13856 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_13808, var_outRightType_13830, var_outRightLocation_13856, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 316)) ;
  const enumGalgasBool test_1 = var_outRightType_13830.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 324)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 324)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (var_outRightLocation_13856, GALGAS_string ("cannot apply 'or': right operand is not boolean")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 325)) ;
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 327)) ;
  outArgument_outErrorLocation = var_outRightLocation_13856 ;
  outArgument_outEnableExpression = GALGAS_orBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_13411, var_rightExpression_13808  COMMA_SOURCE_FILE ("multiple-binding.galgas", 329)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST.mSlotID,
                                                            extensionMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineExtensionMethod_orBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension method '@xorBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                        const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                        const GALGAS_observablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                        GALGAS_typeKind & outArgument_outType,
                                                                                                        GALGAS_location & outArgument_outErrorLocation,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorBooleanMultipleBindingExpressionAST * object = (const cPtr_xorBooleanMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_xorBooleanMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_14890 ;
  GALGAS_typeKind var_outLeftType_14911 ;
  GALGAS_location var_outLeftLocation_14936 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_14890, var_outLeftType_14911, var_outLeftLocation_14936, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 342)) ;
  const enumGalgasBool test_0 = var_outLeftType_14911.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 350)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 350)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (var_outLeftLocation_14936, GALGAS_string ("cannot apply 'or': left operand is not boolean")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 351)) ;
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_15287 ;
  GALGAS_typeKind var_outRightType_15309 ;
  GALGAS_location var_outRightLocation_15335 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_15287, var_outRightType_15309, var_outRightLocation_15335, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 353)) ;
  const enumGalgasBool test_1 = var_outRightType_15309.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 361)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 361)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (var_outRightLocation_15335, GALGAS_string ("cannot apply 'or': right operand is not boolean")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 362)) ;
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 364)) ;
  outArgument_outErrorLocation = var_outRightLocation_15335 ;
  outArgument_outEnableExpression = GALGAS_xorBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_14890, var_rightExpression_15287  COMMA_SOURCE_FILE ("multiple-binding.galgas", 366)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST.mSlotID,
                                                            extensionMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineExtensionMethod_xorBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension method '@andBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                        const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                        const GALGAS_observablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                        GALGAS_typeKind & outArgument_outType,
                                                                                                        GALGAS_location & outArgument_outErrorLocation,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andBooleanMultipleBindingExpressionAST * object = (const cPtr_andBooleanMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andBooleanMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_16370 ;
  GALGAS_typeKind var_outLeftType_16391 ;
  GALGAS_location var_outLeftLocation_16416 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_16370, var_outLeftType_16391, var_outLeftLocation_16416, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 379)) ;
  const enumGalgasBool test_0 = var_outLeftType_16391.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 387)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 387)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (var_outLeftLocation_16416, GALGAS_string ("cannot apply 'and': left operand is not boolean")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 388)) ;
  }
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_16768 ;
  GALGAS_typeKind var_outRightType_16790 ;
  GALGAS_location var_outRightLocation_16816 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_16768, var_outRightType_16790, var_outRightLocation_16816, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 390)) ;
  const enumGalgasBool test_1 = var_outRightType_16790.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 398)).operator_not (SOURCE_FILE ("multiple-binding.galgas", 398)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (var_outRightLocation_16816, GALGAS_string ("cannot apply 'and': right operand is not boolean")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 399)) ;
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 401)) ;
  outArgument_outErrorLocation = var_outRightLocation_16816 ;
  outArgument_outEnableExpression = GALGAS_andBooleanMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_16370, var_rightExpression_16768  COMMA_SOURCE_FILE ("multiple-binding.galgas", 403)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST.mSlotID,
                                                            extensionMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineExtensionMethod_andBooleanMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding extension method '@comparisonMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (const cPtr_abstractBooleanMultipleBindingExpressionAST * inObject,
                                                                                                        const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                        const GALGAS_observablePropertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                        GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                        GALGAS_typeKind & outArgument_outType,
                                                                                                        GALGAS_location & outArgument_outErrorLocation,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_comparisonMultipleBindingExpressionAST * object = (const cPtr_comparisonMultipleBindingExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonMultipleBindingExpressionAST) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_17852 ;
  GALGAS_typeKind var_outLeftType_17873 ;
  GALGAS_location var_outLeftLocation_17898 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mLeftBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_leftExpression_17852, var_outLeftType_17873, var_outLeftLocation_17898, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 416)) ;
  GALGAS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_18127 ;
  GALGAS_typeKind var_outRightType_18149 ;
  GALGAS_location var_outRightLocation_18175 ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((const cPtr_abstractBooleanMultipleBindingExpressionAST *) object->mAttribute_mRightBinding.ptr (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, var_rightExpression_18127, var_outRightType_18149, var_outRightLocation_18175, inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 424)) ;
  GALGAS_bool test_0 = var_outLeftType_17873.getter_isBoolType (SOURCE_FILE ("multiple-binding.galgas", 432)) ;
  if (kBoolTrue != test_0.boolEnum ()) {
    test_0 = var_outLeftType_17873.getter_isIntegerType (SOURCE_FILE ("multiple-binding.galgas", 432)) ;
  }
  const enumGalgasBool test_1 = test_0.operator_not (SOURCE_FILE ("multiple-binding.galgas", 432)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (var_outLeftLocation_17898, GALGAS_string ("cannot compare: left operand is neither boolean nor integer")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 433)) ;
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_outRightType_18149.objectCompare (var_outLeftType_17873)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (var_outRightLocation_18175, GALGAS_string ("cannot compare: right operand type is different than left operand type")  COMMA_SOURCE_FILE ("multiple-binding.galgas", 436)) ;
  }
  outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("multiple-binding.galgas", 438)) ;
  outArgument_outErrorLocation = var_outRightLocation_18175 ;
  outArgument_outEnableExpression = GALGAS_comparisonMultipleBindingExpressionForGeneration::constructor_new (var_leftExpression_17852, object->mAttribute_mOperator, var_rightExpression_18127  COMMA_SOURCE_FILE ("multiple-binding.galgas", 440)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (void) {
  enterExtensionMethod_analyzeExpressionForMultipleBinding (kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST.mSlotID,
                                                            extensionMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding (defineExtensionMethod_comparisonMultipleBindingExpressionAST_analyzeExpressionForMultipleBinding, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension getter '@booleanMultipleBindingLiteralIntForGeneration observedModelSet'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset extensionGetter_booleanMultipleBindingLiteralIntForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * /* inObject */,
                                                                                                        C_Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  result_outObservedModelSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 457)) ;
//---
  return result_outObservedModelSet ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_booleanMultipleBindingLiteralIntForGeneration_observedModelSet (void) {
  enterExtensionGetter_observedModelSet (kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration.mSlotID,
                                         extensionGetter_booleanMultipleBindingLiteralIntForGeneration_observedModelSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_booleanMultipleBindingLiteralIntForGeneration_observedModelSet (defineExtensionGetter_booleanMultipleBindingLiteralIntForGeneration_observedModelSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding extension getter '@observablePropertyAsBooleanMultipleBindingExpressionForGeneration observedModelSet'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset extensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                            C_Compiler * /* inCompiler */
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 465)) ;
  temp_0.addAssign_operation (object->mAttribute_mObservedModel  COMMA_SOURCE_FILE ("multiple-binding.galgas", 465)) ;
  result_outObservedModelSet = temp_0 ;
//---
  return result_outObservedModelSet ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterExtensionGetter_observedModelSet (kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelSet (defineExtensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension getter '@negateBooleanMultipleBindingExpressionForGeneration observedModelSet'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset extensionGetter_negateBooleanMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_negateBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
  result_outObservedModelSet = callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 473)) ;
//---
  return result_outObservedModelSet ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_negateBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterExtensionGetter_observedModelSet (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_negateBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_negateBooleanMultipleBindingExpressionForGeneration_observedModelSet (defineExtensionGetter_negateBooleanMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension getter '@orBooleanMultipleBindingExpressionForGeneration observedModelSet'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset extensionGetter_orBooleanMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_orBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 481)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 481)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 481)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 481)) ;
  result_outObservedModelSet = temp_0 ;
//---
  return result_outObservedModelSet ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_orBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterExtensionGetter_observedModelSet (kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_orBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_orBooleanMultipleBindingExpressionForGeneration_observedModelSet (defineExtensionGetter_orBooleanMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@xorBooleanMultipleBindingExpressionForGeneration observedModelSet'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset extensionGetter_xorBooleanMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_xorBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_xorBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 489)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 489)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 489)) ;
  result_outObservedModelSet = temp_0 ;
//---
  return result_outObservedModelSet ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_xorBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterExtensionGetter_observedModelSet (kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_xorBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_xorBooleanMultipleBindingExpressionForGeneration_observedModelSet (defineExtensionGetter_xorBooleanMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@andBooleanMultipleBindingExpressionForGeneration observedModelSet'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset extensionGetter_andBooleanMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_andBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 497)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 497)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 497)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 497)) ;
  result_outObservedModelSet = temp_0 ;
//---
  return result_outObservedModelSet ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_andBooleanMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterExtensionGetter_observedModelSet (kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_andBooleanMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_andBooleanMultipleBindingExpressionForGeneration_observedModelSet (defineExtensionGetter_andBooleanMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@comparisonMultipleBindingExpressionForGeneration observedModelSet'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset extensionGetter_comparisonMultipleBindingExpressionForGeneration_observedModelSet (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outObservedModelSet ; // Returned variable
  const cPtr_comparisonMultipleBindingExpressionForGeneration * object = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("multiple-binding.galgas", 505)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 505)) ;
  temp_0.plusAssign_operation (callExtensionGetter_observedModelSet ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 505)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 505)) ;
  result_outObservedModelSet = temp_0 ;
//---
  return result_outObservedModelSet ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_comparisonMultipleBindingExpressionForGeneration_observedModelSet (void) {
  enterExtensionGetter_observedModelSet (kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_comparisonMultipleBindingExpressionForGeneration_observedModelSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_comparisonMultipleBindingExpressionForGeneration_observedModelSet (defineExtensionGetter_comparisonMultipleBindingExpressionForGeneration_observedModelSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension getter '@booleanMultipleBindingLiteralIntForGeneration expressionString'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_booleanMultipleBindingLiteralIntForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_booleanMultipleBindingLiteralIntForGeneration * object = (const cPtr_booleanMultipleBindingLiteralIntForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
  result_outExpressionString = GALGAS_string ("EBProperty.singleSelection (").add_operation (object->mAttribute_mValue.getter_string (SOURCE_FILE ("multiple-binding.galgas", 517)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 517)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 517)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_booleanMultipleBindingLiteralIntForGeneration_expressionString (void) {
  enterExtensionGetter_expressionString (kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration.mSlotID,
                                         extensionGetter_booleanMultipleBindingLiteralIntForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_booleanMultipleBindingLiteralIntForGeneration_expressionString (defineExtensionGetter_booleanMultipleBindingLiteralIntForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Overriding extension getter '@observablePropertyAsBooleanMultipleBindingExpressionForGeneration expressionString'  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = object->mAttribute_mObservedModel.add_operation (GALGAS_string (".prop"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 524)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterExtensionGetter_expressionString (kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString (defineExtensionGetter_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension getter '@negateBooleanMultipleBindingExpressionForGeneration expressionString'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_negateBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_negateBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_negateBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_negateBooleanMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("!").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 531)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 531)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_negateBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterExtensionGetter_expressionString (kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_negateBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_negateBooleanMultipleBindingExpressionForGeneration_expressionString (defineExtensionGetter_negateBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension getter '@orBooleanMultipleBindingExpressionForGeneration expressionString'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_orBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_orBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_orBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orBooleanMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("(").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 538)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 538)).add_operation (GALGAS_string (" || "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 538)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 538)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 538)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 538)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_orBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterExtensionGetter_expressionString (kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_orBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_orBooleanMultipleBindingExpressionForGeneration_expressionString (defineExtensionGetter_orBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@xorBooleanMultipleBindingExpressionForGeneration expressionString'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_xorBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_xorBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_xorBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_xorBooleanMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("(").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 545)).add_operation (GALGAS_string (" ^ "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 545)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 545)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 545)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_xorBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterExtensionGetter_expressionString (kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_xorBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_xorBooleanMultipleBindingExpressionForGeneration_expressionString (defineExtensionGetter_xorBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@andBooleanMultipleBindingExpressionForGeneration expressionString'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_andBooleanMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_andBooleanMultipleBindingExpressionForGeneration * object = (const cPtr_andBooleanMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andBooleanMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("(").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 552)).add_operation (GALGAS_string (" && "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 552)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 552)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 552)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 552)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_andBooleanMultipleBindingExpressionForGeneration_expressionString (void) {
  enterExtensionGetter_expressionString (kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_andBooleanMultipleBindingExpressionForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_andBooleanMultipleBindingExpressionForGeneration_expressionString (defineExtensionGetter_andBooleanMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding extension getter '@comparisonMultipleBindingExpressionForGeneration expressionString'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_comparisonMultipleBindingExpressionForGeneration_expressionString (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outExpressionString ; // Returned variable
  const cPtr_comparisonMultipleBindingExpressionForGeneration * object = (const cPtr_comparisonMultipleBindingExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_comparisonMultipleBindingExpressionForGeneration) ;
  result_outExpressionString = GALGAS_string ("(").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mLeftBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 559)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 559)) ;
  switch (object->mAttribute_mOperator.enumValue ()) {
  case GALGAS_multipleBindingComparisonAST::kNotBuilt:
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_equal:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string ("=="), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 561)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_notEqual:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string ("!="), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 562)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_lower:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string ("<"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 563)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_lowerOrEqual:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string ("<="), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 564)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_greater:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string (">"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 565)) ;
    }
    break ;
  case GALGAS_multipleBindingComparisonAST::kEnum_greaterOrEqual:
    {
      result_outExpressionString.plusAssign_operation(GALGAS_string (">="), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 566)) ;
    }
    break ;
  }
  result_outExpressionString.plusAssign_operation(GALGAS_string (" ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) object->mAttribute_mRightBinding.ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 568)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 568)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.galgas", 568)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.galgas", 568)) ;
//---
  return result_outExpressionString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_comparisonMultipleBindingExpressionForGeneration_expressionString (void) {
  enterExtensionGetter_expressionString (kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration.mSlotID,
                                         extensionGetter_comparisonMultipleBindingExpressionForGeneration_expressionString) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_comparisonMultipleBindingExpressionForGeneration_expressionString (defineExtensionGetter_comparisonMultipleBindingExpressionForGeneration_expressionString, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@arrayControllerDeclaration typeInventory'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_arrayControllerDeclaration_typeInventory (const cPtr_abstractSecondaryProperty * /* inObject */,
                                                                      GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_arrayControllerDeclaration_typeInventory (void) {
  enterExtensionMethod_typeInventory (kTypeDescriptor_GALGAS_arrayControllerDeclaration.mSlotID,
                                      extensionMethod_arrayControllerDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayControllerDeclaration_typeInventory (defineExtensionMethod_arrayControllerDeclaration_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@arrayControllerDeclaration tryToSolveSecondaryProperty'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_arrayControllerDeclaration_tryToSolveSecondaryProperty (const cPtr_abstractSecondaryProperty * inObject,
                                                                                    GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                    const GALGAS_observablePropertyMap constinArgument_inRootObservableProperties,
                                                                                    GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                                                    GALGAS_secondaryPropertyList & ioArgument_ioUnsolvedProperties,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayControllerDeclaration * object = (const cPtr_arrayControllerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerDeclaration) ;
  GALGAS_bool var_solved_7556 ;
  switch (object->mAttribute_mArrayControllerModel.enumValue ()) {
  case GALGAS_arrayControllerModel::kNotBuilt:
    break ;
  case GALGAS_arrayControllerModel::kEnum_selfCollection:
    {
      const cEnumAssociatedValues_arrayControllerModel_selfCollection * extractPtr_8263 = (const cEnumAssociatedValues_arrayControllerModel_selfCollection *) (object->mAttribute_mArrayControllerModel.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_storedPropertyName = extractPtr_8263->mAssociatedValue0 ;
      var_solved_7556 = ioArgument_ioObservableProperties.getter_hasKey (extractedValue_storedPropertyName.mAttribute_string COMMA_SOURCE_FILE ("array-controller.galgas", 211)) ;
      const enumGalgasBool test_0 = var_solved_7556.boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_typeKind var_type_7818 ;
        GALGAS_propertyKind var_kind_7836 ;
        GALGAS_propertyMultiplicity var_multiplicity_7862 ;
        GALGAS_string joker_7872_2 ; // Joker input parameter
        GALGAS_actionMap joker_7872_1 ; // Joker input parameter
        ioArgument_ioObservableProperties.method_searchKey (extractedValue_storedPropertyName, var_type_7818, var_kind_7836, var_multiplicity_7862, joker_7872_2, joker_7872_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 213)) ;
        GALGAS_actionMap var_controllerActions_7917 = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("array-controller.galgas", 220)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_kind_7836.objectCompare (GALGAS_propertyKind::constructor_stored (SOURCE_FILE ("array-controller.galgas", 221)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          var_controllerActions_7917.setter_insertKey (GALGAS_string ("add").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 222)) ;
          }
          {
          var_controllerActions_7917.setter_insertKey (GALGAS_string ("remove").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 223)) ;
          }
        }
        {
        ioArgument_ioObservableProperties.setter_insertKey (object->mAttribute_mControllerName, var_type_7818, GALGAS_propertyKind::constructor_arrayController (SOURCE_FILE ("array-controller.galgas", 228)), var_multiplicity_7862, GALGAS_string::makeEmptyString (), var_controllerActions_7917, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 225)) ;
        }
      }
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_rootToManyRelationship:
    {
      const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship * extractPtr_8949 = (const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship *) (object->mAttribute_mArrayControllerModel.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_8949->mAssociatedValue0 ;
      var_solved_7556 = constinArgument_inRootObservableProperties.getter_hasKey (extractedValue_relationshipName.mAttribute_string COMMA_SOURCE_FILE ("array-controller.galgas", 235)) ;
      const enumGalgasBool test_2 = var_solved_7556.boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_typeKind var_type_8504 ;
        GALGAS_propertyKind var_kind_8522 ;
        GALGAS_propertyMultiplicity var_multiplicity_8548 ;
        GALGAS_string joker_8558_2 ; // Joker input parameter
        GALGAS_actionMap joker_8558_1 ; // Joker input parameter
        constinArgument_inRootObservableProperties.method_searchKey (extractedValue_relationshipName, var_type_8504, var_kind_8522, var_multiplicity_8548, joker_8558_2, joker_8558_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 237)) ;
        GALGAS_actionMap var_controllerActions_8603 = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("array-controller.galgas", 244)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_kind_8522.objectCompare (GALGAS_propertyKind::constructor_stored (SOURCE_FILE ("array-controller.galgas", 245)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          var_controllerActions_8603.setter_insertKey (GALGAS_string ("add").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 246)) ;
          }
          {
          var_controllerActions_8603.setter_insertKey (GALGAS_string ("remove").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 247)) ;
          }
        }
        {
        ioArgument_ioObservableProperties.setter_insertKey (object->mAttribute_mControllerName, var_type_8504, GALGAS_propertyKind::constructor_arrayController (SOURCE_FILE ("array-controller.galgas", 252)), var_multiplicity_8548, GALGAS_string::makeEmptyString (), var_controllerActions_8603, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 249)) ;
        }
      }
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_controllerArray:
    {
      const cEnumAssociatedValues_arrayControllerModel_controllerArray * extractPtr_9643 = (const cEnumAssociatedValues_arrayControllerModel_controllerArray *) (object->mAttribute_mArrayControllerModel.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_9643->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9643->mAssociatedValue1 ;
      var_solved_7556 = ioArgument_ioObservableProperties.getter_hasKey (extractedValue_controllerName.mAttribute_string COMMA_SOURCE_FILE ("array-controller.galgas", 259)) ;
      const enumGalgasBool test_4 = var_solved_7556.boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_typeKind var_type_9198 ;
        GALGAS_propertyKind var_kind_9216 ;
        GALGAS_propertyMultiplicity var_multiplicity_9242 ;
        GALGAS_string joker_9252_2 ; // Joker input parameter
        GALGAS_actionMap joker_9252_1 ; // Joker input parameter
        ioArgument_ioObservableProperties.method_searchKey (extractedValue_controllerName, var_type_9198, var_kind_9216, var_multiplicity_9242, joker_9252_2, joker_9252_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 261)) ;
        GALGAS_actionMap var_controllerActions_9297 = GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("array-controller.galgas", 268)) ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_kind_9216.objectCompare (GALGAS_propertyKind::constructor_stored (SOURCE_FILE ("array-controller.galgas", 269)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          {
          var_controllerActions_9297.setter_insertKey (GALGAS_string ("add").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 270)) ;
          }
          {
          var_controllerActions_9297.setter_insertKey (GALGAS_string ("remove").getter_nowhere (SOURCE_FILE ("array-controller.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 271)) ;
          }
        }
        {
        ioArgument_ioObservableProperties.setter_insertKey (object->mAttribute_mControllerName, var_type_9198, GALGAS_propertyKind::constructor_arrayController (SOURCE_FILE ("array-controller.galgas", 276)), var_multiplicity_9242, GALGAS_string::makeEmptyString (), var_controllerActions_9297, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 273)) ;
        }
      }
    }
    break ;
  }
  const enumGalgasBool test_6 = var_solved_7556.operator_not (SOURCE_FILE ("array-controller.galgas", 283)).boolEnum () ;
  if (kBoolTrue == test_6) {
    const GALGAS_arrayControllerDeclaration temp_7 = object ;
    ioArgument_ioUnsolvedProperties.addAssign_operation (temp_7  COMMA_SOURCE_FILE ("array-controller.galgas", 284)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_arrayControllerDeclaration_tryToSolveSecondaryProperty (void) {
  enterExtensionMethod_tryToSolveSecondaryProperty (kTypeDescriptor_GALGAS_arrayControllerDeclaration.mSlotID,
                                                    extensionMethod_arrayControllerDeclaration_tryToSolveSecondaryProperty) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayControllerDeclaration_tryToSolveSecondaryProperty (defineExtensionMethod_arrayControllerDeclaration_tryToSolveSecondaryProperty, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding extension method '@arrayControllerDeclaration secondaryPropertySemanticAnalysis'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_arrayControllerDeclaration_secondaryPropertySemanticAnalysis (const cPtr_abstractSecondaryProperty * inObject,
                                                                                          const GALGAS_string constinArgument_inOwnerName,
                                                                                          const GALGAS_string constinArgument_inRootEntityName,
                                                                                          const GALGAS_observablePropertyMap constinArgument_inRootObservableProperties,
                                                                                          const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                          const GALGAS_observablePropertyMap constinArgument_inObservableProperties,
                                                                                          GALGAS_transientDefinitionListForGeneration & /* ioArgument_ioTransientDefinitionListForGeneration */,
                                                                                          GALGAS_arrayControllerForGeneration & ioArgument_ioArrayControllerForGeneration,
                                                                                          GALGAS_selectionControllerForGeneration & /* ioArgument_ioSelectionControllerForGeneration */,
                                                                                          GALGAS_customObjectControllerForGeneration & /* ioArgument_ioCustomObjectControllerDeclaration */,
                                                                                          GALGAS_stringset & ioArgument_ioNeededOutletClasses,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayControllerDeclaration * object = (const cPtr_arrayControllerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayControllerDeclaration) ;
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("array-controller.galgas", 303)) ;
  temp_0.addAssign_operation (GALGAS_string ("allowsEmptySelection")  COMMA_SOURCE_FILE ("array-controller.galgas", 303)) ;
  temp_0.addAssign_operation (GALGAS_string ("allowsMultipleSelection")  COMMA_SOURCE_FILE ("array-controller.galgas", 303)) ;
  GALGAS_stringset var_attributes_10593 = temp_0 ;
  GALGAS_typeKindList temp_1 = GALGAS_typeKindList::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 304)) ;
  temp_1.addAssign_operation (GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("array-controller.galgas", 304))  COMMA_SOURCE_FILE ("array-controller.galgas", 304)) ;
  GALGAS_typeKindList var_allowedTypes_10679 = temp_1 ;
  GALGAS_stringset var_definedAttributes_10739 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("array-controller.galgas", 305)) ;
  GALGAS__32_stringlist var_attributeListForGeneration_10786 = GALGAS__32_stringlist::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 306)) ;
  cEnumerator_arrayControllerAttributListAST enumerator_10845 (object->mAttribute_mArrayControllerAttributListAST, kEnumeration_up) ;
  while (enumerator_10845.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_attributes_10593.getter_hasKey (enumerator_10845.current_mAttributeName (HERE).mAttribute_string COMMA_SOURCE_FILE ("array-controller.galgas", 308)).operator_not (SOURCE_FILE ("array-controller.galgas", 308)).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (enumerator_10845.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("array-controller.galgas", 309)), GALGAS_string ("unknown attribute")  COMMA_SOURCE_FILE ("array-controller.galgas", 309)) ;
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_3 = var_definedAttributes_10739.getter_hasKey (enumerator_10845.current_mAttributeName (HERE).mAttribute_string COMMA_SOURCE_FILE ("array-controller.galgas", 310)).boolEnum () ;
      if (kBoolTrue == test_3) {
        inCompiler->emitSemanticError (enumerator_10845.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("array-controller.galgas", 311)), GALGAS_string ("attribute multiply defined")  COMMA_SOURCE_FILE ("array-controller.galgas", 311)) ;
      }else if (kBoolFalse == test_3) {
        var_definedAttributes_10739.addAssign_operation (enumerator_10845.current_mAttributeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("array-controller.galgas", 313)) ;
      }
    }
    GALGAS_string var_valueAsString_11164 ;
    callExtensionMethod_analyzeDefaultValueType ((const cPtr_abstractDefaultValue *) enumerator_10845.current_mAttributeValue (HERE).ptr (), var_allowedTypes_10679, var_valueAsString_11164, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 315)) ;
    var_attributeListForGeneration_10786.addAssign_operation (enumerator_10845.current_mAttributeName (HERE).mAttribute_string, var_valueAsString_11164  COMMA_SOURCE_FILE ("array-controller.galgas", 316)) ;
    enumerator_10845.gotoNextObject () ;
  }
  cEnumerator_stringset enumerator_11255 (var_attributes_10593, kEnumeration_up) ;
  while (enumerator_11255.hasCurrentObject ()) {
    const enumGalgasBool test_4 = var_definedAttributes_10739.getter_hasKey (enumerator_11255.current (HERE) COMMA_SOURCE_FILE ("array-controller.galgas", 319)).operator_not (SOURCE_FILE ("array-controller.galgas", 319)).boolEnum () ;
    if (kBoolTrue == test_4) {
      inCompiler->emitSemanticError (object->mAttribute_mControllerName.getter_location (SOURCE_FILE ("array-controller.galgas", 320)), GALGAS_string ("attribute '").add_operation (enumerator_11255.current (HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 320)).add_operation (GALGAS_string ("' not defined"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 320))  COMMA_SOURCE_FILE ("array-controller.galgas", 320)) ;
    }
    enumerator_11255.gotoNextObject () ;
  }
  GALGAS_typeKind var_modelType_11414 ;
  GALGAS_propertyKind var_kind_11435 ;
  GALGAS_location var_errorLocation_11461 ;
  GALGAS_arrayControllerModelKind var_modelKind_11499 ;
  GALGAS_string var_entityName_11520 ;
  GALGAS_actionMap var_actionMap_11543 ;
  switch (object->mAttribute_mArrayControllerModel.enumValue ()) {
  case GALGAS_arrayControllerModel::kNotBuilt:
    break ;
  case GALGAS_arrayControllerModel::kEnum_selfCollection:
    {
      const cEnumAssociatedValues_arrayControllerModel_selfCollection * extractPtr_12986 = (const cEnumAssociatedValues_arrayControllerModel_selfCollection *) (object->mAttribute_mArrayControllerModel.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_storedPropertyName = extractPtr_12986->mAssociatedValue0 ;
      var_errorLocation_11461 = extractedValue_storedPropertyName.mAttribute_location ;
      GALGAS_propertyMultiplicity var_multiplicity_11815 ;
      GALGAS_string joker_11823 ; // Joker input parameter
      constinArgument_inObservableProperties.method_searchKey (extractedValue_storedPropertyName, var_modelType_11414, var_kind_11435, var_multiplicity_11815, joker_11823, var_actionMap_11543, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 333)) ;
      GALGAS_arrayControllerModelKind temp_5 ;
      const enumGalgasBool test_6 = var_kind_11435.getter_isStored (SOURCE_FILE ("array-controller.galgas", 341)).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GALGAS_arrayControllerModelKind::constructor_storedArrayModel (SOURCE_FILE ("array-controller.galgas", 341)) ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GALGAS_arrayControllerModelKind::constructor_transientModel (SOURCE_FILE ("array-controller.galgas", 341)) ;
      }
      var_modelKind_11499 = temp_5 ;
      const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, var_multiplicity_11815.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("array-controller.galgas", 343)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        inCompiler->emitSemanticError (var_errorLocation_11461, GALGAS_string ("the bound property should be a collection")  COMMA_SOURCE_FILE ("array-controller.galgas", 344)) ;
      }
      switch (var_modelType_11414.enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_fontType:
        {
          inCompiler->emitSemanticError (var_errorLocation_11461, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 349)) ;
          var_entityName_11520.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          inCompiler->emitSemanticError (var_errorLocation_11461, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 351)) ;
          var_entityName_11520.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_propertyClassType:
        {
          inCompiler->emitSemanticError (var_errorLocation_11461, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 353)) ;
          var_entityName_11520.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_transientPropertyClassType:
        {
          inCompiler->emitSemanticError (var_errorLocation_11461, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 355)) ;
          var_entityName_11520.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
          const cEnumAssociatedValues_typeKind_classType * extractPtr_12868 = (const cEnumAssociatedValues_typeKind_classType *) (var_modelType_11414.unsafePointer ()) ;
          const GALGAS_string extractedValue_kClassTypeName = extractPtr_12868->mAssociatedValue0 ;
          var_entityName_11520 = extractedValue_kClassTypeName ;
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
          inCompiler->emitSemanticError (var_errorLocation_11461, GALGAS_string ("the model should be a stored class array")  COMMA_SOURCE_FILE ("array-controller.galgas", 359)) ;
          var_entityName_11520.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_rootToManyRelationship:
    {
      const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship * extractPtr_14351 = (const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship *) (object->mAttribute_mArrayControllerModel.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_14351->mAssociatedValue0 ;
      var_errorLocation_11461 = extractedValue_relationshipName.mAttribute_location ;
      var_modelKind_11499 = GALGAS_arrayControllerModelKind::constructor_relationshipModel (SOURCE_FILE ("array-controller.galgas", 363)) ;
      GALGAS_propertyMultiplicity var_multiplicity_13268 ;
      GALGAS_string joker_13276 ; // Joker input parameter
      constinArgument_inRootObservableProperties.method_searchKey (extractedValue_relationshipName, var_modelType_11414, var_kind_11435, var_multiplicity_13268, joker_13276, var_actionMap_11543, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 364)) ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, var_multiplicity_13268.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("array-controller.galgas", 373)))).boolEnum () ;
      if (kBoolTrue == test_8) {
        inCompiler->emitSemanticError (var_errorLocation_11461, GALGAS_string ("the bound property should be a collection")  COMMA_SOURCE_FILE ("array-controller.galgas", 374)) ;
      }
      switch (var_modelType_11414.enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_fontType:
        {
          inCompiler->emitSemanticError (var_errorLocation_11461, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 379)) ;
          var_entityName_11520.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          inCompiler->emitSemanticError (var_errorLocation_11461, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 381)) ;
          var_entityName_11520.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
          inCompiler->emitSemanticError (var_errorLocation_11461, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 383)) ;
          var_entityName_11520.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_propertyClassType:
        {
          inCompiler->emitSemanticError (var_errorLocation_11461, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 385)) ;
          var_entityName_11520.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_transientPropertyClassType:
        {
          inCompiler->emitSemanticError (var_errorLocation_11461, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 387)) ;
          var_entityName_11520.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
          const cEnumAssociatedValues_typeKind_entityType * extractPtr_14343 = (const cEnumAssociatedValues_typeKind_entityType *) (var_modelType_11414.unsafePointer ()) ;
          const GALGAS_string extractedValue_kEntityName = extractPtr_14343->mAssociatedValue0 ;
          var_entityName_11520 = extractedValue_kEntityName ;
        }
        break ;
      }
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_controllerArray:
    {
      const cEnumAssociatedValues_arrayControllerModel_controllerArray * extractPtr_15637 = (const cEnumAssociatedValues_arrayControllerModel_controllerArray *) (object->mAttribute_mArrayControllerModel.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_15637->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_15637->mAssociatedValue1 ;
      var_errorLocation_11461 = extractedValue_propertyName.mAttribute_location ;
      var_modelKind_11499 = GALGAS_arrayControllerModelKind::constructor_transientModel (SOURCE_FILE ("array-controller.galgas", 393)) ;
      GALGAS_propertyMultiplicity joker_14595_2 ; // Joker input parameter
      GALGAS_string joker_14595_1 ; // Joker input parameter
      constinArgument_inObservableProperties.method_searchKey (extractedValue_controllerName, var_modelType_11414, var_kind_11435, joker_14595_2, joker_14595_1, var_actionMap_11543, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 394)) ;
      GALGAS_bool test_9 = GALGAS_bool (kIsNotEqual, extractedValue_propertyName.mAttribute_string.objectCompare (GALGAS_string ("sortedArray"))) ;
      if (kBoolTrue == test_9.boolEnum ()) {
        test_9 = GALGAS_bool (kIsNotEqual, extractedValue_propertyName.mAttribute_string.objectCompare (GALGAS_string ("selectedArray"))) ;
      }
      const enumGalgasBool test_10 = test_9.boolEnum () ;
      if (kBoolTrue == test_10) {
        inCompiler->emitSemanticError (var_errorLocation_11461, GALGAS_string ("'sortedArray' or 'selectedArray' are required here")  COMMA_SOURCE_FILE ("array-controller.galgas", 402)) ;
      }
      switch (var_modelType_11414.enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_fontType:
        {
          inCompiler->emitSemanticError (var_errorLocation_11461, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 407)) ;
          var_entityName_11520.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          inCompiler->emitSemanticError (var_errorLocation_11461, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 409)) ;
          var_entityName_11520.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
          inCompiler->emitSemanticError (var_errorLocation_11461, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 411)) ;
          var_entityName_11520.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_propertyClassType:
        {
          inCompiler->emitSemanticError (var_errorLocation_11461, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 413)) ;
          var_entityName_11520.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_transientPropertyClassType:
        {
          inCompiler->emitSemanticError (var_errorLocation_11461, GALGAS_string ("the model should be a tomany relationship")  COMMA_SOURCE_FILE ("array-controller.galgas", 415)) ;
          var_entityName_11520.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
          const cEnumAssociatedValues_typeKind_entityType * extractPtr_15629 = (const cEnumAssociatedValues_typeKind_entityType *) (var_modelType_11414.unsafePointer ()) ;
          const GALGAS_string extractedValue_kEntityName = extractPtr_15629->mAssociatedValue0 ;
          var_entityName_11520 = extractedValue_kEntityName ;
        }
        break ;
      }
    }
    break ;
  }
  GALGAS_observablePropertyMap var_boundModelObservablePropertyMap_15933 ;
  constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (var_entityName_11520.getter_nowhere (SOURCE_FILE ("array-controller.galgas", 423)), var_boundModelObservablePropertyMap_15933, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 422)) ;
  GALGAS_arrayControllerBoundColumnListForGeneration var_arrayControllerBoundColumnListForGeneration_16028 = GALGAS_arrayControllerBoundColumnListForGeneration::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 426)) ;
  GALGAS_arrayControllerSortedColumnListForGeneration var_arrayControllerSortedColumnListForGeneration_16126 = GALGAS_arrayControllerSortedColumnListForGeneration::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 427)) ;
  cEnumerator_arrayControllerBoundColumnListAST enumerator_16178 (object->mAttribute_mArrayControllerBoundColumnListAST, kEnumeration_up) ;
  while (enumerator_16178.hasCurrentObject ()) {
    const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, enumerator_16178.current_mColumnBindingAST (HERE).mAttribute_mRunActionName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      var_actionMap_11543.method_searchKey (enumerator_16178.current_mColumnBindingAST (HERE).mAttribute_mRunActionName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 431)) ;
    }
    GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList_16452 = GALGAS_regularBindingsGenerationList::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 434)) ;
    {
    routine_analyzeRegularBinding (GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("array-controller.galgas", 436)), constinArgument_inSemanticContext, var_boundModelObservablePropertyMap_15933, enumerator_16178.current_mColumnOutletTypeName (HERE), GALGAS_string ("<<not used>>"), enumerator_16178.current_mColumnBindingAST (HERE).mAttribute_mRegularBindingList, GALGAS_string ("object"), var_regularBindingsGenerationList_16452, inCompiler  COMMA_SOURCE_FILE ("array-controller.galgas", 435)) ;
    }
    const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_16178.current_mSortPropertyName (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_typeKind var_sortPropertyType_16924 ;
      GALGAS_propertyKind joker_16934_4 ; // Joker input parameter
      GALGAS_propertyMultiplicity joker_16934_3 ; // Joker input parameter
      GALGAS_string joker_16934_2 ; // Joker input parameter
      GALGAS_actionMap joker_16934_1 ; // Joker input parameter
      var_boundModelObservablePropertyMap_15933.method_searchKey (enumerator_16178.current_mSortPropertyName (HERE), var_sortPropertyType_16924, joker_16934_4, joker_16934_3, joker_16934_2, joker_16934_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 447)) ;
      const enumGalgasBool test_13 = extensionGetter_isComparable (var_sortPropertyType_16924, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 452)).operator_not (SOURCE_FILE ("array-controller.galgas", 452)).boolEnum () ;
      if (kBoolTrue == test_13) {
        inCompiler->emitSemanticError (enumerator_16178.current_mSortPropertyName (HERE).getter_location (SOURCE_FILE ("array-controller.galgas", 453)), GALGAS_string ("this property is not comparable")  COMMA_SOURCE_FILE ("array-controller.galgas", 453)) ;
      }
      var_arrayControllerSortedColumnListForGeneration_16126.addAssign_operation (enumerator_16178.current_mColumnName (HERE).mAttribute_string, var_sortPropertyType_16924, enumerator_16178.current_mSortPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("array-controller.galgas", 455)) ;
    }
    var_arrayControllerBoundColumnListForGeneration_16028.addAssign_operation (enumerator_16178.current_mColumnName (HERE).mAttribute_string, enumerator_16178.current_mColumnOutletTypeName (HERE).mAttribute_string, enumerator_16178.current_mColumnBindingAST (HERE).mAttribute_mRunActionName.mAttribute_string, var_regularBindingsGenerationList_16452  COMMA_SOURCE_FILE ("array-controller.galgas", 461)) ;
    ioArgument_ioNeededOutletClasses.addAssign_operation (enumerator_16178.current_mColumnOutletTypeName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("array-controller.galgas", 466)) ;
    enumerator_16178.gotoNextObject () ;
  }
  GALGAS_arrayControllerFilterListForGeneration var_arrayControllerFilterListForGeneration_17687 = GALGAS_arrayControllerFilterListForGeneration::constructor_emptyList (SOURCE_FILE ("array-controller.galgas", 469)) ;
  cEnumerator_lstringlist enumerator_17740 (object->mAttribute_mFilterProperties, kEnumeration_up) ;
  while (enumerator_17740.hasCurrentObject ()) {
    GALGAS_typeKind var_filterType_17848 ;
    GALGAS_propertyKind var_columnKind_17891 ;
    GALGAS_propertyMultiplicity var_filterMultiplicity_17943 ;
    GALGAS_string var_inverseRelationshipName_17993 ;
    GALGAS_actionMap joker_18028 ; // Joker input parameter
    var_boundModelObservablePropertyMap_15933.method_searchKey (enumerator_17740.current_mValue (HERE), var_filterType_17848, var_columnKind_17891, var_filterMultiplicity_17943, var_inverseRelationshipName_17993, joker_18028, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 471)) ;
    const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, var_filterMultiplicity_17943.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("array-controller.galgas", 479)))).boolEnum () ;
    if (kBoolTrue == test_14) {
      inCompiler->emitSemanticError (enumerator_17740.current_mValue (HERE).getter_location (SOURCE_FILE ("array-controller.galgas", 480)), GALGAS_string ("the filter property should not be a collection")  COMMA_SOURCE_FILE ("array-controller.galgas", 480)) ;
    }
    var_arrayControllerFilterListForGeneration_17687.addAssign_operation (enumerator_17740.current_mValue (HERE).mAttribute_string, var_filterType_17848  COMMA_SOURCE_FILE ("array-controller.galgas", 482)) ;
    enumerator_17740.gotoNextObject () ;
  }
  ioArgument_ioArrayControllerForGeneration.addAssign_operation (constinArgument_inOwnerName, object->mAttribute_mControllerName.mAttribute_string, var_arrayControllerFilterListForGeneration_17687, extensionGetter_modelString (object->mAttribute_mArrayControllerModel, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 489)), var_arrayControllerBoundColumnListForGeneration_16028, var_arrayControllerSortedColumnListForGeneration_16126, extensionGetter_modelTypeName (object->mAttribute_mArrayControllerModel, constinArgument_inRootEntityName, constinArgument_inObservableProperties, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 492)), extensionGetter_modelTypeName_32_ (object->mAttribute_mArrayControllerModel, constinArgument_inRootEntityName, constinArgument_inObservableProperties, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 493)), var_modelKind_11499, extensionGetter_swiftTypeName (var_modelType_11414, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 495)), var_attributeListForGeneration_10786  COMMA_SOURCE_FILE ("array-controller.galgas", 485)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_arrayControllerDeclaration_secondaryPropertySemanticAnalysis (void) {
  enterExtensionMethod_secondaryPropertySemanticAnalysis (kTypeDescriptor_GALGAS_arrayControllerDeclaration.mSlotID,
                                                          extensionMethod_arrayControllerDeclaration_secondaryPropertySemanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayControllerDeclaration_secondaryPropertySemanticAnalysis (defineExtensionMethod_arrayControllerDeclaration_secondaryPropertySemanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@selectionControllerDeclaration typeInventory'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selectionControllerDeclaration_typeInventory (const cPtr_abstractSecondaryProperty * /* inObject */,
                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                          C_Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selectionControllerDeclaration_typeInventory (void) {
  enterExtensionMethod_typeInventory (kTypeDescriptor_GALGAS_selectionControllerDeclaration.mSlotID,
                                      extensionMethod_selectionControllerDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectionControllerDeclaration_typeInventory (defineExtensionMethod_selectionControllerDeclaration_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@selectionControllerDeclaration tryToSolveSecondaryProperty'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selectionControllerDeclaration_tryToSolveSecondaryProperty (const cPtr_abstractSecondaryProperty * inObject,
                                                                                        GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                        const GALGAS_observablePropertyMap /* constinArgument_inRootObservableProperties */,
                                                                                        GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                                                        GALGAS_secondaryPropertyList & ioArgument_ioUnsolvedProperties,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectionControllerDeclaration * object = (const cPtr_selectionControllerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_selectionControllerDeclaration) ;
  const enumGalgasBool test_0 = ioArgument_ioObservableProperties.getter_hasKey (object->mAttribute_mModelControllerName.mAttribute_string COMMA_SOURCE_FILE ("selection-controller.galgas", 57)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_typeKind var_type_2713 ;
    GALGAS_propertyKind var_kind_2729 ;
    GALGAS_propertyMultiplicity var_multiplicity_2753 ;
    GALGAS_string joker_2761_2 ; // Joker input parameter
    GALGAS_actionMap joker_2761_1 ; // Joker input parameter
    ioArgument_ioObservableProperties.method_searchKey (object->mAttribute_mModelControllerName, var_type_2713, var_kind_2729, var_multiplicity_2753, joker_2761_2, joker_2761_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 59)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_kind_2729.objectCompare (GALGAS_propertyKind::constructor_arrayController (SOURCE_FILE ("selection-controller.galgas", 67)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      inCompiler->emitSemanticError (object->mAttribute_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 68)), GALGAS_string ("the model should be an array controller")  COMMA_SOURCE_FILE ("selection-controller.galgas", 68)) ;
    }
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_multiplicity_2753.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("selection-controller.galgas", 71)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      inCompiler->emitSemanticError (object->mAttribute_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 72)), GALGAS_string ("the model should be an array controller")  COMMA_SOURCE_FILE ("selection-controller.galgas", 72)) ;
    }
    GALGAS_string var_entityName_3101 ;
    switch (var_type_2713.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_fontType:
      {
        inCompiler->emitSemanticError (object->mAttribute_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 78)), GALGAS_string ("the array controller model should be an entity")  COMMA_SOURCE_FILE ("selection-controller.galgas", 78)) ;
        var_entityName_3101.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        inCompiler->emitSemanticError (object->mAttribute_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 80)), GALGAS_string ("the array controller model should be an entity")  COMMA_SOURCE_FILE ("selection-controller.galgas", 80)) ;
        var_entityName_3101.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_classType:
      {
        inCompiler->emitSemanticError (object->mAttribute_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 82)), GALGAS_string ("the array controller model should be an entity")  COMMA_SOURCE_FILE ("selection-controller.galgas", 82)) ;
        var_entityName_3101.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_propertyClassType:
      {
        inCompiler->emitSemanticError (object->mAttribute_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 84)), GALGAS_string ("the array controller model should be an entity")  COMMA_SOURCE_FILE ("selection-controller.galgas", 84)) ;
        var_entityName_3101.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_transientPropertyClassType:
      {
        inCompiler->emitSemanticError (object->mAttribute_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 86)), GALGAS_string ("the array controller model should be an entity")  COMMA_SOURCE_FILE ("selection-controller.galgas", 86)) ;
        var_entityName_3101.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        const cEnumAssociatedValues_typeKind_entityType * extractPtr_3873 = (const cEnumAssociatedValues_typeKind_entityType *) (var_type_2713.unsafePointer ()) ;
        const GALGAS_string extractedValue_kEntityName = extractPtr_3873->mAssociatedValue0 ;
        var_entityName_3101 = extractedValue_kEntityName ;
      }
      break ;
    }
    {
    ioArgument_ioObservableProperties.setter_insertKey (object->mAttribute_mSelectionControllerName, var_type_2713, GALGAS_propertyKind::constructor_selectionController (SOURCE_FILE ("selection-controller.galgas", 94)), GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("selection-controller.galgas", 95)), GALGAS_string::makeEmptyString (), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("selection-controller.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 91)) ;
    }
  }else if (kBoolFalse == test_0) {
    const GALGAS_selectionControllerDeclaration temp_3 = object ;
    ioArgument_ioUnsolvedProperties.addAssign_operation (temp_3  COMMA_SOURCE_FILE ("selection-controller.galgas", 101)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selectionControllerDeclaration_tryToSolveSecondaryProperty (void) {
  enterExtensionMethod_tryToSolveSecondaryProperty (kTypeDescriptor_GALGAS_selectionControllerDeclaration.mSlotID,
                                                    extensionMethod_selectionControllerDeclaration_tryToSolveSecondaryProperty) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectionControllerDeclaration_tryToSolveSecondaryProperty (defineExtensionMethod_selectionControllerDeclaration_tryToSolveSecondaryProperty, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding extension method '@selectionControllerDeclaration secondaryPropertySemanticAnalysis'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_selectionControllerDeclaration_secondaryPropertySemanticAnalysis (const cPtr_abstractSecondaryProperty * inObject,
                                                                                              const GALGAS_string constinArgument_inOwnerName,
                                                                                              const GALGAS_string /* constinArgument_inRootEntityName */,
                                                                                              const GALGAS_observablePropertyMap /* constinArgument_inRootObservableProperties */,
                                                                                              const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                              const GALGAS_observablePropertyMap constinArgument_inObservableProperties,
                                                                                              GALGAS_transientDefinitionListForGeneration & /* ioArgument_ioTransientDefinitionListForGeneration */,
                                                                                              GALGAS_arrayControllerForGeneration & /* ioArgument_ioArrayControllerForGeneration */,
                                                                                              GALGAS_selectionControllerForGeneration & ioArgument_ioSelectionControllerForGeneration,
                                                                                              GALGAS_customObjectControllerForGeneration & /* ioArgument_ioCustomObjectControllerDeclaration */,
                                                                                              GALGAS_stringset & /* ioArgument_ioNeededOutletClasses */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectionControllerDeclaration * object = (const cPtr_selectionControllerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_selectionControllerDeclaration) ;
  GALGAS_typeKind var_type_5053 ;
  GALGAS_propertyKind var_kind_5074 ;
  GALGAS_propertyMultiplicity var_multiplicity_5103 ;
  GALGAS_string joker_5109_2 ; // Joker input parameter
  GALGAS_actionMap joker_5109_1 ; // Joker input parameter
  constinArgument_inObservableProperties.method_searchKey (object->mAttribute_mModelControllerName, var_type_5053, var_kind_5074, var_multiplicity_5103, joker_5109_2, joker_5109_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 120)) ;
  GALGAS_string var_selectionEntityName_5161 ;
  switch (var_type_5053.enumValue ()) {
  case GALGAS_typeKind::kNotBuilt:
    break ;
  case GALGAS_typeKind::kEnum_stringType:
  case GALGAS_typeKind::kEnum_boolType:
  case GALGAS_typeKind::kEnum_dateType:
  case GALGAS_typeKind::kEnum_doubleType:
  case GALGAS_typeKind::kEnum_integerType:
  case GALGAS_typeKind::kEnum_fontType:
    {
      inCompiler->emitSemanticError (object->mAttribute_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 131)), GALGAS_string ("the array controller model should be an entity")  COMMA_SOURCE_FILE ("selection-controller.galgas", 131)) ;
      var_selectionEntityName_5161.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_enumType:
    {
      inCompiler->emitSemanticError (object->mAttribute_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 133)), GALGAS_string ("the array controller model should be an entity")  COMMA_SOURCE_FILE ("selection-controller.galgas", 133)) ;
      var_selectionEntityName_5161.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_classType:
    {
      inCompiler->emitSemanticError (object->mAttribute_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 135)), GALGAS_string ("the array controller model should be an entity")  COMMA_SOURCE_FILE ("selection-controller.galgas", 135)) ;
      var_selectionEntityName_5161.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_propertyClassType:
    {
      inCompiler->emitSemanticError (object->mAttribute_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 137)), GALGAS_string ("the array controller model should be an entity")  COMMA_SOURCE_FILE ("selection-controller.galgas", 137)) ;
      var_selectionEntityName_5161.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_typeKind::kEnum_entityType:
    {
      const cEnumAssociatedValues_typeKind_entityType * extractPtr_5817 = (const cEnumAssociatedValues_typeKind_entityType *) (var_type_5053.unsafePointer ()) ;
      const GALGAS_string extractedValue_kEntityName = extractPtr_5817->mAssociatedValue0 ;
      var_selectionEntityName_5161 = extractedValue_kEntityName ;
    }
    break ;
  case GALGAS_typeKind::kEnum_transientPropertyClassType:
    {
      inCompiler->emitSemanticError (object->mAttribute_mModelControllerName.getter_location (SOURCE_FILE ("selection-controller.galgas", 141)), GALGAS_string ("the array controller model should be an entity")  COMMA_SOURCE_FILE ("selection-controller.galgas", 141)) ;
      var_selectionEntityName_5161.drop () ; // Release error dropped variable
    }
    break ;
  }
  GALGAS_observablePropertyMap var_selectionObservablePropertyMap_6202 ;
  constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (GALGAS_lstring::constructor_new (var_selectionEntityName_5161, object->mAttribute_mSelectionControllerName.mAttribute_location  COMMA_SOURCE_FILE ("selection-controller.galgas", 145)), var_selectionObservablePropertyMap_6202, inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas", 144)) ;
  ioArgument_ioSelectionControllerForGeneration.addAssign_operation (constinArgument_inOwnerName, object->mAttribute_mSelectionControllerName.mAttribute_string, object->mAttribute_mModelControllerName.mAttribute_string, object->mAttribute_mModelControllerPropertyName.mAttribute_string, var_selectionEntityName_5161, var_selectionObservablePropertyMap_6202  COMMA_SOURCE_FILE ("selection-controller.galgas", 149)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_selectionControllerDeclaration_secondaryPropertySemanticAnalysis (void) {
  enterExtensionMethod_secondaryPropertySemanticAnalysis (kTypeDescriptor_GALGAS_selectionControllerDeclaration.mSlotID,
                                                          extensionMethod_selectionControllerDeclaration_secondaryPropertySemanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectionControllerDeclaration_secondaryPropertySemanticAnalysis (defineExtensionMethod_selectionControllerDeclaration_secondaryPropertySemanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@customObjectControllerDeclaration typeInventory'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_customObjectControllerDeclaration_typeInventory (const cPtr_abstractSecondaryProperty * /* inObject */,
                                                                             GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_customObjectControllerDeclaration_typeInventory (void) {
  enterExtensionMethod_typeInventory (kTypeDescriptor_GALGAS_customObjectControllerDeclaration.mSlotID,
                                      extensionMethod_customObjectControllerDeclaration_typeInventory) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_customObjectControllerDeclaration_typeInventory (defineExtensionMethod_customObjectControllerDeclaration_typeInventory, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding extension method '@customObjectControllerDeclaration tryToSolveSecondaryProperty'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_customObjectControllerDeclaration_tryToSolveSecondaryProperty (const cPtr_abstractSecondaryProperty * inObject,
                                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                           const GALGAS_observablePropertyMap /* constinArgument_inRootObservableProperties */,
                                                                                           GALGAS_observablePropertyMap & ioArgument_ioObservableProperties,
                                                                                           GALGAS_secondaryPropertyList & ioArgument_ioUnsolvedProperties,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_customObjectControllerDeclaration * object = (const cPtr_customObjectControllerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_customObjectControllerDeclaration) ;
  const enumGalgasBool test_0 = ioArgument_ioSemanticContext.mAttribute_mUnifiedTypeMap.getter_hasKey (object->mAttribute_mPropertyEntityName.mAttribute_string COMMA_SOURCE_FILE ("custom-object-controller.galgas", 57)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_typeKind var_kind_2757 ;
    GALGAS_actionMap joker_2765 ; // Joker input parameter
    ioArgument_ioSemanticContext.mAttribute_mUnifiedTypeMap.method_searchKey (object->mAttribute_mPropertyEntityName, var_kind_2757, joker_2765, inCompiler COMMA_SOURCE_FILE ("custom-object-controller.galgas", 59)) ;
    GALGAS_string var_entityName_2826 ;
    switch (var_kind_2757.enumValue ()) {
    case GALGAS_typeKind::kNotBuilt:
      break ;
    case GALGAS_typeKind::kEnum_stringType:
    case GALGAS_typeKind::kEnum_boolType:
    case GALGAS_typeKind::kEnum_dateType:
    case GALGAS_typeKind::kEnum_doubleType:
    case GALGAS_typeKind::kEnum_integerType:
    case GALGAS_typeKind::kEnum_fontType:
      {
        inCompiler->emitSemanticError (object->mAttribute_mPropertyEntityName.getter_location (SOURCE_FILE ("custom-object-controller.galgas", 68)), GALGAS_string ("the controller model should be an entity")  COMMA_SOURCE_FILE ("custom-object-controller.galgas", 68)) ;
        var_entityName_2826.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_enumType:
      {
        inCompiler->emitSemanticError (object->mAttribute_mPropertyEntityName.getter_location (SOURCE_FILE ("custom-object-controller.galgas", 70)), GALGAS_string ("the controller model should be an entity")  COMMA_SOURCE_FILE ("custom-object-controller.galgas", 70)) ;
        var_entityName_2826.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_classType:
      {
        inCompiler->emitSemanticError (object->mAttribute_mPropertyEntityName.getter_location (SOURCE_FILE ("custom-object-controller.galgas", 72)), GALGAS_string ("the controller model should be an entity")  COMMA_SOURCE_FILE ("custom-object-controller.galgas", 72)) ;
        var_entityName_2826.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_propertyClassType:
      {
        inCompiler->emitSemanticError (object->mAttribute_mPropertyEntityName.getter_location (SOURCE_FILE ("custom-object-controller.galgas", 74)), GALGAS_string ("the controller model should be an entity")  COMMA_SOURCE_FILE ("custom-object-controller.galgas", 74)) ;
        var_entityName_2826.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_transientPropertyClassType:
      {
        inCompiler->emitSemanticError (object->mAttribute_mPropertyEntityName.getter_location (SOURCE_FILE ("custom-object-controller.galgas", 76)), GALGAS_string ("the controller model should be an entity")  COMMA_SOURCE_FILE ("custom-object-controller.galgas", 76)) ;
        var_entityName_2826.drop () ; // Release error dropped variable
      }
      break ;
    case GALGAS_typeKind::kEnum_entityType:
      {
        const cEnumAssociatedValues_typeKind_entityType * extractPtr_3563 = (const cEnumAssociatedValues_typeKind_entityType *) (var_kind_2757.unsafePointer ()) ;
        const GALGAS_string extractedValue_kEntityName = extractPtr_3563->mAssociatedValue0 ;
        var_entityName_2826 = extractedValue_kEntityName ;
      }
      break ;
    }
    {
    ioArgument_ioObservableProperties.setter_insertKey (object->mAttribute_mCustomObjectControllerName, var_kind_2757, GALGAS_propertyKind::constructor_selectionController (SOURCE_FILE ("custom-object-controller.galgas", 84)), GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("custom-object-controller.galgas", 85)), GALGAS_string::makeEmptyString (), GALGAS_actionMap::constructor_emptyMap (SOURCE_FILE ("custom-object-controller.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("custom-object-controller.galgas", 81)) ;
    }
  }else if (kBoolFalse == test_0) {
    const GALGAS_customObjectControllerDeclaration temp_1 = object ;
    ioArgument_ioUnsolvedProperties.addAssign_operation (temp_1  COMMA_SOURCE_FILE ("custom-object-controller.galgas", 90)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_customObjectControllerDeclaration_tryToSolveSecondaryProperty (void) {
  enterExtensionMethod_tryToSolveSecondaryProperty (kTypeDescriptor_GALGAS_customObjectControllerDeclaration.mSlotID,
                                                    extensionMethod_customObjectControllerDeclaration_tryToSolveSecondaryProperty) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_customObjectControllerDeclaration_tryToSolveSecondaryProperty (defineExtensionMethod_customObjectControllerDeclaration_tryToSolveSecondaryProperty, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding extension method '@customObjectControllerDeclaration secondaryPropertySemanticAnalysis'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_customObjectControllerDeclaration_secondaryPropertySemanticAnalysis (const cPtr_abstractSecondaryProperty * inObject,
                                                                                                 const GALGAS_string constinArgument_inOwnerName,
                                                                                                 const GALGAS_string /* constinArgument_inRootEntityName */,
                                                                                                 const GALGAS_observablePropertyMap /* constinArgument_inRootObservableProperties */,
                                                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                                 const GALGAS_observablePropertyMap /* constinArgument_inObservableProperties */,
                                                                                                 GALGAS_transientDefinitionListForGeneration & /* ioArgument_ioTransientDefinitionListForGeneration */,
                                                                                                 GALGAS_arrayControllerForGeneration & /* ioArgument_ioArrayControllerForGeneration */,
                                                                                                 GALGAS_selectionControllerForGeneration & /* ioArgument_ioSelectionControllerForGeneration */,
                                                                                                 GALGAS_customObjectControllerForGeneration & ioArgument_ioCustomObjectControllerDeclaration,
                                                                                                 GALGAS_stringset & /* ioArgument_ioNeededOutletClasses */,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_customObjectControllerDeclaration * object = (const cPtr_customObjectControllerDeclaration *) inObject ;
  macroValidSharedObject (object, cPtr_customObjectControllerDeclaration) ;
  GALGAS_observablePropertyMap var_selectionObservablePropertyMap_4838 ;
  constinArgument_inSemanticContext.mAttribute_mEntityObservablePropertyMap.method_searchKey (object->mAttribute_mPropertyEntityName, var_selectionObservablePropertyMap_4838, inCompiler COMMA_SOURCE_FILE ("custom-object-controller.galgas", 109)) ;
  ioArgument_ioCustomObjectControllerDeclaration.addAssign_operation (constinArgument_inOwnerName, object->mAttribute_mCustomObjectControllerName.mAttribute_string, object->mAttribute_mClassNameForSwift.mAttribute_string, object->mAttribute_mPropertyEntityName.mAttribute_string, var_selectionObservablePropertyMap_4838  COMMA_SOURCE_FILE ("custom-object-controller.galgas", 114)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_customObjectControllerDeclaration_secondaryPropertySemanticAnalysis (void) {
  enterExtensionMethod_secondaryPropertySemanticAnalysis (kTypeDescriptor_GALGAS_customObjectControllerDeclaration.mSlotID,
                                                          extensionMethod_customObjectControllerDeclaration_secondaryPropertySemanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_customObjectControllerDeclaration_secondaryPropertySemanticAnalysis (defineExtensionMethod_customObjectControllerDeclaration_secondaryPropertySemanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@boolAsDefaultValue analyzeDefaultValueType'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_boolAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                        const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                        GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolAsDefaultValue * object = (const cPtr_boolAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_boolAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_4415 = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_4462 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found_4415.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 113)).isValidAndTrue () ;
  if (enumerator_4462.hasCurrentObject () && bool_0) {
    while (enumerator_4462.hasCurrentObject () && bool_0) {
      switch (enumerator_4462.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_boolType:
        {
          GALGAS_string temp_1 ;
          const enumGalgasBool test_2 = object->mAttribute_mValue.mAttribute_bool.boolEnum () ;
          if (kBoolTrue == test_2) {
            temp_1 = GALGAS_string ("true") ;
          }else if (kBoolFalse == test_2) {
            temp_1 = GALGAS_string ("false") ;
          }
          outArgument_outSwiftDefaultValueAsString = temp_1 ;
          var_found_4415 = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_fontType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_propertyClassType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_transientPropertyClassType:
        {
        }
        break ;
      }
      enumerator_4462.gotoNextObject () ;
      if (enumerator_4462.hasCurrentObject ()) {
        bool_0 = var_found_4415.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 113)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_3 = var_found_4415.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 126)).boolEnum () ;
  if (kBoolTrue == test_3) {
    inCompiler->emitSemanticError (object->mAttribute_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 127)), GALGAS_string ("only a boolean attribute can be initialized by YES or NO")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 127)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_boolAsDefaultValue_analyzeDefaultValueType (void) {
  enterExtensionMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_boolAsDefaultValue.mSlotID,
                                                extensionMethod_boolAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_boolAsDefaultValue_analyzeDefaultValueType (defineExtensionMethod_boolAsDefaultValue_analyzeDefaultValueType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@integerAsDefaultValue analyzeDefaultValueType'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_integerAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                           const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                           GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_integerAsDefaultValue * object = (const cPtr_integerAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_integerAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_5293 = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_5340 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found_5293.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 140)).isValidAndTrue () ;
  if (enumerator_5340.hasCurrentObject () && bool_0) {
    while (enumerator_5340.hasCurrentObject () && bool_0) {
      switch (enumerator_5340.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_integerType:
        {
          outArgument_outSwiftDefaultValueAsString = object->mAttribute_mValue.mAttribute_uint.getter_string (SOURCE_FILE ("explicit-default-value.galgas", 143)) ;
          var_found_5293 = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_fontType:
        {
          outArgument_outSwiftDefaultValueAsString = GALGAS_string ("NSFont.systemFont (ofSize: ").add_operation (object->mAttribute_mValue.mAttribute_uint.getter_string (SOURCE_FILE ("explicit-default-value.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 146)).add_operation (GALGAS_string (".0)"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 146)) ;
          var_found_5293 = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_stringType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_propertyClassType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_transientPropertyClassType:
        {
        }
        break ;
      }
      enumerator_5340.gotoNextObject () ;
      if (enumerator_5340.hasCurrentObject ()) {
        bool_0 = var_found_5293.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 140)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_found_5293.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 156)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 157)), GALGAS_string ("only an integer attribute can be initialized by an integer constant")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 157)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_integerAsDefaultValue_analyzeDefaultValueType (void) {
  enterExtensionMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_integerAsDefaultValue.mSlotID,
                                                extensionMethod_integerAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_integerAsDefaultValue_analyzeDefaultValueType (defineExtensionMethod_integerAsDefaultValue_analyzeDefaultValueType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@doubleAsDefaultValue analyzeDefaultValueType'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_doubleAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                          const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                          GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_doubleAsDefaultValue * object = (const cPtr_doubleAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_doubleAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_6275 = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_6322 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found_6275.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 170)).isValidAndTrue () ;
  if (enumerator_6322.hasCurrentObject () && bool_0) {
    while (enumerator_6322.hasCurrentObject () && bool_0) {
      switch (enumerator_6322.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_doubleType:
        {
          outArgument_outSwiftDefaultValueAsString = object->mAttribute_mValue.mAttribute_double.getter_string (SOURCE_FILE ("explicit-default-value.galgas", 173)) ;
          var_found_6275 = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_fontType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_propertyClassType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_transientPropertyClassType:
        {
        }
        break ;
      }
      enumerator_6322.gotoNextObject () ;
      if (enumerator_6322.hasCurrentObject ()) {
        bool_0 = var_found_6275.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 170)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_found_6275.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 183)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 184)), GALGAS_string ("only a double attribute can be initialized by a floating point constant")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 184)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_doubleAsDefaultValue_analyzeDefaultValueType (void) {
  enterExtensionMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_doubleAsDefaultValue.mSlotID,
                                                extensionMethod_doubleAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_doubleAsDefaultValue_analyzeDefaultValueType (defineExtensionMethod_doubleAsDefaultValue_analyzeDefaultValueType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@stringAsDefaultValue analyzeDefaultValueType'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_stringAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                          const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                          GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_stringAsDefaultValue * object = (const cPtr_stringAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_stringAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_7145 = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_7192 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found_7145.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 197)).isValidAndTrue () ;
  if (enumerator_7192.hasCurrentObject () && bool_0) {
    while (enumerator_7192.hasCurrentObject () && bool_0) {
      switch (enumerator_7192.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_stringType:
        {
          outArgument_outSwiftDefaultValueAsString = GALGAS_string ("\"").add_operation (object->mAttribute_mValue.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 200)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 200)) ;
          var_found_7145 = GALGAS_bool (true) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_fontType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_propertyClassType:
        {
        }
        break ;
      case GALGAS_typeKind::kEnum_transientPropertyClassType:
        {
        }
        break ;
      }
      enumerator_7192.gotoNextObject () ;
      if (enumerator_7192.hasCurrentObject ()) {
        bool_0 = var_found_7145.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 197)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_1 = var_found_7145.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 210)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 211)), GALGAS_string ("only a string attribute can be initialized by a string constant")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 211)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_stringAsDefaultValue_analyzeDefaultValueType (void) {
  enterExtensionMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_stringAsDefaultValue.mSlotID,
                                                extensionMethod_stringAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_stringAsDefaultValue_analyzeDefaultValueType (defineExtensionMethod_stringAsDefaultValue_analyzeDefaultValueType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@identifierAsDefaultValue analyzeDefaultValueType'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_identifierAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                              const GALGAS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                              GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_identifierAsDefaultValue * object = (const cPtr_identifierAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_identifierAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_8251 = GALGAS_bool (false) ;
  cEnumerator_typeKindList enumerator_8297 (constinArgument_inAttributeActualTypeList, kEnumeration_up) ;
  bool bool_0 = var_found_8251.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 231)).isValidAndTrue () ;
  if (enumerator_8297.hasCurrentObject () && bool_0) {
    while (enumerator_8297.hasCurrentObject () && bool_0) {
      switch (enumerator_8297.current_mType (HERE).enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_dateType:
        {
          var_found_8251 = GALGAS_bool (true) ;
          const enumGalgasBool test_1 = function_predefinedDates (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 235)).getter_hasKey (object->mAttribute_mValue.mAttribute_string COMMA_SOURCE_FILE ("explicit-default-value.galgas", 235)).boolEnum () ;
          if (kBoolTrue == test_1) {
            outArgument_outSwiftDefaultValueAsString = GALGAS_string ("Date ()") ;
          }else if (kBoolFalse == test_1) {
            inCompiler->emitSemanticError (object->mAttribute_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 238)), GALGAS_string ("unknown predefined date")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 238)) ;
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          const cEnumAssociatedValues_typeKind_enumType * extractPtr_8942 = (const cEnumAssociatedValues_typeKind_enumType *) (enumerator_8297.current_mType (HERE).unsafePointer ()) ;
          const GALGAS_string extractedValue_enumTypeName = extractPtr_8942->mAssociatedValue0 ;
          const GALGAS_enumConstantMap extractedValue_constantMap = extractPtr_8942->mAssociatedValue1 ;
          var_found_8251 = GALGAS_bool (true) ;
          const enumGalgasBool test_2 = extractedValue_constantMap.getter_hasKey (object->mAttribute_mValue.mAttribute_string COMMA_SOURCE_FILE ("explicit-default-value.galgas", 242)).boolEnum () ;
          if (kBoolTrue == test_2) {
            outArgument_outSwiftDefaultValueAsString = extractedValue_enumTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 243)).add_operation (object->mAttribute_mValue.mAttribute_string, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 243)) ;
          }else if (kBoolFalse == test_2) {
            inCompiler->emitSemanticError (object->mAttribute_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 245)), GALGAS_string ("the '").add_operation (extractedValue_enumTypeName, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 246)).add_operation (GALGAS_string ("' enumeration does not define '"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 246)).add_operation (object->mAttribute_mValue.getter_string (SOURCE_FILE ("explicit-default-value.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 246)).add_operation (GALGAS_string ("' constant"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 246))  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 245)) ;
            outArgument_outSwiftDefaultValueAsString.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
          inCompiler->emitSemanticError (object->mAttribute_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 250)), GALGAS_string ("invalid entity type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 250)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
          inCompiler->emitSemanticError (object->mAttribute_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 252)), GALGAS_string ("invalid class type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 252)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_boolType:
        {
          inCompiler->emitSemanticError (object->mAttribute_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 254)), GALGAS_string ("invalid bool type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 254)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_doubleType:
        {
          inCompiler->emitSemanticError (object->mAttribute_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 256)), GALGAS_string ("invalid double type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 256)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_integerType:
        {
          inCompiler->emitSemanticError (object->mAttribute_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 258)), GALGAS_string ("invalid integer type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 258)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_stringType:
        {
          inCompiler->emitSemanticError (object->mAttribute_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 260)), GALGAS_string ("invalid string type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 260)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_fontType:
        {
          inCompiler->emitSemanticError (object->mAttribute_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 262)), GALGAS_string ("invalid font type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 262)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_transientPropertyClassType:
        {
          inCompiler->emitSemanticError (object->mAttribute_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 264)), GALGAS_string ("invalid image type")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 264)) ;
        }
        break ;
      case GALGAS_typeKind::kEnum_propertyClassType:
        {
          const cEnumAssociatedValues_typeKind_propertyClassType * extractPtr_9936 = (const cEnumAssociatedValues_typeKind_propertyClassType *) (enumerator_8297.current_mType (HERE).unsafePointer ()) ;
          const GALGAS_string extractedValue_propertyClassTypeName = extractPtr_9936->mAssociatedValue0 ;
          const GALGAS_propertyClassDefaultValues extractedValue_defaultValues = extractPtr_9936->mAssociatedValue1 ;
          var_found_8251 = GALGAS_bool (true) ;
          switch (extractedValue_defaultValues.enumValue ()) {
          case GALGAS_propertyClassDefaultValues::kNotBuilt:
            break ;
          case GALGAS_propertyClassDefaultValues::kEnum_string:
            {
              const cEnumAssociatedValues_propertyClassDefaultValues_string * extractPtr_9926 = (const cEnumAssociatedValues_propertyClassDefaultValues_string *) (extractedValue_defaultValues.unsafePointer ()) ;
              const GALGAS_stringset extractedValue_values = extractPtr_9926->mAssociatedValue0 ;
              const enumGalgasBool test_3 = extractedValue_values.getter_hasKey (object->mAttribute_mValue.mAttribute_string COMMA_SOURCE_FILE ("explicit-default-value.galgas", 269)).boolEnum () ;
              if (kBoolTrue == test_3) {
                outArgument_outSwiftDefaultValueAsString = extractedValue_propertyClassTypeName.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 270)).add_operation (object->mAttribute_mValue.getter_string (SOURCE_FILE ("explicit-default-value.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.galgas", 270)) ;
              }else if (kBoolFalse == test_3) {
                inCompiler->emitSemanticError (object->mAttribute_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 272)), GALGAS_string ("invalid default value")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 272)) ;
                outArgument_outSwiftDefaultValueAsString.drop () ; // Release error dropped variable
              }
            }
            break ;
          }
        }
        break ;
      }
      enumerator_8297.gotoNextObject () ;
      if (enumerator_8297.hasCurrentObject ()) {
        bool_0 = var_found_8251.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 231)).isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_4 = var_found_8251.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 277)).boolEnum () ;
  if (kBoolTrue == test_4) {
    inCompiler->emitSemanticError (object->mAttribute_mValue.getter_location (SOURCE_FILE ("explicit-default-value.galgas", 278)), GALGAS_string ("unknow type for this identifier")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 278)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_identifierAsDefaultValue_analyzeDefaultValueType (void) {
  enterExtensionMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_identifierAsDefaultValue.mSlotID,
                                                extensionMethod_identifierAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_identifierAsDefaultValue_analyzeDefaultValueType (defineExtensionMethod_identifierAsDefaultValue_analyzeDefaultValueType, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@listAsDefaultValue analyzeDefaultValueType'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_listAsDefaultValue_analyzeDefaultValueType (const cPtr_abstractDefaultValue * inObject,
                                                                        const GALGAS_typeKindList /* constinArgument_inAttributeActualTypeList */,
                                                                        GALGAS_string & outArgument_outSwiftDefaultValueAsString,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listAsDefaultValue * object = (const cPtr_listAsDefaultValue *) inObject ;
  macroValidSharedObject (object, cPtr_listAsDefaultValue) ;
  outArgument_outSwiftDefaultValueAsString = GALGAS_string::makeEmptyString () ;
  GALGAS_bool var_found_10960 = GALGAS_bool (false) ;
  const enumGalgasBool test_0 = var_found_10960.operator_not (SOURCE_FILE ("explicit-default-value.galgas", 367)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mStartLocation, GALGAS_string ("invalid initialization value")  COMMA_SOURCE_FILE ("explicit-default-value.galgas", 368)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listAsDefaultValue_analyzeDefaultValueType (void) {
  enterExtensionMethod_analyzeDefaultValueType (kTypeDescriptor_GALGAS_listAsDefaultValue.mSlotID,
                                                extensionMethod_listAsDefaultValue_analyzeDefaultValueType) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listAsDefaultValue_analyzeDefaultValueType (defineExtensionMethod_listAsDefaultValue_analyzeDefaultValueType, NULL) ;

