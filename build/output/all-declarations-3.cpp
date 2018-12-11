#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-3.h"

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

static const char * gNonTerminalNames_easyBindings_grammar [86] = {
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
  "<action_declaration>",// Index 16
  "<booleanMultipleBindingExpression>",// Index 17
  "<booleanMultipleBindingComparison>",// Index 18
  "<booleanMultipleBindingTerm>",// Index 19
  "<booleanMultipleBindingOperand>",// Index 20
  "<binding_option_list>",// Index 21
  "<controller_declaration>",// Index 22
  "<column_bindings>",// Index 23
  "<explicit_value>",// Index 24
  "<xcode_project>",// Index 25
  "<main_xib>",// Index 26
  "<main_xib_line>",// Index 27
  "<select_easyBindings_5F_syntax_0>",// Index 28
  "<select_easyBindings_5F_syntax_1>",// Index 29
  "<select_easyBindings_5F_syntax_2>",// Index 30
  "<select_easyBindings_5F_syntax_3>",// Index 31
  "<select_easyBindings_5F_syntax_4>",// Index 32
  "<select_easyBindings_5F_syntax_5>",// Index 33
  "<select_easyBindings_5F_syntax_6>",// Index 34
  "<select_easyBindings_5F_syntax_7>",// Index 35
  "<select_easyBindings_5F_syntax_8>",// Index 36
  "<select_easyBindings_5F_syntax_9>",// Index 37
  "<select_easyBindings_5F_syntax_10>",// Index 38
  "<select_easyBindings_5F_syntax_11>",// Index 39
  "<select_easyBindings_5F_syntax_12>",// Index 40
  "<select_easyBindings_5F_syntax_13>",// Index 41
  "<select_easyBindings_5F_syntax_14>",// Index 42
  "<select_easyBindings_5F_syntax_15>",// Index 43
  "<select_easyBindings_5F_syntax_16>",// Index 44
  "<select_easyBindings_5F_syntax_17>",// Index 45
  "<select_easyBindings_5F_syntax_18>",// Index 46
  "<select_easyBindings_5F_syntax_19>",// Index 47
  "<select_easyBindings_5F_syntax_20>",// Index 48
  "<select_easyBindings_5F_syntax_21>",// Index 49
  "<select_easyBindings_5F_syntax_22>",// Index 50
  "<select_easyBindings_5F_syntax_23>",// Index 51
  "<select_easyBindings_5F_syntax_24>",// Index 52
  "<select_easyBindings_5F_syntax_25>",// Index 53
  "<select_easyBindings_5F_syntax_26>",// Index 54
  "<select_easyBindings_5F_syntax_27>",// Index 55
  "<select_easyBindings_5F_syntax_28>",// Index 56
  "<select_easyBindings_5F_syntax_29>",// Index 57
  "<select_easyBindings_5F_syntax_30>",// Index 58
  "<select_easyBindings_5F_syntax_31>",// Index 59
  "<select_easyBindings_5F_syntax_32>",// Index 60
  "<select_easyBindings_5F_syntax_33>",// Index 61
  "<select_easyBindings_5F_syntax_34>",// Index 62
  "<select_easyBindings_5F_syntax_35>",// Index 63
  "<select_easyBindings_5F_syntax_36>",// Index 64
  "<select_easyBindings_5F_syntax_37>",// Index 65
  "<select_easyBindings_5F_syntax_38>",// Index 66
  "<select_easyBindings_5F_syntax_39>",// Index 67
  "<select_easyBindings_5F_syntax_40>",// Index 68
  "<select_easyBindings_5F_syntax_41>",// Index 69
  "<select_easyBindings_5F_syntax_42>",// Index 70
  "<select_easyBindings_5F_syntax_43>",// Index 71
  "<select_easyBindings_5F_syntax_44>",// Index 72
  "<select_easyBindings_5F_syntax_45>",// Index 73
  "<select_easyBindings_5F_syntax_46>",// Index 74
  "<select_easyBindings_5F_syntax_47>",// Index 75
  "<select_easyBindings_5F_syntax_48>",// Index 76
  "<select_easyBindings_5F_syntax_49>",// Index 77
  "<select_easyBindings_5F_syntax_50>",// Index 78
  "<select_easyBindings_5F_syntax_51>",// Index 79
  "<select_easyBindings_5F_syntax_52>",// Index 80
  "<select_easyBindings_5F_syntax_53>",// Index 81
  "<select_easyBindings_5F_syntax_54>",// Index 82
  "<select_easyBindings_5F_syntax_55>",// Index 83
  "<select_easyBindings_5F_syntax_56>",// Index 84
  "<>"// Index 85
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
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S1 (index = 27)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (23)
, END
// State S2 (index = 30)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (24)
, END
// State S3 (index = 33)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (25)
, END
// State S4 (index = 36)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (50)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (50)
, END
// State S5 (index = 41)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (26)
, END
// State S6 (index = 44)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (27)
, END
// State S7 (index = 47)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (28)
, END
// State S8 (index = 50)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (29)
, END
// State S9 (index = 53)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (30)
, END
// State S10 (index = 56)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (31)
, END
// State S11 (index = 59)
, C_Lexique_easyBindings_5F_lexique::kToken_, ACCEPT
, END
// State S12 (index = 62)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S13 (index = 89)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S14 (index = 116)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S15 (index = 143)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S16 (index = 170)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S17 (index = 197)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S18 (index = 224)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S19 (index = 251)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S20 (index = 278)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S21 (index = 305)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (0)
, END
// State S22 (index = 308)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, SHIFT (41)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (51)
, END
// State S23 (index = 313)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (43)
, END
// State S24 (index = 316)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (44)
, C_Lexique_easyBindings_5F_lexique::kToken_struct, SHIFT (45)
, END
// State S25 (index = 321)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (47)
, END
// State S26 (index = 324)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (48)
, END
// State S27 (index = 327)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (72)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (58)
, END
// State S28 (index = 350)
, C_Lexique_easyBindings_5F_lexique::kToken_class, SHIFT (67)
, END
// State S29 (index = 353)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (68)
, END
// State S30 (index = 356)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (69)
, END
// State S31 (index = 359)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (71)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (72)
, END
// State S32 (index = 366)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (38)
, END
// State S33 (index = 369)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (36)
, END
// State S34 (index = 372)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (37)
, END
// State S35 (index = 375)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (40)
, END
// State S36 (index = 378)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (39)
, END
// State S37 (index = 381)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (41)
, END
// State S38 (index = 384)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (42)
, END
// State S39 (index = 387)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (43)
, END
// State S40 (index = 390)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (44)
, END
// State S41 (index = 393)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (52)
, END
// State S42 (index = 396)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, SHIFT (74)
, END
// State S43 (index = 399)
, C_Lexique_easyBindings_5F_lexique::kToken_include, SHIFT (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (2)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (3)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (4)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (49)
, C_Lexique_easyBindings_5F_lexique::kToken_document, SHIFT (5)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (6)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, SHIFT (7)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, SHIFT (8)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, SHIFT (9)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, SHIFT (10)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (34)
, END
// State S44 (index = 426)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (45)
, END
// State S45 (index = 429)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (46)
, END
// State S46 (index = 432)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (76)
, END
// State S47 (index = 435)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (77)
, END
// State S48 (index = 438)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (78)
, END
// State S49 (index = 441)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (79)
, END
// State S50 (index = 444)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (80)
, END
// State S51 (index = 447)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (81)
, END
// State S52 (index = 452)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (83)
, END
// State S53 (index = 455)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (84)
, END
// State S54 (index = 458)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (85)
, END
// State S55 (index = 463)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (87)
, END
// State S56 (index = 466)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (88)
, END
// State S57 (index = 469)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (89)
, END
// State S58 (index = 472)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (90)
, END
// State S59 (index = 475)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (72)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (58)
, END
// State S60 (index = 498)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (72)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (58)
, END
// State S61 (index = 521)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (72)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (58)
, END
// State S62 (index = 544)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (72)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (58)
, END
// State S63 (index = 567)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (72)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (58)
, END
// State S64 (index = 590)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (72)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (58)
, END
// State S65 (index = 613)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (49)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (72)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (58)
, END
// State S66 (index = 636)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (98)
, END
// State S67 (index = 639)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (99)
, END
// State S68 (index = 642)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (100)
, END
// State S69 (index = 645)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (31)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (31)
, END
// State S70 (index = 672)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (200)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (200)
, END
// State S71 (index = 677)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (101)
, END
// State S72 (index = 680)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (102)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (103)
, END
// State S73 (index = 685)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (106)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (197)
, END
// State S74 (index = 690)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (108)
, END
// State S75 (index = 693)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (35)
, END
// State S76 (index = 696)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (109)
, END
// State S77 (index = 699)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (110)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (47)
, END
// State S78 (index = 704)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (112)
, END
// State S79 (index = 707)
, C_Lexique_easyBindings_5F_lexique::kToken_calledBy, SHIFT (113)
, END
// State S80 (index = 710)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (114)
, END
// State S81 (index = 713)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (137)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (81)
, END
// State S82 (index = 718)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (116)
, END
// State S83 (index = 721)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (117)
, END
// State S84 (index = 724)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (118)
, END
// State S85 (index = 727)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (143)
, C_Lexique_easyBindings_5F_lexique::kToken__40_attribute, SHIFT (85)
, END
// State S86 (index = 732)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (120)
, END
// State S87 (index = 735)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (121)
, END
// State S88 (index = 738)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (122)
, END
// State S89 (index = 741)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (123)
, END
// State S90 (index = 744)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (124)
, END
// State S91 (index = 747)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (77)
, END
// State S92 (index = 750)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (75)
, END
// State S93 (index = 753)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (76)
, END
// State S94 (index = 756)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (74)
, END
// State S95 (index = 759)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (78)
, END
// State S96 (index = 762)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (73)
, END
// State S97 (index = 765)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (79)
, END
// State S98 (index = 768)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (7)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (7)
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
// State S99 (index = 795)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (80)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (125)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (80)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (80)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (80)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (80)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (80)
, END
// State S100 (index = 810)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (127)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (128)
, END
// State S101 (index = 815)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (199)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (199)
, END
// State S102 (index = 820)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (205)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (205)
, END
// State S103 (index = 825)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (130)
, END
// State S104 (index = 828)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (131)
, END
// State S105 (index = 831)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (132)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (202)
, END
// State S106 (index = 836)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (70)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (71)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (72)
, END
// State S107 (index = 843)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (135)
, END
// State S108 (index = 846)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (53)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (136)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, REDUCE (53)
, END
// State S109 (index = 853)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (3)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (3)
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
// State S110 (index = 880)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (138)
, END
// State S111 (index = 883)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (139)
, END
// State S112 (index = 886)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (67)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (58)
, END
// State S113 (index = 903)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (145)
, END
// State S114 (index = 906)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, SHIFT (146)
, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom, REDUCE (133)
, END
// State S115 (index = 911)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (138)
, END
// State S116 (index = 914)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (148)
, END
// State S117 (index = 917)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (149)
, END
// State S118 (index = 920)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (98)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (150)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (151)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (152)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (153)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (154)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (155)
, END
// State S119 (index = 935)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (144)
, END
// State S120 (index = 938)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (157)
, END
// State S121 (index = 941)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (17)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (17)
, END
// State S122 (index = 968)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (158)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (159)
, END
// State S123 (index = 973)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (161)
, END
// State S124 (index = 976)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (162)
, END
// State S125 (index = 979)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (163)
, END
// State S126 (index = 982)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (82)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (164)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (165)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (166)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (168)
, END
// State S127 (index = 995)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (91)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (91)
, END
// State S128 (index = 1000)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (90)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (90)
, END
// State S129 (index = 1005)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (170)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (171)
, END
// State S130 (index = 1010)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (204)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (204)
, END
// State S131 (index = 1015)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (201)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (201)
, END
// State S132 (index = 1020)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (102)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (103)
, END
// State S133 (index = 1025)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (33)
, END
// State S134 (index = 1028)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (106)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (197)
, END
// State S135 (index = 1033)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_graphic, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_entity, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_document, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_extern, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_binding, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_mainxib, REDUCE (32)
, C_Lexique_easyBindings_5F_lexique::kToken_, REDUCE (32)
, END
// State S136 (index = 1060)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (175)
, END
// State S137 (index = 1063)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (57)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (176)
, END
// State S138 (index = 1068)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (110)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (47)
, END
// State S139 (index = 1073)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (4)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (4)
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
// State S140 (index = 1100)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (67)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (58)
, END
// State S141 (index = 1117)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (67)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (58)
, END
// State S142 (index = 1134)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (67)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (58)
, END
// State S143 (index = 1151)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (67)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, SHIFT (53)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (58)
, END
// State S144 (index = 1168)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (183)
, END
// State S145 (index = 1171)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (184)
, END
// State S146 (index = 1174)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (185)
, END
// State S147 (index = 1177)
, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom, SHIFT (186)
, END
// State S148 (index = 1180)
, C_Lexique_easyBindings_5F_lexique::kToken_default, SHIFT (187)
, END
// State S149 (index = 1183)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (188)
, END
// State S150 (index = 1186)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (189)
, END
// State S151 (index = 1189)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (190)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (191)
, END
// State S152 (index = 1194)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (193)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (194)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (202)
, END
// State S153 (index = 1215)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (193)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (194)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (202)
, END
// State S154 (index = 1236)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (210)
, END
// State S155 (index = 1239)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (193)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (200)
, END
// State S156 (index = 1254)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (212)
, END
// State S157 (index = 1257)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (147)
, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom, SHIFT (213)
, C_Lexique_easyBindings_5F_lexique::kToken_inverse, SHIFT (214)
, END
// State S158 (index = 1264)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (164)
, END
// State S159 (index = 1267)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (165)
, END
// State S160 (index = 1270)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (216)
, END
// State S161 (index = 1273)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (217)
, END
// State S162 (index = 1276)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (218)
, END
// State S163 (index = 1279)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (81)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (81)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (81)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (81)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (81)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (81)
, END
// State S164 (index = 1292)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (82)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (164)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (165)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (166)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (168)
, END
// State S165 (index = 1305)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (82)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (164)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (165)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (166)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (168)
, END
// State S166 (index = 1318)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (82)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (164)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (165)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (166)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (168)
, END
// State S167 (index = 1331)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (82)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (164)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (165)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (166)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (168)
, END
// State S168 (index = 1344)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (82)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (164)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (165)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (166)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (167)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (168)
, END
// State S169 (index = 1357)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (224)
, END
// State S170 (index = 1360)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (92)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (92)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (92)
, END
// State S171 (index = 1367)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (93)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (93)
, END
// State S172 (index = 1374)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (88)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (88)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (225)
, END
// State S173 (index = 1381)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (132)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (202)
, END
// State S174 (index = 1386)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (198)
, END
// State S175 (index = 1389)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (55)
, END
// State S176 (index = 1394)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (230)
, END
// State S177 (index = 1397)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (231)
, END
// State S178 (index = 1400)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (48)
, END
// State S179 (index = 1403)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (70)
, END
// State S180 (index = 1406)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (69)
, END
// State S181 (index = 1409)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (68)
, END
// State S182 (index = 1412)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (71)
, END
// State S183 (index = 1415)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (6)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (6)
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
// State S184 (index = 1442)
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
// State S185 (index = 1465)
, C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom, REDUCE (134)
, END
// State S186 (index = 1468)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (193)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (200)
, END
// State S187 (index = 1483)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (235)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (236)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (237)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (238)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (239)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (240)
, END
// State S188 (index = 1500)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (12)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (12)
, END
// State S189 (index = 1527)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (98)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (150)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (151)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (152)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (153)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (154)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (155)
, END
// State S190 (index = 1542)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (106)
, END
// State S191 (index = 1545)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (105)
, END
// State S192 (index = 1548)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (244)
, END
// State S193 (index = 1551)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (245)
, END
// State S194 (index = 1554)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (193)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (194)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (202)
, END
// State S195 (index = 1575)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (247)
, END
// State S196 (index = 1578)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (248)
, END
// State S197 (index = 1581)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (249)
, END
// State S198 (index = 1584)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (115)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (115)
, END
// State S199 (index = 1627)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (116)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (116)
, END
// State S200 (index = 1670)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (117)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (117)
, END
// State S201 (index = 1713)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (193)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (194)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (202)
, END
// State S202 (index = 1734)
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
// State S203 (index = 1773)
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
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (21)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (21)
, END
// State S204 (index = 1812)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (98)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (150)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (151)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (152)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (153)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (154)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (155)
, END
// State S205 (index = 1827)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (148)
, END
// State S206 (index = 1850)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (150)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, SHIFT (254)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, SHIFT (255)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, SHIFT (256)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, SHIFT (257)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, SHIFT (258)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, SHIFT (259)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (150)
, END
// State S207 (index = 1885)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (261)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (262)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (157)
, END
// State S208 (index = 1924)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (11)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (11)
, END
// State S209 (index = 1967)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (98)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (150)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (151)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (152)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (153)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (154)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (155)
, END
// State S210 (index = 1982)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (265)
, END
// State S211 (index = 1985)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (266)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (107)
, END
// State S212 (index = 2004)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (10)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (10)
, END
// State S213 (index = 2027)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (268)
, END
// State S214 (index = 2030)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (269)
, END
// State S215 (index = 2033)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (270)
, END
// State S216 (index = 2036)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (271)
, END
// State S217 (index = 2039)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (235)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (236)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (237)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (238)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (239)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (240)
, END
// State S218 (index = 2056)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (273)
, END
// State S219 (index = 2059)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (83)
, END
// State S220 (index = 2062)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (84)
, END
// State S221 (index = 2065)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (85)
, END
// State S222 (index = 2068)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (86)
, END
// State S223 (index = 2071)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (87)
, END
// State S224 (index = 2074)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (8)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (8)
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
// State S225 (index = 2101)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (127)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (128)
, END
// State S226 (index = 2106)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (94)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (275)
, END
// State S227 (index = 2111)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (203)
, END
// State S228 (index = 2114)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (277)
, END
// State S229 (index = 2117)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (278)
, END
// State S230 (index = 2120)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (58)
, END
// State S231 (index = 2123)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (279)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (59)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (280)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (58)
, END
// State S232 (index = 2146)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (289)
, END
// State S233 (index = 2151)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (192)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (192)
, END
// State S234 (index = 2160)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (193)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (193)
, END
// State S235 (index = 2169)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (235)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (236)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (237)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (238)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (239)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (240)
, END
// State S236 (index = 2186)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (189)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (189)
, END
// State S237 (index = 2195)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (187)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (187)
, END
// State S238 (index = 2204)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (188)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (188)
, END
// State S239 (index = 2213)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (292)
, END
// State S240 (index = 2216)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (191)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (191)
, END
// State S241 (index = 2225)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (293)
, END
// State S242 (index = 2228)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (30)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (30)
, END
// State S243 (index = 2237)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (99)
, END
// State S244 (index = 2240)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (294)
, END
// State S245 (index = 2243)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (295)
, END
// State S246 (index = 2246)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (296)
, END
// State S247 (index = 2249)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (297)
, END
// State S248 (index = 2252)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (298)
, END
// State S249 (index = 2255)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (299)
, END
// State S250 (index = 2258)
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
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (22)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (22)
, END
// State S251 (index = 2297)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (101)
, END
// State S252 (index = 2300)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (193)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (194)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (202)
, END
// State S253 (index = 2321)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (18)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (18)
, END
// State S254 (index = 2342)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (193)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (194)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (202)
, END
// State S255 (index = 2363)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (193)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (194)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (202)
, END
// State S256 (index = 2384)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (193)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (194)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (202)
, END
// State S257 (index = 2405)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (193)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (194)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (202)
, END
// State S258 (index = 2426)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (193)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (194)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (202)
, END
// State S259 (index = 2447)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (193)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (194)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (202)
, END
// State S260 (index = 2468)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (19)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (19)
, END
// State S261 (index = 2491)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (193)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (194)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (202)
, END
// State S262 (index = 2512)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (193)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (194)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (202)
, END
// State S263 (index = 2533)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (20)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (20)
, END
// State S264 (index = 2568)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (102)
, END
// State S265 (index = 2571)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (309)
, END
// State S266 (index = 2574)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (193)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (200)
, END
// State S267 (index = 2589)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (311)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (160)
, END
// State S268 (index = 2610)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (314)
, END
// State S269 (index = 2613)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (315)
, END
// State S270 (index = 2616)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (16)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (16)
, END
// State S271 (index = 2643)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (316)
, END
// State S272 (index = 2646)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (317)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (166)
, END
// State S273 (index = 2651)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (319)
, END
// State S274 (index = 2654)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (170)
, C_Lexique_easyBindings_5F_lexique::kToken_enum, SHIFT (171)
, END
// State S275 (index = 2659)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (321)
, END
// State S276 (index = 2662)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (322)
, END
// State S277 (index = 2665)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (228)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (55)
, END
// State S278 (index = 2670)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (54)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, REDUCE (54)
, END
// State S279 (index = 2675)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (324)
, END
// State S280 (index = 2678)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (325)
, END
// State S281 (index = 2681)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (279)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (59)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (280)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (58)
, END
// State S282 (index = 2704)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (279)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (59)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (280)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (58)
, END
// State S283 (index = 2727)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (279)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (59)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (280)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (58)
, END
// State S284 (index = 2750)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (279)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (59)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (280)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (58)
, END
// State S285 (index = 2773)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (279)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (59)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (280)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (58)
, END
// State S286 (index = 2796)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (279)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (59)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (280)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (58)
, END
// State S287 (index = 2819)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, SHIFT (279)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, SHIFT (50)
, C_Lexique_easyBindings_5F_lexique::kToken_property, SHIFT (51)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (59)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, SHIFT (52)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (280)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (54)
, C_Lexique_easyBindings_5F_lexique::kToken_action, SHIFT (55)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, SHIFT (56)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, SHIFT (57)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, SHIFT (58)
, END
// State S288 (index = 2842)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (333)
, END
// State S289 (index = 2845)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (193)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (200)
, END
// State S290 (index = 2860)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (335)
, END
// State S291 (index = 2863)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (336)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (195)
, END
// State S292 (index = 2868)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (190)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (190)
, END
// State S293 (index = 2877)
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
// State S294 (index = 2904)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (98)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (150)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (151)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (152)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (153)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (154)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (155)
, END
// State S295 (index = 2919)
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
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (339)
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
// State S296 (index = 2964)
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
// State S297 (index = 3003)
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
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (341)
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
// State S298 (index = 3048)
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
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (343)
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
// State S299 (index = 3093)
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
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (345)
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
// State S300 (index = 3138)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (148)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, SHIFT (252)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (148)
, END
// State S301 (index = 3161)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (151)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (151)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (151)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (151)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (151)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (151)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (151)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (151)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (151)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (151)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (151)
, END
// State S302 (index = 3184)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (152)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (152)
, END
// State S303 (index = 3207)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (153)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (153)
, END
// State S304 (index = 3230)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (154)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (154)
, END
// State S305 (index = 3253)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (155)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (155)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (155)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (155)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (155)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (155)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (155)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (155)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (155)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (155)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (155)
, END
// State S306 (index = 3276)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (156)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (156)
, END
// State S307 (index = 3299)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (261)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (262)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (157)
, END
// State S308 (index = 3338)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (157)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, SHIFT (261)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, SHIFT (262)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (157)
, END
// State S309 (index = 3377)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (109)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (350)
, END
// State S310 (index = 3394)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (266)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (107)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (107)
, END
// State S311 (index = 3413)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (353)
, END
// State S312 (index = 3416)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (98)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (150)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (151)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (152)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (153)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (154)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (155)
, END
// State S313 (index = 3431)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (25)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (25)
, END
// State S314 (index = 3450)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (355)
, END
// State S315 (index = 3453)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (145)
, END
// State S316 (index = 3456)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (26)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (26)
, END
// State S317 (index = 3483)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (356)
, END
// State S318 (index = 3486)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (357)
, END
// State S319 (index = 3489)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (358)
, END
// State S320 (index = 3492)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (88)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (88)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (225)
, END
// State S321 (index = 3499)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (360)
, END
// State S322 (index = 3502)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (9)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (9)
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
// State S323 (index = 3529)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (56)
, END
// State S324 (index = 3532)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (361)
, END
// State S325 (index = 3535)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (362)
, END
// State S326 (index = 3538)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (66)
, END
// State S327 (index = 3541)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (61)
, END
// State S328 (index = 3544)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (60)
, END
// State S329 (index = 3547)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (63)
, END
// State S330 (index = 3550)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (62)
, END
// State S331 (index = 3553)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (64)
, END
// State S332 (index = 3556)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (65)
, END
// State S333 (index = 3559)
, C_Lexique_easyBindings_5F_lexique::kToken_include, REDUCE (5)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (5)
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
// State S334 (index = 3586)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (135)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (289)
, END
// State S335 (index = 3591)
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
// State S336 (index = 3618)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (235)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (236)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (237)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (238)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (239)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (240)
, END
// State S337 (index = 3635)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, SHIFT (365)
, END
// State S338 (index = 3638)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (100)
, END
// State S339 (index = 3641)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (366)
, END
// State S340 (index = 3644)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (114)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (114)
, END
// State S341 (index = 3687)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (367)
, C_Lexique_easyBindings_5F_lexique::kToken_all, SHIFT (368)
, C_Lexique_easyBindings_5F_lexique::kToken_none, SHIFT (369)
, END
// State S342 (index = 3694)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (111)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (111)
, END
// State S343 (index = 3737)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (371)
, END
// State S344 (index = 3740)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (113)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (113)
, END
// State S345 (index = 3783)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (372)
, C_Lexique_easyBindings_5F_lexique::kToken_all, SHIFT (373)
, C_Lexique_easyBindings_5F_lexique::kToken_none, SHIFT (374)
, C_Lexique_easyBindings_5F_lexique::kToken_one, SHIFT (375)
, END
// State S346 (index = 3792)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__7C_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken__5E_, REDUCE (112)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (112)
, END
// State S347 (index = 3835)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (149)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (149)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (149)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (149)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (149)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (149)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (149)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (149)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (149)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (149)
, END
// State S348 (index = 3856)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__26_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (158)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (158)
, END
// State S349 (index = 3891)
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
, C_Lexique_easyBindings_5F_lexique::kToken__3E_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken__3C_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken__21__3D_, REDUCE (159)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (159)
, END
// State S350 (index = 3926)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (377)
, END
// State S351 (index = 3929)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (98)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, SHIFT (150)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (151)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (152)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (153)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, SHIFT (154)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (155)
, END
// State S352 (index = 3944)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (108)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (108)
, END
// State S353 (index = 3961)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (379)
, END
// State S354 (index = 3964)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (103)
, END
// State S355 (index = 3967)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (146)
, END
// State S356 (index = 3970)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (380)
, END
// State S357 (index = 3973)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (381)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (382)
, END
// State S358 (index = 3978)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (384)
, END
// State S359 (index = 3981)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (89)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (89)
, END
// State S360 (index = 3986)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (385)
, END
// State S361 (index = 3989)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (1)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (1)
, END
// State S362 (index = 4012)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (139)
, C_Lexique_easyBindings_5F_lexique::kToken_inverse, SHIFT (386)
, END
// State S363 (index = 4017)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (136)
, END
// State S364 (index = 4020)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (336)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (195)
, END
// State S365 (index = 4025)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (194)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (194)
, END
// State S366 (index = 4034)
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
// State S367 (index = 4077)
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
// State S368 (index = 4120)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (389)
, END
// State S369 (index = 4123)
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
// State S370 (index = 4166)
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
// State S371 (index = 4209)
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
// State S372 (index = 4252)
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
// State S373 (index = 4295)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (390)
, END
// State S374 (index = 4298)
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
// State S375 (index = 4341)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (391)
, END
// State S376 (index = 4344)
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
// State S377 (index = 4387)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (110)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (110)
, END
// State S378 (index = 4402)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (104)
, END
// State S379 (index = 4405)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (235)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (236)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (237)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (238)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (239)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (240)
, END
// State S380 (index = 4422)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (235)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (236)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (237)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (238)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (239)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (240)
, END
// State S381 (index = 4439)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (168)
, END
// State S382 (index = 4442)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, REDUCE (169)
, END
// State S383 (index = 4445)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (394)
, END
// State S384 (index = 4448)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (395)
, END
// State S385 (index = 4451)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (396)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (96)
, END
// State S386 (index = 4456)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, SHIFT (398)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, SHIFT (399)
, END
// State S387 (index = 4461)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (401)
, END
// State S388 (index = 4464)
, C_Lexique_easyBindings_5F_lexique::kToken__29_, REDUCE (196)
, END
// State S389 (index = 4467)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (402)
, END
// State S390 (index = 4470)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (403)
, END
// State S391 (index = 4473)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (404)
, END
// State S392 (index = 4476)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (405)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (162)
, END
// State S393 (index = 4481)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (317)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (166)
, END
// State S394 (index = 4486)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (408)
, END
// State S395 (index = 4489)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (29)
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
// State S396 (index = 4516)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (409)
, END
// State S397 (index = 4519)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (410)
, END
// State S398 (index = 4522)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, REDUCE (141)
, END
// State S399 (index = 4525)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, REDUCE (142)
, END
// State S400 (index = 4528)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (411)
, END
// State S401 (index = 4531)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (15)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (15)
, END
// State S402 (index = 4554)
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
// State S403 (index = 4597)
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
// State S404 (index = 4640)
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
// State S405 (index = 4683)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (412)
, END
// State S406 (index = 4686)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (413)
, END
// State S407 (index = 4689)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (167)
, END
// State S408 (index = 4692)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (170)
, C_Lexique_easyBindings_5F_lexique::kToken_filter, SHIFT (414)
, END
// State S409 (index = 4699)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (416)
, END
// State S410 (index = 4702)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (95)
, END
// State S411 (index = 4705)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (140)
, END
// State S412 (index = 4708)
, C_Lexique_easyBindings_5F_lexique::kToken__3A_, SHIFT (417)
, END
// State S413 (index = 4711)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (161)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (161)
, END
// State S414 (index = 4730)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (418)
, END
// State S415 (index = 4733)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, SHIFT (419)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (420)
, END
// State S416 (index = 4738)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (422)
, END
// State S417 (index = 4741)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (233)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (234)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (235)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (236)
, C_Lexique_easyBindings_5F_lexique::kToken_yes, SHIFT (237)
, C_Lexique_easyBindings_5F_lexique::kToken_no, SHIFT (238)
, C_Lexique_easyBindings_5F_lexique::kToken__2D_, SHIFT (239)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double, SHIFT (240)
, END
// State S418 (index = 4758)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (424)
, END
// State S419 (index = 4765)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (174)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (174)
, END
// State S420 (index = 4792)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (176)
, C_Lexique_easyBindings_5F_lexique::kToken_column, SHIFT (426)
, END
// State S421 (index = 4797)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (27)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (27)
, END
// State S422 (index = 4824)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (396)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (96)
, END
// State S423 (index = 4829)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (405)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (162)
, END
// State S424 (index = 4834)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (430)
, END
// State S425 (index = 4837)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (171)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (171)
, END
// State S426 (index = 4842)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string, SHIFT (431)
, END
// State S427 (index = 4845)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, SHIFT (432)
, END
// State S428 (index = 4848)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (97)
, END
// State S429 (index = 4851)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (163)
, END
// State S430 (index = 4854)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (172)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (424)
, END
// State S431 (index = 4861)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (178)
, C_Lexique_easyBindings_5F_lexique::kToken_sort, SHIFT (434)
, END
// State S432 (index = 4866)
, C_Lexique_easyBindings_5F_lexique::kToken_externDelegate, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_externFunc, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_transient, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_property, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_abstract, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_outlet, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_toOne, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_toMany, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_action, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_arrayController, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_tableViewController, REDUCE (175)
, C_Lexique_easyBindings_5F_lexique::kToken_selectionController, REDUCE (175)
, END
// State S433 (index = 4893)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (173)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (173)
, END
// State S434 (index = 4898)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (436)
, END
// State S435 (index = 4901)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, SHIFT (437)
, END
// State S436 (index = 4904)
, C_Lexique_easyBindings_5F_lexique::kToken_Identifier, REDUCE (179)
, END
// State S437 (index = 4907)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (180)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (438)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (439)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (440)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (441)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (180)
, END
// State S438 (index = 4920)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (444)
, END
// State S439 (index = 4923)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (193)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (194)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (202)
, END
// State S440 (index = 4944)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (193)
, C_Lexique_easyBindings_5F_lexique::kToken__28_, SHIFT (194)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (200)
, C_Lexique_easyBindings_5F_lexique::kToken__21_, SHIFT (201)
, C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer, SHIFT (202)
, END
// State S441 (index = 4965)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (193)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (200)
, END
// State S442 (index = 4980)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (176)
, C_Lexique_easyBindings_5F_lexique::kToken_column, SHIFT (426)
, END
// State S443 (index = 4985)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (28)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (28)
, END
// State S444 (index = 4990)
, C_Lexique_easyBindings_5F_lexique::kToken__2E_, SHIFT (449)
, END
// State S445 (index = 4993)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (180)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (438)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (439)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (440)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (441)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (180)
, END
// State S446 (index = 5006)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (180)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (438)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (439)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (440)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (441)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (180)
, END
// State S447 (index = 5019)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (452)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (185)
, END
// State S448 (index = 5036)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (177)
, END
// State S449 (index = 5039)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (454)
, END
// State S450 (index = 5042)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (182)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (182)
, END
// State S451 (index = 5047)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (183)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (183)
, END
// State S452 (index = 5052)
, C_Lexique_easyBindings_5F_lexique::kToken_identifier, SHIFT (193)
, C_Lexique_easyBindings_5F_lexique::kToken_root, SHIFT (195)
, C_Lexique_easyBindings_5F_lexique::kToken_prefs, SHIFT (196)
, C_Lexique_easyBindings_5F_lexique::kToken_self, SHIFT (197)
, C_Lexique_easyBindings_5F_lexique::kToken_signature, SHIFT (198)
, C_Lexique_easyBindings_5F_lexique::kToken_version, SHIFT (199)
, C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange, SHIFT (200)
, END
// State S453 (index = 5067)
, C_Lexique_easyBindings_5F_lexique::kToken__3B_, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, SHIFT (311)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_tableValue, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_graphicController, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (160)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (160)
, END
// State S454 (index = 5088)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (180)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (438)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (439)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (440)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (441)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (180)
, END
// State S455 (index = 5101)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken__2C_, SHIFT (452)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (185)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (185)
, END
// State S456 (index = 5118)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (180)
, C_Lexique_easyBindings_5F_lexique::kToken_run, SHIFT (438)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, SHIFT (439)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, SHIFT (440)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, SHIFT (441)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (180)
, END
// State S457 (index = 5131)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (181)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (181)
, END
// State S458 (index = 5136)
, C_Lexique_easyBindings_5F_lexique::kToken__7B_, REDUCE (186)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (186)
, C_Lexique_easyBindings_5F_lexique::kToken_run, REDUCE (186)
, C_Lexique_easyBindings_5F_lexique::kToken_enabled, REDUCE (186)
, C_Lexique_easyBindings_5F_lexique::kToken_hidden, REDUCE (186)
, C_Lexique_easyBindings_5F_lexique::kToken_bindingName, REDUCE (186)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (186)
, END
// State S459 (index = 5151)
, C_Lexique_easyBindings_5F_lexique::kToken__7D_, REDUCE (184)
, C_Lexique_easyBindings_5F_lexique::kToken_column, REDUCE (184)
, END} ;

static const uint32_t gActionTableIndex_easyBindings_grammar [460] = {
  0  // S0
, 27  // S1
, 30  // S2
, 33  // S3
, 36  // S4
, 41  // S5
, 44  // S6
, 47  // S7
, 50  // S8
, 53  // S9
, 56  // S10
, 59  // S11
, 62  // S12
, 89  // S13
, 116  // S14
, 143  // S15
, 170  // S16
, 197  // S17
, 224  // S18
, 251  // S19
, 278  // S20
, 305  // S21
, 308  // S22
, 313  // S23
, 316  // S24
, 321  // S25
, 324  // S26
, 327  // S27
, 350  // S28
, 353  // S29
, 356  // S30
, 359  // S31
, 366  // S32
, 369  // S33
, 372  // S34
, 375  // S35
, 378  // S36
, 381  // S37
, 384  // S38
, 387  // S39
, 390  // S40
, 393  // S41
, 396  // S42
, 399  // S43
, 426  // S44
, 429  // S45
, 432  // S46
, 435  // S47
, 438  // S48
, 441  // S49
, 444  // S50
, 447  // S51
, 452  // S52
, 455  // S53
, 458  // S54
, 463  // S55
, 466  // S56
, 469  // S57
, 472  // S58
, 475  // S59
, 498  // S60
, 521  // S61
, 544  // S62
, 567  // S63
, 590  // S64
, 613  // S65
, 636  // S66
, 639  // S67
, 642  // S68
, 645  // S69
, 672  // S70
, 677  // S71
, 680  // S72
, 685  // S73
, 690  // S74
, 693  // S75
, 696  // S76
, 699  // S77
, 704  // S78
, 707  // S79
, 710  // S80
, 713  // S81
, 718  // S82
, 721  // S83
, 724  // S84
, 727  // S85
, 732  // S86
, 735  // S87
, 738  // S88
, 741  // S89
, 744  // S90
, 747  // S91
, 750  // S92
, 753  // S93
, 756  // S94
, 759  // S95
, 762  // S96
, 765  // S97
, 768  // S98
, 795  // S99
, 810  // S100
, 815  // S101
, 820  // S102
, 825  // S103
, 828  // S104
, 831  // S105
, 836  // S106
, 843  // S107
, 846  // S108
, 853  // S109
, 880  // S110
, 883  // S111
, 886  // S112
, 903  // S113
, 906  // S114
, 911  // S115
, 914  // S116
, 917  // S117
, 920  // S118
, 935  // S119
, 938  // S120
, 941  // S121
, 968  // S122
, 973  // S123
, 976  // S124
, 979  // S125
, 982  // S126
, 995  // S127
, 1000  // S128
, 1005  // S129
, 1010  // S130
, 1015  // S131
, 1020  // S132
, 1025  // S133
, 1028  // S134
, 1033  // S135
, 1060  // S136
, 1063  // S137
, 1068  // S138
, 1073  // S139
, 1100  // S140
, 1117  // S141
, 1134  // S142
, 1151  // S143
, 1168  // S144
, 1171  // S145
, 1174  // S146
, 1177  // S147
, 1180  // S148
, 1183  // S149
, 1186  // S150
, 1189  // S151
, 1194  // S152
, 1215  // S153
, 1236  // S154
, 1239  // S155
, 1254  // S156
, 1257  // S157
, 1264  // S158
, 1267  // S159
, 1270  // S160
, 1273  // S161
, 1276  // S162
, 1279  // S163
, 1292  // S164
, 1305  // S165
, 1318  // S166
, 1331  // S167
, 1344  // S168
, 1357  // S169
, 1360  // S170
, 1367  // S171
, 1374  // S172
, 1381  // S173
, 1386  // S174
, 1389  // S175
, 1394  // S176
, 1397  // S177
, 1400  // S178
, 1403  // S179
, 1406  // S180
, 1409  // S181
, 1412  // S182
, 1415  // S183
, 1442  // S184
, 1465  // S185
, 1468  // S186
, 1483  // S187
, 1500  // S188
, 1527  // S189
, 1542  // S190
, 1545  // S191
, 1548  // S192
, 1551  // S193
, 1554  // S194
, 1575  // S195
, 1578  // S196
, 1581  // S197
, 1584  // S198
, 1627  // S199
, 1670  // S200
, 1713  // S201
, 1734  // S202
, 1773  // S203
, 1812  // S204
, 1827  // S205
, 1850  // S206
, 1885  // S207
, 1924  // S208
, 1967  // S209
, 1982  // S210
, 1985  // S211
, 2004  // S212
, 2027  // S213
, 2030  // S214
, 2033  // S215
, 2036  // S216
, 2039  // S217
, 2056  // S218
, 2059  // S219
, 2062  // S220
, 2065  // S221
, 2068  // S222
, 2071  // S223
, 2074  // S224
, 2101  // S225
, 2106  // S226
, 2111  // S227
, 2114  // S228
, 2117  // S229
, 2120  // S230
, 2123  // S231
, 2146  // S232
, 2151  // S233
, 2160  // S234
, 2169  // S235
, 2186  // S236
, 2195  // S237
, 2204  // S238
, 2213  // S239
, 2216  // S240
, 2225  // S241
, 2228  // S242
, 2237  // S243
, 2240  // S244
, 2243  // S245
, 2246  // S246
, 2249  // S247
, 2252  // S248
, 2255  // S249
, 2258  // S250
, 2297  // S251
, 2300  // S252
, 2321  // S253
, 2342  // S254
, 2363  // S255
, 2384  // S256
, 2405  // S257
, 2426  // S258
, 2447  // S259
, 2468  // S260
, 2491  // S261
, 2512  // S262
, 2533  // S263
, 2568  // S264
, 2571  // S265
, 2574  // S266
, 2589  // S267
, 2610  // S268
, 2613  // S269
, 2616  // S270
, 2643  // S271
, 2646  // S272
, 2651  // S273
, 2654  // S274
, 2659  // S275
, 2662  // S276
, 2665  // S277
, 2670  // S278
, 2675  // S279
, 2678  // S280
, 2681  // S281
, 2704  // S282
, 2727  // S283
, 2750  // S284
, 2773  // S285
, 2796  // S286
, 2819  // S287
, 2842  // S288
, 2845  // S289
, 2860  // S290
, 2863  // S291
, 2868  // S292
, 2877  // S293
, 2904  // S294
, 2919  // S295
, 2964  // S296
, 3003  // S297
, 3048  // S298
, 3093  // S299
, 3138  // S300
, 3161  // S301
, 3184  // S302
, 3207  // S303
, 3230  // S304
, 3253  // S305
, 3276  // S306
, 3299  // S307
, 3338  // S308
, 3377  // S309
, 3394  // S310
, 3413  // S311
, 3416  // S312
, 3431  // S313
, 3450  // S314
, 3453  // S315
, 3456  // S316
, 3483  // S317
, 3486  // S318
, 3489  // S319
, 3492  // S320
, 3499  // S321
, 3502  // S322
, 3529  // S323
, 3532  // S324
, 3535  // S325
, 3538  // S326
, 3541  // S327
, 3544  // S328
, 3547  // S329
, 3550  // S330
, 3553  // S331
, 3556  // S332
, 3559  // S333
, 3586  // S334
, 3591  // S335
, 3618  // S336
, 3635  // S337
, 3638  // S338
, 3641  // S339
, 3644  // S340
, 3687  // S341
, 3694  // S342
, 3737  // S343
, 3740  // S344
, 3783  // S345
, 3792  // S346
, 3835  // S347
, 3856  // S348
, 3891  // S349
, 3926  // S350
, 3929  // S351
, 3944  // S352
, 3961  // S353
, 3964  // S354
, 3967  // S355
, 3970  // S356
, 3973  // S357
, 3978  // S358
, 3981  // S359
, 3986  // S360
, 3989  // S361
, 4012  // S362
, 4017  // S363
, 4020  // S364
, 4025  // S365
, 4034  // S366
, 4077  // S367
, 4120  // S368
, 4123  // S369
, 4166  // S370
, 4209  // S371
, 4252  // S372
, 4295  // S373
, 4298  // S374
, 4341  // S375
, 4344  // S376
, 4387  // S377
, 4402  // S378
, 4405  // S379
, 4422  // S380
, 4439  // S381
, 4442  // S382
, 4445  // S383
, 4448  // S384
, 4451  // S385
, 4456  // S386
, 4461  // S387
, 4464  // S388
, 4467  // S389
, 4470  // S390
, 4473  // S391
, 4476  // S392
, 4481  // S393
, 4486  // S394
, 4489  // S395
, 4516  // S396
, 4519  // S397
, 4522  // S398
, 4525  // S399
, 4528  // S400
, 4531  // S401
, 4554  // S402
, 4597  // S403
, 4640  // S404
, 4683  // S405
, 4686  // S406
, 4689  // S407
, 4692  // S408
, 4699  // S409
, 4702  // S410
, 4705  // S411
, 4708  // S412
, 4711  // S413
, 4730  // S414
, 4733  // S415
, 4738  // S416
, 4741  // S417
, 4758  // S418
, 4765  // S419
, 4792  // S420
, 4797  // S421
, 4824  // S422
, 4829  // S423
, 4834  // S424
, 4837  // S425
, 4842  // S426
, 4845  // S427
, 4848  // S428
, 4851  // S429
, 4854  // S430
, 4861  // S431
, 4866  // S432
, 4893  // S433
, 4898  // S434
, 4901  // S435
, 4904  // S436
, 4907  // S437
, 4920  // S438
, 4923  // S439
, 4944  // S440
, 4965  // S441
, 4980  // S442
, 4985  // S443
, 4990  // S444
, 4993  // S445
, 5006  // S446
, 5019  // S447
, 5036  // S448
, 5039  // S449
, 5042  // S450
, 5047  // S451
, 5052  // S452
, 5067  // S453
, 5088  // S454
, 5101  // S455
, 5118  // S456
, 5131  // S457
, 5136  // S458
, 5151  // S459
} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                            SLR states successors table                                               
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

// Successor tables handle non terminal successors ;
// an entry is (non_terminal_symbol, n) ; successor is state n.

static const int16_t gSuccessorTable_easyBindings_grammar_0 [25] = {0, 11,
  3, 12,
  4, 13,
  5, 14,
  6, 15,
  7, 16,
  8, 17,
  9, 18,
  25, 19,
  26, 20,
  28, 21,
  31, 22, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_12 [23] = {3, 12,
  4, 13,
  5, 14,
  6, 15,
  7, 16,
  8, 17,
  9, 18,
  25, 19,
  26, 20,
  28, 32,
  31, 22, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_13 [23] = {3, 12,
  4, 13,
  5, 14,
  6, 15,
  7, 16,
  8, 17,
  9, 18,
  25, 19,
  26, 20,
  28, 33,
  31, 22, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_14 [23] = {3, 12,
  4, 13,
  5, 14,
  6, 15,
  7, 16,
  8, 17,
  9, 18,
  25, 19,
  26, 20,
  28, 34,
  31, 22, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_15 [23] = {3, 12,
  4, 13,
  5, 14,
  6, 15,
  7, 16,
  8, 17,
  9, 18,
  25, 19,
  26, 20,
  28, 35,
  31, 22, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_16 [23] = {3, 12,
  4, 13,
  5, 14,
  6, 15,
  7, 16,
  8, 17,
  9, 18,
  25, 19,
  26, 20,
  28, 36,
  31, 22, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_17 [23] = {3, 12,
  4, 13,
  5, 14,
  6, 15,
  7, 16,
  8, 17,
  9, 18,
  25, 19,
  26, 20,
  28, 37,
  31, 22, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_18 [23] = {3, 12,
  4, 13,
  5, 14,
  6, 15,
  7, 16,
  8, 17,
  9, 18,
  25, 19,
  26, 20,
  28, 38,
  31, 22, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_19 [23] = {3, 12,
  4, 13,
  5, 14,
  6, 15,
  7, 16,
  8, 17,
  9, 18,
  25, 19,
  26, 20,
  28, 39,
  31, 22, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_20 [23] = {3, 12,
  4, 13,
  5, 14,
  6, 15,
  7, 16,
  8, 17,
  9, 18,
  25, 19,
  26, 20,
  28, 40,
  31, 22, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_22 [3] = {32, 42, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_24 [3] = {29, 46, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_27 [17] = {2, 59,
  10, 60,
  12, 61,
  13, 62,
  15, 63,
  16, 64,
  22, 65,
  38, 66, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_31 [3] = {82, 73, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_43 [23] = {3, 12,
  4, 13,
  5, 14,
  6, 15,
  7, 16,
  8, 17,
  9, 18,
  25, 19,
  26, 20,
  28, 75,
  31, 22, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_51 [3] = {59, 82, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_54 [3] = {62, 86, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_59 [17] = {2, 59,
  10, 60,
  12, 61,
  13, 62,
  15, 63,
  16, 64,
  22, 65,
  38, 91, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_60 [17] = {2, 59,
  10, 60,
  12, 61,
  13, 62,
  15, 63,
  16, 64,
  22, 65,
  38, 92, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_61 [17] = {2, 59,
  10, 60,
  12, 61,
  13, 62,
  15, 63,
  16, 64,
  22, 65,
  38, 93, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_62 [17] = {2, 59,
  10, 60,
  12, 61,
  13, 62,
  15, 63,
  16, 64,
  22, 65,
  38, 94, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_63 [17] = {2, 59,
  10, 60,
  12, 61,
  13, 62,
  15, 63,
  16, 64,
  22, 65,
  38, 95, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_64 [17] = {2, 59,
  10, 60,
  12, 61,
  13, 62,
  15, 63,
  16, 64,
  22, 65,
  38, 96, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_65 [17] = {2, 59,
  10, 60,
  12, 61,
  13, 62,
  15, 63,
  16, 64,
  22, 65,
  38, 97, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_72 [5] = {27, 104,
  84, 105, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_73 [3] = {81, 107, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_77 [3] = {30, 111, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_81 [3] = {59, 115, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_85 [3] = {62, 119, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_99 [3] = {39, 126, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_100 [3] = {42, 129, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_105 [3] = {83, 133, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_106 [3] = {82, 134, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_108 [3] = {33, 137, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_112 [11] = {10, 140,
  12, 141,
  16, 142,
  22, 143,
  37, 144, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_114 [3] = {57, 147, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_118 [3] = {46, 156, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_122 [3] = {69, 160, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_126 [3] = {40, 169, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_129 [3] = {43, 172, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_132 [3] = {84, 173, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_134 [3] = {81, 174, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_137 [3] = {35, 177, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_138 [3] = {30, 178, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_140 [11] = {10, 140,
  12, 141,
  16, 142,
  22, 143,
  37, 179, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_141 [11] = {10, 140,
  12, 141,
  16, 142,
  22, 143,
  37, 180, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_142 [11] = {10, 140,
  12, 141,
  16, 142,
  22, 143,
  37, 181, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_143 [11] = {10, 140,
  12, 141,
  16, 142,
  22, 143,
  37, 182, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_151 [3] = {47, 192, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_152 [13] = {11, 203,
  17, 204,
  18, 205,
  19, 206,
  20, 207,
  50, 208, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_153 [13] = {11, 203,
  17, 209,
  18, 205,
  19, 206,
  20, 207,
  50, 208, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_155 [5] = {11, 211,
  50, 208, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_157 [3] = {63, 215, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_164 [3] = {40, 219, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_165 [3] = {40, 220, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_166 [3] = {40, 221, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_167 [3] = {40, 222, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_168 [3] = {40, 223, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_172 [3] = {41, 226, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_173 [3] = {83, 227, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_175 [3] = {34, 229, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_186 [5] = {11, 232,
  50, 208, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_187 [5] = {24, 241,
  79, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_189 [3] = {46, 243, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_194 [13] = {11, 203,
  17, 246,
  18, 205,
  19, 206,
  20, 207,
  50, 208, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_201 [7] = {11, 203,
  20, 250,
  50, 208, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_204 [3] = {46, 251, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_205 [3] = {64, 253, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_206 [3] = {65, 260, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_207 [3] = {66, 263, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_209 [3] = {46, 264, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_211 [3] = {48, 267, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_217 [5] = {24, 272,
  79, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_225 [3] = {42, 274, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_226 [3] = {44, 276, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_231 [17] = {1, 281,
  12, 282,
  13, 283,
  14, 284,
  15, 285,
  16, 286,
  22, 287,
  36, 288, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_232 [3] = {58, 290, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_235 [5] = {24, 291,
  79, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_252 [11] = {11, 203,
  18, 300,
  19, 206,
  20, 207,
  50, 208, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_254 [9] = {11, 203,
  19, 301,
  20, 207,
  50, 208, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_255 [9] = {11, 203,
  19, 302,
  20, 207,
  50, 208, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_256 [9] = {11, 203,
  19, 303,
  20, 207,
  50, 208, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_257 [9] = {11, 203,
  19, 304,
  20, 207,
  50, 208, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_258 [9] = {11, 203,
  19, 305,
  20, 207,
  50, 208, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_259 [9] = {11, 203,
  19, 306,
  20, 207,
  50, 208, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_261 [7] = {11, 203,
  20, 307,
  50, 208, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_262 [7] = {11, 203,
  20, 308,
  50, 208, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_266 [5] = {11, 310,
  50, 208, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_267 [5] = {21, 312,
  67, 313, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_272 [3] = {70, 318, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_274 [3] = {43, 320, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_277 [3] = {34, 323, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_281 [17] = {1, 281,
  12, 282,
  13, 283,
  14, 284,
  15, 285,
  16, 286,
  22, 287,
  36, 326, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_282 [17] = {1, 281,
  12, 282,
  13, 283,
  14, 284,
  15, 285,
  16, 286,
  22, 287,
  36, 327, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_283 [17] = {1, 281,
  12, 282,
  13, 283,
  14, 284,
  15, 285,
  16, 286,
  22, 287,
  36, 328, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_284 [17] = {1, 281,
  12, 282,
  13, 283,
  14, 284,
  15, 285,
  16, 286,
  22, 287,
  36, 329, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_285 [17] = {1, 281,
  12, 282,
  13, 283,
  14, 284,
  15, 285,
  16, 286,
  22, 287,
  36, 330, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_286 [17] = {1, 281,
  12, 282,
  13, 283,
  14, 284,
  15, 285,
  16, 286,
  22, 287,
  36, 331, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_287 [17] = {1, 281,
  12, 282,
  13, 283,
  14, 284,
  15, 285,
  16, 286,
  22, 287,
  36, 332, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_289 [5] = {11, 334,
  50, 208, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_291 [3] = {80, 337, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_294 [3] = {46, 338, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_295 [3] = {56, 340, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_297 [3] = {51, 342, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_298 [3] = {55, 344, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_299 [3] = {53, 346, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_300 [3] = {64, 347, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_307 [3] = {66, 348, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_308 [3] = {66, 349, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_309 [3] = {49, 351, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_310 [3] = {48, 352, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_312 [3] = {46, 354, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_320 [3] = {41, 359, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_334 [3] = {58, 363, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_336 [5] = {24, 364,
  79, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_341 [3] = {52, 370, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_345 [3] = {54, 376, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_351 [3] = {46, 378, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_357 [3] = {71, 383, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_362 [3] = {60, 387, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_364 [3] = {80, 388, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_379 [5] = {24, 392,
  79, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_380 [5] = {24, 393,
  79, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_385 [3] = {45, 397, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_386 [3] = {61, 400, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_392 [3] = {68, 406, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_393 [3] = {70, 407, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_408 [3] = {72, 415, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_415 [3] = {74, 421, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_417 [5] = {24, 423,
  79, 242, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_418 [3] = {73, 425, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_420 [3] = {75, 427, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_422 [3] = {45, 428, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_423 [3] = {68, 429, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_430 [3] = {73, 433, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_431 [3] = {76, 435, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_437 [5] = {23, 442,
  77, 443, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_439 [13] = {11, 203,
  17, 445,
  18, 205,
  19, 206,
  20, 207,
  50, 208, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_440 [13] = {11, 203,
  17, 446,
  18, 205,
  19, 206,
  20, 207,
  50, 208, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_441 [5] = {11, 447,
  50, 208, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_442 [3] = {75, 448, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_445 [3] = {77, 450, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_446 [3] = {77, 451, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_447 [3] = {78, 453, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_452 [5] = {11, 455,
  50, 208, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_453 [5] = {21, 456,
  67, 313, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_454 [3] = {77, 457, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_455 [3] = {78, 458, -1} ;

static const int16_t gSuccessorTable_easyBindings_grammar_456 [3] = {77, 459, -1} ;

static const int16_t * gSuccessorTable_easyBindings_grammar [460] = {
gSuccessorTable_easyBindings_grammar_0, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_12, gSuccessorTable_easyBindings_grammar_13, gSuccessorTable_easyBindings_grammar_14, gSuccessorTable_easyBindings_grammar_15, 
  gSuccessorTable_easyBindings_grammar_16, gSuccessorTable_easyBindings_grammar_17, gSuccessorTable_easyBindings_grammar_18, gSuccessorTable_easyBindings_grammar_19, 
  gSuccessorTable_easyBindings_grammar_20, NULL, gSuccessorTable_easyBindings_grammar_22, NULL, 
  gSuccessorTable_easyBindings_grammar_24, NULL, NULL, gSuccessorTable_easyBindings_grammar_27, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_31, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_43, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_51, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_54, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_59, 
  gSuccessorTable_easyBindings_grammar_60, gSuccessorTable_easyBindings_grammar_61, gSuccessorTable_easyBindings_grammar_62, gSuccessorTable_easyBindings_grammar_63, 
  gSuccessorTable_easyBindings_grammar_64, gSuccessorTable_easyBindings_grammar_65, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_72, gSuccessorTable_easyBindings_grammar_73, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_77, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_81, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_85, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_99, 
  gSuccessorTable_easyBindings_grammar_100, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_105, gSuccessorTable_easyBindings_grammar_106, NULL, 
  gSuccessorTable_easyBindings_grammar_108, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_112, NULL, gSuccessorTable_easyBindings_grammar_114, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_118, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_122, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_126, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_129, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_132, NULL, gSuccessorTable_easyBindings_grammar_134, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_137, gSuccessorTable_easyBindings_grammar_138, NULL, 
  gSuccessorTable_easyBindings_grammar_140, gSuccessorTable_easyBindings_grammar_141, gSuccessorTable_easyBindings_grammar_142, gSuccessorTable_easyBindings_grammar_143, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_151, 
  gSuccessorTable_easyBindings_grammar_152, gSuccessorTable_easyBindings_grammar_153, NULL, gSuccessorTable_easyBindings_grammar_155, 
  NULL, gSuccessorTable_easyBindings_grammar_157, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_164, gSuccessorTable_easyBindings_grammar_165, gSuccessorTable_easyBindings_grammar_166, gSuccessorTable_easyBindings_grammar_167, 
  gSuccessorTable_easyBindings_grammar_168, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_172, gSuccessorTable_easyBindings_grammar_173, NULL, gSuccessorTable_easyBindings_grammar_175, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_186, gSuccessorTable_easyBindings_grammar_187, 
  NULL, gSuccessorTable_easyBindings_grammar_189, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_194, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_201, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_204, gSuccessorTable_easyBindings_grammar_205, gSuccessorTable_easyBindings_grammar_206, gSuccessorTable_easyBindings_grammar_207, 
  NULL, gSuccessorTable_easyBindings_grammar_209, NULL, gSuccessorTable_easyBindings_grammar_211, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_217, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_225, gSuccessorTable_easyBindings_grammar_226, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_231, 
  gSuccessorTable_easyBindings_grammar_232, NULL, NULL, gSuccessorTable_easyBindings_grammar_235, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_252, NULL, gSuccessorTable_easyBindings_grammar_254, gSuccessorTable_easyBindings_grammar_255, 
  gSuccessorTable_easyBindings_grammar_256, gSuccessorTable_easyBindings_grammar_257, gSuccessorTable_easyBindings_grammar_258, gSuccessorTable_easyBindings_grammar_259, 
  NULL, gSuccessorTable_easyBindings_grammar_261, gSuccessorTable_easyBindings_grammar_262, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_266, gSuccessorTable_easyBindings_grammar_267, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_272, NULL, gSuccessorTable_easyBindings_grammar_274, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_277, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_281, gSuccessorTable_easyBindings_grammar_282, gSuccessorTable_easyBindings_grammar_283, 
  gSuccessorTable_easyBindings_grammar_284, gSuccessorTable_easyBindings_grammar_285, gSuccessorTable_easyBindings_grammar_286, gSuccessorTable_easyBindings_grammar_287, 
  NULL, gSuccessorTable_easyBindings_grammar_289, NULL, gSuccessorTable_easyBindings_grammar_291, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_294, gSuccessorTable_easyBindings_grammar_295, 
  NULL, gSuccessorTable_easyBindings_grammar_297, gSuccessorTable_easyBindings_grammar_298, gSuccessorTable_easyBindings_grammar_299, 
  gSuccessorTable_easyBindings_grammar_300, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_307, 
  gSuccessorTable_easyBindings_grammar_308, gSuccessorTable_easyBindings_grammar_309, gSuccessorTable_easyBindings_grammar_310, NULL, 
  gSuccessorTable_easyBindings_grammar_312, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_320, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_334, NULL, 
  gSuccessorTable_easyBindings_grammar_336, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_341, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_345, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_351, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_357, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_362, NULL, 
  gSuccessorTable_easyBindings_grammar_364, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_379, 
  gSuccessorTable_easyBindings_grammar_380, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_385, gSuccessorTable_easyBindings_grammar_386, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_392, gSuccessorTable_easyBindings_grammar_393, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_408, NULL, NULL, NULL, 
  NULL, NULL, NULL, gSuccessorTable_easyBindings_grammar_415, 
  NULL, gSuccessorTable_easyBindings_grammar_417, gSuccessorTable_easyBindings_grammar_418, NULL, 
  gSuccessorTable_easyBindings_grammar_420, NULL, gSuccessorTable_easyBindings_grammar_422, gSuccessorTable_easyBindings_grammar_423, 
  NULL, NULL, NULL, NULL, 
  NULL, NULL, gSuccessorTable_easyBindings_grammar_430, gSuccessorTable_easyBindings_grammar_431, 
  NULL, NULL, NULL, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_437, NULL, gSuccessorTable_easyBindings_grammar_439, 
  gSuccessorTable_easyBindings_grammar_440, gSuccessorTable_easyBindings_grammar_441, gSuccessorTable_easyBindings_grammar_442, NULL, 
  NULL, gSuccessorTable_easyBindings_grammar_445, gSuccessorTable_easyBindings_grammar_446, gSuccessorTable_easyBindings_grammar_447, 
  NULL, NULL, NULL, NULL, 
  gSuccessorTable_easyBindings_grammar_452, gSuccessorTable_easyBindings_grammar_453, gSuccessorTable_easyBindings_grammar_454, gSuccessorTable_easyBindings_grammar_455, 
  gSuccessorTable_easyBindings_grammar_456, NULL, NULL, NULL} ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                          Production rules infos (left non terminal, size of right string)                            
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

static const int16_t gProductionsTable_easyBindings_grammar [207 * 2] = {
  0, 1,
  1, 3,
  2, 5,
  3, 5,
  4, 6,
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
  14, 5,
  15, 6,
  16, 3,
  17, 2,
  18, 2,
  19, 2,
  20, 1,
  20, 2,
  20, 3,
  20, 1,
  21, 1,
  22, 7,
  22, 13,
  23, 1,
  22, 10,
  24, 1,
  25, 3,
  26, 5,
  27, 2,
  28, 0,
  28, 4,
  28, 2,
  28, 2,
  28, 2,
  28, 2,
  28, 2,
  28, 2,
  28, 2,
  28, 2,
  28, 2,
  29, 1,
  29, 1,
  30, 0,
  30, 3,
  31, 0,
  31, 1,
  32, 0,
  32, 1,
  33, 0,
  33, 4,
  34, 0,
  34, 3,
  35, 0,
  35, 2,
  36, 0,
  36, 2,
  36, 2,
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
  40, 0,
  40, 2,
  40, 2,
  40, 2,
  40, 2,
  40, 2,
  41, 0,
  41, 4,
  42, 1,
  42, 1,
  43, 1,
  43, 1,
  44, 0,
  44, 6,
  45, 0,
  45, 5,
  46, 0,
  46, 3,
  46, 5,
  46, 3,
  46, 3,
  46, 5,
  46, 6,
  47, 1,
  47, 1,
  48, 0,
  48, 3,
  49, 0,
  49, 2,
  50, 4,
  50, 4,
  50, 4,
  50, 4,
  50, 1,
  50, 1,
  50, 1,
  51, 0,
  51, 2,
  52, 1,
  52, 3,
  52, 1,
  53, 0,
  53, 2,
  54, 3,
  54, 3,
  54, 1,
  54, 1,
  55, 0,
  55, 2,
  56, 0,
  56, 2,
  57, 0,
  57, 2,
  58, 0,
  58, 3,
  59, 0,
  59, 2,
  60, 0,
  60, 3,
  61, 1,
  61, 1,
  62, 0,
  62, 2,
  63, 3,
  63, 4,
  63, 0,
  64, 0,
  64, 3,
  65, 0,
  65, 2,
  65, 2,
  65, 2,
  65, 2,
  65, 2,
  65, 2,
  66, 0,
  66, 3,
  66, 3,
  67, 0,
  67, 6,
  68, 0,
  68, 5,
  69, 1,
  69, 1,
  70, 0,
  70, 5,
  71, 1,
  71, 1,
  72, 0,
  72, 3,
  73, 0,
  73, 3,
  74, 1,
  74, 3,
  75, 0,
  75, 6,
  76, 0,
  76, 2,
  77, 0,
  77, 5,
  77, 3,
  77, 3,
  77, 5,
  78, 0,
  78, 3,
  79, 1,
  79, 1,
  79, 1,
  79, 2,
  79, 1,
  79, 1,
  79, 1,
  79, 4,
  80, 0,
  80, 3,
  81, 0,
  81, 3,
  82, 2,
  82, 1,
  82, 3,
  83, 0,
  83, 3,
  84, 2,
  84, 1,
  85, 1
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
  case 5 :
      rule_easyBindings_5F_syntax_entity_5F_declaration_i5_parse(inLexique) ;
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
  case 5 :
      rule_easyBindings_5F_syntax_entity_5F_declaration_i5_(parameter_1, parameter_2, inLexique) ;
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
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_document_5F_declaration_ (const GALGAS_bool  parameter_1,
                                GALGAS_astDeclarationStruct &  parameter_2,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 6 :
      rule_easyBindings_5F_syntax_document_5F_declaration_i6_(parameter_1, parameter_2, inLexique) ;
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
  case 7 :
      rule_easyBindings_5F_syntax_preferences_5F_declaration_i7_parse(inLexique) ;
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
  case 7 :
      rule_easyBindings_5F_syntax_preferences_5F_declaration_i7_(parameter_1, parameter_2, inLexique) ;
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
  case 8 :
      rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i8_parse(inLexique) ;
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
  case 8 :
      rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i8_(parameter_1, parameter_2, inLexique) ;
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
  case 9 :
      rule_easyBindings_5F_syntax_binding_5F_specification_i9_parse(inLexique) ;
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
  case 9 :
      rule_easyBindings_5F_syntax_binding_5F_specification_i9_(parameter_1, parameter_2, inLexique) ;
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
  case 10 :
      rule_easyBindings_5F_syntax_outlet_5F_declaration_i10_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_outlet_5F_declaration_ (GALGAS_outletDeclarationList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 10 :
      rule_easyBindings_5F_syntax_outlet_5F_declaration_i10_(parameter_1, inLexique) ;
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
  case 11 :
      rule_easyBindings_5F_syntax_observable_5F_property_i11_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_observable_5F_property_ (GALGAS_observablePropertyAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 11 :
      rule_easyBindings_5F_syntax_observable_5F_property_i11_(parameter_1, inLexique) ;
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
  case 12 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i12_parse(inLexique) ;
    break ;
  case 13 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i13_parse(inLexique) ;
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
  case 12 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i12_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 13 :
      rule_easyBindings_5F_syntax_transient_5F_declaration_i13_(parameter_1, parameter_2, parameter_3, inLexique) ;
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
  case 14 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i14_parse(inLexique) ;
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
  case 14 :
      rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i14_(parameter_1, parameter_2, parameter_3, parameter_4, inLexique) ;
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
  case 15 :
      rule_easyBindings_5F_syntax_toOne_5F_relationship_i15_parse(inLexique) ;
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
  case 15 :
      rule_easyBindings_5F_syntax_toOne_5F_relationship_i15_(parameter_1, parameter_2, inLexique) ;
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
  case 16 :
      rule_easyBindings_5F_syntax_toMany_5F_relationship_i16_parse(inLexique) ;
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
  case 16 :
      rule_easyBindings_5F_syntax_toMany_5F_relationship_i16_(parameter_1, parameter_2, parameter_3, inLexique) ;
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
  case 17 :
      rule_easyBindings_5F_syntax_action_5F_declaration_i17_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_action_5F_declaration_ (GALGAS_lstringlist &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 17 :
      rule_easyBindings_5F_syntax_action_5F_declaration_i17_(parameter_1, inLexique) ;
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
  case 18 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i18_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingExpression_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 18 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i18_(parameter_1, inLexique) ;
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
  case 19 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i19_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingComparison_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 19 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i19_(parameter_1, inLexique) ;
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
  case 20 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i20_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingTerm_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 20 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i20_(parameter_1, inLexique) ;
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
  case 21 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i21_parse(inLexique) ;
    break ;
  case 22 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i22_parse(inLexique) ;
    break ;
  case 23 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_parse(inLexique) ;
    break ;
  case 24 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_booleanMultipleBindingOperand_ (GALGAS_abstractBooleanMultipleBindingExpressionAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 21 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i21_(parameter_1, inLexique) ;
    break ;
  case 22 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i22_(parameter_1, inLexique) ;
    break ;
  case 23 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i23_(parameter_1, inLexique) ;
    break ;
  case 24 :
      rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i24_(parameter_1, inLexique) ;
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
  case 25 :
      rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i25_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_binding_5F_option_5F_list_ (GALGAS_bindingOptionList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 25 :
      rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i25_(parameter_1, inLexique) ;
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
  case 26 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i26_parse(inLexique) ;
    break ;
  case 27 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i27_parse(inLexique) ;
    break ;
  case 29 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i29_parse(inLexique) ;
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
  case 26 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i26_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 27 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i27_(parameter_1, parameter_2, parameter_3, inLexique) ;
    break ;
  case 29 :
      rule_easyBindings_5F_syntax_controller_5F_declaration_i29_(parameter_1, parameter_2, parameter_3, inLexique) ;
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
  case 28 :
      rule_easyBindings_5F_syntax_column_5F_bindings_i28_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_column_5F_bindings_ (GALGAS_tableViewColumnBindingAST &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 28 :
      rule_easyBindings_5F_syntax_column_5F_bindings_i28_(parameter_1, inLexique) ;
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
  case 30 :
      rule_easyBindings_5F_syntax_explicit_5F_value_i30_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_explicit_5F_value_ (GALGAS_abstractDefaultValue &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 30 :
      rule_easyBindings_5F_syntax_explicit_5F_value_i30_(parameter_1, inLexique) ;
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
  case 31 :
      rule_easyBindings_5F_syntax_xcode_5F_project_i31_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_xcode_5F_project_ (GALGAS_lstring &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 31 :
      rule_easyBindings_5F_syntax_xcode_5F_project_i31_(parameter_1, inLexique) ;
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
  case 32 :
      rule_easyBindings_5F_syntax_main_5F_xib_i32_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_ (GALGAS_mainXibDescriptorList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 32 :
      rule_easyBindings_5F_syntax_main_5F_xib_i32_(parameter_1, inLexique) ;
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
  case 33 :
      rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i33_parse(inLexique) ;
    break ;
  default :
    inLexique->internalBottomUpParserError (HERE) ;
    break ;
  }
}

void cGrammar_easyBindings_5F_grammar::nt_main_5F_xib_5F_line_ (GALGAS_mainXibLineDescriptorList &  parameter_1,
                                C_Lexique_easyBindings_5F_lexique * inLexique) {
  switch (inLexique->nextProductionIndex ()) {
  case 33 :
      rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i33_(parameter_1, inLexique) ;
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
// Productions numbers : 34 35 36 37 38 39 40 41 42 43 44
  return inLexique->nextProductionIndex () - 33 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_1' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_1 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 45 46
  return inLexique->nextProductionIndex () - 44 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_2' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_2 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 47 48
  return inLexique->nextProductionIndex () - 46 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_3' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_3 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 49 50
  return inLexique->nextProductionIndex () - 48 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_4' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_4 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 51 52
  return inLexique->nextProductionIndex () - 50 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_5' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_5 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 53 54
  return inLexique->nextProductionIndex () - 52 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_6' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_6 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 55 56
  return inLexique->nextProductionIndex () - 54 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_7' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_7 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 57 58
  return inLexique->nextProductionIndex () - 56 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_8' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_8 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 59 60 61 62 63 64 65 66
  return inLexique->nextProductionIndex () - 58 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_9' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_9 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 67 68 69 70 71
  return inLexique->nextProductionIndex () - 66 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_10' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_10 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 72 73 74 75 76 77 78 79
  return inLexique->nextProductionIndex () - 71 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_11' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_11 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 80 81
  return inLexique->nextProductionIndex () - 79 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_12' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_12 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 82 83 84 85 86 87
  return inLexique->nextProductionIndex () - 81 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_13' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_13 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 88 89
  return inLexique->nextProductionIndex () - 87 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_14' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_14 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 90 91
  return inLexique->nextProductionIndex () - 89 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_15' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_15 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 92 93
  return inLexique->nextProductionIndex () - 91 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_16' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_16 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 94 95
  return inLexique->nextProductionIndex () - 93 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_17' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_17 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 96 97
  return inLexique->nextProductionIndex () - 95 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_18' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_18 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 98 99 100 101 102 103 104
  return inLexique->nextProductionIndex () - 97 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_19' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_19 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 105 106
  return inLexique->nextProductionIndex () - 104 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_20' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_20 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 107 108
  return inLexique->nextProductionIndex () - 106 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_21' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_21 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 109 110
  return inLexique->nextProductionIndex () - 108 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_22' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_22 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 111 112 113 114 115 116 117
  return inLexique->nextProductionIndex () - 110 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_23' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_23 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 118 119
  return inLexique->nextProductionIndex () - 117 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_24' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_24 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 120 121 122
  return inLexique->nextProductionIndex () - 119 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_25' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_25 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 123 124
  return inLexique->nextProductionIndex () - 122 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_26' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_26 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 125 126 127 128
  return inLexique->nextProductionIndex () - 124 ;
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
// Productions numbers : 141 142
  return inLexique->nextProductionIndex () - 140 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_34' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_34 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 143 144
  return inLexique->nextProductionIndex () - 142 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_35' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_35 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 145 146 147
  return inLexique->nextProductionIndex () - 144 ;
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
// Productions numbers : 150 151 152 153 154 155 156
  return inLexique->nextProductionIndex () - 149 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_38' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_38 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 157 158 159
  return inLexique->nextProductionIndex () - 156 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_39' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_39 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 160 161
  return inLexique->nextProductionIndex () - 159 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_40' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_40 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 162 163
  return inLexique->nextProductionIndex () - 161 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_41' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_41 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 164 165
  return inLexique->nextProductionIndex () - 163 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_42' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_42 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 166 167
  return inLexique->nextProductionIndex () - 165 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_43' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_43 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 168 169
  return inLexique->nextProductionIndex () - 167 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_44' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_44 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 170 171
  return inLexique->nextProductionIndex () - 169 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_45' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_45 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 172 173
  return inLexique->nextProductionIndex () - 171 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_46' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_46 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 174 175
  return inLexique->nextProductionIndex () - 173 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_47' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_47 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 176 177
  return inLexique->nextProductionIndex () - 175 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_48' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_48 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 178 179
  return inLexique->nextProductionIndex () - 177 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_49' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_49 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 180 181 182 183 184
  return inLexique->nextProductionIndex () - 179 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_50' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_50 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 185 186
  return inLexique->nextProductionIndex () - 184 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_51' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_51 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 187 188 189 190 191 192 193 194
  return inLexique->nextProductionIndex () - 186 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_52' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_52 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 195 196
  return inLexique->nextProductionIndex () - 194 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_53' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_53 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 197 198
  return inLexique->nextProductionIndex () - 196 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_54' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_54 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 199 200 201
  return inLexique->nextProductionIndex () - 198 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_55' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_55 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 202 203
  return inLexique->nextProductionIndex () - 201 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_56' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_56 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 204 205
  return inLexique->nextProductionIndex () - 203 ;
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
                                                const GALGAS_stringset & inOperand4,
                                                const GALGAS_mainXibDescriptorList & inOperand5) :
mProperty_mOutletDeclarationList (inOperand0),
mProperty_mSimpleStoredAttributeList (inOperand1),
mProperty_mActionDeclarationList (inOperand2),
mProperty_mExternSwiftFunctionList (inOperand3),
mProperty_mSignatureList (inOperand4),
mProperty_mMainXibDescriptorList (inOperand5) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration GALGAS_prefDeclaration::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_prefDeclaration (GALGAS_outletDeclarationList::constructor_emptyList (HERE),
                                 GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                 GALGAS_lstringlist::constructor_emptyList (HERE),
                                 GALGAS_externSwiftFunctionList::constructor_emptyList (HERE),
                                 GALGAS_stringset::constructor_emptySet (HERE),
                                 GALGAS_mainXibDescriptorList::constructor_emptyList (HERE)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_prefDeclaration GALGAS_prefDeclaration::constructor_new (const GALGAS_outletDeclarationList & inOperand0,
                                                                const GALGAS_simpleStoredPropertyList & inOperand1,
                                                                const GALGAS_lstringlist & inOperand2,
                                                                const GALGAS_externSwiftFunctionList & inOperand3,
                                                                const GALGAS_stringset & inOperand4,
                                                                const GALGAS_mainXibDescriptorList & inOperand5 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefDeclaration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_prefDeclaration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
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
    result = mProperty_mSignatureList.objectCompare (inOperand.mProperty_mSignatureList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMainXibDescriptorList.objectCompare (inOperand.mProperty_mMainXibDescriptorList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

bool GALGAS_prefDeclaration::isValid (void) const {
  return mProperty_mOutletDeclarationList.isValid () && mProperty_mSimpleStoredAttributeList.isValid () && mProperty_mActionDeclarationList.isValid () && mProperty_mExternSwiftFunctionList.isValid () && mProperty_mSignatureList.isValid () && mProperty_mMainXibDescriptorList.isValid () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void GALGAS_prefDeclaration::drop (void) {
  mProperty_mOutletDeclarationList.drop () ;
  mProperty_mSimpleStoredAttributeList.drop () ;
  mProperty_mActionDeclarationList.drop () ;
  mProperty_mExternSwiftFunctionList.drop () ;
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
  if (kOperandEqual == result) {
    result = mProperty_mExternSwiftDelegateList.objectCompare (p->mProperty_mExternSwiftDelegateList) ;
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
                                                       GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_externSwiftDelegateList::constructor_emptyList (HERE)
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
                                                                          const GALGAS_bool & inAttribute_mIsGraphicEntity,
                                                                          const GALGAS_externSwiftDelegateList & inAttribute_mExternSwiftDelegateList
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_entityDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mIsAbstract.isValid () && inAttribute_mIsUserDefined.isValid () && inAttribute_mSuperEntityName.isValid () && inAttribute_mSimpleStoredAttributeList.isValid () && inAttribute_mSignatureList.isValid () && inAttribute_mActionDeclarationList.isValid () && inAttribute_mObsoleteEntityNames.isValid () && inAttribute_mIsGraphicEntity.isValid () && inAttribute_mExternSwiftDelegateList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_entityDeclarationAST (inAttribute_mClassName, inAttribute_mIsAbstract, inAttribute_mIsUserDefined, inAttribute_mSuperEntityName, inAttribute_mSimpleStoredAttributeList, inAttribute_mSignatureList, inAttribute_mActionDeclarationList, inAttribute_mObsoleteEntityNames, inAttribute_mIsGraphicEntity, inAttribute_mExternSwiftDelegateList COMMA_THERE)) ;
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

GALGAS_externSwiftDelegateList GALGAS_entityDeclarationAST::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftDelegateList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    result = p->mProperty_mExternSwiftDelegateList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList cPtr_entityDeclarationAST::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftDelegateList ;
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
                                                      const GALGAS_bool & in_mIsGraphicEntity,
                                                      const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mIsAbstract (in_mIsAbstract),
mProperty_mIsUserDefined (in_mIsUserDefined),
mProperty_mSuperEntityName (in_mSuperEntityName),
mProperty_mSimpleStoredAttributeList (in_mSimpleStoredAttributeList),
mProperty_mSignatureList (in_mSignatureList),
mProperty_mActionDeclarationList (in_mActionDeclarationList),
mProperty_mObsoleteEntityNames (in_mObsoleteEntityNames),
mProperty_mIsGraphicEntity (in_mIsGraphicEntity),
mProperty_mExternSwiftDelegateList (in_mExternSwiftDelegateList) {
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
  ioString << ", " ;
  mProperty_mExternSwiftDelegateList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_entityDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_entityDeclarationAST (mProperty_mClassName, mProperty_mIsAbstract, mProperty_mIsUserDefined, mProperty_mSuperEntityName, mProperty_mSimpleStoredAttributeList, mProperty_mSignatureList, mProperty_mActionDeclarationList, mProperty_mObsoleteEntityNames, mProperty_mIsGraphicEntity, mProperty_mExternSwiftDelegateList COMMA_THERE)) ;
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

typeComparisonResult cPtr_entityForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_entityForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mEntityName.objectCompare (p->mProperty_mEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperEntityName.objectCompare (p->mProperty_mSuperEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyGenerationList.objectCompare (p->mProperty_mPropertyGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSignatureSet.objectCompare (p->mProperty_mSignatureSet) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsGraphicEntity.objectCompare (p->mProperty_mIsGraphicEntity) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsAbstract.objectCompare (p->mProperty_mIsAbstract) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOverridenTransients.objectCompare (p->mProperty_mOverridenTransients) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternSwiftDelegateList.objectCompare (p->mProperty_mExternSwiftDelegateList) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_entityForGeneration::objectCompare (const GALGAS_entityForGeneration & inOperand) const {
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

GALGAS_entityForGeneration::GALGAS_entityForGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityForGeneration GALGAS_entityForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_entityForGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                      GALGAS_string::constructor_default (HERE),
                                                      GALGAS_propertyGenerationList::constructor_emptyList (HERE),
                                                      GALGAS_stringset::constructor_emptySet (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_stringset::constructor_emptySet (HERE),
                                                      GALGAS_externSwiftDelegateList::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityForGeneration::GALGAS_entityForGeneration (const cPtr_entityForGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_entityForGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityForGeneration GALGAS_entityForGeneration::constructor_new (const GALGAS_string & inAttribute_mEntityName,
                                                                        const GALGAS_string & inAttribute_mSuperEntityName,
                                                                        const GALGAS_propertyGenerationList & inAttribute_mPropertyGenerationList,
                                                                        const GALGAS_stringset & inAttribute_mSignatureSet,
                                                                        const GALGAS_bool & inAttribute_mIsGraphicEntity,
                                                                        const GALGAS_bool & inAttribute_mIsAbstract,
                                                                        const GALGAS_stringset & inAttribute_mOverridenTransients,
                                                                        const GALGAS_externSwiftDelegateList & inAttribute_mExternSwiftDelegateList
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_entityForGeneration result ;
  if (inAttribute_mEntityName.isValid () && inAttribute_mSuperEntityName.isValid () && inAttribute_mPropertyGenerationList.isValid () && inAttribute_mSignatureSet.isValid () && inAttribute_mIsGraphicEntity.isValid () && inAttribute_mIsAbstract.isValid () && inAttribute_mOverridenTransients.isValid () && inAttribute_mExternSwiftDelegateList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_entityForGeneration (inAttribute_mEntityName, inAttribute_mSuperEntityName, inAttribute_mPropertyGenerationList, inAttribute_mSignatureSet, inAttribute_mIsGraphicEntity, inAttribute_mIsAbstract, inAttribute_mOverridenTransients, inAttribute_mExternSwiftDelegateList COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_entityForGeneration::getter_mEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_entityForGeneration::getter_mEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_entityForGeneration::getter_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mSuperEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_entityForGeneration::getter_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSuperEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList GALGAS_entityForGeneration::getter_mPropertyGenerationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyGenerationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mPropertyGenerationList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyGenerationList cPtr_entityForGeneration::getter_mPropertyGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyGenerationList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_entityForGeneration::getter_mSignatureSet (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringset result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mSignatureSet ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset cPtr_entityForGeneration::getter_mSignatureSet (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignatureSet ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_entityForGeneration::getter_mIsGraphicEntity (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mIsGraphicEntity ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_entityForGeneration::getter_mIsGraphicEntity (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsGraphicEntity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_entityForGeneration::getter_mIsAbstract (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mIsAbstract ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_entityForGeneration::getter_mIsAbstract (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsAbstract ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset GALGAS_entityForGeneration::getter_mOverridenTransients (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringset result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mOverridenTransients ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset cPtr_entityForGeneration::getter_mOverridenTransients (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOverridenTransients ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList GALGAS_entityForGeneration::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftDelegateList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    result = p->mProperty_mExternSwiftDelegateList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_externSwiftDelegateList cPtr_entityForGeneration::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftDelegateList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @entityForGeneration class                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_entityForGeneration::cPtr_entityForGeneration (const GALGAS_string & in_mEntityName,
                                                    const GALGAS_string & in_mSuperEntityName,
                                                    const GALGAS_propertyGenerationList & in_mPropertyGenerationList,
                                                    const GALGAS_stringset & in_mSignatureSet,
                                                    const GALGAS_bool & in_mIsGraphicEntity,
                                                    const GALGAS_bool & in_mIsAbstract,
                                                    const GALGAS_stringset & in_mOverridenTransients,
                                                    const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mEntityName (in_mEntityName),
mProperty_mSuperEntityName (in_mSuperEntityName),
mProperty_mPropertyGenerationList (in_mPropertyGenerationList),
mProperty_mSignatureSet (in_mSignatureSet),
mProperty_mIsGraphicEntity (in_mIsGraphicEntity),
mProperty_mIsAbstract (in_mIsAbstract),
mProperty_mOverridenTransients (in_mOverridenTransients),
mProperty_mExternSwiftDelegateList (in_mExternSwiftDelegateList) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_entityForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityForGeneration ;
}

void cPtr_entityForGeneration::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@entityForGeneration:" ;
  mProperty_mEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSignatureSet.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsGraphicEntity.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOverridenTransients.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternSwiftDelegateList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_entityForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_entityForGeneration (mProperty_mEntityName, mProperty_mSuperEntityName, mProperty_mPropertyGenerationList, mProperty_mSignatureSet, mProperty_mIsGraphicEntity, mProperty_mIsAbstract, mProperty_mOverridenTransients, mProperty_mExternSwiftDelegateList COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                              @entityForGeneration type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityForGeneration ("entityForGeneration",
                                            & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_entityForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityForGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_entityForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityForGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_entityForGeneration GALGAS_entityForGeneration::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_entityForGeneration result ;
  const GALGAS_entityForGeneration * p = (const GALGAS_entityForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_transientPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_transientPropertyGeneration * p = (const cPtr_transientPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDependencyList.objectCompare (p->mProperty_mDependencyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternFunctionName.objectCompare (p->mProperty_mExternFunctionName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGenerate.objectCompare (p->mProperty_mGenerate) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_transientPropertyGeneration::objectCompare (const GALGAS_transientPropertyGeneration & inOperand) const {
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

GALGAS_transientPropertyGeneration::GALGAS_transientPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyGeneration::GALGAS_transientPropertyGeneration (const cPtr_transientPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientPropertyGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyGeneration GALGAS_transientPropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                        const GALGAS_string & inAttribute_mClassName,
                                                                                        const GALGAS_typeKind & inAttribute_mType,
                                                                                        const GALGAS_transientDependencyListForGeneration & inAttribute_mDependencyList,
                                                                                        const GALGAS_string & inAttribute_mExternFunctionName,
                                                                                        const GALGAS_bool & inAttribute_mGenerate
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_transientPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mClassName.isValid () && inAttribute_mType.isValid () && inAttribute_mDependencyList.isValid () && inAttribute_mExternFunctionName.isValid () && inAttribute_mGenerate.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_transientPropertyGeneration (inAttribute_mPropertyName, inAttribute_mClassName, inAttribute_mType, inAttribute_mDependencyList, inAttribute_mExternFunctionName, inAttribute_mGenerate COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_transientPropertyGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientPropertyGeneration * p = (const cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    result = p->mProperty_mClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_transientPropertyGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind GALGAS_transientPropertyGeneration::getter_mType (UNUSED_LOCATION_ARGS) const {
  GALGAS_typeKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientPropertyGeneration * p = (const cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    result = p->mProperty_mType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_typeKind cPtr_transientPropertyGeneration::getter_mType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration GALGAS_transientPropertyGeneration::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_transientDependencyListForGeneration result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientPropertyGeneration * p = (const cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    result = p->mProperty_mDependencyList ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientDependencyListForGeneration cPtr_transientPropertyGeneration::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependencyList ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_transientPropertyGeneration::getter_mExternFunctionName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientPropertyGeneration * p = (const cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    result = p->mProperty_mExternFunctionName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_transientPropertyGeneration::getter_mExternFunctionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternFunctionName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_transientPropertyGeneration::getter_mGenerate (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientPropertyGeneration * p = (const cPtr_transientPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyGeneration) ;
    result = p->mProperty_mGenerate ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_transientPropertyGeneration::getter_mGenerate (UNUSED_LOCATION_ARGS) const {
  return mProperty_mGenerate ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @transientPropertyGeneration class                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_transientPropertyGeneration::cPtr_transientPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                                    const GALGAS_string & in_mClassName,
                                                                    const GALGAS_typeKind & in_mType,
                                                                    const GALGAS_transientDependencyListForGeneration & in_mDependencyList,
                                                                    const GALGAS_string & in_mExternFunctionName,
                                                                    const GALGAS_bool & in_mGenerate
                                                                    COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mClassName (in_mClassName),
mProperty_mType (in_mType),
mProperty_mDependencyList (in_mDependencyList),
mProperty_mExternFunctionName (in_mExternFunctionName),
mProperty_mGenerate (in_mGenerate) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_transientPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGeneration ;
}

void cPtr_transientPropertyGeneration::description (C_String & ioString,
                                                    const int32_t inIndentation) const {
  ioString << "[@transientPropertyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternFunctionName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGenerate.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_transientPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_transientPropertyGeneration (mProperty_mPropertyName, mProperty_mClassName, mProperty_mType, mProperty_mDependencyList, mProperty_mExternFunctionName, mProperty_mGenerate COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          @transientPropertyGeneration type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientPropertyGeneration ("transientPropertyGeneration",
                                                    & kTypeDescriptor_GALGAS_propertyGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_transientPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_transientPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientPropertyGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_transientPropertyGeneration GALGAS_transientPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_transientPropertyGeneration result ;
  const GALGAS_transientPropertyGeneration * p = (const GALGAS_transientPropertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_atomicPropertyDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_atomicPropertyDeclarationAST * p = (const cPtr_atomicPropertyDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyTypeName.objectCompare (p->mProperty_mPropertyTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDefaultValue.objectCompare (p->mProperty_mDefaultValue) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNeedsValidation.objectCompare (p->mProperty_mNeedsValidation) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_atomicPropertyDeclarationAST::objectCompare (const GALGAS_atomicPropertyDeclarationAST & inOperand) const {
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

GALGAS_atomicPropertyDeclarationAST::GALGAS_atomicPropertyDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyDeclarationAST::GALGAS_atomicPropertyDeclarationAST (const cPtr_atomicPropertyDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicPropertyDeclarationAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyDeclarationAST GALGAS_atomicPropertyDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                          const GALGAS_lstring & inAttribute_mPropertyTypeName,
                                                                                          const GALGAS_lstring & inAttribute_mPropertyName,
                                                                                          const GALGAS_abstractDefaultValue & inAttribute_mDefaultValue,
                                                                                          const GALGAS_bool & inAttribute_mNeedsValidation
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mPropertyTypeName.isValid () && inAttribute_mPropertyName.isValid () && inAttribute_mDefaultValue.isValid () && inAttribute_mNeedsValidation.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_atomicPropertyDeclarationAST (inAttribute_mClassName, inAttribute_mPropertyTypeName, inAttribute_mPropertyName, inAttribute_mDefaultValue, inAttribute_mNeedsValidation COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_atomicPropertyDeclarationAST::getter_mPropertyTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyDeclarationAST * p = (const cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    result = p->mProperty_mPropertyTypeName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_atomicPropertyDeclarationAST::getter_mPropertyTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyTypeName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_atomicPropertyDeclarationAST::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyDeclarationAST * p = (const cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    result = p->mProperty_mPropertyName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_atomicPropertyDeclarationAST::getter_mPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue GALGAS_atomicPropertyDeclarationAST::getter_mDefaultValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_abstractDefaultValue result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyDeclarationAST * p = (const cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    result = p->mProperty_mDefaultValue ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_abstractDefaultValue cPtr_atomicPropertyDeclarationAST::getter_mDefaultValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultValue ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool GALGAS_atomicPropertyDeclarationAST::getter_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_atomicPropertyDeclarationAST * p = (const cPtr_atomicPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicPropertyDeclarationAST) ;
    result = p->mProperty_mNeedsValidation ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_bool cPtr_atomicPropertyDeclarationAST::getter_mNeedsValidation (UNUSED_LOCATION_ARGS) const {
  return mProperty_mNeedsValidation ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                Pointer class for @atomicPropertyDeclarationAST class                                *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_atomicPropertyDeclarationAST::cPtr_atomicPropertyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                      const GALGAS_lstring & in_mPropertyTypeName,
                                                                      const GALGAS_lstring & in_mPropertyName,
                                                                      const GALGAS_abstractDefaultValue & in_mDefaultValue,
                                                                      const GALGAS_bool & in_mNeedsValidation
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mPropertyTypeName (in_mPropertyTypeName),
mProperty_mPropertyName (in_mPropertyName),
mProperty_mDefaultValue (in_mDefaultValue),
mProperty_mNeedsValidation (in_mNeedsValidation) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_atomicPropertyDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ;
}

void cPtr_atomicPropertyDeclarationAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@atomicPropertyDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDefaultValue.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mNeedsValidation.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_atomicPropertyDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_atomicPropertyDeclarationAST (mProperty_mClassName, mProperty_mPropertyTypeName, mProperty_mPropertyName, mProperty_mDefaultValue, mProperty_mNeedsValidation COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         @atomicPropertyDeclarationAST type                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ("atomicPropertyDeclarationAST",
                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_atomicPropertyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_atomicPropertyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicPropertyDeclarationAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_atomicPropertyDeclarationAST GALGAS_atomicPropertyDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_atomicPropertyDeclarationAST result ;
  const GALGAS_atomicPropertyDeclarationAST * p = (const GALGAS_atomicPropertyDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicPropertyDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_toOneRelationshipAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_toOneRelationshipAST * p = (const cPtr_toOneRelationshipAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDestinationEntityName.objectCompare (p->mProperty_mDestinationEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToOneRelationshipName.objectCompare (p->mProperty_mToOneRelationshipName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOppositeRelationshipName.objectCompare (p->mProperty_mOppositeRelationshipName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInverseRelationMultiplicity.objectCompare (p->mProperty_mInverseRelationMultiplicity) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_toOneRelationshipAST::objectCompare (const GALGAS_toOneRelationshipAST & inOperand) const {
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

GALGAS_toOneRelationshipAST::GALGAS_toOneRelationshipAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipAST::GALGAS_toOneRelationshipAST (const cPtr_toOneRelationshipAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toOneRelationshipAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipAST GALGAS_toOneRelationshipAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                          const GALGAS_lstring & inAttribute_mDestinationEntityName,
                                                                          const GALGAS_lstring & inAttribute_mToOneRelationshipName,
                                                                          const GALGAS_lstring & inAttribute_mOppositeRelationshipName,
                                                                          const GALGAS_propertyMultiplicity & inAttribute_mInverseRelationMultiplicity
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_toOneRelationshipAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mDestinationEntityName.isValid () && inAttribute_mToOneRelationshipName.isValid () && inAttribute_mOppositeRelationshipName.isValid () && inAttribute_mInverseRelationMultiplicity.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_toOneRelationshipAST (inAttribute_mClassName, inAttribute_mDestinationEntityName, inAttribute_mToOneRelationshipName, inAttribute_mOppositeRelationshipName, inAttribute_mInverseRelationMultiplicity COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toOneRelationshipAST::getter_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOneRelationshipAST * p = (const cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    result = p->mProperty_mDestinationEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_toOneRelationshipAST::getter_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDestinationEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toOneRelationshipAST::getter_mToOneRelationshipName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOneRelationshipAST * p = (const cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    result = p->mProperty_mToOneRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_toOneRelationshipAST::getter_mToOneRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToOneRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toOneRelationshipAST::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOneRelationshipAST * p = (const cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    result = p->mProperty_mOppositeRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_toOneRelationshipAST::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOppositeRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_toOneRelationshipAST::getter_mInverseRelationMultiplicity (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyMultiplicity result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOneRelationshipAST * p = (const cPtr_toOneRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOneRelationshipAST) ;
    result = p->mProperty_mInverseRelationMultiplicity ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity cPtr_toOneRelationshipAST::getter_mInverseRelationMultiplicity (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInverseRelationMultiplicity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                    Pointer class for @toOneRelationshipAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_toOneRelationshipAST::cPtr_toOneRelationshipAST (const GALGAS_lstring & in_mClassName,
                                                      const GALGAS_lstring & in_mDestinationEntityName,
                                                      const GALGAS_lstring & in_mToOneRelationshipName,
                                                      const GALGAS_lstring & in_mOppositeRelationshipName,
                                                      const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mDestinationEntityName (in_mDestinationEntityName),
mProperty_mToOneRelationshipName (in_mToOneRelationshipName),
mProperty_mOppositeRelationshipName (in_mOppositeRelationshipName),
mProperty_mInverseRelationMultiplicity (in_mInverseRelationMultiplicity) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_toOneRelationshipAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneRelationshipAST ;
}

void cPtr_toOneRelationshipAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@toOneRelationshipAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDestinationEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToOneRelationshipName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOppositeRelationshipName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInverseRelationMultiplicity.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_toOneRelationshipAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_toOneRelationshipAST (mProperty_mClassName, mProperty_mDestinationEntityName, mProperty_mToOneRelationshipName, mProperty_mOppositeRelationshipName, mProperty_mInverseRelationMultiplicity COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @toOneRelationshipAST type                                              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOneRelationshipAST ("toOneRelationshipAST",
                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toOneRelationshipAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneRelationshipAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toOneRelationshipAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOneRelationshipAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOneRelationshipAST GALGAS_toOneRelationshipAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_toOneRelationshipAST result ;
  const GALGAS_toOneRelationshipAST * p = (const GALGAS_toOneRelationshipAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOneRelationshipAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneRelationshipAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_toOnePropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRelationshipType.objectCompare (p->mProperty_mRelationshipType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOppositeRelationshipName.objectCompare (p->mProperty_mOppositeRelationshipName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInverseRelationMultiplicity.objectCompare (p->mProperty_mInverseRelationMultiplicity) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDestinationEntityObservablePropertyMap.objectCompare (p->mProperty_mDestinationEntityObservablePropertyMap) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_toOnePropertyGeneration::objectCompare (const GALGAS_toOnePropertyGeneration & inOperand) const {
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

GALGAS_toOnePropertyGeneration::GALGAS_toOnePropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGeneration::GALGAS_toOnePropertyGeneration (const cPtr_toOnePropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toOnePropertyGeneration) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGeneration GALGAS_toOnePropertyGeneration::constructor_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                const GALGAS_string & inAttribute_mClassName,
                                                                                const GALGAS_propertyKind & inAttribute_mRelationshipType,
                                                                                const GALGAS_string & inAttribute_mOppositeRelationshipName,
                                                                                const GALGAS_propertyMultiplicity & inAttribute_mInverseRelationMultiplicity,
                                                                                const GALGAS_propertyMap & inAttribute_mDestinationEntityObservablePropertyMap
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_toOnePropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mClassName.isValid () && inAttribute_mRelationshipType.isValid () && inAttribute_mOppositeRelationshipName.isValid () && inAttribute_mInverseRelationMultiplicity.isValid () && inAttribute_mDestinationEntityObservablePropertyMap.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_toOnePropertyGeneration (inAttribute_mPropertyName, inAttribute_mClassName, inAttribute_mRelationshipType, inAttribute_mOppositeRelationshipName, inAttribute_mInverseRelationMultiplicity, inAttribute_mDestinationEntityObservablePropertyMap COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toOnePropertyGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    result = p->mProperty_mClassName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_toOnePropertyGeneration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind GALGAS_toOnePropertyGeneration::getter_mRelationshipType (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyKind result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    result = p->mProperty_mRelationshipType ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyKind cPtr_toOnePropertyGeneration::getter_mRelationshipType (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRelationshipType ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string GALGAS_toOnePropertyGeneration::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  GALGAS_string result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    result = p->mProperty_mOppositeRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string cPtr_toOnePropertyGeneration::getter_mOppositeRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOppositeRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity GALGAS_toOnePropertyGeneration::getter_mInverseRelationMultiplicity (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyMultiplicity result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    result = p->mProperty_mInverseRelationMultiplicity ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMultiplicity cPtr_toOnePropertyGeneration::getter_mInverseRelationMultiplicity (UNUSED_LOCATION_ARGS) const {
  return mProperty_mInverseRelationMultiplicity ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap GALGAS_toOnePropertyGeneration::getter_mDestinationEntityObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyMap result ;
  if (NULL != mObjectPtr) {
    const cPtr_toOnePropertyGeneration * p = (const cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    result = p->mProperty_mDestinationEntityObservablePropertyMap ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_propertyMap cPtr_toOnePropertyGeneration::getter_mDestinationEntityObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDestinationEntityObservablePropertyMap ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                  Pointer class for @toOnePropertyGeneration class                                   *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_toOnePropertyGeneration::cPtr_toOnePropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                            const GALGAS_string & in_mClassName,
                                                            const GALGAS_propertyKind & in_mRelationshipType,
                                                            const GALGAS_string & in_mOppositeRelationshipName,
                                                            const GALGAS_propertyMultiplicity & in_mInverseRelationMultiplicity,
                                                            const GALGAS_propertyMap & in_mDestinationEntityObservablePropertyMap
                                                            COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mClassName (in_mClassName),
mProperty_mRelationshipType (in_mRelationshipType),
mProperty_mOppositeRelationshipName (in_mOppositeRelationshipName),
mProperty_mInverseRelationMultiplicity (in_mInverseRelationMultiplicity),
mProperty_mDestinationEntityObservablePropertyMap (in_mDestinationEntityObservablePropertyMap) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_toOnePropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGeneration ;
}

void cPtr_toOnePropertyGeneration::description (C_String & ioString,
                                                const int32_t inIndentation) const {
  ioString << "[@toOnePropertyGeneration:" ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRelationshipType.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOppositeRelationshipName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mInverseRelationMultiplicity.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDestinationEntityObservablePropertyMap.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_toOnePropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_toOnePropertyGeneration (mProperty_mPropertyName, mProperty_mClassName, mProperty_mRelationshipType, mProperty_mOppositeRelationshipName, mProperty_mInverseRelationMultiplicity, mProperty_mDestinationEntityObservablePropertyMap COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            @toOnePropertyGeneration type                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toOnePropertyGeneration ("toOnePropertyGeneration",
                                                & kTypeDescriptor_GALGAS_propertyGeneration) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toOnePropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGeneration ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toOnePropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toOnePropertyGeneration (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toOnePropertyGeneration GALGAS_toOnePropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_toOnePropertyGeneration result ;
  const GALGAS_toOnePropertyGeneration * p = (const GALGAS_toOnePropertyGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toOnePropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOnePropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//   Object comparison                                                                                                 *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

typeComparisonResult cPtr_toManyRelationshipAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_toManyRelationshipAST * p = (const cPtr_toManyRelationshipAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDestinationEntityName.objectCompare (p->mProperty_mDestinationEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToManyRelationshipName.objectCompare (p->mProperty_mToManyRelationshipName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOption.objectCompare (p->mProperty_mOption) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*


typeComparisonResult GALGAS_toManyRelationshipAST::objectCompare (const GALGAS_toManyRelationshipAST & inOperand) const {
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

GALGAS_toManyRelationshipAST::GALGAS_toManyRelationshipAST (void) :
GALGAS_abstractDeclarationAST () {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipAST::GALGAS_toManyRelationshipAST (const cPtr_toManyRelationshipAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toManyRelationshipAST) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipAST GALGAS_toManyRelationshipAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                            const GALGAS_lstring & inAttribute_mDestinationEntityName,
                                                                            const GALGAS_lstring & inAttribute_mToManyRelationshipName,
                                                                            const GALGAS_toManyRelationshipOptionAST & inAttribute_mOption
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mDestinationEntityName.isValid () && inAttribute_mToManyRelationshipName.isValid () && inAttribute_mOption.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_toManyRelationshipAST (inAttribute_mClassName, inAttribute_mDestinationEntityName, inAttribute_mToManyRelationshipName, inAttribute_mOption COMMA_THERE)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toManyRelationshipAST::getter_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyRelationshipAST * p = (const cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    result = p->mProperty_mDestinationEntityName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_toManyRelationshipAST::getter_mDestinationEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDestinationEntityName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring GALGAS_toManyRelationshipAST::getter_mToManyRelationshipName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyRelationshipAST * p = (const cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    result = p->mProperty_mToManyRelationshipName ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_lstring cPtr_toManyRelationshipAST::getter_mToManyRelationshipName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToManyRelationshipName ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipOptionAST GALGAS_toManyRelationshipAST::getter_mOption (UNUSED_LOCATION_ARGS) const {
  GALGAS_toManyRelationshipOptionAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_toManyRelationshipAST * p = (const cPtr_toManyRelationshipAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toManyRelationshipAST) ;
    result = p->mProperty_mOption ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipOptionAST cPtr_toManyRelationshipAST::getter_mOption (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOption ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                   Pointer class for @toManyRelationshipAST class                                    *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

cPtr_toManyRelationshipAST::cPtr_toManyRelationshipAST (const GALGAS_lstring & in_mClassName,
                                                        const GALGAS_lstring & in_mDestinationEntityName,
                                                        const GALGAS_lstring & in_mToManyRelationshipName,
                                                        const GALGAS_toManyRelationshipOptionAST & in_mOption
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mDestinationEntityName (in_mDestinationEntityName),
mProperty_mToManyRelationshipName (in_mToManyRelationshipName),
mProperty_mOption (in_mOption) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * cPtr_toManyRelationshipAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipAST ;
}

void cPtr_toManyRelationshipAST::description (C_String & ioString,
                                              const int32_t inIndentation) const {
  ioString << "[@toManyRelationshipAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDestinationEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToManyRelationshipName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOption.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

acPtr_class * cPtr_toManyRelationshipAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_toManyRelationshipAST (mProperty_mClassName, mProperty_mDestinationEntityName, mProperty_mToManyRelationshipName, mProperty_mOption COMMA_THERE)) ;
  return ptr ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                             @toManyRelationshipAST type                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyRelationshipAST ("toManyRelationshipAST",
                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

const C_galgas_type_descriptor * GALGAS_toManyRelationshipAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipAST ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

AC_GALGAS_root * GALGAS_toManyRelationshipAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyRelationshipAST (*this)) ;
  }
  return result ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_toManyRelationshipAST GALGAS_toManyRelationshipAST::extractObject (const GALGAS_object & inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_toManyRelationshipAST result ;
  const GALGAS_toManyRelationshipAST * p = (const GALGAS_toManyRelationshipAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_toManyRelationshipAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

