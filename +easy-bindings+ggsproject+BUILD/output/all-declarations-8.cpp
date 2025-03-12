#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//--------------------------------------------------------------------------------------------------
//
//Optional @autoLayoutOutletMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap_2E_element_3F_::GGS_autoLayoutOutletMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap_2E_element_3F_::GGS_autoLayoutOutletMap_2E_element_3F_ (const GGS_autoLayoutOutletMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap_2E_element_3F_ GGS_autoLayoutOutletMap_2E_element_3F_::init_nil (void) {
  GGS_autoLayoutOutletMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutOutletMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutOutletMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_autoLayoutOutletMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletMap_2E_element_3F_::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutOutletMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutOutletMap_2E_element_3F_ ("autoLayoutOutletMap.element?",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutOutletMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutOutletMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutOutletMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutOutletMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap_2E_element_3F_ GGS_autoLayoutOutletMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_autoLayoutOutletMap_2E_element_3F_ result ;
  const GGS_autoLayoutOutletMap_2E_element_3F_ * p = (const GGS_autoLayoutOutletMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutOutletMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutOutletMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap_2E_element::GGS_outletClassMap_2E_element (void) :
mProperty_lkey (),
mProperty_mSuperClassName (),
mProperty_mHandlesRunAction (),
mProperty_mHandlesTableValueBinding (),
mProperty_mHandleEnabledBinding (),
mProperty_mHandleHiddenBinding (),
mProperty_mHandleGraphicControllerBinding (),
mProperty_mUserDefined () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap_2E_element::GGS_outletClassMap_2E_element (const GGS_outletClassMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mSuperClassName (inSource.mProperty_mSuperClassName),
mProperty_mHandlesRunAction (inSource.mProperty_mHandlesRunAction),
mProperty_mHandlesTableValueBinding (inSource.mProperty_mHandlesTableValueBinding),
mProperty_mHandleEnabledBinding (inSource.mProperty_mHandleEnabledBinding),
mProperty_mHandleHiddenBinding (inSource.mProperty_mHandleHiddenBinding),
mProperty_mHandleGraphicControllerBinding (inSource.mProperty_mHandleGraphicControllerBinding),
mProperty_mUserDefined (inSource.mProperty_mUserDefined) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap_2E_element & GGS_outletClassMap_2E_element::operator = (const GGS_outletClassMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mSuperClassName = inSource.mProperty_mSuperClassName ;
  mProperty_mHandlesRunAction = inSource.mProperty_mHandlesRunAction ;
  mProperty_mHandlesTableValueBinding = inSource.mProperty_mHandlesTableValueBinding ;
  mProperty_mHandleEnabledBinding = inSource.mProperty_mHandleEnabledBinding ;
  mProperty_mHandleHiddenBinding = inSource.mProperty_mHandleHiddenBinding ;
  mProperty_mHandleGraphicControllerBinding = inSource.mProperty_mHandleGraphicControllerBinding ;
  mProperty_mUserDefined = inSource.mProperty_mUserDefined ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_outletClassMap_2E_element GGS_outletClassMap_2E_element::init_21__21__21__21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                   const GGS_lstring & in_mSuperClassName,
                                                                                                   const GGS_bool & in_mHandlesRunAction,
                                                                                                   const GGS_bool & in_mHandlesTableValueBinding,
                                                                                                   const GGS_bool & in_mHandleEnabledBinding,
                                                                                                   const GGS_bool & in_mHandleHiddenBinding,
                                                                                                   const GGS_bool & in_mHandleGraphicControllerBinding,
                                                                                                   const GGS_bool & in_mUserDefined,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletClassMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSuperClassName = in_mSuperClassName ;
  result.mProperty_mHandlesRunAction = in_mHandlesRunAction ;
  result.mProperty_mHandlesTableValueBinding = in_mHandlesTableValueBinding ;
  result.mProperty_mHandleEnabledBinding = in_mHandleEnabledBinding ;
  result.mProperty_mHandleHiddenBinding = in_mHandleHiddenBinding ;
  result.mProperty_mHandleGraphicControllerBinding = in_mHandleGraphicControllerBinding ;
  result.mProperty_mUserDefined = in_mUserDefined ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap_2E_element::GGS_outletClassMap_2E_element (const GGS_lstring & inOperand0,
                                                              const GGS_lstring & inOperand1,
                                                              const GGS_bool & inOperand2,
                                                              const GGS_bool & inOperand3,
                                                              const GGS_bool & inOperand4,
                                                              const GGS_bool & inOperand5,
                                                              const GGS_bool & inOperand6,
                                                              const GGS_bool & inOperand7) :
mProperty_lkey (inOperand0),
mProperty_mSuperClassName (inOperand1),
mProperty_mHandlesRunAction (inOperand2),
mProperty_mHandlesTableValueBinding (inOperand3),
mProperty_mHandleEnabledBinding (inOperand4),
mProperty_mHandleHiddenBinding (inOperand5),
mProperty_mHandleGraphicControllerBinding (inOperand6),
mProperty_mUserDefined (inOperand7) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap_2E_element GGS_outletClassMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                             const GGS_lstring & in_mSuperClassName,
                                                                             const GGS_bool & in_mHandlesRunAction,
                                                                             const GGS_bool & in_mHandlesTableValueBinding,
                                                                             const GGS_bool & in_mHandleEnabledBinding,
                                                                             const GGS_bool & in_mHandleHiddenBinding,
                                                                             const GGS_bool & in_mHandleGraphicControllerBinding,
                                                                             const GGS_bool & in_mUserDefined,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletClassMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mSuperClassName = in_mSuperClassName ;
  result.mProperty_mHandlesRunAction = in_mHandlesRunAction ;
  result.mProperty_mHandlesTableValueBinding = in_mHandlesTableValueBinding ;
  result.mProperty_mHandleEnabledBinding = in_mHandleEnabledBinding ;
  result.mProperty_mHandleHiddenBinding = in_mHandleHiddenBinding ;
  result.mProperty_mHandleGraphicControllerBinding = in_mHandleGraphicControllerBinding ;
  result.mProperty_mUserDefined = in_mUserDefined ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_outletClassMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mSuperClassName.isValid () && mProperty_mHandlesRunAction.isValid () && mProperty_mHandlesTableValueBinding.isValid () && mProperty_mHandleEnabledBinding.isValid () && mProperty_mHandleHiddenBinding.isValid () && mProperty_mHandleGraphicControllerBinding.isValid () && mProperty_mUserDefined.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mSuperClassName.drop () ;
  mProperty_mHandlesRunAction.drop () ;
  mProperty_mHandlesTableValueBinding.drop () ;
  mProperty_mHandleEnabledBinding.drop () ;
  mProperty_mHandleHiddenBinding.drop () ;
  mProperty_mHandleGraphicControllerBinding.drop () ;
  mProperty_mUserDefined.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap_2E_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @outletClassMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSuperClassName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHandlesRunAction.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHandlesTableValueBinding.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHandleEnabledBinding.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHandleHiddenBinding.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHandleGraphicControllerBinding.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @outletClassMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassMap_2E_element ("outletClassMap.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outletClassMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletClassMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletClassMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap_2E_element GGS_outletClassMap_2E_element::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_outletClassMap_2E_element result ;
  const GGS_outletClassMap_2E_element * p = (const GGS_outletClassMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletClassMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @outletClassMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_outletClassMap_2E_element_3F_::GGS_outletClassMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap_2E_element_3F_::GGS_outletClassMap_2E_element_3F_ (const GGS_outletClassMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_outletClassMap_2E_element_3F_ GGS_outletClassMap_2E_element_3F_::init_nil (void) {
  GGS_outletClassMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_outletClassMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_outletClassMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_outletClassMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap_2E_element_3F_::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @outletClassMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassMap_2E_element_3F_ ("outletClassMap.element?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outletClassMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletClassMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletClassMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap_2E_element_3F_ GGS_outletClassMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_outletClassMap_2E_element_3F_ result ;
  const GGS_outletClassMap_2E_element_3F_ * p = (const GGS_outletClassMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletClassMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList_2E_element::GGS_controllerBindingOptionList_2E_element (void) :
mProperty_mOptionName (),
mProperty_mOptionTypeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList_2E_element::GGS_controllerBindingOptionList_2E_element (const GGS_controllerBindingOptionList_2E_element & inSource) :
mProperty_mOptionName (inSource.mProperty_mOptionName),
mProperty_mOptionTypeName (inSource.mProperty_mOptionTypeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList_2E_element & GGS_controllerBindingOptionList_2E_element::operator = (const GGS_controllerBindingOptionList_2E_element & inSource) {
  mProperty_mOptionName = inSource.mProperty_mOptionName ;
  mProperty_mOptionTypeName = inSource.mProperty_mOptionTypeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controllerBindingOptionList_2E_element GGS_controllerBindingOptionList_2E_element::init_21__21_ (const GGS_lstring & in_mOptionName,
                                                                                                     const GGS_lstring & in_mOptionTypeName,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controllerBindingOptionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionName = in_mOptionName ;
  result.mProperty_mOptionTypeName = in_mOptionTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOptionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList_2E_element::GGS_controllerBindingOptionList_2E_element (const GGS_lstring & inOperand0,
                                                                                        const GGS_lstring & inOperand1) :
mProperty_mOptionName (inOperand0),
mProperty_mOptionTypeName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList_2E_element GGS_controllerBindingOptionList_2E_element::class_func_new (const GGS_lstring & in_mOptionName,
                                                                                                       const GGS_lstring & in_mOptionTypeName,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controllerBindingOptionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionName = in_mOptionName ;
  result.mProperty_mOptionTypeName = in_mOptionTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controllerBindingOptionList_2E_element::isValid (void) const {
  return mProperty_mOptionName.isValid () && mProperty_mOptionTypeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOptionList_2E_element::drop (void) {
  mProperty_mOptionName.drop () ;
  mProperty_mOptionTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOptionList_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controllerBindingOptionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOptionName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionTypeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @controllerBindingOptionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controllerBindingOptionList_2E_element ("controllerBindingOptionList.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controllerBindingOptionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controllerBindingOptionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controllerBindingOptionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList_2E_element GGS_controllerBindingOptionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_controllerBindingOptionList_2E_element result ;
  const GGS_controllerBindingOptionList_2E_element * p = (const GGS_controllerBindingOptionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controllerBindingOptionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controllerBindingOptionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList_2E_element::GGS_outletClassBindingSpecificationModelList_2E_element (void) :
mProperty_mModelTypeName (),
mProperty_mModelShouldBeWritableProperty () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList_2E_element::GGS_outletClassBindingSpecificationModelList_2E_element (const GGS_outletClassBindingSpecificationModelList_2E_element & inSource) :
mProperty_mModelTypeName (inSource.mProperty_mModelTypeName),
mProperty_mModelShouldBeWritableProperty (inSource.mProperty_mModelShouldBeWritableProperty) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList_2E_element & GGS_outletClassBindingSpecificationModelList_2E_element::operator = (const GGS_outletClassBindingSpecificationModelList_2E_element & inSource) {
  mProperty_mModelTypeName = inSource.mProperty_mModelTypeName ;
  mProperty_mModelShouldBeWritableProperty = inSource.mProperty_mModelShouldBeWritableProperty ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList_2E_element GGS_outletClassBindingSpecificationModelList_2E_element::init_21__21_ (const GGS_lstring & in_mModelTypeName,
                                                                                                                               const GGS_bool & in_mModelShouldBeWritableProperty,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletClassBindingSpecificationModelList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mModelTypeName = in_mModelTypeName ;
  result.mProperty_mModelShouldBeWritableProperty = in_mModelShouldBeWritableProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationModelList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList_2E_element::GGS_outletClassBindingSpecificationModelList_2E_element (const GGS_lstring & inOperand0,
                                                                                                                  const GGS_bool & inOperand1) :
mProperty_mModelTypeName (inOperand0),
mProperty_mModelShouldBeWritableProperty (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList_2E_element GGS_outletClassBindingSpecificationModelList_2E_element::class_func_new (const GGS_lstring & in_mModelTypeName,
                                                                                                                                 const GGS_bool & in_mModelShouldBeWritableProperty,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletClassBindingSpecificationModelList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mModelTypeName = in_mModelTypeName ;
  result.mProperty_mModelShouldBeWritableProperty = in_mModelShouldBeWritableProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_outletClassBindingSpecificationModelList_2E_element::isValid (void) const {
  return mProperty_mModelTypeName.isValid () && mProperty_mModelShouldBeWritableProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationModelList_2E_element::drop (void) {
  mProperty_mModelTypeName.drop () ;
  mProperty_mModelShouldBeWritableProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationModelList_2E_element::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @outletClassBindingSpecificationModelList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mModelTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mModelShouldBeWritableProperty.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @outletClassBindingSpecificationModelList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList_2E_element ("outletClassBindingSpecificationModelList.element",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outletClassBindingSpecificationModelList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletClassBindingSpecificationModelList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletClassBindingSpecificationModelList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList_2E_element GGS_outletClassBindingSpecificationModelList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_outletClassBindingSpecificationModelList_2E_element result ;
  const GGS_outletClassBindingSpecificationModelList_2E_element * p = (const GGS_outletClassBindingSpecificationModelList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletClassBindingSpecificationModelList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassBindingSpecificationModelList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList_2E_element::GGS_outletClassBindingSpecificationList_2E_element (void) :
mProperty_mOutletClassName (),
mProperty_mBindingName (),
mProperty_mOutletClassBindingSpecificationModelList (),
mProperty_mBindingOptionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList_2E_element::GGS_outletClassBindingSpecificationList_2E_element (const GGS_outletClassBindingSpecificationList_2E_element & inSource) :
mProperty_mOutletClassName (inSource.mProperty_mOutletClassName),
mProperty_mBindingName (inSource.mProperty_mBindingName),
mProperty_mOutletClassBindingSpecificationModelList (inSource.mProperty_mOutletClassBindingSpecificationModelList),
mProperty_mBindingOptionList (inSource.mProperty_mBindingOptionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList_2E_element & GGS_outletClassBindingSpecificationList_2E_element::operator = (const GGS_outletClassBindingSpecificationList_2E_element & inSource) {
  mProperty_mOutletClassName = inSource.mProperty_mOutletClassName ;
  mProperty_mBindingName = inSource.mProperty_mBindingName ;
  mProperty_mOutletClassBindingSpecificationModelList = inSource.mProperty_mOutletClassBindingSpecificationModelList ;
  mProperty_mBindingOptionList = inSource.mProperty_mBindingOptionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_outletClassBindingSpecificationList_2E_element GGS_outletClassBindingSpecificationList_2E_element::init_21__21__21__21_ (const GGS_lstring & in_mOutletClassName,
                                                                                                                             const GGS_lstring & in_mBindingName,
                                                                                                                             const GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                                                                             const GGS_controllerBindingOptionList & in_mBindingOptionList,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletClassBindingSpecificationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOutletClassName = in_mOutletClassName ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mOutletClassBindingSpecificationModelList = in_mOutletClassBindingSpecificationModelList ;
  result.mProperty_mBindingOptionList = in_mBindingOptionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList_2E_element::GGS_outletClassBindingSpecificationList_2E_element (const GGS_lstring & inOperand0,
                                                                                                        const GGS_lstring & inOperand1,
                                                                                                        const GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                        const GGS_controllerBindingOptionList & inOperand3) :
mProperty_mOutletClassName (inOperand0),
mProperty_mBindingName (inOperand1),
mProperty_mOutletClassBindingSpecificationModelList (inOperand2),
mProperty_mBindingOptionList (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList_2E_element GGS_outletClassBindingSpecificationList_2E_element::class_func_new (const GGS_lstring & in_mOutletClassName,
                                                                                                                       const GGS_lstring & in_mBindingName,
                                                                                                                       const GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                                                                       const GGS_controllerBindingOptionList & in_mBindingOptionList,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletClassBindingSpecificationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOutletClassName = in_mOutletClassName ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mOutletClassBindingSpecificationModelList = in_mOutletClassBindingSpecificationModelList ;
  result.mProperty_mBindingOptionList = in_mBindingOptionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_outletClassBindingSpecificationList_2E_element::isValid (void) const {
  return mProperty_mOutletClassName.isValid () && mProperty_mBindingName.isValid () && mProperty_mOutletClassBindingSpecificationModelList.isValid () && mProperty_mBindingOptionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList_2E_element::drop (void) {
  mProperty_mOutletClassName.drop () ;
  mProperty_mBindingName.drop () ;
  mProperty_mOutletClassBindingSpecificationModelList.drop () ;
  mProperty_mBindingOptionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList_2E_element::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @outletClassBindingSpecificationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOutletClassName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBindingName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOutletClassBindingSpecificationModelList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBindingOptionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @outletClassBindingSpecificationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationList_2E_element ("outletClassBindingSpecificationList.element",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outletClassBindingSpecificationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletClassBindingSpecificationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletClassBindingSpecificationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList_2E_element GGS_outletClassBindingSpecificationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_outletClassBindingSpecificationList_2E_element result ;
  const GGS_outletClassBindingSpecificationList_2E_element * p = (const GGS_outletClassBindingSpecificationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletClassBindingSpecificationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassBindingSpecificationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap_2E_element::GGS_bindingSpecificationMap_2E_element (void) :
mProperty_lkey (),
mProperty_mOutletSuperClassName (),
mProperty_mBindingMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap_2E_element::GGS_bindingSpecificationMap_2E_element (const GGS_bindingSpecificationMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mOutletSuperClassName (inSource.mProperty_mOutletSuperClassName),
mProperty_mBindingMap (inSource.mProperty_mBindingMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap_2E_element & GGS_bindingSpecificationMap_2E_element::operator = (const GGS_bindingSpecificationMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mOutletSuperClassName = inSource.mProperty_mOutletSuperClassName ;
  mProperty_mBindingMap = inSource.mProperty_mBindingMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_bindingSpecificationMap_2E_element GGS_bindingSpecificationMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                 const GGS_lstring & in_mOutletSuperClassName,
                                                                                                 const GGS_outletBindingSpecificationMap & in_mBindingMap,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bindingSpecificationMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mOutletSuperClassName = in_mOutletSuperClassName ;
  result.mProperty_mBindingMap = in_mBindingMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap_2E_element::GGS_bindingSpecificationMap_2E_element (const GGS_lstring & inOperand0,
                                                                                const GGS_lstring & inOperand1,
                                                                                const GGS_outletBindingSpecificationMap & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mOutletSuperClassName (inOperand1),
mProperty_mBindingMap (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap_2E_element GGS_bindingSpecificationMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                               const GGS_lstring & in_mOutletSuperClassName,
                                                                                               const GGS_outletBindingSpecificationMap & in_mBindingMap,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bindingSpecificationMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mOutletSuperClassName = in_mOutletSuperClassName ;
  result.mProperty_mBindingMap = in_mBindingMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bindingSpecificationMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletSuperClassName.isValid () && mProperty_mBindingMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOutletSuperClassName.drop () ;
  mProperty_mBindingMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @bindingSpecificationMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOutletSuperClassName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBindingMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @bindingSpecificationMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingSpecificationMap_2E_element ("bindingSpecificationMap.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bindingSpecificationMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingSpecificationMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bindingSpecificationMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bindingSpecificationMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap_2E_element GGS_bindingSpecificationMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_bindingSpecificationMap_2E_element result ;
  const GGS_bindingSpecificationMap_2E_element * p = (const GGS_bindingSpecificationMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bindingSpecificationMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingSpecificationMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @bindingSpecificationMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap_2E_element_3F_::GGS_bindingSpecificationMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap_2E_element_3F_::GGS_bindingSpecificationMap_2E_element_3F_ (const GGS_bindingSpecificationMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap_2E_element_3F_ GGS_bindingSpecificationMap_2E_element_3F_::init_nil (void) {
  GGS_bindingSpecificationMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bindingSpecificationMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bindingSpecificationMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_bindingSpecificationMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap_2E_element_3F_::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @bindingSpecificationMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingSpecificationMap_2E_element_3F_ ("bindingSpecificationMap.element?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bindingSpecificationMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingSpecificationMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bindingSpecificationMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bindingSpecificationMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap_2E_element_3F_ GGS_bindingSpecificationMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_bindingSpecificationMap_2E_element_3F_ result ;
  const GGS_bindingSpecificationMap_2E_element_3F_ * p = (const GGS_bindingSpecificationMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bindingSpecificationMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingSpecificationMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList_2E_element::GGS_controllerBindingOptionDecoratedList_2E_element (void) :
mProperty_mOptionType (),
mProperty_mOptionName () {
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList_2E_element::GGS_controllerBindingOptionDecoratedList_2E_element (const GGS_controllerBindingOptionDecoratedList_2E_element & inSource) :
mProperty_mOptionType (inSource.mProperty_mOptionType),
mProperty_mOptionName (inSource.mProperty_mOptionName) {
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList_2E_element & GGS_controllerBindingOptionDecoratedList_2E_element::operator = (const GGS_controllerBindingOptionDecoratedList_2E_element & inSource) {
  mProperty_mOptionType = inSource.mProperty_mOptionType ;
  mProperty_mOptionName = inSource.mProperty_mOptionName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList_2E_element GGS_controllerBindingOptionDecoratedList_2E_element::init_21__21_ (const GGS_typeKind & in_mOptionType,
                                                                                                                       const GGS_lstring & in_mOptionName,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controllerBindingOptionDecoratedList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionType = in_mOptionType ;
  result.mProperty_mOptionName = in_mOptionName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOptionDecoratedList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList_2E_element::GGS_controllerBindingOptionDecoratedList_2E_element (const GGS_typeKind & inOperand0,
                                                                                                          const GGS_lstring & inOperand1) :
mProperty_mOptionType (inOperand0),
mProperty_mOptionName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList_2E_element GGS_controllerBindingOptionDecoratedList_2E_element::class_func_new (const GGS_typeKind & in_mOptionType,
                                                                                                                         const GGS_lstring & in_mOptionName,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controllerBindingOptionDecoratedList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionType = in_mOptionType ;
  result.mProperty_mOptionName = in_mOptionName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_controllerBindingOptionDecoratedList_2E_element::isValid (void) const {
  return mProperty_mOptionType.isValid () && mProperty_mOptionName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOptionDecoratedList_2E_element::drop (void) {
  mProperty_mOptionType.drop () ;
  mProperty_mOptionName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOptionDecoratedList_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controllerBindingOptionDecoratedList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOptionType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @controllerBindingOptionDecoratedList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList_2E_element ("controllerBindingOptionDecoratedList.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_controllerBindingOptionDecoratedList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controllerBindingOptionDecoratedList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controllerBindingOptionDecoratedList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList_2E_element GGS_controllerBindingOptionDecoratedList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_controllerBindingOptionDecoratedList_2E_element result ;
  const GGS_controllerBindingOptionDecoratedList_2E_element * p = (const GGS_controllerBindingOptionDecoratedList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controllerBindingOptionDecoratedList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controllerBindingOptionDecoratedList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap_2E_element::GGS_outletBindingSpecificationMap_2E_element (void) :
mProperty_lkey (),
mProperty_mOutletBindingSpecificationModelList (),
mProperty_mControllerBindingOptionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap_2E_element::GGS_outletBindingSpecificationMap_2E_element (const GGS_outletBindingSpecificationMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mOutletBindingSpecificationModelList (inSource.mProperty_mOutletBindingSpecificationModelList),
mProperty_mControllerBindingOptionList (inSource.mProperty_mControllerBindingOptionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap_2E_element & GGS_outletBindingSpecificationMap_2E_element::operator = (const GGS_outletBindingSpecificationMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mOutletBindingSpecificationModelList = inSource.mProperty_mOutletBindingSpecificationModelList ;
  mProperty_mControllerBindingOptionList = inSource.mProperty_mControllerBindingOptionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_outletBindingSpecificationMap_2E_element GGS_outletBindingSpecificationMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                                             const GGS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                                                                             const GGS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionList,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletBindingSpecificationMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mOutletBindingSpecificationModelList = in_mOutletBindingSpecificationModelList ;
  result.mProperty_mControllerBindingOptionList = in_mControllerBindingOptionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap_2E_element::GGS_outletBindingSpecificationMap_2E_element (const GGS_lstring & inOperand0,
                                                                                            const GGS_outletBindingSpecificationModelList & inOperand1,
                                                                                            const GGS_controllerBindingOptionDecoratedList & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mOutletBindingSpecificationModelList (inOperand1),
mProperty_mControllerBindingOptionList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap_2E_element GGS_outletBindingSpecificationMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                                           const GGS_outletBindingSpecificationModelList & in_mOutletBindingSpecificationModelList,
                                                                                                           const GGS_controllerBindingOptionDecoratedList & in_mControllerBindingOptionList,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletBindingSpecificationMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mOutletBindingSpecificationModelList = in_mOutletBindingSpecificationModelList ;
  result.mProperty_mControllerBindingOptionList = in_mControllerBindingOptionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_outletBindingSpecificationMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletBindingSpecificationModelList.isValid () && mProperty_mControllerBindingOptionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOutletBindingSpecificationModelList.drop () ;
  mProperty_mControllerBindingOptionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @outletBindingSpecificationMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOutletBindingSpecificationModelList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mControllerBindingOptionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @outletBindingSpecificationMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2E_element ("outletBindingSpecificationMap.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outletBindingSpecificationMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletBindingSpecificationMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletBindingSpecificationMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap_2E_element GGS_outletBindingSpecificationMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_outletBindingSpecificationMap_2E_element result ;
  const GGS_outletBindingSpecificationMap_2E_element * p = (const GGS_outletBindingSpecificationMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletBindingSpecificationMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingSpecificationMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @outletBindingSpecificationMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap_2E_element_3F_::GGS_outletBindingSpecificationMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap_2E_element_3F_::GGS_outletBindingSpecificationMap_2E_element_3F_ (const GGS_outletBindingSpecificationMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap_2E_element_3F_ GGS_outletBindingSpecificationMap_2E_element_3F_::init_nil (void) {
  GGS_outletBindingSpecificationMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_outletBindingSpecificationMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_outletBindingSpecificationMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_outletBindingSpecificationMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap_2E_element_3F_::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @outletBindingSpecificationMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2E_element_3F_ ("outletBindingSpecificationMap.element?",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outletBindingSpecificationMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletBindingSpecificationMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletBindingSpecificationMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap_2E_element_3F_ GGS_outletBindingSpecificationMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_outletBindingSpecificationMap_2E_element_3F_ result ;
  const GGS_outletBindingSpecificationMap_2E_element_3F_ * p = (const GGS_outletBindingSpecificationMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletBindingSpecificationMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingSpecificationMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList_2E_element::GGS_bindingOptionList_2E_element (void) :
mProperty_mOptionName (),
mProperty_mOptionValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList_2E_element::GGS_bindingOptionList_2E_element (const GGS_bindingOptionList_2E_element & inSource) :
mProperty_mOptionName (inSource.mProperty_mOptionName),
mProperty_mOptionValue (inSource.mProperty_mOptionValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList_2E_element & GGS_bindingOptionList_2E_element::operator = (const GGS_bindingOptionList_2E_element & inSource) {
  mProperty_mOptionName = inSource.mProperty_mOptionName ;
  mProperty_mOptionValue = inSource.mProperty_mOptionValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_bindingOptionList_2E_element GGS_bindingOptionList_2E_element::init_21__21_ (const GGS_lstring & in_mOptionName,
                                                                                 const GGS_abstractDefaultValue & in_mOptionValue,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bindingOptionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionName = in_mOptionName ;
  result.mProperty_mOptionValue = in_mOptionValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingOptionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList_2E_element::GGS_bindingOptionList_2E_element (const GGS_lstring & inOperand0,
                                                                    const GGS_abstractDefaultValue & inOperand1) :
mProperty_mOptionName (inOperand0),
mProperty_mOptionValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList_2E_element GGS_bindingOptionList_2E_element::class_func_new (const GGS_lstring & in_mOptionName,
                                                                                   const GGS_abstractDefaultValue & in_mOptionValue,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bindingOptionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionName = in_mOptionName ;
  result.mProperty_mOptionValue = in_mOptionValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bindingOptionList_2E_element::isValid (void) const {
  return mProperty_mOptionName.isValid () && mProperty_mOptionValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingOptionList_2E_element::drop (void) {
  mProperty_mOptionName.drop () ;
  mProperty_mOptionValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingOptionList_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @bindingOptionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOptionName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @bindingOptionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_bindingOptionList_2E_element ("bindingOptionList.element",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_bindingOptionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingOptionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bindingOptionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bindingOptionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList_2E_element GGS_bindingOptionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_bindingOptionList_2E_element result ;
  const GGS_bindingOptionList_2E_element * p = (const GGS_bindingOptionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bindingOptionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingOptionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableValueBinding_2E_tableValueBinding::GGS_tableValueBinding_2E_tableValueBinding (void) :
mProperty_controllerName () {
}

//--------------------------------------------------------------------------------------------------

GGS_tableValueBinding_2E_tableValueBinding::GGS_tableValueBinding_2E_tableValueBinding (const GGS_tableValueBinding_2E_tableValueBinding & inSource) :
mProperty_controllerName (inSource.mProperty_controllerName) {
}

//--------------------------------------------------------------------------------------------------

GGS_tableValueBinding_2E_tableValueBinding & GGS_tableValueBinding_2E_tableValueBinding::operator = (const GGS_tableValueBinding_2E_tableValueBinding & inSource) {
  mProperty_controllerName = inSource.mProperty_controllerName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_tableValueBinding_2E_tableValueBinding GGS_tableValueBinding_2E_tableValueBinding::init_21_ (const GGS_lstring & in_controllerName,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_tableValueBinding_2E_tableValueBinding result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_controllerName = in_controllerName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tableValueBinding_2E_tableValueBinding::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_tableValueBinding_2E_tableValueBinding::GGS_tableValueBinding_2E_tableValueBinding (const GGS_lstring & inOperand0) :
mProperty_controllerName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_tableValueBinding_2E_tableValueBinding GGS_tableValueBinding_2E_tableValueBinding::class_func_new (const GGS_lstring & in_controllerName,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_tableValueBinding_2E_tableValueBinding result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_controllerName = in_controllerName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_tableValueBinding_2E_tableValueBinding::objectCompare (const GGS_tableValueBinding_2E_tableValueBinding & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_controllerName.objectCompare (inOperand.mProperty_controllerName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_tableValueBinding_2E_tableValueBinding::isValid (void) const {
  return mProperty_controllerName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tableValueBinding_2E_tableValueBinding::drop (void) {
  mProperty_controllerName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tableValueBinding_2E_tableValueBinding::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @tableValueBinding.tableValueBinding:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_controllerName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @tableValueBinding.tableValueBinding generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableValueBinding_2E_tableValueBinding ("tableValueBinding.tableValueBinding",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_tableValueBinding_2E_tableValueBinding::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableValueBinding_2E_tableValueBinding ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_tableValueBinding_2E_tableValueBinding::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_tableValueBinding_2E_tableValueBinding (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableValueBinding_2E_tableValueBinding GGS_tableValueBinding_2E_tableValueBinding::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_tableValueBinding_2E_tableValueBinding result ;
  const GGS_tableValueBinding_2E_tableValueBinding * p = (const GGS_tableValueBinding_2E_tableValueBinding *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_tableValueBinding_2E_tableValueBinding *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableValueBinding.tableValueBinding", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @tableValueBinding_2E_tableValueBinding_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_tableValueBinding_2E_tableValueBinding_3F_::GGS_tableValueBinding_2E_tableValueBinding_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_tableValueBinding_2E_tableValueBinding_3F_::GGS_tableValueBinding_2E_tableValueBinding_3F_ (const GGS_tableValueBinding_2E_tableValueBinding & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_tableValueBinding_2E_tableValueBinding_3F_ GGS_tableValueBinding_2E_tableValueBinding_3F_::init_nil (void) {
  GGS_tableValueBinding_2E_tableValueBinding_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_tableValueBinding_2E_tableValueBinding_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_tableValueBinding_2E_tableValueBinding_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tableValueBinding_2E_tableValueBinding_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_tableValueBinding_2E_tableValueBinding () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_tableValueBinding_2E_tableValueBinding_3F_::objectCompare (const GGS_tableValueBinding_2E_tableValueBinding_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_tableValueBinding_2E_tableValueBinding_3F_::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @tableValueBinding.tableValueBinding? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableValueBinding_2E_tableValueBinding_3F_ ("tableValueBinding.tableValueBinding?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_tableValueBinding_2E_tableValueBinding_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableValueBinding_2E_tableValueBinding_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_tableValueBinding_2E_tableValueBinding_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_tableValueBinding_2E_tableValueBinding_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableValueBinding_2E_tableValueBinding_3F_ GGS_tableValueBinding_2E_tableValueBinding_3F_::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_tableValueBinding_2E_tableValueBinding_3F_ result ;
  const GGS_tableValueBinding_2E_tableValueBinding_3F_ * p = (const GGS_tableValueBinding_2E_tableValueBinding_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_tableValueBinding_2E_tableValueBinding_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableValueBinding.tableValueBinding?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphicController_2E_defined::GGS_graphicController_2E_defined (void) :
mProperty_controller (),
mProperty_propertyName () {
}

//--------------------------------------------------------------------------------------------------

GGS_graphicController_2E_defined::GGS_graphicController_2E_defined (const GGS_graphicController_2E_defined & inSource) :
mProperty_controller (inSource.mProperty_controller),
mProperty_propertyName (inSource.mProperty_propertyName) {
}

//--------------------------------------------------------------------------------------------------

GGS_graphicController_2E_defined & GGS_graphicController_2E_defined::operator = (const GGS_graphicController_2E_defined & inSource) {
  mProperty_controller = inSource.mProperty_controller ;
  mProperty_propertyName = inSource.mProperty_propertyName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_graphicController_2E_defined GGS_graphicController_2E_defined::init_21__21_ (const GGS_lstring & in_controller,
                                                                                 const GGS_lstring & in_propertyName,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_graphicController_2E_defined result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_controller = in_controller ;
  result.mProperty_propertyName = in_propertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_graphicController_2E_defined::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_graphicController_2E_defined::GGS_graphicController_2E_defined (const GGS_lstring & inOperand0,
                                                                    const GGS_lstring & inOperand1) :
mProperty_controller (inOperand0),
mProperty_propertyName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_graphicController_2E_defined GGS_graphicController_2E_defined::class_func_new (const GGS_lstring & in_controller,
                                                                                   const GGS_lstring & in_propertyName,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_graphicController_2E_defined result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_controller = in_controller ;
  result.mProperty_propertyName = in_propertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_graphicController_2E_defined::isValid (void) const {
  return mProperty_controller.isValid () && mProperty_propertyName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_graphicController_2E_defined::drop (void) {
  mProperty_controller.drop () ;
  mProperty_propertyName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_graphicController_2E_defined::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @graphicController.defined:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_controller.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_propertyName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @graphicController.defined generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphicController_2E_defined ("graphicController.defined",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_graphicController_2E_defined::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphicController_2E_defined ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_graphicController_2E_defined::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_graphicController_2E_defined (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphicController_2E_defined GGS_graphicController_2E_defined::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_graphicController_2E_defined result ;
  const GGS_graphicController_2E_defined * p = (const GGS_graphicController_2E_defined *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_graphicController_2E_defined *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphicController.defined", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @graphicController_2E_defined_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_graphicController_2E_defined_3F_::GGS_graphicController_2E_defined_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_graphicController_2E_defined_3F_::GGS_graphicController_2E_defined_3F_ (const GGS_graphicController_2E_defined & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_graphicController_2E_defined_3F_ GGS_graphicController_2E_defined_3F_::init_nil (void) {
  GGS_graphicController_2E_defined_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_graphicController_2E_defined_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_graphicController_2E_defined_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_graphicController_2E_defined_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_graphicController_2E_defined () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_graphicController_2E_defined_3F_::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @graphicController.defined? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_graphicController_2E_defined_3F_ ("graphicController.defined?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_graphicController_2E_defined_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_graphicController_2E_defined_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_graphicController_2E_defined_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_graphicController_2E_defined_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphicController_2E_defined_3F_ GGS_graphicController_2E_defined_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_graphicController_2E_defined_3F_ result ;
  const GGS_graphicController_2E_defined_3F_ * p = (const GGS_graphicController_2E_defined_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_graphicController_2E_defined_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("graphicController.defined?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList_2E_element::GGS_outletDeclarationList_2E_element (void) :
mProperty_mOutletTypeName (),
mProperty_mOutletName (),
mProperty_mTableValueBindingDescriptor (),
mProperty_mRunDescriptor (),
mProperty_mEnabledBindingDescriptor (),
mProperty_mHiddenBindingDescriptor (),
mProperty_mRegularBindingList (),
mProperty_mGraphicController () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList_2E_element::GGS_outletDeclarationList_2E_element (const GGS_outletDeclarationList_2E_element & inSource) :
mProperty_mOutletTypeName (inSource.mProperty_mOutletTypeName),
mProperty_mOutletName (inSource.mProperty_mOutletName),
mProperty_mTableValueBindingDescriptor (inSource.mProperty_mTableValueBindingDescriptor),
mProperty_mRunDescriptor (inSource.mProperty_mRunDescriptor),
mProperty_mEnabledBindingDescriptor (inSource.mProperty_mEnabledBindingDescriptor),
mProperty_mHiddenBindingDescriptor (inSource.mProperty_mHiddenBindingDescriptor),
mProperty_mRegularBindingList (inSource.mProperty_mRegularBindingList),
mProperty_mGraphicController (inSource.mProperty_mGraphicController) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList_2E_element & GGS_outletDeclarationList_2E_element::operator = (const GGS_outletDeclarationList_2E_element & inSource) {
  mProperty_mOutletTypeName = inSource.mProperty_mOutletTypeName ;
  mProperty_mOutletName = inSource.mProperty_mOutletName ;
  mProperty_mTableValueBindingDescriptor = inSource.mProperty_mTableValueBindingDescriptor ;
  mProperty_mRunDescriptor = inSource.mProperty_mRunDescriptor ;
  mProperty_mEnabledBindingDescriptor = inSource.mProperty_mEnabledBindingDescriptor ;
  mProperty_mHiddenBindingDescriptor = inSource.mProperty_mHiddenBindingDescriptor ;
  mProperty_mRegularBindingList = inSource.mProperty_mRegularBindingList ;
  mProperty_mGraphicController = inSource.mProperty_mGraphicController ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_outletDeclarationList_2E_element GGS_outletDeclarationList_2E_element::init_21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mOutletTypeName,
                                                                                                                 const GGS_lstring & in_mOutletName,
                                                                                                                 const GGS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                                                                                 const GGS_runActionDescriptor & in_mRunDescriptor,
                                                                                                                 const GGS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                                                                                 const GGS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                                                                                 const GGS_regularBindingList & in_mRegularBindingList,
                                                                                                                 const GGS_graphicController & in_mGraphicController,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletDeclarationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOutletTypeName = in_mOutletTypeName ;
  result.mProperty_mOutletName = in_mOutletName ;
  result.mProperty_mTableValueBindingDescriptor = in_mTableValueBindingDescriptor ;
  result.mProperty_mRunDescriptor = in_mRunDescriptor ;
  result.mProperty_mEnabledBindingDescriptor = in_mEnabledBindingDescriptor ;
  result.mProperty_mHiddenBindingDescriptor = in_mHiddenBindingDescriptor ;
  result.mProperty_mRegularBindingList = in_mRegularBindingList ;
  result.mProperty_mGraphicController = in_mGraphicController ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList_2E_element::GGS_outletDeclarationList_2E_element (const GGS_lstring & inOperand0,
                                                                            const GGS_lstring & inOperand1,
                                                                            const GGS_tableValueBinding & inOperand2,
                                                                            const GGS_runActionDescriptor & inOperand3,
                                                                            const GGS_multipleBindingDescriptor & inOperand4,
                                                                            const GGS_multipleBindingDescriptor & inOperand5,
                                                                            const GGS_regularBindingList & inOperand6,
                                                                            const GGS_graphicController & inOperand7) :
mProperty_mOutletTypeName (inOperand0),
mProperty_mOutletName (inOperand1),
mProperty_mTableValueBindingDescriptor (inOperand2),
mProperty_mRunDescriptor (inOperand3),
mProperty_mEnabledBindingDescriptor (inOperand4),
mProperty_mHiddenBindingDescriptor (inOperand5),
mProperty_mRegularBindingList (inOperand6),
mProperty_mGraphicController (inOperand7) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList_2E_element GGS_outletDeclarationList_2E_element::class_func_new (const GGS_lstring & in_mOutletTypeName,
                                                                                           const GGS_lstring & in_mOutletName,
                                                                                           const GGS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                                                           const GGS_runActionDescriptor & in_mRunDescriptor,
                                                                                           const GGS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                                                           const GGS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                                                           const GGS_regularBindingList & in_mRegularBindingList,
                                                                                           const GGS_graphicController & in_mGraphicController,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletDeclarationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOutletTypeName = in_mOutletTypeName ;
  result.mProperty_mOutletName = in_mOutletName ;
  result.mProperty_mTableValueBindingDescriptor = in_mTableValueBindingDescriptor ;
  result.mProperty_mRunDescriptor = in_mRunDescriptor ;
  result.mProperty_mEnabledBindingDescriptor = in_mEnabledBindingDescriptor ;
  result.mProperty_mHiddenBindingDescriptor = in_mHiddenBindingDescriptor ;
  result.mProperty_mRegularBindingList = in_mRegularBindingList ;
  result.mProperty_mGraphicController = in_mGraphicController ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_outletDeclarationList_2E_element::isValid (void) const {
  return mProperty_mOutletTypeName.isValid () && mProperty_mOutletName.isValid () && mProperty_mTableValueBindingDescriptor.isValid () && mProperty_mRunDescriptor.isValid () && mProperty_mEnabledBindingDescriptor.isValid () && mProperty_mHiddenBindingDescriptor.isValid () && mProperty_mRegularBindingList.isValid () && mProperty_mGraphicController.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList_2E_element::drop (void) {
  mProperty_mOutletTypeName.drop () ;
  mProperty_mOutletName.drop () ;
  mProperty_mTableValueBindingDescriptor.drop () ;
  mProperty_mRunDescriptor.drop () ;
  mProperty_mEnabledBindingDescriptor.drop () ;
  mProperty_mHiddenBindingDescriptor.drop () ;
  mProperty_mRegularBindingList.drop () ;
  mProperty_mGraphicController.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @outletDeclarationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOutletTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOutletName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTableValueBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRunDescriptor.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEnabledBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHiddenBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRegularBindingList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGraphicController.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @outletDeclarationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletDeclarationList_2E_element ("outletDeclarationList.element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outletDeclarationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletDeclarationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletDeclarationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletDeclarationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList_2E_element GGS_outletDeclarationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_outletDeclarationList_2E_element result ;
  const GGS_outletDeclarationList_2E_element * p = (const GGS_outletDeclarationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletDeclarationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletDeclarationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap_2E_element::GGS_decoratedOutletMap_2E_element (void) :
mProperty_lkey (),
mProperty_mOutletTypeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap_2E_element::GGS_decoratedOutletMap_2E_element (const GGS_decoratedOutletMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mOutletTypeName (inSource.mProperty_mOutletTypeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap_2E_element & GGS_decoratedOutletMap_2E_element::operator = (const GGS_decoratedOutletMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mOutletTypeName = inSource.mProperty_mOutletTypeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_decoratedOutletMap_2E_element GGS_decoratedOutletMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                   const GGS_string & in_mOutletTypeName,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_decoratedOutletMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mOutletTypeName = in_mOutletTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedOutletMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap_2E_element::GGS_decoratedOutletMap_2E_element (const GGS_lstring & inOperand0,
                                                                      const GGS_string & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mOutletTypeName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap_2E_element GGS_decoratedOutletMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                                     const GGS_string & in_mOutletTypeName,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_decoratedOutletMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mOutletTypeName = in_mOutletTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_decoratedOutletMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mOutletTypeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedOutletMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mOutletTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedOutletMap_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @decoratedOutletMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOutletTypeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @decoratedOutletMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedOutletMap_2E_element ("decoratedOutletMap.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_decoratedOutletMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedOutletMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedOutletMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedOutletMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap_2E_element GGS_decoratedOutletMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_decoratedOutletMap_2E_element result ;
  const GGS_decoratedOutletMap_2E_element * p = (const GGS_decoratedOutletMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedOutletMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedOutletMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @decoratedOutletMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap_2E_element_3F_::GGS_decoratedOutletMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap_2E_element_3F_::GGS_decoratedOutletMap_2E_element_3F_ (const GGS_decoratedOutletMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap_2E_element_3F_ GGS_decoratedOutletMap_2E_element_3F_::init_nil (void) {
  GGS_decoratedOutletMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_decoratedOutletMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_decoratedOutletMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedOutletMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_decoratedOutletMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedOutletMap_2E_element_3F_::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @decoratedOutletMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_decoratedOutletMap_2E_element_3F_ ("decoratedOutletMap.element?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_decoratedOutletMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedOutletMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedOutletMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedOutletMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap_2E_element_3F_ GGS_decoratedOutletMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_decoratedOutletMap_2E_element_3F_ result ;
  const GGS_decoratedOutletMap_2E_element_3F_ * p = (const GGS_decoratedOutletMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedOutletMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedOutletMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootProperty::GGS_observablePropertyAST_2E_rootProperty (void) :
mProperty_propertyName () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootProperty::GGS_observablePropertyAST_2E_rootProperty (const GGS_observablePropertyAST_2E_rootProperty & inSource) :
mProperty_propertyName (inSource.mProperty_propertyName) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootProperty & GGS_observablePropertyAST_2E_rootProperty::operator = (const GGS_observablePropertyAST_2E_rootProperty & inSource) {
  mProperty_propertyName = inSource.mProperty_propertyName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootProperty GGS_observablePropertyAST_2E_rootProperty::init_21_ (const GGS_lstring & in_propertyName,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_rootProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyName = in_propertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_rootProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootProperty::GGS_observablePropertyAST_2E_rootProperty (const GGS_lstring & inOperand0) :
mProperty_propertyName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootProperty GGS_observablePropertyAST_2E_rootProperty::class_func_new (const GGS_lstring & in_propertyName,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_rootProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyName = in_propertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_rootProperty::isValid (void) const {
  return mProperty_propertyName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_rootProperty::drop (void) {
  mProperty_propertyName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_rootProperty::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @observablePropertyAST.rootProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_propertyName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.rootProperty generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootProperty ("observablePropertyAST.rootProperty",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_rootProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_rootProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_rootProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootProperty GGS_observablePropertyAST_2E_rootProperty::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_rootProperty result ;
  const GGS_observablePropertyAST_2E_rootProperty * p = (const GGS_observablePropertyAST_2E_rootProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_rootProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.rootProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @observablePropertyAST_2E_rootProperty_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootProperty_3F_::GGS_observablePropertyAST_2E_rootProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootProperty_3F_::GGS_observablePropertyAST_2E_rootProperty_3F_ (const GGS_observablePropertyAST_2E_rootProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootProperty_3F_ GGS_observablePropertyAST_2E_rootProperty_3F_::init_nil (void) {
  GGS_observablePropertyAST_2E_rootProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_rootProperty_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_rootProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_rootProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_observablePropertyAST_2E_rootProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_rootProperty_3F_::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.rootProperty? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootProperty_3F_ ("observablePropertyAST.rootProperty?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_rootProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_rootProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_rootProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootProperty_3F_ GGS_observablePropertyAST_2E_rootProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_rootProperty_3F_ result ;
  const GGS_observablePropertyAST_2E_rootProperty_3F_ * p = (const GGS_observablePropertyAST_2E_rootProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_rootProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.rootProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyWithOption::GGS_observablePropertyAST_2E_rootPropertyWithOption (void) :
mProperty_propertyName (),
mProperty_optionName () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyWithOption::GGS_observablePropertyAST_2E_rootPropertyWithOption (const GGS_observablePropertyAST_2E_rootPropertyWithOption & inSource) :
mProperty_propertyName (inSource.mProperty_propertyName),
mProperty_optionName (inSource.mProperty_optionName) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyWithOption & GGS_observablePropertyAST_2E_rootPropertyWithOption::operator = (const GGS_observablePropertyAST_2E_rootPropertyWithOption & inSource) {
  mProperty_propertyName = inSource.mProperty_propertyName ;
  mProperty_optionName = inSource.mProperty_optionName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyWithOption GGS_observablePropertyAST_2E_rootPropertyWithOption::init_21__21_ (const GGS_lstring & in_propertyName,
                                                                                                                       const GGS_lstring & in_optionName,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_rootPropertyWithOption result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyName = in_propertyName ;
  result.mProperty_optionName = in_optionName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_rootPropertyWithOption::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyWithOption::GGS_observablePropertyAST_2E_rootPropertyWithOption (const GGS_lstring & inOperand0,
                                                                                                          const GGS_lstring & inOperand1) :
mProperty_propertyName (inOperand0),
mProperty_optionName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyWithOption GGS_observablePropertyAST_2E_rootPropertyWithOption::class_func_new (const GGS_lstring & in_propertyName,
                                                                                                                         const GGS_lstring & in_optionName,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_rootPropertyWithOption result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyName = in_propertyName ;
  result.mProperty_optionName = in_optionName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_rootPropertyWithOption::isValid (void) const {
  return mProperty_propertyName.isValid () && mProperty_optionName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_rootPropertyWithOption::drop (void) {
  mProperty_propertyName.drop () ;
  mProperty_optionName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_rootPropertyWithOption::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @observablePropertyAST.rootPropertyWithOption:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_propertyName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_optionName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.rootPropertyWithOption generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyWithOption ("observablePropertyAST.rootPropertyWithOption",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_rootPropertyWithOption::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyWithOption ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_rootPropertyWithOption::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_rootPropertyWithOption (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyWithOption GGS_observablePropertyAST_2E_rootPropertyWithOption::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_rootPropertyWithOption result ;
  const GGS_observablePropertyAST_2E_rootPropertyWithOption * p = (const GGS_observablePropertyAST_2E_rootPropertyWithOption *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_rootPropertyWithOption *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.rootPropertyWithOption", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @observablePropertyAST_2E_rootPropertyWithOption_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_::GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_::GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ (const GGS_observablePropertyAST_2E_rootPropertyWithOption & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_::init_nil (void) {
  GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_observablePropertyAST_2E_rootPropertyWithOption () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.rootPropertyWithOption? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyWithOption_3F_ ("observablePropertyAST.rootPropertyWithOption?",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyWithOption_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ result ;
  const GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ * p = (const GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.rootPropertyWithOption?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyRelationship::GGS_observablePropertyAST_2E_rootPropertyRelationship (void) :
mProperty_relationshipName (),
mProperty_propertyName () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyRelationship::GGS_observablePropertyAST_2E_rootPropertyRelationship (const GGS_observablePropertyAST_2E_rootPropertyRelationship & inSource) :
mProperty_relationshipName (inSource.mProperty_relationshipName),
mProperty_propertyName (inSource.mProperty_propertyName) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyRelationship & GGS_observablePropertyAST_2E_rootPropertyRelationship::operator = (const GGS_observablePropertyAST_2E_rootPropertyRelationship & inSource) {
  mProperty_relationshipName = inSource.mProperty_relationshipName ;
  mProperty_propertyName = inSource.mProperty_propertyName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyRelationship GGS_observablePropertyAST_2E_rootPropertyRelationship::init_21__21_ (const GGS_lstring & in_relationshipName,
                                                                                                                           const GGS_lstring & in_propertyName,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_rootPropertyRelationship result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_relationshipName = in_relationshipName ;
  result.mProperty_propertyName = in_propertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_rootPropertyRelationship::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyRelationship::GGS_observablePropertyAST_2E_rootPropertyRelationship (const GGS_lstring & inOperand0,
                                                                                                              const GGS_lstring & inOperand1) :
mProperty_relationshipName (inOperand0),
mProperty_propertyName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyRelationship GGS_observablePropertyAST_2E_rootPropertyRelationship::class_func_new (const GGS_lstring & in_relationshipName,
                                                                                                                             const GGS_lstring & in_propertyName,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_rootPropertyRelationship result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_relationshipName = in_relationshipName ;
  result.mProperty_propertyName = in_propertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_rootPropertyRelationship::isValid (void) const {
  return mProperty_relationshipName.isValid () && mProperty_propertyName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_rootPropertyRelationship::drop (void) {
  mProperty_relationshipName.drop () ;
  mProperty_propertyName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_rootPropertyRelationship::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @observablePropertyAST.rootPropertyRelationship:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_relationshipName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_propertyName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.rootPropertyRelationship generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyRelationship ("observablePropertyAST.rootPropertyRelationship",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_rootPropertyRelationship::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyRelationship ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_rootPropertyRelationship::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_rootPropertyRelationship (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyRelationship GGS_observablePropertyAST_2E_rootPropertyRelationship::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_rootPropertyRelationship result ;
  const GGS_observablePropertyAST_2E_rootPropertyRelationship * p = (const GGS_observablePropertyAST_2E_rootPropertyRelationship *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_rootPropertyRelationship *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.rootPropertyRelationship", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @observablePropertyAST_2E_rootPropertyRelationship_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_::GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_::GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ (const GGS_observablePropertyAST_2E_rootPropertyRelationship & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_::init_nil (void) {
  GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_observablePropertyAST_2E_rootPropertyRelationship () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_::description (String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.rootPropertyRelationship? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyRelationship_3F_ ("observablePropertyAST.rootPropertyRelationship?",
                                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyRelationship_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ result ;
  const GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ * p = (const GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.rootPropertyRelationship?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyNone::GGS_observablePropertyAST_2E_rootPropertyNone (void) :
mProperty_relationshipName () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyNone::GGS_observablePropertyAST_2E_rootPropertyNone (const GGS_observablePropertyAST_2E_rootPropertyNone & inSource) :
mProperty_relationshipName (inSource.mProperty_relationshipName) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyNone & GGS_observablePropertyAST_2E_rootPropertyNone::operator = (const GGS_observablePropertyAST_2E_rootPropertyNone & inSource) {
  mProperty_relationshipName = inSource.mProperty_relationshipName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyNone GGS_observablePropertyAST_2E_rootPropertyNone::init_21_ (const GGS_lstring & in_relationshipName,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_rootPropertyNone result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_relationshipName = in_relationshipName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_rootPropertyNone::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyNone::GGS_observablePropertyAST_2E_rootPropertyNone (const GGS_lstring & inOperand0) :
mProperty_relationshipName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyNone GGS_observablePropertyAST_2E_rootPropertyNone::class_func_new (const GGS_lstring & in_relationshipName,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_rootPropertyNone result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_relationshipName = in_relationshipName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_rootPropertyNone::isValid (void) const {
  return mProperty_relationshipName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_rootPropertyNone::drop (void) {
  mProperty_relationshipName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_rootPropertyNone::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @observablePropertyAST.rootPropertyNone:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_relationshipName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.rootPropertyNone generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyNone ("observablePropertyAST.rootPropertyNone",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_rootPropertyNone::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyNone ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_rootPropertyNone::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_rootPropertyNone (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyNone GGS_observablePropertyAST_2E_rootPropertyNone::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_rootPropertyNone result ;
  const GGS_observablePropertyAST_2E_rootPropertyNone * p = (const GGS_observablePropertyAST_2E_rootPropertyNone *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_rootPropertyNone *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.rootPropertyNone", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @observablePropertyAST_2E_rootPropertyNone_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyNone_3F_::GGS_observablePropertyAST_2E_rootPropertyNone_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyNone_3F_::GGS_observablePropertyAST_2E_rootPropertyNone_3F_ (const GGS_observablePropertyAST_2E_rootPropertyNone & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyNone_3F_ GGS_observablePropertyAST_2E_rootPropertyNone_3F_::init_nil (void) {
  GGS_observablePropertyAST_2E_rootPropertyNone_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_rootPropertyNone_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_rootPropertyNone_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_rootPropertyNone_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_observablePropertyAST_2E_rootPropertyNone () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_rootPropertyNone_3F_::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.rootPropertyNone? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyNone_3F_ ("observablePropertyAST.rootPropertyNone?",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_rootPropertyNone_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_rootPropertyNone_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_rootPropertyNone_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_rootPropertyNone_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyNone_3F_ GGS_observablePropertyAST_2E_rootPropertyNone_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_rootPropertyNone_3F_ result ;
  const GGS_observablePropertyAST_2E_rootPropertyNone_3F_ * p = (const GGS_observablePropertyAST_2E_rootPropertyNone_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_rootPropertyNone_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.rootPropertyNone?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfProperty::GGS_observablePropertyAST_2E_selfProperty (void) :
mProperty_propertyName () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfProperty::GGS_observablePropertyAST_2E_selfProperty (const GGS_observablePropertyAST_2E_selfProperty & inSource) :
mProperty_propertyName (inSource.mProperty_propertyName) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfProperty & GGS_observablePropertyAST_2E_selfProperty::operator = (const GGS_observablePropertyAST_2E_selfProperty & inSource) {
  mProperty_propertyName = inSource.mProperty_propertyName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfProperty GGS_observablePropertyAST_2E_selfProperty::init_21_ (const GGS_lstring & in_propertyName,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyName = in_propertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfProperty::GGS_observablePropertyAST_2E_selfProperty (const GGS_lstring & inOperand0) :
mProperty_propertyName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfProperty GGS_observablePropertyAST_2E_selfProperty::class_func_new (const GGS_lstring & in_propertyName,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyName = in_propertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfProperty::isValid (void) const {
  return mProperty_propertyName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfProperty::drop (void) {
  mProperty_propertyName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfProperty::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @observablePropertyAST.selfProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_propertyName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.selfProperty generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfProperty ("observablePropertyAST.selfProperty",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_selfProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_selfProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_selfProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfProperty GGS_observablePropertyAST_2E_selfProperty::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfProperty result ;
  const GGS_observablePropertyAST_2E_selfProperty * p = (const GGS_observablePropertyAST_2E_selfProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_selfProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.selfProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @observablePropertyAST_2E_selfProperty_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfProperty_3F_::GGS_observablePropertyAST_2E_selfProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfProperty_3F_::GGS_observablePropertyAST_2E_selfProperty_3F_ (const GGS_observablePropertyAST_2E_selfProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfProperty_3F_ GGS_observablePropertyAST_2E_selfProperty_3F_::init_nil (void) {
  GGS_observablePropertyAST_2E_selfProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfProperty_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_observablePropertyAST_2E_selfProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfProperty_3F_::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.selfProperty? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfProperty_3F_ ("observablePropertyAST.selfProperty?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_selfProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_selfProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_selfProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfProperty_3F_ GGS_observablePropertyAST_2E_selfProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfProperty_3F_ result ;
  const GGS_observablePropertyAST_2E_selfProperty_3F_ * p = (const GGS_observablePropertyAST_2E_selfProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_selfProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.selfProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyWithOption::GGS_observablePropertyAST_2E_selfPropertyWithOption (void) :
mProperty_propertyName (),
mProperty_optionName () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyWithOption::GGS_observablePropertyAST_2E_selfPropertyWithOption (const GGS_observablePropertyAST_2E_selfPropertyWithOption & inSource) :
mProperty_propertyName (inSource.mProperty_propertyName),
mProperty_optionName (inSource.mProperty_optionName) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyWithOption & GGS_observablePropertyAST_2E_selfPropertyWithOption::operator = (const GGS_observablePropertyAST_2E_selfPropertyWithOption & inSource) {
  mProperty_propertyName = inSource.mProperty_propertyName ;
  mProperty_optionName = inSource.mProperty_optionName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyWithOption GGS_observablePropertyAST_2E_selfPropertyWithOption::init_21__21_ (const GGS_lstring & in_propertyName,
                                                                                                                       const GGS_lstring & in_optionName,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfPropertyWithOption result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyName = in_propertyName ;
  result.mProperty_optionName = in_optionName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfPropertyWithOption::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyWithOption::GGS_observablePropertyAST_2E_selfPropertyWithOption (const GGS_lstring & inOperand0,
                                                                                                          const GGS_lstring & inOperand1) :
mProperty_propertyName (inOperand0),
mProperty_optionName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyWithOption GGS_observablePropertyAST_2E_selfPropertyWithOption::class_func_new (const GGS_lstring & in_propertyName,
                                                                                                                         const GGS_lstring & in_optionName,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfPropertyWithOption result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyName = in_propertyName ;
  result.mProperty_optionName = in_optionName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfPropertyWithOption::isValid (void) const {
  return mProperty_propertyName.isValid () && mProperty_optionName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfPropertyWithOption::drop (void) {
  mProperty_propertyName.drop () ;
  mProperty_optionName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfPropertyWithOption::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @observablePropertyAST.selfPropertyWithOption:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_propertyName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_optionName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.selfPropertyWithOption generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyWithOption ("observablePropertyAST.selfPropertyWithOption",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_selfPropertyWithOption::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyWithOption ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_selfPropertyWithOption::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_selfPropertyWithOption (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyWithOption GGS_observablePropertyAST_2E_selfPropertyWithOption::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfPropertyWithOption result ;
  const GGS_observablePropertyAST_2E_selfPropertyWithOption * p = (const GGS_observablePropertyAST_2E_selfPropertyWithOption *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_selfPropertyWithOption *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.selfPropertyWithOption", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @observablePropertyAST_2E_selfPropertyWithOption_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_::GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_::GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ (const GGS_observablePropertyAST_2E_selfPropertyWithOption & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_::init_nil (void) {
  GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_observablePropertyAST_2E_selfPropertyWithOption () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.selfPropertyWithOption? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyWithOption_3F_ ("observablePropertyAST.selfPropertyWithOption?",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyWithOption_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ result ;
  const GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ * p = (const GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.selfPropertyWithOption?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyArray::GGS_observablePropertyAST_2E_selfPropertyArray (void) :
mProperty_propertyName (),
mProperty_elementPropertyName () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyArray::GGS_observablePropertyAST_2E_selfPropertyArray (const GGS_observablePropertyAST_2E_selfPropertyArray & inSource) :
mProperty_propertyName (inSource.mProperty_propertyName),
mProperty_elementPropertyName (inSource.mProperty_elementPropertyName) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyArray & GGS_observablePropertyAST_2E_selfPropertyArray::operator = (const GGS_observablePropertyAST_2E_selfPropertyArray & inSource) {
  mProperty_propertyName = inSource.mProperty_propertyName ;
  mProperty_elementPropertyName = inSource.mProperty_elementPropertyName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyArray GGS_observablePropertyAST_2E_selfPropertyArray::init_21__21_ (const GGS_lstring & in_propertyName,
                                                                                                             const GGS_lstring & in_elementPropertyName,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfPropertyArray result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyName = in_propertyName ;
  result.mProperty_elementPropertyName = in_elementPropertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfPropertyArray::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyArray::GGS_observablePropertyAST_2E_selfPropertyArray (const GGS_lstring & inOperand0,
                                                                                                const GGS_lstring & inOperand1) :
mProperty_propertyName (inOperand0),
mProperty_elementPropertyName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyArray GGS_observablePropertyAST_2E_selfPropertyArray::class_func_new (const GGS_lstring & in_propertyName,
                                                                                                               const GGS_lstring & in_elementPropertyName,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfPropertyArray result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyName = in_propertyName ;
  result.mProperty_elementPropertyName = in_elementPropertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfPropertyArray::isValid (void) const {
  return mProperty_propertyName.isValid () && mProperty_elementPropertyName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfPropertyArray::drop (void) {
  mProperty_propertyName.drop () ;
  mProperty_elementPropertyName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfPropertyArray::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @observablePropertyAST.selfPropertyArray:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_propertyName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_elementPropertyName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.selfPropertyArray generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyArray ("observablePropertyAST.selfPropertyArray",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_selfPropertyArray::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyArray ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_selfPropertyArray::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_selfPropertyArray (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyArray GGS_observablePropertyAST_2E_selfPropertyArray::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfPropertyArray result ;
  const GGS_observablePropertyAST_2E_selfPropertyArray * p = (const GGS_observablePropertyAST_2E_selfPropertyArray *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_selfPropertyArray *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.selfPropertyArray", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @observablePropertyAST_2E_selfPropertyArray_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyArray_3F_::GGS_observablePropertyAST_2E_selfPropertyArray_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyArray_3F_::GGS_observablePropertyAST_2E_selfPropertyArray_3F_ (const GGS_observablePropertyAST_2E_selfPropertyArray & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyArray_3F_ GGS_observablePropertyAST_2E_selfPropertyArray_3F_::init_nil (void) {
  GGS_observablePropertyAST_2E_selfPropertyArray_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfPropertyArray_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfPropertyArray_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfPropertyArray_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_observablePropertyAST_2E_selfPropertyArray () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfPropertyArray_3F_::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.selfPropertyArray? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyArray_3F_ ("observablePropertyAST.selfPropertyArray?",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_selfPropertyArray_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyArray_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_selfPropertyArray_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_selfPropertyArray_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyArray_3F_ GGS_observablePropertyAST_2E_selfPropertyArray_3F_::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfPropertyArray_3F_ result ;
  const GGS_observablePropertyAST_2E_selfPropertyArray_3F_ * p = (const GGS_observablePropertyAST_2E_selfPropertyArray_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_selfPropertyArray_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.selfPropertyArray?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyObject::GGS_observablePropertyAST_2E_selfPropertyObject (void) :
mProperty_propertyName (),
mProperty_elementPropertyName () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyObject::GGS_observablePropertyAST_2E_selfPropertyObject (const GGS_observablePropertyAST_2E_selfPropertyObject & inSource) :
mProperty_propertyName (inSource.mProperty_propertyName),
mProperty_elementPropertyName (inSource.mProperty_elementPropertyName) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyObject & GGS_observablePropertyAST_2E_selfPropertyObject::operator = (const GGS_observablePropertyAST_2E_selfPropertyObject & inSource) {
  mProperty_propertyName = inSource.mProperty_propertyName ;
  mProperty_elementPropertyName = inSource.mProperty_elementPropertyName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyObject GGS_observablePropertyAST_2E_selfPropertyObject::init_21__21_ (const GGS_lstring & in_propertyName,
                                                                                                               const GGS_lstring & in_elementPropertyName,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfPropertyObject result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyName = in_propertyName ;
  result.mProperty_elementPropertyName = in_elementPropertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfPropertyObject::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyObject::GGS_observablePropertyAST_2E_selfPropertyObject (const GGS_lstring & inOperand0,
                                                                                                  const GGS_lstring & inOperand1) :
mProperty_propertyName (inOperand0),
mProperty_elementPropertyName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyObject GGS_observablePropertyAST_2E_selfPropertyObject::class_func_new (const GGS_lstring & in_propertyName,
                                                                                                                 const GGS_lstring & in_elementPropertyName,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfPropertyObject result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyName = in_propertyName ;
  result.mProperty_elementPropertyName = in_elementPropertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfPropertyObject::isValid (void) const {
  return mProperty_propertyName.isValid () && mProperty_elementPropertyName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfPropertyObject::drop (void) {
  mProperty_propertyName.drop () ;
  mProperty_elementPropertyName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfPropertyObject::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @observablePropertyAST.selfPropertyObject:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_propertyName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_elementPropertyName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.selfPropertyObject generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyObject ("observablePropertyAST.selfPropertyObject",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_selfPropertyObject::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyObject ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_selfPropertyObject::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_selfPropertyObject (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyObject GGS_observablePropertyAST_2E_selfPropertyObject::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfPropertyObject result ;
  const GGS_observablePropertyAST_2E_selfPropertyObject * p = (const GGS_observablePropertyAST_2E_selfPropertyObject *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_selfPropertyObject *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.selfPropertyObject", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @observablePropertyAST_2E_selfPropertyObject_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyObject_3F_::GGS_observablePropertyAST_2E_selfPropertyObject_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyObject_3F_::GGS_observablePropertyAST_2E_selfPropertyObject_3F_ (const GGS_observablePropertyAST_2E_selfPropertyObject & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyObject_3F_ GGS_observablePropertyAST_2E_selfPropertyObject_3F_::init_nil (void) {
  GGS_observablePropertyAST_2E_selfPropertyObject_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfPropertyObject_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfPropertyObject_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfPropertyObject_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_observablePropertyAST_2E_selfPropertyObject () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfPropertyObject_3F_::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.selfPropertyObject? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyObject_3F_ ("observablePropertyAST.selfPropertyObject?",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_selfPropertyObject_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyObject_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_selfPropertyObject_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_selfPropertyObject_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyObject_3F_ GGS_observablePropertyAST_2E_selfPropertyObject_3F_::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfPropertyObject_3F_ result ;
  const GGS_observablePropertyAST_2E_selfPropertyObject_3F_ * p = (const GGS_observablePropertyAST_2E_selfPropertyObject_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_selfPropertyObject_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.selfPropertyObject?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyNone::GGS_observablePropertyAST_2E_selfPropertyNone (void) :
mProperty_propertyName () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyNone::GGS_observablePropertyAST_2E_selfPropertyNone (const GGS_observablePropertyAST_2E_selfPropertyNone & inSource) :
mProperty_propertyName (inSource.mProperty_propertyName) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyNone & GGS_observablePropertyAST_2E_selfPropertyNone::operator = (const GGS_observablePropertyAST_2E_selfPropertyNone & inSource) {
  mProperty_propertyName = inSource.mProperty_propertyName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyNone GGS_observablePropertyAST_2E_selfPropertyNone::init_21_ (const GGS_lstring & in_propertyName,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfPropertyNone result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyName = in_propertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfPropertyNone::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyNone::GGS_observablePropertyAST_2E_selfPropertyNone (const GGS_lstring & inOperand0) :
mProperty_propertyName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyNone GGS_observablePropertyAST_2E_selfPropertyNone::class_func_new (const GGS_lstring & in_propertyName,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfPropertyNone result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyName = in_propertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfPropertyNone::isValid (void) const {
  return mProperty_propertyName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfPropertyNone::drop (void) {
  mProperty_propertyName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfPropertyNone::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @observablePropertyAST.selfPropertyNone:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_propertyName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.selfPropertyNone generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyNone ("observablePropertyAST.selfPropertyNone",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_selfPropertyNone::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyNone ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_selfPropertyNone::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_selfPropertyNone (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyNone GGS_observablePropertyAST_2E_selfPropertyNone::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfPropertyNone result ;
  const GGS_observablePropertyAST_2E_selfPropertyNone * p = (const GGS_observablePropertyAST_2E_selfPropertyNone *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_selfPropertyNone *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.selfPropertyNone", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @observablePropertyAST_2E_selfPropertyNone_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyNone_3F_::GGS_observablePropertyAST_2E_selfPropertyNone_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyNone_3F_::GGS_observablePropertyAST_2E_selfPropertyNone_3F_ (const GGS_observablePropertyAST_2E_selfPropertyNone & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyNone_3F_ GGS_observablePropertyAST_2E_selfPropertyNone_3F_::init_nil (void) {
  GGS_observablePropertyAST_2E_selfPropertyNone_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfPropertyNone_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfPropertyNone_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfPropertyNone_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_observablePropertyAST_2E_selfPropertyNone () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfPropertyNone_3F_::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.selfPropertyNone? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyNone_3F_ ("observablePropertyAST.selfPropertyNone?",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_selfPropertyNone_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfPropertyNone_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_selfPropertyNone_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_selfPropertyNone_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyNone_3F_ GGS_observablePropertyAST_2E_selfPropertyNone_3F_::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfPropertyNone_3F_ result ;
  const GGS_observablePropertyAST_2E_selfPropertyNone_3F_ * p = (const GGS_observablePropertyAST_2E_selfPropertyNone_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_selfPropertyNone_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.selfPropertyNone?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsProperty::GGS_observablePropertyAST_2E_prefsProperty (void) :
mProperty_propertyName () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsProperty::GGS_observablePropertyAST_2E_prefsProperty (const GGS_observablePropertyAST_2E_prefsProperty & inSource) :
mProperty_propertyName (inSource.mProperty_propertyName) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsProperty & GGS_observablePropertyAST_2E_prefsProperty::operator = (const GGS_observablePropertyAST_2E_prefsProperty & inSource) {
  mProperty_propertyName = inSource.mProperty_propertyName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsProperty GGS_observablePropertyAST_2E_prefsProperty::init_21_ (const GGS_lstring & in_propertyName,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_prefsProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyName = in_propertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_prefsProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsProperty::GGS_observablePropertyAST_2E_prefsProperty (const GGS_lstring & inOperand0) :
mProperty_propertyName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsProperty GGS_observablePropertyAST_2E_prefsProperty::class_func_new (const GGS_lstring & in_propertyName,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_prefsProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyName = in_propertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_prefsProperty::isValid (void) const {
  return mProperty_propertyName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_prefsProperty::drop (void) {
  mProperty_propertyName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_prefsProperty::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @observablePropertyAST.prefsProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_propertyName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.prefsProperty generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsProperty ("observablePropertyAST.prefsProperty",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_prefsProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_prefsProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_prefsProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsProperty GGS_observablePropertyAST_2E_prefsProperty::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_prefsProperty result ;
  const GGS_observablePropertyAST_2E_prefsProperty * p = (const GGS_observablePropertyAST_2E_prefsProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_prefsProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.prefsProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @observablePropertyAST_2E_prefsProperty_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsProperty_3F_::GGS_observablePropertyAST_2E_prefsProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsProperty_3F_::GGS_observablePropertyAST_2E_prefsProperty_3F_ (const GGS_observablePropertyAST_2E_prefsProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsProperty_3F_ GGS_observablePropertyAST_2E_prefsProperty_3F_::init_nil (void) {
  GGS_observablePropertyAST_2E_prefsProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_prefsProperty_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_prefsProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_prefsProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_observablePropertyAST_2E_prefsProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_prefsProperty_3F_::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.prefsProperty? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsProperty_3F_ ("observablePropertyAST.prefsProperty?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_prefsProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_prefsProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_prefsProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsProperty_3F_ GGS_observablePropertyAST_2E_prefsProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_prefsProperty_3F_ result ;
  const GGS_observablePropertyAST_2E_prefsProperty_3F_ * p = (const GGS_observablePropertyAST_2E_prefsProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_prefsProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.prefsProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsPropertyWithOption::GGS_observablePropertyAST_2E_prefsPropertyWithOption (void) :
mProperty_propertyName (),
mProperty_optionName () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsPropertyWithOption::GGS_observablePropertyAST_2E_prefsPropertyWithOption (const GGS_observablePropertyAST_2E_prefsPropertyWithOption & inSource) :
mProperty_propertyName (inSource.mProperty_propertyName),
mProperty_optionName (inSource.mProperty_optionName) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsPropertyWithOption & GGS_observablePropertyAST_2E_prefsPropertyWithOption::operator = (const GGS_observablePropertyAST_2E_prefsPropertyWithOption & inSource) {
  mProperty_propertyName = inSource.mProperty_propertyName ;
  mProperty_optionName = inSource.mProperty_optionName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsPropertyWithOption GGS_observablePropertyAST_2E_prefsPropertyWithOption::init_21__21_ (const GGS_lstring & in_propertyName,
                                                                                                                         const GGS_lstring & in_optionName,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_prefsPropertyWithOption result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyName = in_propertyName ;
  result.mProperty_optionName = in_optionName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_prefsPropertyWithOption::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsPropertyWithOption::GGS_observablePropertyAST_2E_prefsPropertyWithOption (const GGS_lstring & inOperand0,
                                                                                                            const GGS_lstring & inOperand1) :
mProperty_propertyName (inOperand0),
mProperty_optionName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsPropertyWithOption GGS_observablePropertyAST_2E_prefsPropertyWithOption::class_func_new (const GGS_lstring & in_propertyName,
                                                                                                                           const GGS_lstring & in_optionName,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_prefsPropertyWithOption result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_propertyName = in_propertyName ;
  result.mProperty_optionName = in_optionName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_prefsPropertyWithOption::isValid (void) const {
  return mProperty_propertyName.isValid () && mProperty_optionName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_prefsPropertyWithOption::drop (void) {
  mProperty_propertyName.drop () ;
  mProperty_optionName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_prefsPropertyWithOption::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @observablePropertyAST.prefsPropertyWithOption:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_propertyName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_optionName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.prefsPropertyWithOption generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsPropertyWithOption ("observablePropertyAST.prefsPropertyWithOption",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_prefsPropertyWithOption::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsPropertyWithOption ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_prefsPropertyWithOption::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_prefsPropertyWithOption (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsPropertyWithOption GGS_observablePropertyAST_2E_prefsPropertyWithOption::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_prefsPropertyWithOption result ;
  const GGS_observablePropertyAST_2E_prefsPropertyWithOption * p = (const GGS_observablePropertyAST_2E_prefsPropertyWithOption *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_prefsPropertyWithOption *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.prefsPropertyWithOption", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @observablePropertyAST_2E_prefsPropertyWithOption_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_::GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_::GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ (const GGS_observablePropertyAST_2E_prefsPropertyWithOption & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_::init_nil (void) {
  GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_observablePropertyAST_2E_prefsPropertyWithOption () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.prefsPropertyWithOption? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ ("observablePropertyAST.prefsPropertyWithOption?",
                                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ result ;
  const GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ * p = (const GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.prefsPropertyWithOption?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerProperty::GGS_observablePropertyAST_2E_selfControllerProperty (void) :
mProperty_controllerName (),
mProperty_propertyName () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerProperty::GGS_observablePropertyAST_2E_selfControllerProperty (const GGS_observablePropertyAST_2E_selfControllerProperty & inSource) :
mProperty_controllerName (inSource.mProperty_controllerName),
mProperty_propertyName (inSource.mProperty_propertyName) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerProperty & GGS_observablePropertyAST_2E_selfControllerProperty::operator = (const GGS_observablePropertyAST_2E_selfControllerProperty & inSource) {
  mProperty_controllerName = inSource.mProperty_controllerName ;
  mProperty_propertyName = inSource.mProperty_propertyName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerProperty GGS_observablePropertyAST_2E_selfControllerProperty::init_21__21_ (const GGS_lstring & in_controllerName,
                                                                                                                       const GGS_lstring & in_propertyName,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfControllerProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_controllerName = in_controllerName ;
  result.mProperty_propertyName = in_propertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfControllerProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerProperty::GGS_observablePropertyAST_2E_selfControllerProperty (const GGS_lstring & inOperand0,
                                                                                                          const GGS_lstring & inOperand1) :
mProperty_controllerName (inOperand0),
mProperty_propertyName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerProperty GGS_observablePropertyAST_2E_selfControllerProperty::class_func_new (const GGS_lstring & in_controllerName,
                                                                                                                         const GGS_lstring & in_propertyName,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfControllerProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_controllerName = in_controllerName ;
  result.mProperty_propertyName = in_propertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfControllerProperty::isValid (void) const {
  return mProperty_controllerName.isValid () && mProperty_propertyName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfControllerProperty::drop (void) {
  mProperty_controllerName.drop () ;
  mProperty_propertyName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfControllerProperty::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @observablePropertyAST.selfControllerProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_controllerName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_propertyName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.selfControllerProperty generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerProperty ("observablePropertyAST.selfControllerProperty",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_selfControllerProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_selfControllerProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_selfControllerProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerProperty GGS_observablePropertyAST_2E_selfControllerProperty::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfControllerProperty result ;
  const GGS_observablePropertyAST_2E_selfControllerProperty * p = (const GGS_observablePropertyAST_2E_selfControllerProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_selfControllerProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.selfControllerProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @observablePropertyAST_2E_selfControllerProperty_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerProperty_3F_::GGS_observablePropertyAST_2E_selfControllerProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerProperty_3F_::GGS_observablePropertyAST_2E_selfControllerProperty_3F_ (const GGS_observablePropertyAST_2E_selfControllerProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerProperty_3F_ GGS_observablePropertyAST_2E_selfControllerProperty_3F_::init_nil (void) {
  GGS_observablePropertyAST_2E_selfControllerProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfControllerProperty_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfControllerProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfControllerProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_observablePropertyAST_2E_selfControllerProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfControllerProperty_3F_::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.selfControllerProperty? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerProperty_3F_ ("observablePropertyAST.selfControllerProperty?",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_selfControllerProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_selfControllerProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_selfControllerProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerProperty_3F_ GGS_observablePropertyAST_2E_selfControllerProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfControllerProperty_3F_ result ;
  const GGS_observablePropertyAST_2E_selfControllerProperty_3F_ * p = (const GGS_observablePropertyAST_2E_selfControllerProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_selfControllerProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.selfControllerProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerSecondaryProperty::GGS_observablePropertyAST_2E_selfControllerSecondaryProperty (void) :
mProperty_controllerName (),
mProperty_propertyName (),
mProperty_secondaryPropertyName () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerSecondaryProperty::GGS_observablePropertyAST_2E_selfControllerSecondaryProperty (const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty & inSource) :
mProperty_controllerName (inSource.mProperty_controllerName),
mProperty_propertyName (inSource.mProperty_propertyName),
mProperty_secondaryPropertyName (inSource.mProperty_secondaryPropertyName) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerSecondaryProperty & GGS_observablePropertyAST_2E_selfControllerSecondaryProperty::operator = (const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty & inSource) {
  mProperty_controllerName = inSource.mProperty_controllerName ;
  mProperty_propertyName = inSource.mProperty_propertyName ;
  mProperty_secondaryPropertyName = inSource.mProperty_secondaryPropertyName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerSecondaryProperty GGS_observablePropertyAST_2E_selfControllerSecondaryProperty::init_21__21__21_ (const GGS_lstring & in_controllerName,
                                                                                                                                             const GGS_lstring & in_propertyName,
                                                                                                                                             const GGS_lstring & in_secondaryPropertyName,
                                                                                                                                             Compiler * inCompiler
                                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfControllerSecondaryProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_controllerName = in_controllerName ;
  result.mProperty_propertyName = in_propertyName ;
  result.mProperty_secondaryPropertyName = in_secondaryPropertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfControllerSecondaryProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerSecondaryProperty::GGS_observablePropertyAST_2E_selfControllerSecondaryProperty (const GGS_lstring & inOperand0,
                                                                                                                            const GGS_lstring & inOperand1,
                                                                                                                            const GGS_lstring & inOperand2) :
mProperty_controllerName (inOperand0),
mProperty_propertyName (inOperand1),
mProperty_secondaryPropertyName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerSecondaryProperty GGS_observablePropertyAST_2E_selfControllerSecondaryProperty::class_func_new (const GGS_lstring & in_controllerName,
                                                                                                                                           const GGS_lstring & in_propertyName,
                                                                                                                                           const GGS_lstring & in_secondaryPropertyName,
                                                                                                                                           Compiler * inCompiler
                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfControllerSecondaryProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_controllerName = in_controllerName ;
  result.mProperty_propertyName = in_propertyName ;
  result.mProperty_secondaryPropertyName = in_secondaryPropertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfControllerSecondaryProperty::isValid (void) const {
  return mProperty_controllerName.isValid () && mProperty_propertyName.isValid () && mProperty_secondaryPropertyName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfControllerSecondaryProperty::drop (void) {
  mProperty_controllerName.drop () ;
  mProperty_propertyName.drop () ;
  mProperty_secondaryPropertyName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfControllerSecondaryProperty::description (String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @observablePropertyAST.selfControllerSecondaryProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_controllerName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_propertyName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_secondaryPropertyName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.selfControllerSecondaryProperty generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerSecondaryProperty ("observablePropertyAST.selfControllerSecondaryProperty",
                                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_selfControllerSecondaryProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerSecondaryProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_selfControllerSecondaryProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_selfControllerSecondaryProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerSecondaryProperty GGS_observablePropertyAST_2E_selfControllerSecondaryProperty::extractObject (const GGS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfControllerSecondaryProperty result ;
  const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty * p = (const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.selfControllerSecondaryProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @observablePropertyAST_2E_selfControllerSecondaryProperty_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_::GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_::GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ (const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_::init_nil (void) {
  GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_observablePropertyAST_2E_selfControllerSecondaryProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_::description (String & ioString,
                                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.selfControllerSecondaryProperty? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ ("observablePropertyAST.selfControllerSecondaryProperty?",
                                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ result ;
  const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ * p = (const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.selfControllerSecondaryProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerAllProperties::GGS_observablePropertyAST_2E_selfControllerAllProperties (void) :
mProperty_controllerName (),
mProperty_propertyName (),
mProperty_secondaryPropertyName () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerAllProperties::GGS_observablePropertyAST_2E_selfControllerAllProperties (const GGS_observablePropertyAST_2E_selfControllerAllProperties & inSource) :
mProperty_controllerName (inSource.mProperty_controllerName),
mProperty_propertyName (inSource.mProperty_propertyName),
mProperty_secondaryPropertyName (inSource.mProperty_secondaryPropertyName) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerAllProperties & GGS_observablePropertyAST_2E_selfControllerAllProperties::operator = (const GGS_observablePropertyAST_2E_selfControllerAllProperties & inSource) {
  mProperty_controllerName = inSource.mProperty_controllerName ;
  mProperty_propertyName = inSource.mProperty_propertyName ;
  mProperty_secondaryPropertyName = inSource.mProperty_secondaryPropertyName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerAllProperties GGS_observablePropertyAST_2E_selfControllerAllProperties::init_21__21__21_ (const GGS_lstring & in_controllerName,
                                                                                                                                     const GGS_lstring & in_propertyName,
                                                                                                                                     const GGS_lstring & in_secondaryPropertyName,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfControllerAllProperties result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_controllerName = in_controllerName ;
  result.mProperty_propertyName = in_propertyName ;
  result.mProperty_secondaryPropertyName = in_secondaryPropertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfControllerAllProperties::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerAllProperties::GGS_observablePropertyAST_2E_selfControllerAllProperties (const GGS_lstring & inOperand0,
                                                                                                                    const GGS_lstring & inOperand1,
                                                                                                                    const GGS_lstring & inOperand2) :
mProperty_controllerName (inOperand0),
mProperty_propertyName (inOperand1),
mProperty_secondaryPropertyName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerAllProperties GGS_observablePropertyAST_2E_selfControllerAllProperties::class_func_new (const GGS_lstring & in_controllerName,
                                                                                                                                   const GGS_lstring & in_propertyName,
                                                                                                                                   const GGS_lstring & in_secondaryPropertyName,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfControllerAllProperties result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_controllerName = in_controllerName ;
  result.mProperty_propertyName = in_propertyName ;
  result.mProperty_secondaryPropertyName = in_secondaryPropertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfControllerAllProperties::isValid (void) const {
  return mProperty_controllerName.isValid () && mProperty_propertyName.isValid () && mProperty_secondaryPropertyName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfControllerAllProperties::drop (void) {
  mProperty_controllerName.drop () ;
  mProperty_propertyName.drop () ;
  mProperty_secondaryPropertyName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfControllerAllProperties::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @observablePropertyAST.selfControllerAllProperties:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_controllerName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_propertyName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_secondaryPropertyName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.selfControllerAllProperties generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerAllProperties ("observablePropertyAST.selfControllerAllProperties",
                                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_selfControllerAllProperties::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerAllProperties ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_selfControllerAllProperties::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_selfControllerAllProperties (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerAllProperties GGS_observablePropertyAST_2E_selfControllerAllProperties::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfControllerAllProperties result ;
  const GGS_observablePropertyAST_2E_selfControllerAllProperties * p = (const GGS_observablePropertyAST_2E_selfControllerAllProperties *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_selfControllerAllProperties *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.selfControllerAllProperties", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @observablePropertyAST_2E_selfControllerAllProperties_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_::GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_::GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ (const GGS_observablePropertyAST_2E_selfControllerAllProperties & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_::init_nil (void) {
  GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_observablePropertyAST_2E_selfControllerAllProperties () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_::description (String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.selfControllerAllProperties? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerAllProperties_3F_ ("observablePropertyAST.selfControllerAllProperties?",
                                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerAllProperties_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ result ;
  const GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ * p = (const GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.selfControllerAllProperties?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerOneProperty::GGS_observablePropertyAST_2E_selfControllerOneProperty (void) :
mProperty_controllerName (),
mProperty_propertyName () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerOneProperty::GGS_observablePropertyAST_2E_selfControllerOneProperty (const GGS_observablePropertyAST_2E_selfControllerOneProperty & inSource) :
mProperty_controllerName (inSource.mProperty_controllerName),
mProperty_propertyName (inSource.mProperty_propertyName) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerOneProperty & GGS_observablePropertyAST_2E_selfControllerOneProperty::operator = (const GGS_observablePropertyAST_2E_selfControllerOneProperty & inSource) {
  mProperty_controllerName = inSource.mProperty_controllerName ;
  mProperty_propertyName = inSource.mProperty_propertyName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerOneProperty GGS_observablePropertyAST_2E_selfControllerOneProperty::init_21__21_ (const GGS_lstring & in_controllerName,
                                                                                                                             const GGS_lstring & in_propertyName,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfControllerOneProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_controllerName = in_controllerName ;
  result.mProperty_propertyName = in_propertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfControllerOneProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerOneProperty::GGS_observablePropertyAST_2E_selfControllerOneProperty (const GGS_lstring & inOperand0,
                                                                                                                const GGS_lstring & inOperand1) :
mProperty_controllerName (inOperand0),
mProperty_propertyName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerOneProperty GGS_observablePropertyAST_2E_selfControllerOneProperty::class_func_new (const GGS_lstring & in_controllerName,
                                                                                                                               const GGS_lstring & in_propertyName,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfControllerOneProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_controllerName = in_controllerName ;
  result.mProperty_propertyName = in_propertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfControllerOneProperty::isValid (void) const {
  return mProperty_controllerName.isValid () && mProperty_propertyName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfControllerOneProperty::drop (void) {
  mProperty_controllerName.drop () ;
  mProperty_propertyName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfControllerOneProperty::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @observablePropertyAST.selfControllerOneProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_controllerName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_propertyName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.selfControllerOneProperty generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerOneProperty ("observablePropertyAST.selfControllerOneProperty",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_selfControllerOneProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerOneProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_selfControllerOneProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_selfControllerOneProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerOneProperty GGS_observablePropertyAST_2E_selfControllerOneProperty::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfControllerOneProperty result ;
  const GGS_observablePropertyAST_2E_selfControllerOneProperty * p = (const GGS_observablePropertyAST_2E_selfControllerOneProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_selfControllerOneProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.selfControllerOneProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @observablePropertyAST_2E_selfControllerOneProperty_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_::GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_::GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ (const GGS_observablePropertyAST_2E_selfControllerOneProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_::init_nil (void) {
  GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_observablePropertyAST_2E_selfControllerOneProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.selfControllerOneProperty? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerOneProperty_3F_ ("observablePropertyAST.selfControllerOneProperty?",
                                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfControllerOneProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ result ;
  const GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ * p = (const GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.selfControllerOneProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superProperty::GGS_observablePropertyAST_2E_superProperty (void) :
mProperty_superEntityName (),
mProperty_propertyName () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superProperty::GGS_observablePropertyAST_2E_superProperty (const GGS_observablePropertyAST_2E_superProperty & inSource) :
mProperty_superEntityName (inSource.mProperty_superEntityName),
mProperty_propertyName (inSource.mProperty_propertyName) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superProperty & GGS_observablePropertyAST_2E_superProperty::operator = (const GGS_observablePropertyAST_2E_superProperty & inSource) {
  mProperty_superEntityName = inSource.mProperty_superEntityName ;
  mProperty_propertyName = inSource.mProperty_propertyName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_observablePropertyAST_2E_superProperty GGS_observablePropertyAST_2E_superProperty::init_21__21_ (const GGS_lstring & in_superEntityName,
                                                                                                     const GGS_lstring & in_propertyName,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_superProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_superEntityName = in_superEntityName ;
  result.mProperty_propertyName = in_propertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_superProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superProperty::GGS_observablePropertyAST_2E_superProperty (const GGS_lstring & inOperand0,
                                                                                        const GGS_lstring & inOperand1) :
mProperty_superEntityName (inOperand0),
mProperty_propertyName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superProperty GGS_observablePropertyAST_2E_superProperty::class_func_new (const GGS_lstring & in_superEntityName,
                                                                                                       const GGS_lstring & in_propertyName,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_superProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_superEntityName = in_superEntityName ;
  result.mProperty_propertyName = in_propertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_superProperty::isValid (void) const {
  return mProperty_superEntityName.isValid () && mProperty_propertyName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_superProperty::drop (void) {
  mProperty_superEntityName.drop () ;
  mProperty_propertyName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_superProperty::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @observablePropertyAST.superProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_superEntityName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_propertyName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.superProperty generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superProperty ("observablePropertyAST.superProperty",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_superProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_superProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_superProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_superProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superProperty GGS_observablePropertyAST_2E_superProperty::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_superProperty result ;
  const GGS_observablePropertyAST_2E_superProperty * p = (const GGS_observablePropertyAST_2E_superProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_superProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.superProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @observablePropertyAST_2E_superProperty_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superProperty_3F_::GGS_observablePropertyAST_2E_superProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superProperty_3F_::GGS_observablePropertyAST_2E_superProperty_3F_ (const GGS_observablePropertyAST_2E_superProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superProperty_3F_ GGS_observablePropertyAST_2E_superProperty_3F_::init_nil (void) {
  GGS_observablePropertyAST_2E_superProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_superProperty_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_superProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_superProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_observablePropertyAST_2E_superProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_superProperty_3F_::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.superProperty? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superProperty_3F_ ("observablePropertyAST.superProperty?",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_superProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_superProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_superProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_superProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superProperty_3F_ GGS_observablePropertyAST_2E_superProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_superProperty_3F_ result ;
  const GGS_observablePropertyAST_2E_superProperty_3F_ * p = (const GGS_observablePropertyAST_2E_superProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_superProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.superProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superPropertyWithDefaultValue::GGS_observablePropertyAST_2E_superPropertyWithDefaultValue (void) :
mProperty_superEntityName (),
mProperty_propertyName (),
mProperty_defaultValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superPropertyWithDefaultValue::GGS_observablePropertyAST_2E_superPropertyWithDefaultValue (const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue & inSource) :
mProperty_superEntityName (inSource.mProperty_superEntityName),
mProperty_propertyName (inSource.mProperty_propertyName),
mProperty_defaultValue (inSource.mProperty_defaultValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superPropertyWithDefaultValue & GGS_observablePropertyAST_2E_superPropertyWithDefaultValue::operator = (const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue & inSource) {
  mProperty_superEntityName = inSource.mProperty_superEntityName ;
  mProperty_propertyName = inSource.mProperty_propertyName ;
  mProperty_defaultValue = inSource.mProperty_defaultValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_observablePropertyAST_2E_superPropertyWithDefaultValue GGS_observablePropertyAST_2E_superPropertyWithDefaultValue::init_21__21__21_ (const GGS_lstring & in_superEntityName,
                                                                                                                                         const GGS_lstring & in_propertyName,
                                                                                                                                         const GGS_abstractDefaultValue & in_defaultValue,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_superPropertyWithDefaultValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_superEntityName = in_superEntityName ;
  result.mProperty_propertyName = in_propertyName ;
  result.mProperty_defaultValue = in_defaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_superPropertyWithDefaultValue::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superPropertyWithDefaultValue::GGS_observablePropertyAST_2E_superPropertyWithDefaultValue (const GGS_lstring & inOperand0,
                                                                                                                        const GGS_lstring & inOperand1,
                                                                                                                        const GGS_abstractDefaultValue & inOperand2) :
mProperty_superEntityName (inOperand0),
mProperty_propertyName (inOperand1),
mProperty_defaultValue (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superPropertyWithDefaultValue GGS_observablePropertyAST_2E_superPropertyWithDefaultValue::class_func_new (const GGS_lstring & in_superEntityName,
                                                                                                                                       const GGS_lstring & in_propertyName,
                                                                                                                                       const GGS_abstractDefaultValue & in_defaultValue,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_superPropertyWithDefaultValue result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_superEntityName = in_superEntityName ;
  result.mProperty_propertyName = in_propertyName ;
  result.mProperty_defaultValue = in_defaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_superPropertyWithDefaultValue::isValid (void) const {
  return mProperty_superEntityName.isValid () && mProperty_propertyName.isValid () && mProperty_defaultValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_superPropertyWithDefaultValue::drop (void) {
  mProperty_superEntityName.drop () ;
  mProperty_propertyName.drop () ;
  mProperty_defaultValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_superPropertyWithDefaultValue::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @observablePropertyAST.superPropertyWithDefaultValue:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_superEntityName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_propertyName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_defaultValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.superPropertyWithDefaultValue generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superPropertyWithDefaultValue ("observablePropertyAST.superPropertyWithDefaultValue",
                                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_superPropertyWithDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_superPropertyWithDefaultValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_superPropertyWithDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_superPropertyWithDefaultValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superPropertyWithDefaultValue GGS_observablePropertyAST_2E_superPropertyWithDefaultValue::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_superPropertyWithDefaultValue result ;
  const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue * p = (const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.superPropertyWithDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @observablePropertyAST_2E_superPropertyWithDefaultValue_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_::GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_::GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ (const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_::init_nil (void) {
  GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_observablePropertyAST_2E_superPropertyWithDefaultValue () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_::description (String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.superPropertyWithDefaultValue? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ ("observablePropertyAST.superPropertyWithDefaultValue?",
                                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ result ;
  const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ * p = (const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.superPropertyWithDefaultValue?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList_2E_element::GGS_computedPropertyGenerationList_2E_element (void) :
mProperty_mProperty () {
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList_2E_element::GGS_computedPropertyGenerationList_2E_element (const GGS_computedPropertyGenerationList_2E_element & inSource) :
mProperty_mProperty (inSource.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList_2E_element & GGS_computedPropertyGenerationList_2E_element::operator = (const GGS_computedPropertyGenerationList_2E_element & inSource) {
  mProperty_mProperty = inSource.mProperty_mProperty ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_computedPropertyGenerationList_2E_element GGS_computedPropertyGenerationList_2E_element::init_21_ (const GGS_computedPropertyGeneration & in_mProperty,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_computedPropertyGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProperty = in_mProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList_2E_element::GGS_computedPropertyGenerationList_2E_element (const GGS_computedPropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList_2E_element GGS_computedPropertyGenerationList_2E_element::class_func_new (const GGS_computedPropertyGeneration & in_mProperty,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_computedPropertyGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProperty = in_mProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_computedPropertyGenerationList_2E_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList_2E_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList_2E_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @computedPropertyGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @computedPropertyGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGenerationList_2E_element ("computedPropertyGenerationList.element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_computedPropertyGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computedPropertyGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computedPropertyGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList_2E_element GGS_computedPropertyGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_computedPropertyGenerationList_2E_element result ;
  const GGS_computedPropertyGenerationList_2E_element * p = (const GGS_computedPropertyGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computedPropertyGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedPropertyGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList_2E_element::GGS_simpleStoredPropertyList_2E_element (void) :
mProperty_mPropertyTypeName (),
mProperty_mPropertyName (),
mProperty_mDefaultValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList_2E_element::GGS_simpleStoredPropertyList_2E_element (const GGS_simpleStoredPropertyList_2E_element & inSource) :
mProperty_mPropertyTypeName (inSource.mProperty_mPropertyTypeName),
mProperty_mPropertyName (inSource.mProperty_mPropertyName),
mProperty_mDefaultValue (inSource.mProperty_mDefaultValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList_2E_element & GGS_simpleStoredPropertyList_2E_element::operator = (const GGS_simpleStoredPropertyList_2E_element & inSource) {
  mProperty_mPropertyTypeName = inSource.mProperty_mPropertyTypeName ;
  mProperty_mPropertyName = inSource.mProperty_mPropertyName ;
  mProperty_mDefaultValue = inSource.mProperty_mDefaultValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_simpleStoredPropertyList_2E_element GGS_simpleStoredPropertyList_2E_element::init_21__21__21_ (const GGS_lstring & in_mPropertyTypeName,
                                                                                                   const GGS_lstring & in_mPropertyName,
                                                                                                   const GGS_abstractDefaultValue & in_mDefaultValue,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_simpleStoredPropertyList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyTypeName = in_mPropertyTypeName ;
  result.mProperty_mPropertyName = in_mPropertyName ;
  result.mProperty_mDefaultValue = in_mDefaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList_2E_element::GGS_simpleStoredPropertyList_2E_element (const GGS_lstring & inOperand0,
                                                                                  const GGS_lstring & inOperand1,
                                                                                  const GGS_abstractDefaultValue & inOperand2) :
mProperty_mPropertyTypeName (inOperand0),
mProperty_mPropertyName (inOperand1),
mProperty_mDefaultValue (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList_2E_element GGS_simpleStoredPropertyList_2E_element::class_func_new (const GGS_lstring & in_mPropertyTypeName,
                                                                                                 const GGS_lstring & in_mPropertyName,
                                                                                                 const GGS_abstractDefaultValue & in_mDefaultValue,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_simpleStoredPropertyList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mPropertyTypeName = in_mPropertyTypeName ;
  result.mProperty_mPropertyName = in_mPropertyName ;
  result.mProperty_mDefaultValue = in_mDefaultValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_simpleStoredPropertyList_2E_element::isValid (void) const {
  return mProperty_mPropertyTypeName.isValid () && mProperty_mPropertyName.isValid () && mProperty_mDefaultValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList_2E_element::drop (void) {
  mProperty_mPropertyTypeName.drop () ;
  mProperty_mPropertyName.drop () ;
  mProperty_mDefaultValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList_2E_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @simpleStoredPropertyList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mPropertyTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefaultValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @simpleStoredPropertyList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_simpleStoredPropertyList_2E_element ("simpleStoredPropertyList.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_simpleStoredPropertyList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleStoredPropertyList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_simpleStoredPropertyList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_simpleStoredPropertyList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList_2E_element GGS_simpleStoredPropertyList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_simpleStoredPropertyList_2E_element result ;
  const GGS_simpleStoredPropertyList_2E_element * p = (const GGS_simpleStoredPropertyList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_simpleStoredPropertyList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleStoredPropertyList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToOne::GGS_toOneOppositeRelationship_2E_oppositeIsToOne (void) :
mProperty_oppositeRelationshipName () {
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToOne::GGS_toOneOppositeRelationship_2E_oppositeIsToOne (const GGS_toOneOppositeRelationship_2E_oppositeIsToOne & inSource) :
mProperty_oppositeRelationshipName (inSource.mProperty_oppositeRelationshipName) {
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToOne & GGS_toOneOppositeRelationship_2E_oppositeIsToOne::operator = (const GGS_toOneOppositeRelationship_2E_oppositeIsToOne & inSource) {
  mProperty_oppositeRelationshipName = inSource.mProperty_oppositeRelationshipName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToOne GGS_toOneOppositeRelationship_2E_oppositeIsToOne::init_21_ (const GGS_lstring & in_oppositeRelationshipName,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toOneOppositeRelationship_2E_oppositeIsToOne result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_oppositeRelationshipName = in_oppositeRelationshipName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOneOppositeRelationship_2E_oppositeIsToOne::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToOne::GGS_toOneOppositeRelationship_2E_oppositeIsToOne (const GGS_lstring & inOperand0) :
mProperty_oppositeRelationshipName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToOne GGS_toOneOppositeRelationship_2E_oppositeIsToOne::class_func_new (const GGS_lstring & in_oppositeRelationshipName,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toOneOppositeRelationship_2E_oppositeIsToOne result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_oppositeRelationshipName = in_oppositeRelationshipName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_toOneOppositeRelationship_2E_oppositeIsToOne::objectCompare (const GGS_toOneOppositeRelationship_2E_oppositeIsToOne & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_oppositeRelationshipName.objectCompare (inOperand.mProperty_oppositeRelationshipName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_toOneOppositeRelationship_2E_oppositeIsToOne::isValid (void) const {
  return mProperty_oppositeRelationshipName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOneOppositeRelationship_2E_oppositeIsToOne::drop (void) {
  mProperty_oppositeRelationshipName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOneOppositeRelationship_2E_oppositeIsToOne::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @toOneOppositeRelationship.oppositeIsToOne:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_oppositeRelationshipName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @toOneOppositeRelationship.oppositeIsToOne generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship_2E_oppositeIsToOne ("toOneOppositeRelationship.oppositeIsToOne",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toOneOppositeRelationship_2E_oppositeIsToOne::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneOppositeRelationship_2E_oppositeIsToOne ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toOneOppositeRelationship_2E_oppositeIsToOne::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toOneOppositeRelationship_2E_oppositeIsToOne (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToOne GGS_toOneOppositeRelationship_2E_oppositeIsToOne::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_toOneOppositeRelationship_2E_oppositeIsToOne result ;
  const GGS_toOneOppositeRelationship_2E_oppositeIsToOne * p = (const GGS_toOneOppositeRelationship_2E_oppositeIsToOne *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toOneOppositeRelationship_2E_oppositeIsToOne *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneOppositeRelationship.oppositeIsToOne", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @toOneOppositeRelationship_2E_oppositeIsToOne_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_::GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_::GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ (const GGS_toOneOppositeRelationship_2E_oppositeIsToOne & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_::init_nil (void) {
  GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_toOneOppositeRelationship_2E_oppositeIsToOne () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_::objectCompare (const GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @toOneOppositeRelationship.oppositeIsToOne? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ ("toOneOppositeRelationship.oppositeIsToOne?",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ result ;
  const GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ * p = (const GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneOppositeRelationship.oppositeIsToOne?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToMany::GGS_toOneOppositeRelationship_2E_oppositeIsToMany (void) :
mProperty_oppositeRelationshipName () {
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToMany::GGS_toOneOppositeRelationship_2E_oppositeIsToMany (const GGS_toOneOppositeRelationship_2E_oppositeIsToMany & inSource) :
mProperty_oppositeRelationshipName (inSource.mProperty_oppositeRelationshipName) {
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToMany & GGS_toOneOppositeRelationship_2E_oppositeIsToMany::operator = (const GGS_toOneOppositeRelationship_2E_oppositeIsToMany & inSource) {
  mProperty_oppositeRelationshipName = inSource.mProperty_oppositeRelationshipName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToMany GGS_toOneOppositeRelationship_2E_oppositeIsToMany::init_21_ (const GGS_lstring & in_oppositeRelationshipName,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toOneOppositeRelationship_2E_oppositeIsToMany result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_oppositeRelationshipName = in_oppositeRelationshipName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOneOppositeRelationship_2E_oppositeIsToMany::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToMany::GGS_toOneOppositeRelationship_2E_oppositeIsToMany (const GGS_lstring & inOperand0) :
mProperty_oppositeRelationshipName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToMany GGS_toOneOppositeRelationship_2E_oppositeIsToMany::class_func_new (const GGS_lstring & in_oppositeRelationshipName,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toOneOppositeRelationship_2E_oppositeIsToMany result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_oppositeRelationshipName = in_oppositeRelationshipName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_toOneOppositeRelationship_2E_oppositeIsToMany::objectCompare (const GGS_toOneOppositeRelationship_2E_oppositeIsToMany & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_oppositeRelationshipName.objectCompare (inOperand.mProperty_oppositeRelationshipName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_toOneOppositeRelationship_2E_oppositeIsToMany::isValid (void) const {
  return mProperty_oppositeRelationshipName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOneOppositeRelationship_2E_oppositeIsToMany::drop (void) {
  mProperty_oppositeRelationshipName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOneOppositeRelationship_2E_oppositeIsToMany::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @toOneOppositeRelationship.oppositeIsToMany:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_oppositeRelationshipName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @toOneOppositeRelationship.oppositeIsToMany generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship_2E_oppositeIsToMany ("toOneOppositeRelationship.oppositeIsToMany",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toOneOppositeRelationship_2E_oppositeIsToMany::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneOppositeRelationship_2E_oppositeIsToMany ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toOneOppositeRelationship_2E_oppositeIsToMany::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toOneOppositeRelationship_2E_oppositeIsToMany (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToMany GGS_toOneOppositeRelationship_2E_oppositeIsToMany::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_toOneOppositeRelationship_2E_oppositeIsToMany result ;
  const GGS_toOneOppositeRelationship_2E_oppositeIsToMany * p = (const GGS_toOneOppositeRelationship_2E_oppositeIsToMany *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toOneOppositeRelationship_2E_oppositeIsToMany *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneOppositeRelationship.oppositeIsToMany", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @toOneOppositeRelationship_2E_oppositeIsToMany_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_::GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_::GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ (const GGS_toOneOppositeRelationship_2E_oppositeIsToMany & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_::init_nil (void) {
  GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_toOneOppositeRelationship_2E_oppositeIsToMany () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_::objectCompare (const GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @toOneOppositeRelationship.oppositeIsToMany? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ ("toOneOppositeRelationship.oppositeIsToMany?",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ result ;
  const GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ * p = (const GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOneOppositeRelationship.oppositeIsToMany?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList_2E_element::GGS_toOnePropertyGenerationList_2E_element (void) :
mProperty_mProperty () {
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList_2E_element::GGS_toOnePropertyGenerationList_2E_element (const GGS_toOnePropertyGenerationList_2E_element & inSource) :
mProperty_mProperty (inSource.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList_2E_element & GGS_toOnePropertyGenerationList_2E_element::operator = (const GGS_toOnePropertyGenerationList_2E_element & inSource) {
  mProperty_mProperty = inSource.mProperty_mProperty ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_toOnePropertyGenerationList_2E_element GGS_toOnePropertyGenerationList_2E_element::init_21_ (const GGS_toOnePropertyGeneration & in_mProperty,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toOnePropertyGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProperty = in_mProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList_2E_element::GGS_toOnePropertyGenerationList_2E_element (const GGS_toOnePropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList_2E_element GGS_toOnePropertyGenerationList_2E_element::class_func_new (const GGS_toOnePropertyGeneration & in_mProperty,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toOnePropertyGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProperty = in_mProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_toOnePropertyGenerationList_2E_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList_2E_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @toOnePropertyGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @toOnePropertyGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toOnePropertyGenerationList_2E_element ("toOnePropertyGenerationList.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toOnePropertyGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toOnePropertyGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toOnePropertyGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList_2E_element GGS_toOnePropertyGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_toOnePropertyGenerationList_2E_element result ;
  const GGS_toOnePropertyGenerationList_2E_element * p = (const GGS_toOnePropertyGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toOnePropertyGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOnePropertyGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasOpposite::GGS_toManyRelationshipOptionAST_2E_hasOpposite (void) :
mProperty_oppositeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasOpposite::GGS_toManyRelationshipOptionAST_2E_hasOpposite (const GGS_toManyRelationshipOptionAST_2E_hasOpposite & inSource) :
mProperty_oppositeName (inSource.mProperty_oppositeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasOpposite & GGS_toManyRelationshipOptionAST_2E_hasOpposite::operator = (const GGS_toManyRelationshipOptionAST_2E_hasOpposite & inSource) {
  mProperty_oppositeName = inSource.mProperty_oppositeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasOpposite GGS_toManyRelationshipOptionAST_2E_hasOpposite::init_21_ (const GGS_lstring & in_oppositeName,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionAST_2E_hasOpposite result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_oppositeName = in_oppositeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionAST_2E_hasOpposite::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasOpposite::GGS_toManyRelationshipOptionAST_2E_hasOpposite (const GGS_lstring & inOperand0) :
mProperty_oppositeName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasOpposite GGS_toManyRelationshipOptionAST_2E_hasOpposite::class_func_new (const GGS_lstring & in_oppositeName,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionAST_2E_hasOpposite result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_oppositeName = in_oppositeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_toManyRelationshipOptionAST_2E_hasOpposite::isValid (void) const {
  return mProperty_oppositeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionAST_2E_hasOpposite::drop (void) {
  mProperty_oppositeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionAST_2E_hasOpposite::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @toManyRelationshipOptionAST.hasOpposite:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_oppositeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @toManyRelationshipOptionAST.hasOpposite generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasOpposite ("toManyRelationshipOptionAST.hasOpposite",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toManyRelationshipOptionAST_2E_hasOpposite::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasOpposite ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyRelationshipOptionAST_2E_hasOpposite::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyRelationshipOptionAST_2E_hasOpposite (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasOpposite GGS_toManyRelationshipOptionAST_2E_hasOpposite::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionAST_2E_hasOpposite result ;
  const GGS_toManyRelationshipOptionAST_2E_hasOpposite * p = (const GGS_toManyRelationshipOptionAST_2E_hasOpposite *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyRelationshipOptionAST_2E_hasOpposite *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipOptionAST.hasOpposite", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @toManyRelationshipOptionAST_2E_hasOpposite_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_::GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_::GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ (const GGS_toManyRelationshipOptionAST_2E_hasOpposite & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_::init_nil (void) {
  GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_toManyRelationshipOptionAST_2E_hasOpposite () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @toManyRelationshipOptionAST.hasOpposite? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ ("toManyRelationshipOptionAST.hasOpposite?",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ result ;
  const GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ * p = (const GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyRelationshipOptionAST_2E_hasOpposite_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipOptionAST.hasOpposite?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasDependance::GGS_toManyRelationshipOptionAST_2E_hasDependance (void) :
mProperty_masterPropertyName () {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasDependance::GGS_toManyRelationshipOptionAST_2E_hasDependance (const GGS_toManyRelationshipOptionAST_2E_hasDependance & inSource) :
mProperty_masterPropertyName (inSource.mProperty_masterPropertyName) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasDependance & GGS_toManyRelationshipOptionAST_2E_hasDependance::operator = (const GGS_toManyRelationshipOptionAST_2E_hasDependance & inSource) {
  mProperty_masterPropertyName = inSource.mProperty_masterPropertyName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasDependance GGS_toManyRelationshipOptionAST_2E_hasDependance::init_21_ (const GGS_lstring & in_masterPropertyName,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionAST_2E_hasDependance result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_masterPropertyName = in_masterPropertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionAST_2E_hasDependance::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasDependance::GGS_toManyRelationshipOptionAST_2E_hasDependance (const GGS_lstring & inOperand0) :
mProperty_masterPropertyName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasDependance GGS_toManyRelationshipOptionAST_2E_hasDependance::class_func_new (const GGS_lstring & in_masterPropertyName,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionAST_2E_hasDependance result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_masterPropertyName = in_masterPropertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_toManyRelationshipOptionAST_2E_hasDependance::isValid (void) const {
  return mProperty_masterPropertyName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionAST_2E_hasDependance::drop (void) {
  mProperty_masterPropertyName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionAST_2E_hasDependance::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @toManyRelationshipOptionAST.hasDependance:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_masterPropertyName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @toManyRelationshipOptionAST.hasDependance generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasDependance ("toManyRelationshipOptionAST.hasDependance",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toManyRelationshipOptionAST_2E_hasDependance::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasDependance ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyRelationshipOptionAST_2E_hasDependance::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyRelationshipOptionAST_2E_hasDependance (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasDependance GGS_toManyRelationshipOptionAST_2E_hasDependance::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionAST_2E_hasDependance result ;
  const GGS_toManyRelationshipOptionAST_2E_hasDependance * p = (const GGS_toManyRelationshipOptionAST_2E_hasDependance *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyRelationshipOptionAST_2E_hasDependance *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipOptionAST.hasDependance", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @toManyRelationshipOptionAST_2E_hasDependance_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_::GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_::GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ (const GGS_toManyRelationshipOptionAST_2E_hasDependance & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_::init_nil (void) {
  GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_toManyRelationshipOptionAST_2E_hasDependance () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @toManyRelationshipOptionAST.hasDependance? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasDependance_3F_ ("toManyRelationshipOptionAST.hasDependance?",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipOptionAST_2E_hasDependance_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ result ;
  const GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ * p = (const GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyRelationshipOptionAST_2E_hasDependance_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipOptionAST.hasDependance?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_runActionDescriptor_2E_action::GGS_runActionDescriptor_2E_action (void) :
mProperty_target (),
mProperty_action () {
}

//--------------------------------------------------------------------------------------------------

GGS_runActionDescriptor_2E_action::GGS_runActionDescriptor_2E_action (const GGS_runActionDescriptor_2E_action & inSource) :
mProperty_target (inSource.mProperty_target),
mProperty_action (inSource.mProperty_action) {
}

//--------------------------------------------------------------------------------------------------

GGS_runActionDescriptor_2E_action & GGS_runActionDescriptor_2E_action::operator = (const GGS_runActionDescriptor_2E_action & inSource) {
  mProperty_target = inSource.mProperty_target ;
  mProperty_action = inSource.mProperty_action ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_runActionDescriptor_2E_action GGS_runActionDescriptor_2E_action::init_21__21_ (const GGS_lstring & in_target,
                                                                                   const GGS_lstring & in_action,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_runActionDescriptor_2E_action result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_target = in_target ;
  result.mProperty_action = in_action ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_runActionDescriptor_2E_action::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_runActionDescriptor_2E_action::GGS_runActionDescriptor_2E_action (const GGS_lstring & inOperand0,
                                                                      const GGS_lstring & inOperand1) :
mProperty_target (inOperand0),
mProperty_action (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_runActionDescriptor_2E_action GGS_runActionDescriptor_2E_action::class_func_new (const GGS_lstring & in_target,
                                                                                     const GGS_lstring & in_action,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_runActionDescriptor_2E_action result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_target = in_target ;
  result.mProperty_action = in_action ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_runActionDescriptor_2E_action::objectCompare (const GGS_runActionDescriptor_2E_action & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_target.objectCompare (inOperand.mProperty_target) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_action.objectCompare (inOperand.mProperty_action) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_runActionDescriptor_2E_action::isValid (void) const {
  return mProperty_target.isValid () && mProperty_action.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_runActionDescriptor_2E_action::drop (void) {
  mProperty_target.drop () ;
  mProperty_action.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_runActionDescriptor_2E_action::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @runActionDescriptor.action:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_target.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_action.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @runActionDescriptor.action generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_runActionDescriptor_2E_action ("runActionDescriptor.action",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_runActionDescriptor_2E_action::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_runActionDescriptor_2E_action ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_runActionDescriptor_2E_action::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_runActionDescriptor_2E_action (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_runActionDescriptor_2E_action GGS_runActionDescriptor_2E_action::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_runActionDescriptor_2E_action result ;
  const GGS_runActionDescriptor_2E_action * p = (const GGS_runActionDescriptor_2E_action *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_runActionDescriptor_2E_action *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("runActionDescriptor.action", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @runActionDescriptor_2E_action_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_runActionDescriptor_2E_action_3F_::GGS_runActionDescriptor_2E_action_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_runActionDescriptor_2E_action_3F_::GGS_runActionDescriptor_2E_action_3F_ (const GGS_runActionDescriptor_2E_action & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_runActionDescriptor_2E_action_3F_ GGS_runActionDescriptor_2E_action_3F_::init_nil (void) {
  GGS_runActionDescriptor_2E_action_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_runActionDescriptor_2E_action_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_runActionDescriptor_2E_action_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_runActionDescriptor_2E_action_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_runActionDescriptor_2E_action () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_runActionDescriptor_2E_action_3F_::objectCompare (const GGS_runActionDescriptor_2E_action_3F_ & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mState < inOperand.mState) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mState > inOperand.mState) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else if (mState == OptionalState::valuated) {
      result = mValue.objectCompare (inOperand.mValue) ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_runActionDescriptor_2E_action_3F_::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @runActionDescriptor.action? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_runActionDescriptor_2E_action_3F_ ("runActionDescriptor.action?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_runActionDescriptor_2E_action_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_runActionDescriptor_2E_action_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_runActionDescriptor_2E_action_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_runActionDescriptor_2E_action_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_runActionDescriptor_2E_action_3F_ GGS_runActionDescriptor_2E_action_3F_::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_runActionDescriptor_2E_action_3F_ result ;
  const GGS_runActionDescriptor_2E_action_3F_ * p = (const GGS_runActionDescriptor_2E_action_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_runActionDescriptor_2E_action_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("runActionDescriptor.action?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap_2E_element::GGS_actionMap_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap_2E_element::GGS_actionMap_2E_element (const GGS_actionMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap_2E_element & GGS_actionMap_2E_element::operator = (const GGS_actionMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_actionMap_2E_element GGS_actionMap_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap_2E_element::GGS_actionMap_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap_2E_element GGS_actionMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_actionMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionMap_2E_element::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @actionMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @actionMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionMap_2E_element ("actionMap.element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_actionMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actionMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actionMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap_2E_element GGS_actionMap_2E_element::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_actionMap_2E_element result ;
  const GGS_actionMap_2E_element * p = (const GGS_actionMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actionMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @actionMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_actionMap_2E_element_3F_::GGS_actionMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap_2E_element_3F_::GGS_actionMap_2E_element_3F_ (const GGS_actionMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_actionMap_2E_element_3F_ GGS_actionMap_2E_element_3F_::init_nil (void) {
  GGS_actionMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_actionMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_actionMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_actionMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionMap_2E_element_3F_::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @actionMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionMap_2E_element_3F_ ("actionMap.element?",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_actionMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actionMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actionMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap_2E_element_3F_ GGS_actionMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_actionMap_2E_element_3F_ result ;
  const GGS_actionMap_2E_element_3F_ * p = (const GGS_actionMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actionMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingList_2E_element::GGS_regularBindingList_2E_element (void) :
mProperty_mBindingName (),
mProperty_mObservablePropertyList (),
mProperty_mBindingOptionList () {
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingList_2E_element::GGS_regularBindingList_2E_element (const GGS_regularBindingList_2E_element & inSource) :
mProperty_mBindingName (inSource.mProperty_mBindingName),
mProperty_mObservablePropertyList (inSource.mProperty_mObservablePropertyList),
mProperty_mBindingOptionList (inSource.mProperty_mBindingOptionList) {
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingList_2E_element & GGS_regularBindingList_2E_element::operator = (const GGS_regularBindingList_2E_element & inSource) {
  mProperty_mBindingName = inSource.mProperty_mBindingName ;
  mProperty_mObservablePropertyList = inSource.mProperty_mObservablePropertyList ;
  mProperty_mBindingOptionList = inSource.mProperty_mBindingOptionList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_regularBindingList_2E_element GGS_regularBindingList_2E_element::init_21__21__21_ (const GGS_lstring & in_mBindingName,
                                                                                       const GGS_observablePropertyList & in_mObservablePropertyList,
                                                                                       const GGS_bindingOptionList & in_mBindingOptionList,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_regularBindingList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mObservablePropertyList = in_mObservablePropertyList ;
  result.mProperty_mBindingOptionList = in_mBindingOptionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingList_2E_element::GGS_regularBindingList_2E_element (const GGS_lstring & inOperand0,
                                                                      const GGS_observablePropertyList & inOperand1,
                                                                      const GGS_bindingOptionList & inOperand2) :
mProperty_mBindingName (inOperand0),
mProperty_mObservablePropertyList (inOperand1),
mProperty_mBindingOptionList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingList_2E_element GGS_regularBindingList_2E_element::class_func_new (const GGS_lstring & in_mBindingName,
                                                                                     const GGS_observablePropertyList & in_mObservablePropertyList,
                                                                                     const GGS_bindingOptionList & in_mBindingOptionList,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_regularBindingList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mObservablePropertyList = in_mObservablePropertyList ;
  result.mProperty_mBindingOptionList = in_mBindingOptionList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_regularBindingList_2E_element::isValid (void) const {
  return mProperty_mBindingName.isValid () && mProperty_mObservablePropertyList.isValid () && mProperty_mBindingOptionList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingList_2E_element::drop (void) {
  mProperty_mBindingName.drop () ;
  mProperty_mObservablePropertyList.drop () ;
  mProperty_mBindingOptionList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingList_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @regularBindingList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mBindingName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mObservablePropertyList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBindingOptionList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @regularBindingList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularBindingList_2E_element ("regularBindingList.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_regularBindingList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_regularBindingList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_regularBindingList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingList_2E_element GGS_regularBindingList_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_regularBindingList_2E_element result ;
  const GGS_regularBindingList_2E_element * p = (const GGS_regularBindingList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_regularBindingList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularBindingList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST_2E_element::GGS_arrayControllerBindingListAST_2E_element (void) :
mProperty_mControllerName (),
mProperty_mHiddenSelectionViewBindingDescriptor () {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST_2E_element::GGS_arrayControllerBindingListAST_2E_element (const GGS_arrayControllerBindingListAST_2E_element & inSource) :
mProperty_mControllerName (inSource.mProperty_mControllerName),
mProperty_mHiddenSelectionViewBindingDescriptor (inSource.mProperty_mHiddenSelectionViewBindingDescriptor) {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST_2E_element & GGS_arrayControllerBindingListAST_2E_element::operator = (const GGS_arrayControllerBindingListAST_2E_element & inSource) {
  mProperty_mControllerName = inSource.mProperty_mControllerName ;
  mProperty_mHiddenSelectionViewBindingDescriptor = inSource.mProperty_mHiddenSelectionViewBindingDescriptor ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_arrayControllerBindingListAST_2E_element GGS_arrayControllerBindingListAST_2E_element::init_21__21_ (const GGS_lstring & in_mControllerName,
                                                                                                         const GGS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_arrayControllerBindingListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mControllerName = in_mControllerName ;
  result.mProperty_mHiddenSelectionViewBindingDescriptor = in_mHiddenSelectionViewBindingDescriptor ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST_2E_element::GGS_arrayControllerBindingListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                            const GGS_multipleBindingDescriptor & inOperand1) :
mProperty_mControllerName (inOperand0),
mProperty_mHiddenSelectionViewBindingDescriptor (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST_2E_element GGS_arrayControllerBindingListAST_2E_element::class_func_new (const GGS_lstring & in_mControllerName,
                                                                                                           const GGS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_arrayControllerBindingListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mControllerName = in_mControllerName ;
  result.mProperty_mHiddenSelectionViewBindingDescriptor = in_mHiddenSelectionViewBindingDescriptor ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_arrayControllerBindingListAST_2E_element::isValid (void) const {
  return mProperty_mControllerName.isValid () && mProperty_mHiddenSelectionViewBindingDescriptor.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST_2E_element::drop (void) {
  mProperty_mControllerName.drop () ;
  mProperty_mHiddenSelectionViewBindingDescriptor.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @arrayControllerBindingListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mControllerName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mHiddenSelectionViewBindingDescriptor.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @arrayControllerBindingListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerBindingListAST_2E_element ("arrayControllerBindingListAST.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_arrayControllerBindingListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBindingListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayControllerBindingListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayControllerBindingListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST_2E_element GGS_arrayControllerBindingListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_arrayControllerBindingListAST_2E_element result ;
  const GGS_arrayControllerBindingListAST_2E_element * p = (const GGS_arrayControllerBindingListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayControllerBindingListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBindingListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship::GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship (void) :
mProperty_rootEntityName () {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship::GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship (const GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship & inSource) :
mProperty_rootEntityName (inSource.mProperty_rootEntityName) {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship & GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship::operator = (const GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship & inSource) {
  mProperty_rootEntityName = inSource.mProperty_rootEntityName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship::init_21_ (const GGS_lstring & in_rootEntityName,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_rootEntityName = in_rootEntityName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship::GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship (const GGS_lstring & inOperand0) :
mProperty_rootEntityName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship::class_func_new (const GGS_lstring & in_rootEntityName,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_rootEntityName = in_rootEntityName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship::isValid (void) const {
  return mProperty_rootEntityName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship::drop (void) {
  mProperty_rootEntityName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @arrayControllerBoundModelAST.rootToManyRelationship:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_rootEntityName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @arrayControllerBoundModelAST.rootToManyRelationship generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerBoundModelAST_2E_rootToManyRelationship ("arrayControllerBoundModelAST.rootToManyRelationship",
                                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBoundModelAST_2E_rootToManyRelationship ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship result ;
  const GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship * p = (const GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBoundModelAST.rootToManyRelationship", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_::GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_::GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ (const GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_::init_nil (void) {
  GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_::description (String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @arrayControllerBoundModelAST.rootToManyRelationship? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ ("arrayControllerBoundModelAST.rootToManyRelationship?",
                                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ result ;
  const GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ * p = (const GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBoundModelAST.rootToManyRelationship?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element::GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element (void) :
mProperty_mEditable (),
mProperty_mPropertyName (),
mProperty_mColumnParameterListAST (),
mProperty_mSortPropertyName () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element::GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element (const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element & inSource) :
mProperty_mEditable (inSource.mProperty_mEditable),
mProperty_mPropertyName (inSource.mProperty_mPropertyName),
mProperty_mColumnParameterListAST (inSource.mProperty_mColumnParameterListAST),
mProperty_mSortPropertyName (inSource.mProperty_mSortPropertyName) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element & GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element::operator = (const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element & inSource) {
  mProperty_mEditable = inSource.mProperty_mEditable ;
  mProperty_mPropertyName = inSource.mProperty_mPropertyName ;
  mProperty_mColumnParameterListAST = inSource.mProperty_mColumnParameterListAST ;
  mProperty_mSortPropertyName = inSource.mProperty_mSortPropertyName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element::init_21__21__21__21_ (const GGS_bool & in_mEditable,
                                                                                                                                                     const GGS_lstring & in_mPropertyName,
                                                                                                                                                     const GGS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                                                                                                                     const GGS_lstring & in_mSortPropertyName,
                                                                                                                                                     Compiler * inCompiler
                                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEditable = in_mEditable ;
  result.mProperty_mPropertyName = in_mPropertyName ;
  result.mProperty_mColumnParameterListAST = in_mColumnParameterListAST ;
  result.mProperty_mSortPropertyName = in_mSortPropertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element::GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element (const GGS_bool & inOperand0,
                                                                                                                                const GGS_lstring & inOperand1,
                                                                                                                                const GGS_astAutoLayoutViewInstructionParameterList & inOperand2,
                                                                                                                                const GGS_lstring & inOperand3) :
mProperty_mEditable (inOperand0),
mProperty_mPropertyName (inOperand1),
mProperty_mColumnParameterListAST (inOperand2),
mProperty_mSortPropertyName (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element::class_func_new (const GGS_bool & in_mEditable,
                                                                                                                                               const GGS_lstring & in_mPropertyName,
                                                                                                                                               const GGS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                                                                                                               const GGS_lstring & in_mSortPropertyName,
                                                                                                                                               Compiler * inCompiler
                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEditable = in_mEditable ;
  result.mProperty_mPropertyName = in_mPropertyName ;
  result.mProperty_mColumnParameterListAST = in_mColumnParameterListAST ;
  result.mProperty_mSortPropertyName = in_mSortPropertyName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element::isValid (void) const {
  return mProperty_mEditable.isValid () && mProperty_mPropertyName.isValid () && mProperty_mColumnParameterListAST.isValid () && mProperty_mSortPropertyName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element::drop (void) {
  mProperty_mEditable.drop () ;
  mProperty_mPropertyName.drop () ;
  mProperty_mColumnParameterListAST.drop () ;
  mProperty_mSortPropertyName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element::description (String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutTableViewControllerBoundColumnListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mEditable.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPropertyName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mColumnParameterListAST.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSortPropertyName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutTableViewControllerBoundColumnListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2E_element ("autoLayoutTableViewControllerBoundColumnListAST.element",
                                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element result ;
  const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element * p = (const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerBoundColumnListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST_2E_element::GGS_autoLayoutTableViewControllerAttributListAST_2E_element (void) :
mProperty_mAttributeName (),
mProperty_mAttributeValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST_2E_element::GGS_autoLayoutTableViewControllerAttributListAST_2E_element (const GGS_autoLayoutTableViewControllerAttributListAST_2E_element & inSource) :
mProperty_mAttributeName (inSource.mProperty_mAttributeName),
mProperty_mAttributeValue (inSource.mProperty_mAttributeValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST_2E_element & GGS_autoLayoutTableViewControllerAttributListAST_2E_element::operator = (const GGS_autoLayoutTableViewControllerAttributListAST_2E_element & inSource) {
  mProperty_mAttributeName = inSource.mProperty_mAttributeName ;
  mProperty_mAttributeValue = inSource.mProperty_mAttributeValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST_2E_element GGS_autoLayoutTableViewControllerAttributListAST_2E_element::init_21__21_ (const GGS_lstring & in_mAttributeName,
                                                                                                                                       const GGS_abstractDefaultValue & in_mAttributeValue,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerAttributListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAttributeName = in_mAttributeName ;
  result.mProperty_mAttributeValue = in_mAttributeValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST_2E_element::GGS_autoLayoutTableViewControllerAttributListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                                                          const GGS_abstractDefaultValue & inOperand1) :
mProperty_mAttributeName (inOperand0),
mProperty_mAttributeValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST_2E_element GGS_autoLayoutTableViewControllerAttributListAST_2E_element::class_func_new (const GGS_lstring & in_mAttributeName,
                                                                                                                                         const GGS_abstractDefaultValue & in_mAttributeValue,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerAttributListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mAttributeName = in_mAttributeName ;
  result.mProperty_mAttributeValue = in_mAttributeValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutTableViewControllerAttributListAST_2E_element::isValid (void) const {
  return mProperty_mAttributeName.isValid () && mProperty_mAttributeValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST_2E_element::drop (void) {
  mProperty_mAttributeName.drop () ;
  mProperty_mAttributeValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST_2E_element::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutTableViewControllerAttributListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mAttributeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAttributeValue.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutTableViewControllerAttributListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributListAST_2E_element ("autoLayoutTableViewControllerAttributListAST.element",
                                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutTableViewControllerAttributListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutTableViewControllerAttributListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutTableViewControllerAttributListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST_2E_element GGS_autoLayoutTableViewControllerAttributListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerAttributListAST_2E_element result ;
  const GGS_autoLayoutTableViewControllerAttributListAST_2E_element * p = (const GGS_autoLayoutTableViewControllerAttributListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutTableViewControllerAttributListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerAttributListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_document::GGS_classKind_2E_document (void) :
mProperty_rootEntityName () {
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_document::GGS_classKind_2E_document (const GGS_classKind_2E_document & inSource) :
mProperty_rootEntityName (inSource.mProperty_rootEntityName) {
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_document & GGS_classKind_2E_document::operator = (const GGS_classKind_2E_document & inSource) {
  mProperty_rootEntityName = inSource.mProperty_rootEntityName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_classKind_2E_document GGS_classKind_2E_document::init_21_ (const GGS_lstring & in_rootEntityName,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind_2E_document result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_rootEntityName = in_rootEntityName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_document::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_document::GGS_classKind_2E_document (const GGS_lstring & inOperand0) :
mProperty_rootEntityName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_document GGS_classKind_2E_document::class_func_new (const GGS_lstring & in_rootEntityName,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind_2E_document result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_rootEntityName = in_rootEntityName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classKind_2E_document::isValid (void) const {
  return mProperty_rootEntityName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_document::drop (void) {
  mProperty_rootEntityName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_document::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @classKind.document:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_rootEntityName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @classKind.document generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classKind_2E_document ("classKind.document",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_classKind_2E_document::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classKind_2E_document ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classKind_2E_document::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classKind_2E_document (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_document GGS_classKind_2E_document::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_classKind_2E_document result ;
  const GGS_classKind_2E_document * p = (const GGS_classKind_2E_document *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classKind_2E_document *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classKind.document", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @classKind_2E_document_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_document_3F_::GGS_classKind_2E_document_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_document_3F_::GGS_classKind_2E_document_3F_ (const GGS_classKind_2E_document & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_document_3F_ GGS_classKind_2E_document_3F_::init_nil (void) {
  GGS_classKind_2E_document_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classKind_2E_document_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classKind_2E_document_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_document_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_classKind_2E_document () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_document_3F_::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @classKind.document? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classKind_2E_document_3F_ ("classKind.document?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_classKind_2E_document_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classKind_2E_document_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classKind_2E_document_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classKind_2E_document_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_document_3F_ GGS_classKind_2E_document_3F_::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_classKind_2E_document_3F_ result ;
  const GGS_classKind_2E_document_3F_ * p = (const GGS_classKind_2E_document_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classKind_2E_document_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classKind.document?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap_2E_element::GGS_classMap_2E_element (void) :
mProperty_lkey (),
mProperty_mClassKind (),
mProperty_mPropertyMap (),
mProperty_mActionMap (),
mProperty_mPropertyGenerationList () {
}

//--------------------------------------------------------------------------------------------------

GGS_classMap_2E_element::GGS_classMap_2E_element (const GGS_classMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mClassKind (inSource.mProperty_mClassKind),
mProperty_mPropertyMap (inSource.mProperty_mPropertyMap),
mProperty_mActionMap (inSource.mProperty_mActionMap),
mProperty_mPropertyGenerationList (inSource.mProperty_mPropertyGenerationList) {
}

//--------------------------------------------------------------------------------------------------

GGS_classMap_2E_element & GGS_classMap_2E_element::operator = (const GGS_classMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mClassKind = inSource.mProperty_mClassKind ;
  mProperty_mPropertyMap = inSource.mProperty_mPropertyMap ;
  mProperty_mActionMap = inSource.mProperty_mActionMap ;
  mProperty_mPropertyGenerationList = inSource.mProperty_mPropertyGenerationList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_classMap_2E_element GGS_classMap_2E_element::init_21__21__21__21__21_ (const GGS_lstring & in_lkey,
                                                                           const GGS_classKind & in_mClassKind,
                                                                           const GGS_propertyMap & in_mPropertyMap,
                                                                           const GGS_actionMap & in_mActionMap,
                                                                           const GGS_propertyGenerationList & in_mPropertyGenerationList,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mClassKind = in_mClassKind ;
  result.mProperty_mPropertyMap = in_mPropertyMap ;
  result.mProperty_mActionMap = in_mActionMap ;
  result.mProperty_mPropertyGenerationList = in_mPropertyGenerationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_classMap_2E_element::GGS_classMap_2E_element (const GGS_lstring & inOperand0,
                                                  const GGS_classKind & inOperand1,
                                                  const GGS_propertyMap & inOperand2,
                                                  const GGS_actionMap & inOperand3,
                                                  const GGS_propertyGenerationList & inOperand4) :
mProperty_lkey (inOperand0),
mProperty_mClassKind (inOperand1),
mProperty_mPropertyMap (inOperand2),
mProperty_mActionMap (inOperand3),
mProperty_mPropertyGenerationList (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_classMap_2E_element GGS_classMap_2E_element::class_func_new (const GGS_lstring & in_lkey,
                                                                 const GGS_classKind & in_mClassKind,
                                                                 const GGS_propertyMap & in_mPropertyMap,
                                                                 const GGS_actionMap & in_mActionMap,
                                                                 const GGS_propertyGenerationList & in_mPropertyGenerationList,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mClassKind = in_mClassKind ;
  result.mProperty_mPropertyMap = in_mPropertyMap ;
  result.mProperty_mActionMap = in_mActionMap ;
  result.mProperty_mPropertyGenerationList = in_mPropertyGenerationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mClassKind.isValid () && mProperty_mPropertyMap.isValid () && mProperty_mActionMap.isValid () && mProperty_mPropertyGenerationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mClassKind.drop () ;
  mProperty_mPropertyMap.drop () ;
  mProperty_mActionMap.drop () ;
  mProperty_mPropertyGenerationList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap_2E_element::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @classMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mClassKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPropertyMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mActionMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPropertyGenerationList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @classMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classMap_2E_element ("classMap.element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_classMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap_2E_element GGS_classMap_2E_element::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_classMap_2E_element result ;
  const GGS_classMap_2E_element * p = (const GGS_classMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @classMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_classMap_2E_element_3F_::GGS_classMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_classMap_2E_element_3F_::GGS_classMap_2E_element_3F_ (const GGS_classMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_classMap_2E_element_3F_ GGS_classMap_2E_element_3F_::init_nil (void) {
  GGS_classMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_classMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap_2E_element_3F_::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @classMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classMap_2E_element_3F_ ("classMap.element?",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_classMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap_2E_element_3F_ GGS_classMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_classMap_2E_element_3F_ result ;
  const GGS_classMap_2E_element_3F_ * p = (const GGS_classMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toMany::GGS_propertyKind_2E_toMany (void) :
mProperty_typeName (),
mProperty_accessibility (),
mProperty_graphic (),
mProperty_optionKind () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toMany::GGS_propertyKind_2E_toMany (const GGS_propertyKind_2E_toMany & inSource) :
mProperty_typeName (inSource.mProperty_typeName),
mProperty_accessibility (inSource.mProperty_accessibility),
mProperty_graphic (inSource.mProperty_graphic),
mProperty_optionKind (inSource.mProperty_optionKind) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toMany & GGS_propertyKind_2E_toMany::operator = (const GGS_propertyKind_2E_toMany & inSource) {
  mProperty_typeName = inSource.mProperty_typeName ;
  mProperty_accessibility = inSource.mProperty_accessibility ;
  mProperty_graphic = inSource.mProperty_graphic ;
  mProperty_optionKind = inSource.mProperty_optionKind ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyKind_2E_toMany GGS_propertyKind_2E_toMany::init_21__21__21__21_ (const GGS_lstring & in_typeName,
                                                                             const GGS_propertyAccessibility & in_accessibility,
                                                                             const GGS_bool & in_graphic,
                                                                             const GGS_toManyRelationshipOptionAST & in_optionKind,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind_2E_toMany result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeName = in_typeName ;
  result.mProperty_accessibility = in_accessibility ;
  result.mProperty_graphic = in_graphic ;
  result.mProperty_optionKind = in_optionKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_toMany::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toMany::GGS_propertyKind_2E_toMany (const GGS_lstring & inOperand0,
                                                        const GGS_propertyAccessibility & inOperand1,
                                                        const GGS_bool & inOperand2,
                                                        const GGS_toManyRelationshipOptionAST & inOperand3) :
mProperty_typeName (inOperand0),
mProperty_accessibility (inOperand1),
mProperty_graphic (inOperand2),
mProperty_optionKind (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toMany GGS_propertyKind_2E_toMany::class_func_new (const GGS_lstring & in_typeName,
                                                                       const GGS_propertyAccessibility & in_accessibility,
                                                                       const GGS_bool & in_graphic,
                                                                       const GGS_toManyRelationshipOptionAST & in_optionKind,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind_2E_toMany result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeName = in_typeName ;
  result.mProperty_accessibility = in_accessibility ;
  result.mProperty_graphic = in_graphic ;
  result.mProperty_optionKind = in_optionKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKind_2E_toMany::isValid (void) const {
  return mProperty_typeName.isValid () && mProperty_accessibility.isValid () && mProperty_graphic.isValid () && mProperty_optionKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_toMany::drop (void) {
  mProperty_typeName.drop () ;
  mProperty_accessibility.drop () ;
  mProperty_graphic.drop () ;
  mProperty_optionKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_toMany::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyKind.toMany:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_typeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_accessibility.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_graphic.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_optionKind.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyKind.toMany generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKind_2E_toMany ("propertyKind.toMany",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyKind_2E_toMany::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKind_2E_toMany ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKind_2E_toMany::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKind_2E_toMany (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toMany GGS_propertyKind_2E_toMany::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_propertyKind_2E_toMany result ;
  const GGS_propertyKind_2E_toMany * p = (const GGS_propertyKind_2E_toMany *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKind_2E_toMany *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKind.toMany", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @propertyKind_2E_toMany_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toMany_3F_::GGS_propertyKind_2E_toMany_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toMany_3F_::GGS_propertyKind_2E_toMany_3F_ (const GGS_propertyKind_2E_toMany & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toMany_3F_ GGS_propertyKind_2E_toMany_3F_::init_nil (void) {
  GGS_propertyKind_2E_toMany_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKind_2E_toMany_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKind_2E_toMany_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_toMany_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyKind_2E_toMany () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_toMany_3F_::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyKind.toMany? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKind_2E_toMany_3F_ ("propertyKind.toMany?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyKind_2E_toMany_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKind_2E_toMany_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKind_2E_toMany_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKind_2E_toMany_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toMany_3F_ GGS_propertyKind_2E_toMany_3F_::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_propertyKind_2E_toMany_3F_ result ;
  const GGS_propertyKind_2E_toMany_3F_ * p = (const GGS_propertyKind_2E_toMany_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKind_2E_toMany_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKind.toMany?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toOne::GGS_propertyKind_2E_toOne (void) :
mProperty_typeName (),
mProperty_accessibility (),
mProperty_graphic (),
mProperty_opposite (),
mProperty_isWeak () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toOne::GGS_propertyKind_2E_toOne (const GGS_propertyKind_2E_toOne & inSource) :
mProperty_typeName (inSource.mProperty_typeName),
mProperty_accessibility (inSource.mProperty_accessibility),
mProperty_graphic (inSource.mProperty_graphic),
mProperty_opposite (inSource.mProperty_opposite),
mProperty_isWeak (inSource.mProperty_isWeak) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toOne & GGS_propertyKind_2E_toOne::operator = (const GGS_propertyKind_2E_toOne & inSource) {
  mProperty_typeName = inSource.mProperty_typeName ;
  mProperty_accessibility = inSource.mProperty_accessibility ;
  mProperty_graphic = inSource.mProperty_graphic ;
  mProperty_opposite = inSource.mProperty_opposite ;
  mProperty_isWeak = inSource.mProperty_isWeak ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyKind_2E_toOne GGS_propertyKind_2E_toOne::init_21__21__21__21__21_ (const GGS_lstring & in_typeName,
                                                                               const GGS_propertyAccessibility & in_accessibility,
                                                                               const GGS_bool & in_graphic,
                                                                               const GGS_toOneOppositeRelationship & in_opposite,
                                                                               const GGS_bool & in_isWeak,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind_2E_toOne result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeName = in_typeName ;
  result.mProperty_accessibility = in_accessibility ;
  result.mProperty_graphic = in_graphic ;
  result.mProperty_opposite = in_opposite ;
  result.mProperty_isWeak = in_isWeak ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_toOne::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toOne::GGS_propertyKind_2E_toOne (const GGS_lstring & inOperand0,
                                                      const GGS_propertyAccessibility & inOperand1,
                                                      const GGS_bool & inOperand2,
                                                      const GGS_toOneOppositeRelationship & inOperand3,
                                                      const GGS_bool & inOperand4) :
mProperty_typeName (inOperand0),
mProperty_accessibility (inOperand1),
mProperty_graphic (inOperand2),
mProperty_opposite (inOperand3),
mProperty_isWeak (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toOne GGS_propertyKind_2E_toOne::class_func_new (const GGS_lstring & in_typeName,
                                                                     const GGS_propertyAccessibility & in_accessibility,
                                                                     const GGS_bool & in_graphic,
                                                                     const GGS_toOneOppositeRelationship & in_opposite,
                                                                     const GGS_bool & in_isWeak,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind_2E_toOne result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeName = in_typeName ;
  result.mProperty_accessibility = in_accessibility ;
  result.mProperty_graphic = in_graphic ;
  result.mProperty_opposite = in_opposite ;
  result.mProperty_isWeak = in_isWeak ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKind_2E_toOne::isValid (void) const {
  return mProperty_typeName.isValid () && mProperty_accessibility.isValid () && mProperty_graphic.isValid () && mProperty_opposite.isValid () && mProperty_isWeak.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_toOne::drop (void) {
  mProperty_typeName.drop () ;
  mProperty_accessibility.drop () ;
  mProperty_graphic.drop () ;
  mProperty_opposite.drop () ;
  mProperty_isWeak.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_toOne::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyKind.toOne:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_typeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_accessibility.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_graphic.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_opposite.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isWeak.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyKind.toOne generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKind_2E_toOne ("propertyKind.toOne",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyKind_2E_toOne::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKind_2E_toOne ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKind_2E_toOne::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKind_2E_toOne (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toOne GGS_propertyKind_2E_toOne::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_propertyKind_2E_toOne result ;
  const GGS_propertyKind_2E_toOne * p = (const GGS_propertyKind_2E_toOne *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKind_2E_toOne *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKind.toOne", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @propertyKind_2E_toOne_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toOne_3F_::GGS_propertyKind_2E_toOne_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toOne_3F_::GGS_propertyKind_2E_toOne_3F_ (const GGS_propertyKind_2E_toOne & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toOne_3F_ GGS_propertyKind_2E_toOne_3F_::init_nil (void) {
  GGS_propertyKind_2E_toOne_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKind_2E_toOne_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKind_2E_toOne_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_toOne_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyKind_2E_toOne () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_toOne_3F_::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyKind.toOne? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKind_2E_toOne_3F_ ("propertyKind.toOne?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyKind_2E_toOne_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKind_2E_toOne_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKind_2E_toOne_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKind_2E_toOne_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_toOne_3F_ GGS_propertyKind_2E_toOne_3F_::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_propertyKind_2E_toOne_3F_ result ;
  const GGS_propertyKind_2E_toOne_3F_ * p = (const GGS_propertyKind_2E_toOne_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKind_2E_toOne_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKind.toOne?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_arrayController::GGS_propertyKind_2E_arrayController (void) :
mProperty_typeName (),
mProperty_graphic () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_arrayController::GGS_propertyKind_2E_arrayController (const GGS_propertyKind_2E_arrayController & inSource) :
mProperty_typeName (inSource.mProperty_typeName),
mProperty_graphic (inSource.mProperty_graphic) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_arrayController & GGS_propertyKind_2E_arrayController::operator = (const GGS_propertyKind_2E_arrayController & inSource) {
  mProperty_typeName = inSource.mProperty_typeName ;
  mProperty_graphic = inSource.mProperty_graphic ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyKind_2E_arrayController GGS_propertyKind_2E_arrayController::init_21__21_ (const GGS_lstring & in_typeName,
                                                                                       const GGS_bool & in_graphic,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind_2E_arrayController result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeName = in_typeName ;
  result.mProperty_graphic = in_graphic ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_arrayController::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_arrayController::GGS_propertyKind_2E_arrayController (const GGS_lstring & inOperand0,
                                                                          const GGS_bool & inOperand1) :
mProperty_typeName (inOperand0),
mProperty_graphic (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_arrayController GGS_propertyKind_2E_arrayController::class_func_new (const GGS_lstring & in_typeName,
                                                                                         const GGS_bool & in_graphic,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind_2E_arrayController result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeName = in_typeName ;
  result.mProperty_graphic = in_graphic ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKind_2E_arrayController::isValid (void) const {
  return mProperty_typeName.isValid () && mProperty_graphic.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_arrayController::drop (void) {
  mProperty_typeName.drop () ;
  mProperty_graphic.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_arrayController::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyKind.arrayController:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_typeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_graphic.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyKind.arrayController generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKind_2E_arrayController ("propertyKind.arrayController",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyKind_2E_arrayController::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKind_2E_arrayController ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKind_2E_arrayController::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKind_2E_arrayController (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_arrayController GGS_propertyKind_2E_arrayController::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_propertyKind_2E_arrayController result ;
  const GGS_propertyKind_2E_arrayController * p = (const GGS_propertyKind_2E_arrayController *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKind_2E_arrayController *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKind.arrayController", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @propertyKind_2E_arrayController_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_arrayController_3F_::GGS_propertyKind_2E_arrayController_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_arrayController_3F_::GGS_propertyKind_2E_arrayController_3F_ (const GGS_propertyKind_2E_arrayController & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_arrayController_3F_ GGS_propertyKind_2E_arrayController_3F_::init_nil (void) {
  GGS_propertyKind_2E_arrayController_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKind_2E_arrayController_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKind_2E_arrayController_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_arrayController_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyKind_2E_arrayController () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_arrayController_3F_::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyKind.arrayController? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyKind_2E_arrayController_3F_ ("propertyKind.arrayController?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyKind_2E_arrayController_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKind_2E_arrayController_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKind_2E_arrayController_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKind_2E_arrayController_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_arrayController_3F_ GGS_propertyKind_2E_arrayController_3F_::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_propertyKind_2E_arrayController_3F_ result ;
  const GGS_propertyKind_2E_arrayController_3F_ * p = (const GGS_propertyKind_2E_arrayController_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKind_2E_arrayController_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKind.arrayController?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @propertyMap_2E_element_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element_3F_::GGS_propertyMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element_3F_::GGS_propertyMap_2E_element_3F_ (const GGS_propertyMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element_3F_ GGS_propertyMap_2E_element_3F_::init_nil (void) {
  GGS_propertyMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyMap_2E_element_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap_2E_element_3F_::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyMap_2E_element_3F_ ("propertyMap.element?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element_3F_ GGS_propertyMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_propertyMap_2E_element_3F_ result ;
  const GGS_propertyMap_2E_element_3F_ * p = (const GGS_propertyMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_text::GGS_mainXibElement_2E_text (void) :
mProperty_text () {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_text::GGS_mainXibElement_2E_text (const GGS_mainXibElement_2E_text & inSource) :
mProperty_text (inSource.mProperty_text) {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_text & GGS_mainXibElement_2E_text::operator = (const GGS_mainXibElement_2E_text & inSource) {
  mProperty_text = inSource.mProperty_text ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_mainXibElement_2E_text GGS_mainXibElement_2E_text::init_21_ (const GGS_lstring & in_text,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_mainXibElement_2E_text result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_text = in_text ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibElement_2E_text::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_text::GGS_mainXibElement_2E_text (const GGS_lstring & inOperand0) :
mProperty_text (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_text GGS_mainXibElement_2E_text::class_func_new (const GGS_lstring & in_text,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_mainXibElement_2E_text result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_text = in_text ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_mainXibElement_2E_text::isValid (void) const {
  return mProperty_text.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibElement_2E_text::drop (void) {
  mProperty_text.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibElement_2E_text::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @mainXibElement.text:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_text.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @mainXibElement.text generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibElement_2E_text ("mainXibElement.text",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_mainXibElement_2E_text::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibElement_2E_text ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mainXibElement_2E_text::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mainXibElement_2E_text (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_text GGS_mainXibElement_2E_text::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_mainXibElement_2E_text result ;
  const GGS_mainXibElement_2E_text * p = (const GGS_mainXibElement_2E_text *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mainXibElement_2E_text *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibElement.text", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @mainXibElement_2E_text_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_text_3F_::GGS_mainXibElement_2E_text_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_text_3F_::GGS_mainXibElement_2E_text_3F_ (const GGS_mainXibElement_2E_text & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_text_3F_ GGS_mainXibElement_2E_text_3F_::init_nil (void) {
  GGS_mainXibElement_2E_text_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_mainXibElement_2E_text_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_mainXibElement_2E_text_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibElement_2E_text_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_mainXibElement_2E_text () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibElement_2E_text_3F_::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @mainXibElement.text? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibElement_2E_text_3F_ ("mainXibElement.text?",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_mainXibElement_2E_text_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibElement_2E_text_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mainXibElement_2E_text_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mainXibElement_2E_text_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_text_3F_ GGS_mainXibElement_2E_text_3F_::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_mainXibElement_2E_text_3F_ result ;
  const GGS_mainXibElement_2E_text_3F_ * p = (const GGS_mainXibElement_2E_text_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mainXibElement_2E_text_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibElement.text?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_outlet::GGS_mainXibElement_2E_outlet (void) :
mProperty_outletType (),
mProperty_outletName () {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_outlet::GGS_mainXibElement_2E_outlet (const GGS_mainXibElement_2E_outlet & inSource) :
mProperty_outletType (inSource.mProperty_outletType),
mProperty_outletName (inSource.mProperty_outletName) {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_outlet & GGS_mainXibElement_2E_outlet::operator = (const GGS_mainXibElement_2E_outlet & inSource) {
  mProperty_outletType = inSource.mProperty_outletType ;
  mProperty_outletName = inSource.mProperty_outletName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_mainXibElement_2E_outlet GGS_mainXibElement_2E_outlet::init_21__21_ (const GGS_lstring & in_outletType,
                                                                         const GGS_lstring & in_outletName,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_mainXibElement_2E_outlet result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_outletType = in_outletType ;
  result.mProperty_outletName = in_outletName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibElement_2E_outlet::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_outlet::GGS_mainXibElement_2E_outlet (const GGS_lstring & inOperand0,
                                                            const GGS_lstring & inOperand1) :
mProperty_outletType (inOperand0),
mProperty_outletName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_outlet GGS_mainXibElement_2E_outlet::class_func_new (const GGS_lstring & in_outletType,
                                                                           const GGS_lstring & in_outletName,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_mainXibElement_2E_outlet result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_outletType = in_outletType ;
  result.mProperty_outletName = in_outletName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_mainXibElement_2E_outlet::isValid (void) const {
  return mProperty_outletType.isValid () && mProperty_outletName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibElement_2E_outlet::drop (void) {
  mProperty_outletType.drop () ;
  mProperty_outletName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibElement_2E_outlet::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @mainXibElement.outlet:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_outletType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_outletName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @mainXibElement.outlet generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibElement_2E_outlet ("mainXibElement.outlet",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_mainXibElement_2E_outlet::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibElement_2E_outlet ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mainXibElement_2E_outlet::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mainXibElement_2E_outlet (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_outlet GGS_mainXibElement_2E_outlet::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_mainXibElement_2E_outlet result ;
  const GGS_mainXibElement_2E_outlet * p = (const GGS_mainXibElement_2E_outlet *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mainXibElement_2E_outlet *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibElement.outlet", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Optional @mainXibElement_2E_outlet_3F_
//
//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_outlet_3F_::GGS_mainXibElement_2E_outlet_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_outlet_3F_::GGS_mainXibElement_2E_outlet_3F_ (const GGS_mainXibElement_2E_outlet & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_outlet_3F_ GGS_mainXibElement_2E_outlet_3F_::init_nil (void) {
  GGS_mainXibElement_2E_outlet_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_mainXibElement_2E_outlet_3F_::isValid (void) const {
  bool result = false ;
  switch (mState) {
  case OptionalState::invalid :
    break ;
  case OptionalState::isNil :
    result = true ;
    break ;
  case OptionalState::valuated :
    result = mValue.isValid () ;
    break ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_mainXibElement_2E_outlet_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibElement_2E_outlet_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_mainXibElement_2E_outlet () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibElement_2E_outlet_3F_::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<optional @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (": ") ;
  switch (mState) {
  case OptionalState::invalid :
    ioString.appendCString ("invalid") ;
    break ;
  case OptionalState::isNil :
    ioString.appendCString ("nil") ;
    break ;
  case OptionalState::valuated :
    mValue.description (ioString, inIndentation) ;
    break ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @mainXibElement.outlet? generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibElement_2E_outlet_3F_ ("mainXibElement.outlet?",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_mainXibElement_2E_outlet_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibElement_2E_outlet_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mainXibElement_2E_outlet_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mainXibElement_2E_outlet_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_outlet_3F_ GGS_mainXibElement_2E_outlet_3F_::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_mainXibElement_2E_outlet_3F_ result ;
  const GGS_mainXibElement_2E_outlet_3F_ * p = (const GGS_mainXibElement_2E_outlet_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mainXibElement_2E_outlet_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibElement.outlet?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astDeclarationStruct::GGS_astDeclarationStruct (void) :
mProperty_mUnifiedDeclarationList (),
mProperty_mBindingSpecificationListMap (),
mProperty_mAutoLayoutBindingSpecificationList (),
mProperty_mPreferences (),
mProperty_mXcodeProject (),
mProperty_mGraphvizList (),
mProperty_mAutoLayoutVStackFunctionMap (),
mProperty_mAutoLayoutHStackFunctionMap (),
mProperty_mEnumerationFunctionListAST () {
}

//--------------------------------------------------------------------------------------------------

GGS_astDeclarationStruct::GGS_astDeclarationStruct (const GGS_astDeclarationStruct & inSource) :
mProperty_mUnifiedDeclarationList (inSource.mProperty_mUnifiedDeclarationList),
mProperty_mBindingSpecificationListMap (inSource.mProperty_mBindingSpecificationListMap),
mProperty_mAutoLayoutBindingSpecificationList (inSource.mProperty_mAutoLayoutBindingSpecificationList),
mProperty_mPreferences (inSource.mProperty_mPreferences),
mProperty_mXcodeProject (inSource.mProperty_mXcodeProject),
mProperty_mGraphvizList (inSource.mProperty_mGraphvizList),
mProperty_mAutoLayoutVStackFunctionMap (inSource.mProperty_mAutoLayoutVStackFunctionMap),
mProperty_mAutoLayoutHStackFunctionMap (inSource.mProperty_mAutoLayoutHStackFunctionMap),
mProperty_mEnumerationFunctionListAST (inSource.mProperty_mEnumerationFunctionListAST) {
}

//--------------------------------------------------------------------------------------------------

GGS_astDeclarationStruct & GGS_astDeclarationStruct::operator = (const GGS_astDeclarationStruct & inSource) {
  mProperty_mUnifiedDeclarationList = inSource.mProperty_mUnifiedDeclarationList ;
  mProperty_mBindingSpecificationListMap = inSource.mProperty_mBindingSpecificationListMap ;
  mProperty_mAutoLayoutBindingSpecificationList = inSource.mProperty_mAutoLayoutBindingSpecificationList ;
  mProperty_mPreferences = inSource.mProperty_mPreferences ;
  mProperty_mXcodeProject = inSource.mProperty_mXcodeProject ;
  mProperty_mGraphvizList = inSource.mProperty_mGraphvizList ;
  mProperty_mAutoLayoutVStackFunctionMap = inSource.mProperty_mAutoLayoutVStackFunctionMap ;
  mProperty_mAutoLayoutHStackFunctionMap = inSource.mProperty_mAutoLayoutHStackFunctionMap ;
  mProperty_mEnumerationFunctionListAST = inSource.mProperty_mEnumerationFunctionListAST ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_astDeclarationStruct GGS_astDeclarationStruct::init (Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astDeclarationStruct result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astDeclarationStruct::setInitializedProperties (Compiler * inCompiler) {
GGS_declarationListAST temp_0 = GGS_declarationListAST::init (inCompiler COMMA_SOURCE_FILE ("grammar-syntax.ggs", 15)) ;
  mProperty_mUnifiedDeclarationList = temp_0 ;
GGS_outletClassBindingSpecificationList temp_1 = GGS_outletClassBindingSpecificationList::init (inCompiler COMMA_SOURCE_FILE ("grammar-syntax.ggs", 16)) ;
  mProperty_mBindingSpecificationListMap = temp_1 ;
GGS_autoLayoutViewClassBindingSpecificationList temp_2 = GGS_autoLayoutViewClassBindingSpecificationList::init (inCompiler COMMA_SOURCE_FILE ("grammar-syntax.ggs", 17)) ;
  mProperty_mAutoLayoutBindingSpecificationList = temp_2 ;
  mProperty_mPreferences = GGS_prefDeclaration::init (inCompiler COMMA_HERE) ;
  mProperty_mXcodeProject = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("grammar-syntax.ggs", 19)) ;
GGS_lstringlist temp_3 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("grammar-syntax.ggs", 20)) ;
  mProperty_mGraphvizList = temp_3 ;
GGS_astAutoLayoutViewFunctionMap temp_4 = GGS_astAutoLayoutViewFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("grammar-syntax.ggs", 21)) ;
  mProperty_mAutoLayoutVStackFunctionMap = temp_4 ;
GGS_astAutoLayoutViewFunctionMap temp_5 = GGS_astAutoLayoutViewFunctionMap::init (inCompiler COMMA_SOURCE_FILE ("grammar-syntax.ggs", 22)) ;
  mProperty_mAutoLayoutHStackFunctionMap = temp_5 ;
GGS_enumerationFunctionListAST temp_6 = GGS_enumerationFunctionListAST::init (inCompiler COMMA_SOURCE_FILE ("grammar-syntax.ggs", 23)) ;
  mProperty_mEnumerationFunctionListAST = temp_6 ;
}

//--------------------------------------------------------------------------------------------------

GGS_astDeclarationStruct::GGS_astDeclarationStruct (const GGS_declarationListAST & inOperand0,
                                                    const GGS_outletClassBindingSpecificationList & inOperand1,
                                                    const GGS_autoLayoutViewClassBindingSpecificationList & inOperand2,
                                                    const GGS_prefDeclaration & inOperand3,
                                                    const GGS_lstring & inOperand4,
                                                    const GGS_lstringlist & inOperand5,
                                                    const GGS_astAutoLayoutViewFunctionMap & inOperand6,
                                                    const GGS_astAutoLayoutViewFunctionMap & inOperand7,
                                                    const GGS_enumerationFunctionListAST & inOperand8) :
mProperty_mUnifiedDeclarationList (inOperand0),
mProperty_mBindingSpecificationListMap (inOperand1),
mProperty_mAutoLayoutBindingSpecificationList (inOperand2),
mProperty_mPreferences (inOperand3),
mProperty_mXcodeProject (inOperand4),
mProperty_mGraphvizList (inOperand5),
mProperty_mAutoLayoutVStackFunctionMap (inOperand6),
mProperty_mAutoLayoutHStackFunctionMap (inOperand7),
mProperty_mEnumerationFunctionListAST (inOperand8) {
}

//--------------------------------------------------------------------------------------------------

GGS_astDeclarationStruct GGS_astDeclarationStruct::class_func_new (Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astDeclarationStruct result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_astDeclarationStruct::isValid (void) const {
  return mProperty_mUnifiedDeclarationList.isValid () && mProperty_mBindingSpecificationListMap.isValid () && mProperty_mAutoLayoutBindingSpecificationList.isValid () && mProperty_mPreferences.isValid () && mProperty_mXcodeProject.isValid () && mProperty_mGraphvizList.isValid () && mProperty_mAutoLayoutVStackFunctionMap.isValid () && mProperty_mAutoLayoutHStackFunctionMap.isValid () && mProperty_mEnumerationFunctionListAST.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astDeclarationStruct::drop (void) {
  mProperty_mUnifiedDeclarationList.drop () ;
  mProperty_mBindingSpecificationListMap.drop () ;
  mProperty_mAutoLayoutBindingSpecificationList.drop () ;
  mProperty_mPreferences.drop () ;
  mProperty_mXcodeProject.drop () ;
  mProperty_mGraphvizList.drop () ;
  mProperty_mAutoLayoutVStackFunctionMap.drop () ;
  mProperty_mAutoLayoutHStackFunctionMap.drop () ;
  mProperty_mEnumerationFunctionListAST.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astDeclarationStruct::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astDeclarationStruct:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mUnifiedDeclarationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBindingSpecificationListMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAutoLayoutBindingSpecificationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPreferences.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mXcodeProject.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGraphvizList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAutoLayoutVStackFunctionMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAutoLayoutHStackFunctionMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEnumerationFunctionListAST.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @astDeclarationStruct generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astDeclarationStruct ("astDeclarationStruct",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_astDeclarationStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDeclarationStruct ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astDeclarationStruct::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astDeclarationStruct (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astDeclarationStruct GGS_astDeclarationStruct::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_astDeclarationStruct result ;
  const GGS_astDeclarationStruct * p = (const GGS_astDeclarationStruct *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astDeclarationStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astDeclarationStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @doubleAsDefaultValue reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_doubleAsDefaultValue::objectCompare (const GGS_doubleAsDefaultValue & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_doubleAsDefaultValue::GGS_doubleAsDefaultValue (void) :
GGS_abstractDefaultValue () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_doubleAsDefaultValue GGS_doubleAsDefaultValue::
init_21_ (const GGS_ldouble & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_doubleAsDefaultValue * object = nullptr ;
  macroMyNew (object, cPtr_doubleAsDefaultValue (inCompiler COMMA_THERE)) ;
  object->doubleAsDefaultValue_init_21_ (in_mValue, inCompiler) ;
  const GGS_doubleAsDefaultValue result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_doubleAsDefaultValue::
doubleAsDefaultValue_init_21_ (const GGS_ldouble & in_mValue,
                               Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_doubleAsDefaultValue::GGS_doubleAsDefaultValue (const cPtr_doubleAsDefaultValue * inSourcePtr) :
GGS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_doubleAsDefaultValue) ;
}
//--------------------------------------------------------------------------------------------------

GGS_doubleAsDefaultValue GGS_doubleAsDefaultValue::class_func_new (const GGS_ldouble & in_mValue,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  GGS_doubleAsDefaultValue result ;
  macroMyNew (result.mObjectPtr, cPtr_doubleAsDefaultValue (in_mValue,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ldouble GGS_doubleAsDefaultValue::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ldouble () ;
  }else{
    cPtr_doubleAsDefaultValue * p = (cPtr_doubleAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_doubleAsDefaultValue) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_doubleAsDefaultValue::setProperty_mValue (const GGS_ldouble & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_doubleAsDefaultValue * p = (cPtr_doubleAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_doubleAsDefaultValue) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @doubleAsDefaultValue class
//--------------------------------------------------------------------------------------------------

cPtr_doubleAsDefaultValue::cPtr_doubleAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_doubleAsDefaultValue::cPtr_doubleAsDefaultValue (const GGS_ldouble & in_mValue,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_doubleAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doubleAsDefaultValue ;
}

void cPtr_doubleAsDefaultValue::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@doubleAsDefaultValue:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_doubleAsDefaultValue::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_doubleAsDefaultValue (mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_doubleAsDefaultValue::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDefaultValue::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @doubleAsDefaultValue generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_doubleAsDefaultValue ("doubleAsDefaultValue",
                                                                            & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_doubleAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doubleAsDefaultValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_doubleAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_doubleAsDefaultValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_doubleAsDefaultValue GGS_doubleAsDefaultValue::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_doubleAsDefaultValue result ;
  const GGS_doubleAsDefaultValue * p = (const GGS_doubleAsDefaultValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_doubleAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("doubleAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@propertyMap.element isAbstract'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_isAbstract (const GGS_propertyMap_2E_element & inObject,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_result ; // Returned variable
  result_result = GGS_bool (false) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_propertyMap_2E_element temp_1 = inObject ;
    const GGS_propertyKind_2E_property var_prop_5233 = temp_1.readProperty_mKind ().getter_getProperty (SOURCE_FILE ("semantic-analysis.ggs", 133)).unwrappedValue () ;
    if (!temp_1.readProperty_mKind ().getter_getProperty (SOURCE_FILE ("semantic-analysis.ggs", 133)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_prop_5233.readProperty_accessibility ().getter_isTransient (SOURCE_FILE ("semantic-analysis.ggs", 134)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GGS_bool var_ab_5371 ;
          var_prop_5233.readProperty_accessibility ().method_extractTransient (var_ab_5371, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.ggs", 135)) ;
          result_result = var_ab_5371 ;
        }
      }
    }
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@XcodeProjectDescriptor addICNS_file'
//
//--------------------------------------------------------------------------------------------------

void extensionSetter_addICNS_5F_file (GGS_XcodeProjectDescriptor & ioObject,
                                      const GGS_string constinArgument_inFileName,
                                      GGS_string & outArgument_outFileRef,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFileRef.drop () ; // Release 'out' argument
  {
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 6)) ;
  }
  {
  ioObject.mProperty_mICNS_5F_fileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectNewGeneration.ggs", 7)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gOption_easyBindings_5F_options_outputDeclarationDependencyGraph ("easyBindings_options",
                                         "outputDeclarationDependencyGraph",
                                         103,
                                         "output-declaration-graph",
                                         "Output a declaration dependancy graph graphviz file") ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'predefinedOutletClasses'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_predefinedOutletClasses (
  "controllers",
  0,
  gWrapperAllFiles_predefinedOutletClasses_3,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_predefinedOutletClasses (
  "standard-properties",
  0,
  gWrapperAllFiles_predefinedOutletClasses_1,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_predefinedOutletClasses (
  "xcode-project",
  0,
  gWrapperAllFiles_predefinedOutletClasses_2,
  0,
  gWrapperAllDirectories_predefinedOutletClasses_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedOutletClasses_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedOutletClasses_0 [4] = {
  & gWrapperDirectory_3_predefinedOutletClasses,
  & gWrapperDirectory_1_predefinedOutletClasses,
  & gWrapperDirectory_2_predefinedOutletClasses,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_predefinedOutletClasses (
  "",
  0,
  gWrapperAllFiles_predefinedOutletClasses_0,
  3,
  gWrapperAllDirectories_predefinedOutletClasses_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'predefinedOutletClasses sourceFile'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_predefinedOutletClasses_sourceFile (Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\nenum GridStyle {\n  noGrid, cross, line\n}\n\n//----------------------------------------------------------------------------------------\n\ntransient property struct CGFloat ;\n\ntransient property class NSImage ;\n\ntransient property class EBShape ;\n\nextern outlet class EBGraphicView : NSView $graphicController ;\nbinding EBGraphicView $underObjectsDisplay : transient EBShape ;\nbinding EBGraphicView $overObjectsDisplay : transient EBShape ;\nbinding EBGraphicView $arrowKeyMagnitude : transient Int ;\nbinding EBGraphicView $shiftArrowKeyMagnitude : transient Int ;\nbinding EBGraphicView $backColor : transient NSColor ;\nbinding EBGraphicView $mouseGrid : transient Int ;\nbinding EBGraphicView $gridStep : transient Int ;\nbinding EBGraphicView $gridStyle : transient GridStyle ;\nbinding EBGraphicView $gridDisplayFactor : transient Int ;\nbinding EBGraphicView $gridLineColor : transient NSColor ;\nbinding EBGraphicView $gridCrossColor : transient NSColor ;\nbinding EBGraphicView $zoom : property Int ;\nbinding EBGraphicView $horizontalFlip : transient Bool ;\nbinding EBGraphicView $verticalFlip : transient Bool ;\nbinding EBGraphicView $xPlacardUnit : transient Int ;\nbinding EBGraphicView $yPlacardUnit : transient Int ;\nbinding EBGraphicView $backgroundImageData : transient Data ;\nbinding EBGraphicView $backgroundImageOpacity : transient Double ;\nbinding EBGraphicView $foregroundImageData : transient Data ;\nbinding EBGraphicView $foregroundImageOpacity : transient Double ;\n\nextern outlet class EBEnclosingGraphicView : NSView $graphicController ;\nbinding EBEnclosingGraphicView $underObjectsDisplay : transient EBShape ;\nbinding EBEnclosingGraphicView $overObjectsDisplay : transient EBShape ;\nbinding EBEnclosingGraphicView $arrowKeyMagnitude : transient Int ;\nbinding EBEnclosingGraphicView $shiftArrowKeyMagnitude : transient Int ;\nbinding EBEnclosingGraphicView $backColor : transient NSColor ;\nbinding EBEnclosingGraphicView $mouseGrid : transient Int ;\nbinding EBEnclosingGraphicView $gridStep : transient Int ;\nbinding EBEnclosingGraphicView $gridStyle : transient GridStyle ;\nbinding EBEnclosingGraphicView $gridDisplayFactor : transient Int ;\nbinding EBEnclosingGraphicView $gridLineColor : transient NSColor ;\nbinding EBEnclosingGraphicView $gridCrossColor : transient NSColor ;\nbinding EBEnclosingGraphicView $zoom : property Int ;\nbinding EBEnclosingGraphicView $horizontalFlip : transient Bool ;\nbinding EBEnclosingGraphicView $verticalFlip : transient Bool ;\nbinding EBEnclosingGraphicView $xPlacardUnit : transient Int ;\nbinding EBEnclosingGraphicView $yPlacardUnit : transient Int ;\nbinding EBEnclosingGraphicView $backgroundImageData : transient Data ;\nbinding EBEnclosingGraphicView $backgroundImageOpacity : transient Double ;\nbinding EBEnclosingGraphicView $foregroundImageData : transient Data ;\nbinding EBEnclosingGraphicView $foregroundImageOpacity : transient Double ;\n\nextern outlet class NSView $hidden ;\n\nextern outlet class NSControl : NSView $enabled $run ;\n\noutlet class EBButton : NSControl ;\nbinding EBButton $title : transient String ;\n\noutlet class EBColorObserverWell : NSControl ;\nbinding EBColorObserverWell $colorObserver : transient NSColor ;\n\noutlet class EBColorWell : NSControl ;\nbinding EBColorWell $color : property NSColor {sendContinously : Bool} ;\n\n\noutlet class EBDatePicker : NSControl ;\nbinding EBDatePicker $date : property Date ;\n\noutlet class EBDoubleField : NSControl ;\nbinding EBDoubleField $value : property Double {sendContinously : Bool, autoFormatter:Bool} ;\n\n\noutlet class EBDoubleObserverField : NSControl ;\nbinding EBDoubleObserverField $valueObserver : transient Double {autoFormatter:Bool} ;\n\n\noutlet class EBIntField : NSControl ;\nbinding EBIntField $value : property Int {sendContinously : Bool, autoFormatter:Bool} ;\n\n\noutlet class EBIntObserverField : NSControl ;\nbinding EBIntObserverField $valueObserver : transient Int {autoFormatter:Bool} ;\n\n\noutlet class EBFontButton : NSControl ;\nbinding EBFontButton $fontValue : property NSFont ;\n\n\noutlet class EBPopUpButton : NSControl ;\nbinding EBPopUpButton $selectedTag : property Int ;\nbinding EBPopUpButton $selectedIndex : property enum ;\n\n\noutlet class EBGroupButton : NSControl ;\nbinding EBGroupButton $selectedIndex : property Int ;\n\n\noutlet class EBImageObserverView : NSView ;\nbinding EBImageObserverView $image : transient NSImage ;\nbinding EBImageObserverView $tooltip : transient String ;\n\n\noutlet class EBMenu ;\n\n\noutlet class EBMenuItem $enabled $run ;\n\n\noutlet class EBCheckedMenuItem ;\nbinding EBCheckedMenuItem $checked : property Bool ;\n\n\noutlet class EBProgressIndicator : NSView ;\n\n\noutlet class EBSegmentedControl : NSControl ;\nbinding EBSegmentedControl $selectedIndex : property Int ;\n\n\noutlet class EBSlider : NSControl ;\nbinding EBSlider $doubleValue : property Double {sendContinously:Bool} ;\nbinding EBSlider $intValue : property Int {sendContinously:Bool} ;\n\n\noutlet class EBStepper : NSControl ;\nbinding EBStepper $value : property Int {sendContinously:Bool} ;\n\n\noutlet class EBSwitch : NSControl ;\nbinding EBSwitch $value : property Bool ;\n\n\noutlet class EBTableView : NSControl $tableValue ;\n\n\noutlet class EBTextField : NSControl ;\nbinding EBTextField $value : property String {sendContinously : Bool} ;\n\noutlet class EBTextObserverField : NSView ;\nbinding EBTextObserverField $valueObserver : transient String ;\nbinding EBTextObserverField $backColor : transient NSColor ;\n\n\noutlet class EBTextObserverView : NSView ;\nbinding EBTextObserverView $valueObserver : transient String ;\n\n\noutlet class EBTextView : NSControl ;\nbinding EBTextView $value : property String ;\n\noutlet class EBWindow ;\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'sortProperties??!'
//
//--------------------------------------------------------------------------------------------------

void routine_sortProperties_3F__3F__21_ (const GGS_string constinArgument_inSourceFile,
                                         const GGS_declarationListAST constinArgument_inDeclarationListAST,
                                         GGS_declarationListAST & outArgument_outSortedDeclarationListAST,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSortedDeclarationListAST.drop () ; // Release 'out' argument
  GGS_declarationPrecedenceGraph var_declarationPrecedenceGraph_2415 = GGS_declarationPrecedenceGraph::init (inCompiler COMMA_HERE) ;
  UpEnumerator_declarationListAST enumerator_2455 (constinArgument_inDeclarationListAST) ;
  while (enumerator_2455.hasCurrentObject ()) {
    callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) enumerator_2455.current_mPropertyDeclaration (HERE).ptr (), var_declarationPrecedenceGraph_2415, inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 69)) ;
    enumerator_2455.gotoNextObject () ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_easyBindings_5F_options_outputDeclarationDependencyGraph.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_s_2694 = var_declarationPrecedenceGraph_2415.getter_graphviz (SOURCE_FILE ("declaration-graph.ggs", 73)) ;
      GGS_string var_path_2742 = constinArgument_inSourceFile.add_operation (GGS_string (".declarationDependancy.dot"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 74)) ;
      GGS_bool joker_2839 ; // Joker input parameter
      var_s_2694.method_writeToFileWhenDifferentContents (var_path_2742, joker_2839, inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 75)) ;
    }
  }
  GGS_declarationListAST temp_1 = GGS_declarationListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 78)) ;
  outArgument_outSortedDeclarationListAST = temp_1 ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_declarationPrecedenceGraph_2415.getter_undefinedNodeCount (SOURCE_FILE ("declaration-graph.ggs", 79)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      UpEnumerator_lstringlist enumerator_3009 (var_declarationPrecedenceGraph_2415.getter_undefinedNodeReferenceList (SOURCE_FILE ("declaration-graph.ggs", 80))) ;
      while (enumerator_3009.hasCurrentObject ()) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_3009.current_mValue (HERE).readProperty_location (), GGS_string ("the property ").add_operation (enumerator_3009.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 81)).add_operation (GGS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 81)), fixItArray3  COMMA_SOURCE_FILE ("declaration-graph.ggs", 81)) ;
        enumerator_3009.gotoNextObject () ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GGS_declarationListAST var_unsortedSemanticDeclarationListAST_3271 ;
    GGS_lstringlist joker_3256 ; // Joker input parameter
    GGS_lstringlist joker_3313 ; // Joker input parameter
    var_declarationPrecedenceGraph_2415.method_topologicalSort (outArgument_outSortedDeclarationListAST, joker_3256, var_unsortedSemanticDeclarationListAST_3271, joker_3313, inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 84)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, var_unsortedSemanticDeclarationListAST_3271.getter_count (SOURCE_FILE ("declaration-graph.ggs", 90)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_string var_s_3389 = GGS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_3271.getter_count (SOURCE_FILE ("declaration-graph.ggs", 92)).getter_string (SOURCE_FILE ("declaration-graph.ggs", 91)), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 91)).add_operation (GGS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 92)) ;
        UpEnumerator_declarationListAST enumerator_3562 (var_unsortedSemanticDeclarationListAST_3271) ;
        while (enumerator_3562.hasCurrentObject ()) {
          var_s_3389.plusAssign_operation(GGS_string ("\n-  ").add_operation (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3562.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 95)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 95)), inCompiler  COMMA_SOURCE_FILE ("declaration-graph.ggs", 95)) ;
          enumerator_3562.gotoNextObject () ;
        }
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-graph.ggs", 97)), var_s_3389, fixItArray5  COMMA_SOURCE_FILE ("declaration-graph.ggs", 97)) ;
        UpEnumerator_declarationListAST enumerator_3706 (var_unsortedSemanticDeclarationListAST_3271) ;
        while (enumerator_3706.hasCurrentObject ()) {
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3706.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)).readProperty_location (), GGS_string ("the ").add_operation (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3706.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)).add_operation (GGS_string (" property is declared here"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)), fixItArray6  COMMA_SOURCE_FILE ("declaration-graph.ggs", 99)) ;
          enumerator_3706.gotoNextObject () ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@transientClassDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_transientClassDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_transientClassDeclarationAST temp_0 = this ;
  const GGS_transientClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("transient-property-class.ggs", 12)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@transientClassDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_transientClassDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_transientClassDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@transientClassDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_transientClassDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                   GGS_generationStruct & ioArgument_ioGeneration,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_transientClassDeclarationAST temp_0 = this ;
  const GGS_transientClassDeclarationAST temp_1 = this ;
  GGS_propertyMap temp_2 = GGS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("transient-property-class.ggs", 64)) ;
  GGS_actionMap temp_3 = GGS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("transient-property-class.ggs", 65)) ;
  GGS_propertyGenerationList temp_4 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("transient-property-class.ggs", 66)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_0.readProperty_mClassName (), GGS_classKind::class_func_atomic (GGS_typeKind::class_func_transientPropertyExternType (temp_1.readProperty_mClassName ().readProperty_string ()  COMMA_SOURCE_FILE ("transient-property-class.ggs", 63))  COMMA_SOURCE_FILE ("transient-property-class.ggs", 63)), temp_2, temp_3, temp_4, inCompiler COMMA_SOURCE_FILE ("transient-property-class.ggs", 61)) ;
  }
  {
  const GGS_transientClassDeclarationAST temp_5 = this ;
  const GGS_transientClassDeclarationAST temp_6 = this ;
  ioArgument_ioGeneration.mProperty_mTransientPropertyTypeList.setter_append (temp_5.readProperty_mClassName ().readProperty_string (), temp_6.readProperty_mIsClass (), inCompiler COMMA_SOURCE_FILE ("transient-property-class.ggs", 68)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumerationDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_enumerationDeclarationAST temp_0 = this ;
  const GGS_enumerationDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 13)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumerationDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_enumerationDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_enumerationDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumerationDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumerationDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                GGS_generationStruct & ioArgument_ioGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumConstantMap temp_0 = GGS_enumConstantMap::init (inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 122)) ;
  GGS_enumConstantMap var_enumConstantMap_4270 = temp_0 ;
  const GGS_enumerationDeclarationAST temp_1 = this ;
  UpEnumerator_lstringlist enumerator_4298 (temp_1.readProperty_mEnumConstantNameList ()) ;
  while (enumerator_4298.hasCurrentObject ()) {
    {
    var_enumConstantMap_4270.setter_insertKey (enumerator_4298.current_mValue (HERE), var_enumConstantMap_4270.getter_count (SOURCE_FILE ("enumeration.ggs", 124)), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 124)) ;
    }
    enumerator_4298.gotoNextObject () ;
  }
  GGS_enumFuncMap temp_2 = GGS_enumFuncMap::init (inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 126)) ;
  GGS_enumFuncMap var_enumFuncMap_4419 = temp_2 ;
  UpEnumerator_enumerationFunctionListAST enumerator_4467 (ioArgument_ioSemanticContext.readProperty_mEnumerationFunctionListAST ()) ;
  while (enumerator_4467.hasCurrentObject ()) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_enumerationDeclarationAST temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::equal, enumerator_4467.current_mEnumName (HERE).readProperty_string ().objectCompare (temp_4.readProperty_mClassName ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_stringset temp_5 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 129)) ;
        GGS_stringset var_definedConstantNameSet_4615 = temp_5 ;
        GGS_enumFunAssociationSortedList temp_6 = GGS_enumFunAssociationSortedList::init (inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 130)) ;
        GGS_enumFunAssociationSortedList var_associationSortedList_4683 = temp_6 ;
        UpEnumerator__32_lstringlist enumerator_4735 (enumerator_4467.current_mAssociationList (HERE)) ;
        while (enumerator_4735.hasCurrentObject ()) {
          GGS_uint var_idx_4829 ;
          var_enumConstantMap_4270.method_searchKey (enumerator_4735.current_mValue_30_ (HERE), var_idx_4829, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 132)) ;
          {
          var_associationSortedList_4683.setter_insert (var_idx_4829, enumerator_4735.current_mValue_31_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 133)) ;
          }
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = var_definedConstantNameSet_4615.getter_hasKey (enumerator_4735.current_mValue_30_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("enumeration.ggs", 134)).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              TC_Array <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (enumerator_4735.current_mValue_30_ (HERE).readProperty_location (), GGS_string ("Duplicated constant"), fixItArray8  COMMA_SOURCE_FILE ("enumeration.ggs", 135)) ;
            }
          }
          {
          var_definedConstantNameSet_4615.setter_insert (enumerator_4735.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 137)) ;
          }
          enumerator_4735.gotoNextObject () ;
        }
        const GGS_enumerationDeclarationAST temp_9 = this ;
        UpEnumerator_lstringlist enumerator_5106 (temp_9.readProperty_mEnumConstantNameList ()) ;
        while (enumerator_5106.hasCurrentObject ()) {
          GalgasBool test_10 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_10) {
            test_10 = var_definedConstantNameSet_4615.getter_hasKey (enumerator_5106.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("enumeration.ggs", 140)).operator_not (SOURCE_FILE ("enumeration.ggs", 140)).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              TC_Array <FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (enumerator_4467.current_mFunctionName (HERE).readProperty_location (), GGS_string ("No association for '").add_operation (enumerator_5106.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 141)).add_operation (GGS_string ("' constant"), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 141)), fixItArray11  COMMA_SOURCE_FILE ("enumeration.ggs", 141)) ;
            }
          }
          enumerator_5106.gotoNextObject () ;
        }
        {
        var_enumFuncMap_4419.setter_insertKey (enumerator_4467.current_mFunctionName (HERE), var_associationSortedList_4683, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 144)) ;
        }
      }
    }
    enumerator_4467.gotoNextObject () ;
  }
  {
  const GGS_enumerationDeclarationAST temp_12 = this ;
  const GGS_enumerationDeclarationAST temp_13 = this ;
  GGS_propertyMap temp_14 = GGS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 150)) ;
  GGS_actionMap temp_15 = GGS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 151)) ;
  GGS_propertyGenerationList temp_16 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 152)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_12.readProperty_mClassName (), GGS_classKind::class_func_atomic (GGS_typeKind::class_func_enumType (temp_13.readProperty_mClassName ().readProperty_string (), var_enumConstantMap_4270, var_enumFuncMap_4419  COMMA_SOURCE_FILE ("enumeration.ggs", 149))  COMMA_SOURCE_FILE ("enumeration.ggs", 149)), temp_14, temp_15, temp_16, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 147)) ;
  }
  {
  const GGS_enumerationDeclarationAST temp_17 = this ;
  const GGS_enumerationDeclarationAST temp_18 = this ;
  const GGS_enumerationDeclarationAST temp_19 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_enumForGeneration::init_21__21__21__21_ (temp_17.readProperty_mClassName ().readProperty_string (), temp_18.readProperty_mEnumConstantNameList (), var_enumFuncMap_4419, temp_19.readProperty_mCaseIterable (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 155)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'enumGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_enumGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_enumGenerationTemplate_3,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_enumGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_enumGenerationTemplate_1,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_enumGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_enumGenerationTemplate_2,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_0 [4] = {
  & gWrapperDirectory_3_enumGenerationTemplate,
  & gWrapperDirectory_1_enumGenerationTemplate,
  & gWrapperDirectory_2_enumGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_enumGenerationTemplate_0,
  3,
  gWrapperAllDirectories_enumGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumGenerationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (Compiler * /* inCompiler */,
                                                                             const GGS_string & in_ENUM_5F_TYPE_5F_NAME,
                                                                             const GGS_lstringlist & in_CONSTANT_5F_ORDERED_5F_LIST,
                                                                             const GGS_bool & in_CASE_5F_ITERABLE
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport Foundation\n\n//--------------------------------------------------------------------------------------------------\n\nenum ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" : Int, Sendable") ;
  const GalgasBool test_0 = in_CASE_5F_ITERABLE.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString (", CaseIterable") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" {\n") ;
  GGS_uint index_513_idx (0) ;
  if (in_CONSTANT_5F_ORDERED_5F_LIST.isValid ()) {
    UpEnumerator_lstringlist enumerator_513 (in_CONSTANT_5F_ORDERED_5F_LIST) ;
    while (enumerator_513.hasCurrentObject ()) {
      result.appendString ("  case ") ;
      result.appendString (enumerator_513.current_mValue (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (index_513_idx.getter_string (SOURCE_FILE ("enum.swift.galgasTemplate", 12)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_513.gotoNextObject () ;
      index_513_idx.increment () ;
    }
  }
  result.appendString ("}\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumEBExtensionGenerationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_enumGenerationTemplate_enumEBExtensionGenerationInSwift (Compiler * inCompiler,
                                                                                        const GGS_string & in_ENUM_5F_TYPE_5F_NAME,
                                                                                        const GGS_lstringlist & in_CONSTANT_5F_ORDERED_5F_LIST,
                                                                                        const GGS_enumFuncMap & in_FUNCTION_5F_MAP
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n\nextension ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" : EBEnumPropertyProtocol, Hashable {\n\n") ;
  GGS_uint index_500_ (0) ;
  if (in_FUNCTION_5F_MAP.isValid ()) {
    UpEnumerator_enumFuncMap enumerator_500 (in_FUNCTION_5F_MAP) ;
    while (enumerator_500.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Function ") ;
      result.appendString (enumerator_500.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  static func ") ;
      result.appendString (enumerator_500.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" () -> [String] {\n    return [") ;
      GGS_uint index_872_ (0) ;
      if (enumerator_500.current_mAssociationSortedList (HERE).isValid ()) {
        UpEnumerator_enumFunAssociationSortedList enumerator_872 (enumerator_500.current_mAssociationSortedList (HERE)) ;
        while (enumerator_872.hasCurrentObject ()) {
          result.appendString (enumerator_872.current_mAssociatedString (HERE).getter_utf_38_Representation (SOURCE_FILE ("enum.ebExtension.swift.galgasTemplate", 19)).stringValue ()) ;
          enumerator_872.gotoNextObject () ;
          if (enumerator_872.hasCurrentObject ()) {
            result.appendString (", ") ;
          }
          index_872_.increment () ;
        }
      }
      result.appendString ("]\n  }\n\n") ;
      enumerator_500.gotoNextObject () ;
      index_500_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Enum generic bindings utility functions\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  static func buildfromRawValue (rawValue : Int) -> ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? {\n    if let v = ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" (rawValue:rawValue) {\n      return v\n    }else{\n      return nil\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func enumfromRawValue (rawValue : Int) -> ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n    var result = self\n    let v : ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? = ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" (rawValue:rawValue) ;\n    if let unwrappedV = v {\n      result = unwrappedV\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  EBStoredPropertyProtocol\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func ebHashValue () -> UInt32 {\n    return UInt32 (self.rawValue)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func convertToNSObject () -> NSObject {\n    return NSNumber (value: self.rawValue)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  static func convertFromNSObject (object : NSObject) -> ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n    var result = ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (".") ;
  result.appendString (in_CONSTANT_5F_ORDERED_5F_LIST.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("enum.ebExtension.swift.galgasTemplate", 66)).readProperty_string ().stringValue ()) ;
  result.appendString ("\n    if let number = object as\? NSNumber, let v = ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" (rawValue: number.intValue) {\n      result = v\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  static func unarchiveFromDataRange (_ inData : Data, _ inRange : NSRange) -> ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? {\n    if let rawValue = inData.base62EncodedInt (range: inRange), let enumValue = ") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" (rawValue: rawValue) {\n      return enumValue\n    }else{\n      return nil\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func appendPropertyValueTo (_ ioData : inout Data) {\n    ioData.append (base62Encoded: self.rawValue)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\ntypealias EBReadWriteProperty_") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("  = EBEnumReadWriteProperty <") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (">\ntypealias EBStoredProperty_") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("     = EBEnumStoredProperty <") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (">\ntypealias EBStandAloneProperty_") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" = EBEnumStandAloneProperty <") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (">\ntypealias EBComputedProperty_") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("   = EBEnumGenericComputedProperty <") ;
  result.appendString (in_ENUM_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (">\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumForGeneration generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_enumForGeneration::method_generateCode (const GGS_string constinArgument_inOutputDirectory,
                                                  const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                  GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                  Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_enumForGeneration temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mEnumConstantList ().getter_count (SOURCE_FILE ("enumeration.ggs", 198)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_enumForGeneration temp_2 = this ;
      const GGS_enumForGeneration temp_3 = this ;
      const GGS_enumForGeneration temp_4 = this ;
      GGS_string var_sA_7048 = GGS_string (filewrapperTemplate_enumGenerationTemplate_enumGenerationInSwift (inCompiler, temp_2.readProperty_mEnumName (), temp_3.readProperty_mEnumConstantList (), temp_4.readProperty_mCaseIterable () COMMA_SOURCE_FILE ("enumeration.ggs", 199))) ;
      const GGS_enumForGeneration temp_5 = this ;
      GGS_string var_fileNameA_7203 = GGS_string ("enum-").add_operation (temp_5.readProperty_mEnumName (), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 204)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 204)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileNameA_7203, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 205)) ;
      }
      {
      GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileNameA_7203, var_sA_7048, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 206)) ;
      }
      const GGS_enumForGeneration temp_6 = this ;
      const GGS_enumForGeneration temp_7 = this ;
      const GGS_enumForGeneration temp_8 = this ;
      GGS_string var_sB_7387 = GGS_string (filewrapperTemplate_enumGenerationTemplate_enumEBExtensionGenerationInSwift (inCompiler, temp_6.readProperty_mEnumName (), temp_7.readProperty_mEnumConstantList (), temp_8.readProperty_mEnumFuncMap () COMMA_SOURCE_FILE ("enumeration.ggs", 211))) ;
      const GGS_enumForGeneration temp_9 = this ;
      GGS_string var_fileNameB_7552 = GGS_string ("enum-").add_operation (temp_9.readProperty_mEnumName (), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 216)).add_operation (GGS_string ("-ebExtension.swift"), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 216)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileNameB_7552, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 217)) ;
      }
      {
      GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileNameB_7552, var_sB_7387, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 218)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@atomicClassDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_atomicClassDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_atomicClassDeclarationAST temp_0 = this ;
  const GGS_atomicClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 12)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicClassDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_atomicClassDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_atomicClassDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterAtomicClassesIn&declarationList'
//
//--------------------------------------------------------------------------------------------------

void routine_enterAtomicClassesIn_26_declarationList (GGS_declarationListAST & ioArgument_ioDeclarationListAST,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Double").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 26)), GGS_typeKind::class_func_doubleType (SOURCE_FILE ("atomic-class.ggs", 26)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 26)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("String").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 27)), GGS_typeKind::class_func_stringType (SOURCE_FILE ("atomic-class.ggs", 27)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 27)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Int").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 28)), GGS_typeKind::class_func_integerType (SOURCE_FILE ("atomic-class.ggs", 28)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 28)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("UInt32").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 29)), GGS_typeKind::class_func_uint_33__32_Type (SOURCE_FILE ("atomic-class.ggs", 29)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 29)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Bool").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 30)), GGS_typeKind::class_func_boolType (SOURCE_FILE ("atomic-class.ggs", 30)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 30)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("NSColor").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 32)), GGS_typeKind::class_func_colorType (SOURCE_FILE ("atomic-class.ggs", 32)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 32)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("NSFont").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 33)), GGS_typeKind::class_func_fontType (SOURCE_FILE ("atomic-class.ggs", 33)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 33)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Date").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 34)), GGS_typeKind::class_func_dateType (SOURCE_FILE ("atomic-class.ggs", 34)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 34)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("Data").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 35)), GGS_typeKind::class_func_dataType (SOURCE_FILE ("atomic-class.ggs", 35)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 35)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("NSBezierPath").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 36)), GGS_typeKind::class_func_bezierPathType (SOURCE_FILE ("atomic-class.ggs", 36)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 36)) ;
  }
  {
  ioArgument_ioDeclarationListAST.setter_append (GGS_atomicClassDeclarationAST::init_21__21_ (GGS_string ("BezierPathArray").getter_nowhere (SOURCE_FILE ("atomic-class.ggs", 37)), GGS_typeKind::class_func_bezierPathArrayType (SOURCE_FILE ("atomic-class.ggs", 37)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 37)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@atomicClassDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_atomicClassDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_atomicClassDeclarationAST temp_0 = this ;
  const GGS_atomicClassDeclarationAST temp_1 = this ;
  GGS_propertyMap temp_2 = GGS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 51)) ;
  GGS_actionMap temp_3 = GGS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 52)) ;
  GGS_propertyGenerationList temp_4 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 53)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_0.readProperty_mClassName (), GGS_classKind::class_func_atomic (temp_1.readProperty_mKind ()  COMMA_SOURCE_FILE ("atomic-class.ggs", 50)), temp_2, temp_3, temp_4, inCompiler COMMA_SOURCE_FILE ("atomic-class.ggs", 48)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@entityDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_entityDeclarationAST temp_0 = this ;
  const GGS_entityDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 21)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_entityDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mSuperEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      const GGS_entityDeclarationAST temp_4 = this ;
      const GGS_entityDeclarationAST temp_5 = this ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mClassName (), temp_5.readProperty_mSuperEntityName () COMMA_SOURCE_FILE ("entity.ggs", 23)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@entityDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_entityDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_entityDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@entityDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                           GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_actionMap_5216 ;
  {
  const GGS_entityDeclarationAST temp_0 = this ;
  routine_buildActionMap_3F__21_ (temp_0.readProperty_mActionDeclarationList (), var_actionMap_5216, inCompiler  COMMA_SOURCE_FILE ("entity.ggs", 162)) ;
  }
  {
  const GGS_entityDeclarationAST temp_1 = this ;
  const GGS_entityDeclarationAST temp_2 = this ;
  const GGS_entityDeclarationAST temp_3 = this ;
  const GGS_entityDeclarationAST temp_4 = this ;
  const GGS_entityDeclarationAST temp_5 = this ;
  GGS_propertyMap temp_6 = GGS_propertyMap::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 171)) ;
  GGS_propertyGenerationList temp_7 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 173)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_1.readProperty_mClassName (), GGS_classKind::class_func_entity (temp_2.readProperty_mSuperEntityName ().readProperty_string (), temp_3.readProperty_mIsGraphicEntity (), temp_4.readProperty_mIsAbstract (), temp_5.readProperty_mHandlingOpposite ()  COMMA_SOURCE_FILE ("entity.ggs", 165)), temp_6, var_actionMap_5216, temp_7, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 163)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@entityDeclarationAST secondAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::method_secondAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                            GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_entityDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mSuperEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_propertyMap var_inheritedPropertyMap_6021 ;
      const GGS_entityDeclarationAST temp_2 = this ;
      GGS_classKind joker_5993 ; // Joker input parameter
      GGS_actionMap joker_6049_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_6049_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mSuperEntityName (), joker_5993, var_inheritedPropertyMap_6021, joker_6049_2, joker_6049_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 183)) ;
      GGS_propertyMap var_propertyMap_6207 ;
      const GGS_entityDeclarationAST temp_3 = this ;
      GGS_classKind joker_6179 ; // Joker input parameter
      GGS_actionMap joker_6226_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_6226_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_3.readProperty_mClassName (), joker_6179, var_propertyMap_6207, joker_6226_2, joker_6226_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 190)) ;
      GGS_propertyMap var_newPropertyMap_6268 = var_inheritedPropertyMap_6021 ;
      UpEnumerator_propertyMap enumerator_6442 (var_propertyMap_6207) ;
      while (enumerator_6442.hasCurrentObject ()) {
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = enumerator_6442.current_mIsOverriding (HERE).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GGS_propertyKind joker_6547_3 ; // Joker input parameter
            GGS_actionMap joker_6547_2 ; // Joker input parameter
            GGS_bool joker_6547_1 ; // Joker input parameter
            var_inheritedPropertyMap_6021.method_searchKey (enumerator_6442.current_lkey (HERE), joker_6547_3, joker_6547_2, joker_6547_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 203)) ;
          }
        }
        if (GalgasBool::boolFalse == test_4) {
          {
          var_newPropertyMap_6268.setter_insertKey (enumerator_6442.current_lkey (HERE), enumerator_6442.current_mKind (HERE), enumerator_6442.current_mActionMap (HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 206)) ;
          }
        }
        enumerator_6442.gotoNextObject () ;
      }
      const GGS_entityDeclarationAST temp_5 = this ;
      cMapElement_classMap * objectArray_6725 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_5.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("entity.ggs", 210)) ;
      if (nullptr != objectArray_6725) {
        macroValidSharedObject (objectArray_6725, cMapElement_classMap) ;
        objectArray_6725->mProperty_mPropertyMap = var_newPropertyMap_6268 ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@entityDeclarationAST fourthAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_entityDeclarationAST::method_fourthAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                            GGS_generationStruct & ioArgument_ioGeneration,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap var_propertyMap_7250 ;
  GGS_propertyGenerationList var_propertyGenerationList_7304 ;
  const GGS_entityDeclarationAST temp_0 = this ;
  GGS_classKind joker_7224 ; // Joker input parameter
  GGS_actionMap joker_7267 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mClassName (), joker_7224, var_propertyMap_7250, joker_7267, var_propertyGenerationList_7304, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 222)) ;
  GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 230)) ;
  GGS_stringset var_overridenTransients_7449 = temp_1 ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_entityDeclarationAST temp_3 = this ;
    const GGS_entityDeclarationAST temp_4 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mSuperEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).operator_and (temp_4.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("entity.ggs", 231)) COMMA_SOURCE_FILE ("entity.ggs", 231)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GGS_classKind var_superClassKind_7638 ;
      GGS_propertyMap var_superPropertyMap_7678 ;
      const GGS_entityDeclarationAST temp_5 = this ;
      GGS_actionMap joker_7702_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_7702_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_5.readProperty_mSuperEntityName (), var_superClassKind_7638, var_superPropertyMap_7678, joker_7702_2, joker_7702_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 232)) ;
      switch (var_superClassKind_7638.enumValue ()) {
      case GGS_classKind::Enumeration::invalid:
        break ;
      case GGS_classKind::Enumeration::enum_prefs:
        {
          const GGS_entityDeclarationAST temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mSuperEntityName ().readProperty_location (), GGS_string ("prefs cannot be a super entity"), fixItArray7  COMMA_SOURCE_FILE ("entity.ggs", 240)) ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_atomic:
        {
          GGS_typeKind extractedValue_7841__0 ;
          var_superClassKind_7638.getAssociatedValuesFor_atomic (extractedValue_7841__0) ;
          const GGS_entityDeclarationAST temp_8 = this ;
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (temp_8.readProperty_mSuperEntityName ().readProperty_location (), GGS_string ("an atomic class cannot be a super entity"), fixItArray9  COMMA_SOURCE_FILE ("entity.ggs", 242)) ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_document:
        {
          GGS_lstring extractedValue_7944__0 ;
          var_superClassKind_7638.getAssociatedValuesFor_document (extractedValue_7944__0) ;
          const GGS_entityDeclarationAST temp_10 = this ;
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mSuperEntityName ().readProperty_location (), GGS_string ("a document cannot be a super entity"), fixItArray11  COMMA_SOURCE_FILE ("entity.ggs", 244)) ;
        }
        break ;
      case GGS_classKind::Enumeration::enum_entity:
        {
          GGS_string extractedValue_8040__0 ;
          GGS_bool extractedValue_8049_isGraphic_1 ;
          GGS_bool extractedValue_8066_isAbstract_2 ;
          GGS_bool extractedValue_8078__3 ;
          var_superClassKind_7638.getAssociatedValuesFor_entity (extractedValue_8040__0, extractedValue_8049_isGraphic_1, extractedValue_8066_isAbstract_2, extractedValue_8078__3) ;
          GalgasBool test_12 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_12) {
            const GGS_entityDeclarationAST temp_13 = this ;
            test_12 = extractedValue_8049_isGraphic_1.operator_and (temp_13.readProperty_mIsGraphicEntity ().operator_not (SOURCE_FILE ("entity.ggs", 246)) COMMA_SOURCE_FILE ("entity.ggs", 246)).boolEnum () ;
            if (GalgasBool::boolTrue == test_12) {
              const GGS_entityDeclarationAST temp_14 = this ;
              TC_Array <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_14.readProperty_mClassName ().readProperty_location (), GGS_string ("this entity should be declared with 'graphic', as super entity is graphic"), fixItArray15  COMMA_SOURCE_FILE ("entity.ggs", 247)) ;
            }
          }
          GalgasBool test_16 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_16) {
            const GGS_entityDeclarationAST temp_17 = this ;
            test_16 = extractedValue_8066_isAbstract_2.operator_and (temp_17.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("entity.ggs", 249)) COMMA_SOURCE_FILE ("entity.ggs", 249)).boolEnum () ;
            if (GalgasBool::boolTrue == test_16) {
              UpEnumerator_propertyMap enumerator_8375 (var_superPropertyMap_7678) ;
              while (enumerator_8375.hasCurrentObject ()) {
                GalgasBool test_18 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_18) {
                  test_18 = extensionGetter_isAbstract (enumerator_8375.current (HERE), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 251)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_18) {
                    GalgasBool test_19 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_19) {
                      test_19 = var_propertyMap_7250.getter_hasKey (enumerator_8375.current (HERE).readProperty_lkey ().readProperty_string () COMMA_SOURCE_FILE ("entity.ggs", 252)).boolEnum () ;
                      if (GalgasBool::boolTrue == test_19) {
                        {
                        var_overridenTransients_7449.setter_insert (enumerator_8375.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 253)) ;
                        }
                        GGS_propertyKind var_propertyKind_8652 ;
                        GGS_actionMap joker_8666_2 ; // Joker input parameter
                        GGS_bool joker_8666_1 ; // Joker input parameter
                        var_propertyMap_7250.method_searchKey (enumerator_8375.current (HERE).readProperty_lkey (), var_propertyKind_8652, joker_8666_2, joker_8666_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 254)) ;
                        GGS_string var_typeName_8689 = extensionGetter_typeName (var_propertyKind_8652, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 255)) ;
                        GGS_string var_superTypeName_8740 = extensionGetter_typeName (enumerator_8375.current (HERE).readProperty_mKind (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 256)) ;
                        GalgasBool test_20 = GalgasBool::boolTrue ;
                        if (GalgasBool::boolTrue == test_20) {
                          test_20 = GGS_bool (ComparisonKind::notEqual, var_typeName_8689.objectCompare (var_superTypeName_8740)).boolEnum () ;
                          if (GalgasBool::boolTrue == test_20) {
                            TC_Array <FixItDescription> fixItArray21 ;
                            inCompiler->emitSemanticError (var_propertyMap_7250.getter_locationForKey (enumerator_8375.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 258)), GGS_string ("type '").add_operation (var_superTypeName_8740, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 259)).add_operation (GGS_string ("' is required by declaration in super entity"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 259)), fixItArray21  COMMA_SOURCE_FILE ("entity.ggs", 258)) ;
                          }
                        }
                      }
                    }
                    if (GalgasBool::boolFalse == test_19) {
                      const GGS_entityDeclarationAST temp_22 = this ;
                      TC_Array <FixItDescription> fixItArray23 ;
                      inCompiler->emitSemanticError (temp_22.readProperty_mClassName ().readProperty_location (), GGS_string ("transient '").add_operation (enumerator_8375.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 263)).add_operation (GGS_string ("' should be defined, it is declared abstract in super entity"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 263)), fixItArray23  COMMA_SOURCE_FILE ("entity.ggs", 262)) ;
                    }
                  }
                }
                enumerator_8375.gotoNextObject () ;
              }
            }
          }
        }
        break ;
      }
    }
  }
  GGS_bool var_canCopyAndPaste_5F_option_9279 = GGS_bool (false) ;
  GGS_bool var_cannotBeDeleted_5F_option_9316 = GGS_bool (false) ;
  const GGS_entityDeclarationAST temp_24 = this ;
  UpEnumerator_lstringlist enumerator_9357 (temp_24.readProperty_mGraphicOptionArray ()) ;
  while (enumerator_9357.hasCurrentObject ()) {
    GalgasBool test_25 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_25) {
      test_25 = GGS_bool (ComparisonKind::equal, enumerator_9357.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string ("canCopyAndPaste"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_25) {
        GalgasBool test_26 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_26) {
          test_26 = var_canCopyAndPaste_5F_option_9279.boolEnum () ;
          if (GalgasBool::boolTrue == test_26) {
            TC_Array <FixItDescription> fixItArray27 ;
            inCompiler->emitSemanticError (enumerator_9357.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated option"), fixItArray27  COMMA_SOURCE_FILE ("entity.ggs", 277)) ;
          }
        }
        var_canCopyAndPaste_5F_option_9279 = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_25) {
      GalgasBool test_28 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_28) {
        test_28 = GGS_bool (ComparisonKind::equal, enumerator_9357.current_mValue (HERE).readProperty_string ().objectCompare (GGS_string ("cannotBeDeleted"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_28) {
          GalgasBool test_29 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_29) {
            test_29 = var_cannotBeDeleted_5F_option_9316.boolEnum () ;
            if (GalgasBool::boolTrue == test_29) {
              TC_Array <FixItDescription> fixItArray30 ;
              inCompiler->emitSemanticError (enumerator_9357.current_mValue (HERE).readProperty_location (), GGS_string ("duplicated option"), fixItArray30  COMMA_SOURCE_FILE ("entity.ggs", 282)) ;
            }
          }
          var_cannotBeDeleted_5F_option_9316 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_28) {
        TC_Array <FixItDescription> fixItArray31 ;
        appendFixItActions (fixItArray31, EnumFixItKind::fixItReplace, GGS_string ("acceptedTranslation")) ;
        appendFixItActions (fixItArray31, EnumFixItKind::fixItReplace, GGS_string ("canCopyAndPaste")) ;
        appendFixItActions (fixItArray31, EnumFixItKind::fixItReplace, GGS_string ("cannotBeDeleted")) ;
        inCompiler->emitSemanticError (enumerator_9357.current_mValue (HERE).readProperty_location (), GGS_string ("unkown graphic option"), fixItArray31  COMMA_SOURCE_FILE ("entity.ggs", 286)) ;
      }
    }
    enumerator_9357.gotoNextObject () ;
  }
  GGS_bool var_hasSubClass_10023 = GGS_bool (false) ;
  UpEnumerator_classMap enumerator_10087 (ioArgument_ioSemanticContext.readProperty_mClassMap ()) ;
  bool bool_32 = var_hasSubClass_10023.operator_not (SOURCE_FILE ("entity.ggs", 295)).isValidAndTrue () ;
  if (enumerator_10087.hasCurrentObject () && bool_32) {
    while (enumerator_10087.hasCurrentObject () && bool_32) {
      GalgasBool test_33 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_33) {
        test_33 = enumerator_10087.current (HERE).readProperty_mClassKind ().getter_isEntity (SOURCE_FILE ("entity.ggs", 296)).boolEnum () ;
        if (GalgasBool::boolTrue == test_33) {
          GGS_string var_superEntityName_10242 ;
          GGS_bool joker_10259_3 ; // Joker input parameter
          GGS_bool joker_10259_2 ; // Joker input parameter
          GGS_bool joker_10259_1 ; // Joker input parameter
          enumerator_10087.current (HERE).readProperty_mClassKind ().method_extractEntity (var_superEntityName_10242, joker_10259_3, joker_10259_2, joker_10259_1, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 297)) ;
          const GGS_entityDeclarationAST temp_34 = this ;
          var_hasSubClass_10023 = GGS_bool (ComparisonKind::equal, temp_34.readProperty_mClassName ().readProperty_string ().objectCompare (var_superEntityName_10242)) ;
        }
      }
      enumerator_10087.gotoNextObject () ;
      if (enumerator_10087.hasCurrentObject ()) {
        bool_32 = var_hasSubClass_10023.operator_not (SOURCE_FILE ("entity.ggs", 295)).isValidAndTrue () ;
      }
    }
  }
  {
  const GGS_entityDeclarationAST temp_35 = this ;
  const GGS_entityDeclarationAST temp_36 = this ;
  ioArgument_ioGeneration.mProperty_mEntityListForGeneration.setter_append (temp_35.readProperty_mClassName ().readProperty_string (), temp_36.readProperty_mObsoleteEntityNames (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 302)) ;
  }
  {
  const GGS_entityDeclarationAST temp_37 = this ;
  const GGS_entityDeclarationAST temp_38 = this ;
  const GGS_entityDeclarationAST temp_39 = this ;
  const GGS_entityDeclarationAST temp_40 = this ;
  const GGS_entityDeclarationAST temp_41 = this ;
  const GGS_entityDeclarationAST temp_42 = this ;
  const GGS_entityDeclarationAST temp_43 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_entityForGeneration::init_21__21__21__21__21__21__21__21__21__21__21__21_ (temp_37.readProperty_mClassName ().readProperty_string (), temp_38.readProperty_mSuperEntityName ().readProperty_string (), temp_39.readProperty_mHandlingOpposite (), var_propertyGenerationList_7304, temp_40.readProperty_mSignatureList (), temp_41.readProperty_mIsGraphicEntity (), temp_42.readProperty_mIsAbstract (), var_overridenTransients_7449, temp_43.readProperty_mExternSwiftDelegateList (), var_hasSubClass_10023, var_canCopyAndPaste_5F_option_9279, var_cannotBeDeleted_5F_option_9316, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 306)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@entityForGeneration generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_entityForGeneration::method_generateCode (const GGS_string constinArgument_inOutputDirectory,
                                                    const GGS_generationStruct constinArgument_inGenerationStruct,
                                                    GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_atomicPropertyGenerationList temp_0 = GGS_atomicPropertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 354)) ;
  GGS_atomicPropertyGenerationList var_atomicPropertyGenerationList_12191 = temp_0 ;
  GGS_transientPropertyGenerationList temp_1 = GGS_transientPropertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 355)) ;
  GGS_transientPropertyGenerationList var_transientPropertyGenerationList_12264 = temp_1 ;
  GGS_computedPropertyGenerationList temp_2 = GGS_computedPropertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 356)) ;
  GGS_computedPropertyGenerationList var_computedPropertyGenerationList_12339 = temp_2 ;
  GGS_toOnePropertyGenerationList temp_3 = GGS_toOnePropertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 357)) ;
  GGS_toOnePropertyGenerationList var_toOnePropertyGenerationList_12410 = temp_3 ;
  GGS_toManyPropertyGenerationList temp_4 = GGS_toManyPropertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 358)) ;
  GGS_toManyPropertyGenerationList var_toManyPropertyGenerationList_12479 = temp_4 ;
  GGS_atomicProxyGenerationList temp_5 = GGS_atomicProxyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 359)) ;
  GGS_atomicProxyGenerationList var_proxyGenerationList_12546 = temp_5 ;
  GGS_toManyProxyGenerationList temp_6 = GGS_toManyProxyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 360)) ;
  GGS_toManyProxyGenerationList var_toManyProxyGenerationList_12604 = temp_6 ;
  const GGS_entityForGeneration temp_7 = this ;
  UpEnumerator_propertyGenerationList enumerator_12642 (temp_7.readProperty_mPropertyGenerationList ()) ;
  while (enumerator_12642.hasCurrentObject ()) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      GGS_atomicPropertyGeneration var_atomicProperty_12698 (dynamic_cast <const cPtr_atomicPropertyGeneration *> (enumerator_12642.current_mProperty (HERE).ptr ())) ;
      if (nullptr == var_atomicProperty_12698.ptr ()) {
        test_8 = GalgasBool::boolFalse ;
      }
      if (GalgasBool::boolTrue == test_8) {
        {
        var_atomicPropertyGenerationList_12191.setter_append (var_atomicProperty_12698, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 363)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        GGS_transientPropertyGeneration var_transientProperty_12833 (dynamic_cast <const cPtr_transientPropertyGeneration *> (enumerator_12642.current_mProperty (HERE).ptr ())) ;
        if (nullptr == var_transientProperty_12833.ptr ()) {
          test_9 = GalgasBool::boolFalse ;
        }
        if (GalgasBool::boolTrue == test_9) {
          {
          var_transientPropertyGenerationList_12264.setter_append (var_transientProperty_12833, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 365)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_9) {
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          GGS_computedPropertyGeneration var_computedProperty_12980 (dynamic_cast <const cPtr_computedPropertyGeneration *> (enumerator_12642.current_mProperty (HERE).ptr ())) ;
          if (nullptr == var_computedProperty_12980.ptr ()) {
            test_10 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_10) {
            {
            var_computedPropertyGenerationList_12339.setter_append (var_computedProperty_12980, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 367)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_10) {
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            GGS_toManyProxyGeneration var_toManyProxy_13123 (dynamic_cast <const cPtr_toManyProxyGeneration *> (enumerator_12642.current_mProperty (HERE).ptr ())) ;
            if (nullptr == var_toManyProxy_13123.ptr ()) {
              test_11 = GalgasBool::boolFalse ;
            }
            if (GalgasBool::boolTrue == test_11) {
              {
              var_toManyProxyGenerationList_12604.setter_append (var_toManyProxy_13123, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 369)) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_11) {
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              GGS_atomicProxyGeneration var_proxyProperty_13246 (dynamic_cast <const cPtr_atomicProxyGeneration *> (enumerator_12642.current_mProperty (HERE).ptr ())) ;
              if (nullptr == var_proxyProperty_13246.ptr ()) {
                test_12 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_12) {
                {
                var_proxyGenerationList_12546.setter_append (var_proxyProperty_13246, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 371)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_12) {
              GalgasBool test_13 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_13) {
                GGS_toOnePropertyGeneration var_toOneProperty_13367 (dynamic_cast <const cPtr_toOnePropertyGeneration *> (enumerator_12642.current_mProperty (HERE).ptr ())) ;
                if (nullptr == var_toOneProperty_13367.ptr ()) {
                  test_13 = GalgasBool::boolFalse ;
                }
                if (GalgasBool::boolTrue == test_13) {
                  {
                  var_toOnePropertyGenerationList_12410.setter_append (var_toOneProperty_13367, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 373)) ;
                  }
                }
              }
              if (GalgasBool::boolFalse == test_13) {
                GalgasBool test_14 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_14) {
                  GGS_toManyPropertyGeneration var_toOneProperty_13498 (dynamic_cast <const cPtr_toManyPropertyGeneration *> (enumerator_12642.current_mProperty (HERE).ptr ())) ;
                  if (nullptr == var_toOneProperty_13498.ptr ()) {
                    test_14 = GalgasBool::boolFalse ;
                  }
                  if (GalgasBool::boolTrue == test_14) {
                    {
                    var_toManyPropertyGenerationList_12479.setter_append (var_toOneProperty_13498, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 375)) ;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    enumerator_12642.gotoNextObject () ;
  }
  GGS_string var_superEntityName_13637 = GGS_string::makeEmptyString () ;
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    const GGS_entityForGeneration temp_16 = this ;
    test_15 = GGS_bool (ComparisonKind::notEqual, temp_16.readProperty_mSuperEntityName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      const GGS_entityForGeneration temp_17 = this ;
      var_superEntityName_13637 = temp_17.readProperty_mSuperEntityName () ;
    }
  }
  if (GalgasBool::boolFalse == test_15) {
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      const GGS_entityForGeneration temp_19 = this ;
      test_18 = temp_19.readProperty_mIsGraphicEntity ().boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        var_superEntityName_13637 = GGS_string ("EBGraphicManagedObject") ;
      }
    }
    if (GalgasBool::boolFalse == test_18) {
      var_superEntityName_13637 = GGS_string ("EBManagedObject") ;
    }
  }
  const GGS_entityForGeneration temp_20 = this ;
  const GGS_entityForGeneration temp_21 = this ;
  const GGS_entityForGeneration temp_22 = this ;
  const GGS_entityForGeneration temp_23 = this ;
  const GGS_entityForGeneration temp_24 = this ;
  const GGS_entityForGeneration temp_25 = this ;
  const GGS_entityForGeneration temp_26 = this ;
  const GGS_entityForGeneration temp_27 = this ;
  const GGS_entityForGeneration temp_28 = this ;
  const GGS_entityForGeneration temp_29 = this ;
  const GGS_entityForGeneration temp_30 = this ;
  GGS_string var_s_13881 = GGS_string (filewrapperTemplate_entityGenerationTemplate_entityImplementationInSwift (inCompiler, temp_20.readProperty_mEntityName (), var_superEntityName_13637, temp_21.readProperty_mPropertyGenerationList (), var_proxyGenerationList_12546, var_toManyProxyGenerationList_12604, var_atomicPropertyGenerationList_12191, var_transientPropertyGenerationList_12264, var_computedPropertyGenerationList_12339, var_toOnePropertyGenerationList_12410, var_toManyPropertyGenerationList_12479, temp_22.readProperty_mSignatureSet (), temp_23.readProperty_mIsGraphicEntity (), temp_24.readProperty_mIsAbstract (), temp_25.readProperty_mOverridenTransients (), temp_26.readProperty_mExternSwiftDelegateList (), temp_27.readProperty_mHasSubEntity (), temp_28.readProperty_mCanCopyAndPaste_5F_option (), temp_29.readProperty_mCannotBeDeleted_5F_option (), constinArgument_inGenerationStruct.readProperty_mToManyClassImplementations ().getter_hasKey (temp_30.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 405)) COMMA_SOURCE_FILE ("entity.ggs", 386))) ;
  const GGS_entityForGeneration temp_31 = this ;
  GGS_string var_fileName_14577 = GGS_string ("entity-").add_operation (temp_31.readProperty_mEntityName (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 407)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 407)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_14577, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 408)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_14577, var_s_13881, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 409)) ;
  }
  GalgasBool test_32 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_32) {
    const GGS_entityForGeneration temp_33 = this ;
    test_32 = constinArgument_inGenerationStruct.readProperty_mToOneClassImplementations ().getter_hasKey (temp_33.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 414)).boolEnum () ;
    if (GalgasBool::boolTrue == test_32) {
      const GGS_entityForGeneration temp_34 = this ;
      const GGS_entityForGeneration temp_35 = this ;
      const GGS_entityForGeneration temp_36 = this ;
      const GGS_entityForGeneration temp_37 = this ;
      const GGS_entityForGeneration temp_38 = this ;
      const GGS_entityForGeneration temp_39 = this ;
      const GGS_entityForGeneration temp_40 = this ;
      const GGS_entityForGeneration temp_41 = this ;
      var_s_13881 = GGS_string (filewrapperTemplate_entityGenerationTemplate_entityToOneImplementationInSwift (inCompiler, temp_34.readProperty_mEntityName (), var_superEntityName_13637, temp_35.readProperty_mHandlingOpposite (), temp_36.readProperty_mPropertyGenerationList (), var_proxyGenerationList_12546, var_toManyProxyGenerationList_12604, var_atomicPropertyGenerationList_12191, var_transientPropertyGenerationList_12264, var_computedPropertyGenerationList_12339, var_toOnePropertyGenerationList_12410, var_toManyPropertyGenerationList_12479, temp_37.readProperty_mSignatureSet (), temp_38.readProperty_mIsGraphicEntity (), temp_39.readProperty_mIsAbstract (), temp_40.readProperty_mOverridenTransients (), temp_41.readProperty_mExternSwiftDelegateList () COMMA_SOURCE_FILE ("entity.ggs", 415))) ;
    }
  }
  if (GalgasBool::boolFalse == test_32) {
    var_s_13881 = GGS_string ("// Unused code, not generated by EasyBinding compiler\n") ;
  }
  const GGS_entityForGeneration temp_42 = this ;
  var_fileName_14577 = GGS_string ("toone-").add_operation (temp_42.readProperty_mEntityName (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 436)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 436)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_14577, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 437)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_14577, var_s_13881, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 438)) ;
  }
  GalgasBool test_43 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_43) {
    const GGS_entityForGeneration temp_44 = this ;
    test_43 = constinArgument_inGenerationStruct.readProperty_mToManyClassImplementations ().getter_hasKey (temp_44.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 443)).boolEnum () ;
    if (GalgasBool::boolTrue == test_43) {
      const GGS_entityForGeneration temp_45 = this ;
      const GGS_entityForGeneration temp_46 = this ;
      const GGS_entityForGeneration temp_47 = this ;
      const GGS_entityForGeneration temp_48 = this ;
      const GGS_entityForGeneration temp_49 = this ;
      const GGS_entityForGeneration temp_50 = this ;
      const GGS_entityForGeneration temp_51 = this ;
      const GGS_entityForGeneration temp_52 = this ;
      const GGS_entityForGeneration temp_53 = this ;
      const GGS_entityForGeneration temp_54 = this ;
      const GGS_entityForGeneration temp_55 = this ;
      const GGS_entityForGeneration temp_56 = this ;
      const GGS_entityForGeneration temp_57 = this ;
      var_s_13881 = GGS_string (filewrapperTemplate_entityGenerationTemplate_entityToManyImplementationInSwift (inCompiler, temp_45.readProperty_mEntityName (), var_superEntityName_13637, temp_46.readProperty_mHandlingOpposite (), temp_47.readProperty_mPropertyGenerationList (), var_proxyGenerationList_12546, var_toManyProxyGenerationList_12604, var_atomicPropertyGenerationList_12191, var_transientPropertyGenerationList_12264, var_computedPropertyGenerationList_12339, var_toOnePropertyGenerationList_12410, var_toManyPropertyGenerationList_12479, temp_48.readProperty_mSignatureSet (), temp_49.readProperty_mIsGraphicEntity (), temp_50.readProperty_mIsAbstract (), temp_51.readProperty_mOverridenTransients (), temp_52.readProperty_mExternSwiftDelegateList (), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ ().getter_hasKey (temp_53.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 461)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_ProxyArrayOf_5F_ ().getter_hasKey (temp_54.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 462)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ ().getter_hasKey (temp_55.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 463)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_TransientArrayOf_5F_ ().getter_hasKey (temp_56.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 464)), constinArgument_inGenerationStruct.readProperty_mGenerateClass_5F_StoredArrayOf_5F_ ().getter_hasKey (temp_57.readProperty_mEntityName () COMMA_SOURCE_FILE ("entity.ggs", 465)) COMMA_SOURCE_FILE ("entity.ggs", 444))) ;
    }
  }
  if (GalgasBool::boolFalse == test_43) {
    var_s_13881 = GGS_string ("// Unused code, not generated by EasyBinding compiler\n") ;
  }
  const GGS_entityForGeneration temp_58 = this ;
  var_fileName_14577 = GGS_string ("tomany-").add_operation (temp_58.readProperty_mEntityName (), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 470)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 470)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_14577, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 471)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_14577, var_s_13881, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 472)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'generateEBManagedObjectContext??&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateEBManagedObjectContext_3F__3F__26_ (const GGS_entityListForGeneratingEBManagedObjectContext constinArgument_inEntityListForGeneration,
                                                         const GGS_string constinArgument_inOutputDirectory,
                                                         GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inEntityListForGeneration.getter_count (SOURCE_FILE ("entity.ggs", 486)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_fileName_17349 = GGS_string ("EBManagedObjectFactory.swift") ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_17349, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 488)) ;
      }
      GGS_string var_s_17442 = GGS_string (filewrapperTemplate_entityGenerationTemplate_managedObjectFactory (inCompiler, constinArgument_inEntityListForGeneration COMMA_SOURCE_FILE ("entity.ggs", 489))) ;
      {
      GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_17349, var_s_17442, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 490)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'entityGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_entityGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_entityGenerationTemplate_3,
  0,
  gWrapperAllDirectories_entityGenerationTemplate_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_entityGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_entityGenerationTemplate_1,
  0,
  gWrapperAllDirectories_entityGenerationTemplate_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_entityGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_entityGenerationTemplate_2,
  0,
  gWrapperAllDirectories_entityGenerationTemplate_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_entityGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_entityGenerationTemplate_0 [4] = {
  & gWrapperDirectory_3_entityGenerationTemplate,
  & gWrapperDirectory_1_entityGenerationTemplate,
  & gWrapperDirectory_2_entityGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_entityGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_entityGenerationTemplate_0,
  3,
  gWrapperAllDirectories_entityGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_entityImplementationInSwift (Compiler * inCompiler,
                                                                                     const GGS_string & in_ENTITY_5F_NAME,
                                                                                     const GGS_string & in_SUPER_5F_CLASS_5F_NAME,
                                                                                     const GGS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                     const GGS_atomicProxyGenerationList & in_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                     const GGS_toManyProxyGenerationList & /* in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION */,
                                                                                     const GGS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                     const GGS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                     const GGS_computedPropertyGenerationList & /* in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION */,
                                                                                     const GGS_toOnePropertyGenerationList & in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST,
                                                                                     const GGS_toManyPropertyGenerationList & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                     const GGS_stringset & in_SIGNATURE_5F_SET,
                                                                                     const GGS_bool & in_IS_5F_GRAPHIC_5F_ENTITY,
                                                                                     const GGS_bool & in_IS_5F_ABSTRACT,
                                                                                     const GGS_stringset & in_OVERRIDEN_5F_TRANSIENTS,
                                                                                     const GGS_externSwiftDelegateList & in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                     const GGS_bool & in_HAS_5F_SUB_5F_ENTITY,
                                                                                     const GGS_bool & in_OPTION_5F_CanCopyAndPaste,
                                                                                     const GGS_bool & in_OPTION_5F_CannotBeDeleted,
                                                                                     const GGS_bool & in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n") ;
  const GalgasBool test_0 = in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS.boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    GGS_uint index_387_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      UpEnumerator_atomicPropertyGenerationList enumerator_387 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
      while (enumerator_387.hasCurrentObject ()) {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\n@MainActor protocol ") ;
        result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_387.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString (" : AnyObject {\n  var ") ;
        result.appendString (enumerator_387.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString (" : ") ;
        result.appendString (extensionGetter_swiftTypeName (enumerator_387.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 13)).stringValue ()) ;
        result.appendString (" { get }\n}\n\n") ;
        enumerator_387.gotoNextObject () ;
        index_387_.increment () ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_1 = in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS.boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    GGS_uint index_748_ (0) ;
    if (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      UpEnumerator_atomicProxyGenerationList enumerator_748 (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION) ;
      while (enumerator_748.hasCurrentObject ()) {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\n@MainActor protocol ") ;
        result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_748.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString (" : AnyObject {\n  var ") ;
        result.appendString (enumerator_748.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString (" : ") ;
        result.appendString (extensionGetter_swiftTypeName (enumerator_748.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 24)).stringValue ()) ;
        result.appendString ("\? { get }\n}\n\n") ;
        enumerator_748.gotoNextObject () ;
        index_748_.increment () ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_2 = in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    GGS_uint index_1118_ (0) ;
    if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      UpEnumerator_transientPropertyGenerationList enumerator_1118 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
      while (enumerator_1118.hasCurrentObject ()) {
        result.appendString ("//--------------------------------------------------------------------------------------------------\n\n@MainActor protocol ") ;
        result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
        result.appendString ("_") ;
        result.appendString (enumerator_1118.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString (" : AnyObject {\n  var ") ;
        result.appendString (enumerator_1118.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString (" : ") ;
        result.appendString (extensionGetter_swiftTypeName (enumerator_1118.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 35)).stringValue ()) ;
        result.appendString ("\? { get }\n}\n\n") ;
        enumerator_1118.gotoNextObject () ;
        index_1118_.increment () ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("Entity: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 42)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_3 = in_HAS_5F_SUB_5F_ENTITY.operator_not (SOURCE_FILE ("entity.swift.galgasTemplate", 46)).boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString ("final ") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("class ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_SUPER_5F_CLASS_5F_NAME.stringValue ()) ;
  const GalgasBool test_4 = in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS.boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    GGS_uint index_1810_ (0) ;
    if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      UpEnumerator_propertyGenerationList enumerator_1810 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
      while (enumerator_1810.hasCurrentObject ()) {
        const GalgasBool test_5 = GGS_bool (enumerator_1810.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GGS_bool (enumerator_1810.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_transientPropertyGeneration) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 52)).operator_or (GGS_bool (enumerator_1810.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicProxyGeneration) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 52)).boolEnum () ;
        switch (test_5) {
        case GalgasBool::boolTrue : {
          result.appendString (",\n         ") ;
          result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
          result.appendString ("_") ;
          result.appendString (enumerator_1810.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          } break ;
        case GalgasBool::boolFalse : {
          } break ;
        case GalgasBool::boolNotValid :
          break ;
        }
        enumerator_1810.gotoNextObject () ;
        index_1810_.increment () ;
      }
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString (" {\n\n") ;
  GGS_uint index_2095_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_2095 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_2095.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_2095.current_mProperty (HERE).ptr (), GGS_bool (false), in_GENERATE_5F_PROPERTY_5F_ACCESS_5F_PROTOCOLS, in_OVERRIDEN_5F_TRANSIENTS, inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 61)).stringValue ()) ;
      enumerator_2095.gotoNextObject () ;
      index_2095_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    init\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  required init (_ inUndoManager : UndoManager\?) {\n") ;
  GGS_uint index_2524_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_2524 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_2524.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_initCode ((const cPtr_propertyGeneration *) enumerator_2524.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 70)).stringValue ()) ;
      enumerator_2524.gotoNextObject () ;
      index_2524_.increment () ;
    }
  }
  result.appendString ("    super.init (inUndoManager)\n") ;
  GGS_uint index_2633_ (0) ;
  if (in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    UpEnumerator_toOnePropertyGenerationList enumerator_2633 (in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST) ;
    while (enumerator_2633.hasCurrentObject ()) {
      result.appendString ("    self.") ;
      result.appendString (enumerator_2633.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_none.mReadModelFunction = { [weak self] in\n      if let uwSelf = self {\n        return .single (uwSelf.") ;
      result.appendString (enumerator_2633.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.propval == nil)\n      }else{\n        return .empty\n      }\n    }\n    self.") ;
      result.appendString (enumerator_2633.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: self.") ;
      result.appendString (enumerator_2633.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_none)\n") ;
      enumerator_2633.gotoNextObject () ;
      index_2633_.increment () ;
    }
  }
  GGS_uint index_3068_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_3068 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_3068.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_3068.current_mProperty (HERE).ptr (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 85)).stringValue ()) ;
      enumerator_3068.gotoNextObject () ;
      index_3068_.increment () ;
    }
  }
  result.appendString ("  //--- Install undoers and opposite setter for relationships\n") ;
  GGS_uint index_3225_ (0) ;
  if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    UpEnumerator_toManyPropertyGenerationList enumerator_3225 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST) ;
    while (enumerator_3225.hasCurrentObject ()) {
      switch (enumerator_3225.current_mProperty (HERE).readProperty_mOption ().enumValue ()) {
      case GGS_toManyRelationshipOptionGeneration::Enumeration::invalid :
        break ;
      case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_none :
        {
        }
        break ;
      case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_hasDependance :
        {
          GGS_string extractedValue_3300_masterPropertyName_0 ;
          GGS_string extractedValue_3319__1 ;
          enumerator_3225.current_mProperty (HERE).readProperty_mOption ().getAssociatedValuesFor_hasDependance (extractedValue_3300_masterPropertyName_0, extractedValue_3319__1) ;
          result.appendString ("    self.") ;
          result.appendString (enumerator_3225.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString ("_property.setDataProvider (self.") ;
          result.appendString (extractedValue_3300_masterPropertyName_0.stringValue ()) ;
          result.appendString ("_property)\n") ;
        }
        break ;
      case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_hasOpposite :
        {
          GGS_string extractedValue_3459_oppositeName_0 ;
          enumerator_3225.current_mProperty (HERE).readProperty_mOption ().getAssociatedValuesFor_hasOpposite (extractedValue_3459_oppositeName_0) ;
          result.appendString ("    self.") ;
          result.appendString (enumerator_3225.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString ("_property.setOppositeRelationShipFunctions (\n      setter: { [weak self] inObject in if let me = self { inObject.") ;
          result.appendString (extractedValue_3459_oppositeName_0.stringValue ()) ;
          result.appendString ("_property.setProp (me) } },\n      resetter: { inObject in inObject.") ;
          result.appendString (extractedValue_3459_oppositeName_0.stringValue ()) ;
          result.appendString ("_property.setProp (nil) }\n    )\n") ;
        }
        break ;
      }
      enumerator_3225.gotoNextObject () ;
      index_3225_.increment () ;
    }
  }
  result.appendString ("  //--- Register properties for handling signature\n") ;
  GGS_uint index_3875_ (0) ;
  if (in_SIGNATURE_5F_SET.isValid ()) {
    UpEnumerator_stringset enumerator_3875 (in_SIGNATURE_5F_SET) ;
    while (enumerator_3875.hasCurrentObject ()) {
      result.appendString ("    self.") ;
      result.appendString (enumerator_3875.current_key (HERE).stringValue ()) ;
      result.appendString ("_property.setSignatureObserver (observer: self)\n") ;
      enumerator_3875.gotoNextObject () ;
      index_3875_.increment () ;
    }
  }
  result.appendString ("  //--- Extern delegates\n") ;
  GGS_uint index_4059_idx (0) ;
  if (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_externSwiftDelegateList enumerator_4059 (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_4059.hasCurrentObject ()) {
      result.appendString ("    self.mExternDelegate") ;
      result.appendString (index_4059_idx.getter_string (SOURCE_FILE ("entity.swift.galgasTemplate", 110)).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (enumerator_4059.current_mExternSwiftDelegateName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" (object: self)\n") ;
      enumerator_4059.gotoNextObject () ;
      index_4059_idx.increment () ;
    }
  }
  result.appendString ("   }\n  \n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Extern delegates\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_4489_idx (0) ;
  if (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_externSwiftDelegateList enumerator_4489 (in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_4489.hasCurrentObject ()) {
      result.appendString ("  final var mExternDelegate") ;
      result.appendString (index_4489_idx.getter_string (SOURCE_FILE ("entity.swift.galgasTemplate", 120)).stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (enumerator_4489.current_mExternSwiftDelegateName (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\? = nil\n") ;
      enumerator_4489.gotoNextObject () ;
      index_4489_idx.increment () ;
    }
  }
  result.appendString ("\n") ;
  const GalgasBool test_6 = GGS_bool (ComparisonKind::greaterThan, in_SIGNATURE_5F_SET.getter_count (SOURCE_FILE ("entity.swift.galgasTemplate", 124)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_6) {
  case GalgasBool::boolTrue : {
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   computeSignature\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func computeSignature () -> UInt32 {\n    var crc = super.computeSignature ()\n") ;
    GGS_uint index_4978_ (0) ;
    if (in_SIGNATURE_5F_SET.isValid ()) {
      UpEnumerator_stringset enumerator_4978 (in_SIGNATURE_5F_SET) ;
      while (enumerator_4978.hasCurrentObject ()) {
        result.appendString ("    crc.accumulate (u32: self.") ;
        result.appendString (enumerator_4978.current_key (HERE).stringValue ()) ;
        result.appendString ("_property.signature ())\n") ;
        enumerator_4978.gotoNextObject () ;
        index_4978_.increment () ;
      }
    }
    result.appendString ("    return crc\n  }\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  const GalgasBool test_7 = in_IS_5F_GRAPHIC_5F_ENTITY.operator_and (in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("entity.swift.galgasTemplate", 140)) COMMA_SOURCE_FILE ("entity.swift.galgasTemplate", 140)).boolEnum () ;
  switch (test_7) {
  case GalgasBool::boolTrue : {
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func cursorForKnob (knob inKnobIndex: Int) -> NSCursor\? {\n    return self.cursorForKnob_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (knob: inKnobIndex)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Translate\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func acceptedTranslation (xBy inDx: Int, yBy inDy: Int) -> CanariPoint {\n    return self.acceptedTranslation_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (xBy: inDx, yBy: inDy)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func acceptToTranslate (xBy inDx: Int, yBy inDy: Int) -> Bool {\n    return self.acceptToTranslate_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (xBy: inDx, yBy: inDy)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func translate (xBy inDx: Int, yBy inDy: Int,\n                           userSet ioSet : inout EBReferenceSet <EBManagedObject>) {\n    self.translate_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (xBy: inDx, yBy: inDy, userSet: &ioSet)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Move\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func canMove (knob inKnobIndex : Int,\n                         proposedUnalignedAlignedTranslation inProposedUnalignedTranslation : CanariPoint,\n                         proposedAlignedTranslation inProposedAlignedTranslation : CanariPoint,\n                         unalignedMouseDraggedLocation inUnalignedMouseDraggedLocation : CanariPoint,\n                         shift inShift : Bool) -> CanariPoint {\n    return self.canMove_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (\n      knob: inKnobIndex,\n      proposedUnalignedAlignedTranslation: inProposedUnalignedTranslation,\n      proposedAlignedTranslation: inProposedAlignedTranslation,\n      unalignedMouseDraggedLocation: inUnalignedMouseDraggedLocation,\n      shift: inShift\n    )\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func move (knob inKnobIndex: Int,\n                      proposedDx inDx: Int,\n                      proposedDy inDy: Int,\n                      unalignedMouseLocationX inUnlignedMouseLocationX : Int,\n                      unalignedMouseLocationY inUnlignedMouseLocationY : Int,\n                      alignedMouseLocationX inAlignedMouseLocationX : Int,\n                      alignedMouseLocationY inAlignedMouseLocationY : Int,\n                      shift inShift : Bool) {\n    self.move_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (\n      knob: inKnobIndex,\n      proposedDx: inDx,\n      proposedDy: inDy,\n      unalignedMouseLocationX: inUnlignedMouseLocationX,\n      unalignedMouseLocationY: inUnlignedMouseLocationY,\n      alignedMouseLocationX: inAlignedMouseLocationX,\n      alignedMouseLocationY: inAlignedMouseLocationY,\n      shift: inShift\n    )\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Snap to grid\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func snapToGrid (_ inGrid : Int) {\n    self.snapToGrid_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (inGrid)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func canSnapToGrid (_ inGrid : Int) -> Bool {\n    return self.canSnapToGrid_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (inGrid)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  HORIZONTAL FLIP\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func flipHorizontally () {\n    self.flipHorizontally_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func canFlipHorizontally () -> Bool {\n    return self.canFlipHorizontally_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  VERTICAL FLIP\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func flipVertically () {\n    self.flipVertically_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func canFlipVertically () -> Bool {\n    return self.canFlipVertically_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  ROTATE 90\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func canRotate90 (accumulatedPoints : inout Set <CanariPoint>) -> Bool {\n    return self.canRotate90_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (accumulatedPoints: &accumulatedPoints)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func rotate90Clockwise (from inRotationCenter : CanariPoint,\n                                   userSet ioSet : inout EBReferenceSet <EBManagedObject>) {\n    self.rotate90Clockwise_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (from: inRotationCenter, userSet: &ioSet)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func rotate90CounterClockwise (from inRotationCenter : CanariPoint,\n                                          userSet ioSet : inout EBReferenceSet <EBManagedObject>) {\n    self.rotate90CounterClockwise_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (from: inRotationCenter, userSet: &ioSet)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Save into additional dictionary\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func saveIntoAdditionalDictionary (_ ioDictionary : inout [String : Any]) {\n    self.saveIntoAdditionalDictionary_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (&ioDictionary)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  operationAfterPasting\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func operationAfterPasting (additionalDictionary inDictionary : [String : Any],\n                                       optionalDocument inOptionalDocument : EBAutoLayoutManagedDocument\?,\n                                       objectArray inObjectArray : [EBGraphicManagedObject]) -> String {\n    return self.operationAfterPasting_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" (additionalDictionary: inDictionary,\n                                                      optionalDocument: inOptionalDocument,\n                                                      objectArray: inObjectArray)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Alignment Points\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func alignmentPoints () -> Set <CanariPoint> {\n    return self.alignmentPoints_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  operationBeforeRemoving\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func operationBeforeRemoving () {\n    self.operationBeforeRemoving_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" ()\n  }\n\n") ;
    const GalgasBool test_8 = in_OPTION_5F_CanCopyAndPaste.boolEnum () ;
    switch (test_8) {
    case GalgasBool::boolTrue : {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  COPY AND PASTE\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func canCopyAndPaste () -> Bool {\n    return true\n  }\n\n") ;
      } break ;
    case GalgasBool::boolFalse : {
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    const GalgasBool test_9 = in_OPTION_5F_CannotBeDeleted.boolEnum () ;
    switch (test_9) {
    case GalgasBool::boolTrue : {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Can be deleted\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func canBeDeleted () -> Bool {\n    return false\n  }\n\n") ;
      } break ;
    case GalgasBool::boolFalse : {
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityToManyImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_entityToManyImplementationInSwift (Compiler * inCompiler,
                                                                                           const GGS_string & in_ENTITY_5F_NAME,
                                                                                           const GGS_string & /* in_SUPER_5F_CLASS_5F_NAME */,
                                                                                           const GGS_bool & in_HANDLING_5F_OPPOSITE,
                                                                                           const GGS_propertyGenerationList & /* in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION */,
                                                                                           const GGS_atomicProxyGenerationList & in_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                           const GGS_toManyProxyGenerationList & in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                           const GGS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                           const GGS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                           const GGS_computedPropertyGenerationList & in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                           const GGS_toOnePropertyGenerationList & /* in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST */,
                                                                                           const GGS_toManyPropertyGenerationList & /* in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST */,
                                                                                           const GGS_stringset & /* in_SIGNATURE_5F_SET */,
                                                                                           const GGS_bool & /* in_IS_5F_GRAPHIC_5F_ENTITY */,
                                                                                           const GGS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                           const GGS_stringset & /* in_OVERRIDEN_5F_TRANSIENTS */,
                                                                                           const GGS_externSwiftDelegateList & /* in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION */,
                                                                                           const GGS_bool & in_GENERATE_5F_CLASS_5F_PreferencesArrayOf_5F_,
                                                                                           const GGS_bool & in_GENERATE_5F_CLASS_5F_ProxyArrayOf_5F_,
                                                                                           const GGS_bool & in_GENERATE_5F_CLASS_5F_TransientArrayOfSuperOf_5F_,
                                                                                           const GGS_bool & in_GENERATE_5F_CLASS_5F_TransientArrayOf_5F_,
                                                                                           const GGS_bool & in_GENERATE_5F_CLASS_5F_StoredArrayOf_5F_
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("ReadOnlyArrayOf_").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 8)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass ReadOnlyArrayOf_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" : EBReadOnlyAbstractArrayProperty <") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func updateObservers (removedSet inRemovedSet : EBReferenceSet <") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (">,                            \n                                 addedSet inAddedSet : EBReferenceSet <") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (">) {\n    super.updateObservers (removedSet: inRemovedSet, addedSet: inAddedSet)\n  //--- Remove observers from removed objects\n    for managedObject in inRemovedSet.values {\n") ;
  GGS_uint index_1159_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_atomicPropertyGenerationList enumerator_1159 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_1159.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_1159.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Stored property\n        managedObject.") ;
      result.appendString (enumerator_1159.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.stopsBeingObserved (by: relay)\n      }\n") ;
      enumerator_1159.gotoNextObject () ;
      index_1159_.increment () ;
    }
  }
  GGS_uint index_1421_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_transientPropertyGenerationList enumerator_1421 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_1421.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_1421.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Transient property\n        managedObject.") ;
      result.appendString (enumerator_1421.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.stopsBeingObserved (by: relay)\n      }\n") ;
      enumerator_1421.gotoNextObject () ;
      index_1421_.increment () ;
    }
  }
  GGS_uint index_1694_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_computedPropertyGenerationList enumerator_1694 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_1694.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_1694.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Computed property\n        managedObject.") ;
      result.appendString (enumerator_1694.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.stopsBeingObserved (by: relay)\n      }\n") ;
      enumerator_1694.gotoNextObject () ;
      index_1694_.increment () ;
    }
  }
  GGS_uint index_1958_ (0) ;
  if (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_toManyProxyGenerationList enumerator_1958 (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_1958.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_1958.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Tomany proxy\n        managedObject.") ;
      result.appendString (enumerator_1958.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.stopsBeingObserved (by: relay)\n      }\n") ;
      enumerator_1958.gotoNextObject () ;
      index_1958_.increment () ;
    }
  }
  result.appendString ("    }\n  //--- Add observers to added objects\n    for managedObject in inAddedSet.values {\n") ;
  GGS_uint index_2318_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_atomicPropertyGenerationList enumerator_2318 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_2318.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_2318.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Stored property\n        managedObject.") ;
      result.appendString (enumerator_2318.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n") ;
      enumerator_2318.gotoNextObject () ;
      index_2318_.increment () ;
    }
  }
  GGS_uint index_2581_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_transientPropertyGenerationList enumerator_2581 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_2581.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_2581.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Transient property\n        managedObject.") ;
      result.appendString (enumerator_2581.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n") ;
      enumerator_2581.gotoNextObject () ;
      index_2581_.increment () ;
    }
  }
  GGS_uint index_2855_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_computedPropertyGenerationList enumerator_2855 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_2855.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_2855.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Computed property\n        managedObject.") ;
      result.appendString (enumerator_2855.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n") ;
      enumerator_2855.gotoNextObject () ;
      index_2855_.increment () ;
    }
  }
  GGS_uint index_3120_ (0) ;
  if (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_toManyProxyGenerationList enumerator_3120 (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_3120.hasCurrentObject ()) {
      result.appendString ("      if let relay = self.mObserversOf_") ;
      result.appendString (enumerator_3120.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" { // Tomany proxy\n        managedObject.") ;
      result.appendString (enumerator_3120.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n") ;
      enumerator_3120.gotoNextObject () ;
      index_3120_.increment () ;
    }
  }
  result.appendString ("    }\n  }\n\n") ;
  GGS_uint index_3403_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_atomicPropertyGenerationList enumerator_3403 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_3403.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' stored property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mObserversOf_") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" : EBObservedObserver\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by inObserver : any EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject.") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : any EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_3403.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_3403.gotoNextObject () ;
      index_3403_.increment () ;
    }
  }
  GGS_uint index_4804_ (0) ;
  if (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_toManyProxyGenerationList enumerator_4804 (in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_4804.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_4804.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' toMany proxy\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mObserversOf_") ;
      result.appendString (enumerator_4804.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" : EBObservedObserver\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_4804.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by inObserver : any EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_4804.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject.") ;
      result.appendString (enumerator_4804.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_") ;
      result.appendString (enumerator_4804.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_4804.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : any EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_4804.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_4804.gotoNextObject () ;
      index_4804_.increment () ;
    }
  }
  GGS_uint index_6194_ (0) ;
  if (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_atomicProxyGenerationList enumerator_6194 (in_PROXY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_6194.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_6194.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' proxy property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mObserversOf_") ;
      result.appendString (enumerator_6194.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" : EBObservedObserver\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_6194.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by inObserver : any EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_6194.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject.") ;
      result.appendString (enumerator_6194.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_") ;
      result.appendString (enumerator_6194.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_6194.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : any EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_6194.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_6194.gotoNextObject () ;
      index_6194_.increment () ;
    }
  }
  GGS_uint index_7594_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_transientPropertyGenerationList enumerator_7594 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_7594.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_7594.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' transient property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mObserversOf_") ;
      result.appendString (enumerator_7594.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" : EBObservedObserver\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_7594.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by inObserver : any EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_7594.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject.") ;
      result.appendString (enumerator_7594.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_") ;
      result.appendString (enumerator_7594.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by:  inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_7594.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : any EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_7594.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_7594.gotoNextObject () ;
      index_7594_.increment () ;
    }
  }
  GGS_uint index_9007_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_computedPropertyGenerationList enumerator_9007 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_9007.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_9007.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' computed property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mObserversOf_") ;
      result.appendString (enumerator_9007.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" : EBObservedObserver\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_9007.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by inObserver : any EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_9007.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.startsBeingObserved (by: relay)\n      for managedObject in self.propval.values {\n        managedObject.") ;
      result.appendString (enumerator_9007.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n      self.mObserversOf_") ;
      result.appendString (enumerator_9007.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_9007.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : any EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_9007.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_9007.gotoNextObject () ;
      index_9007_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n//    TransientArrayOf ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_0 = in_GENERATE_5F_CLASS_5F_TransientArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 235)).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("// TransientArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" is useless.\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("final class TransientArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" : ReadOnlyArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Sort\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mIsOrderedBefore : Optional < (_ left : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (", _ right : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") -> Bool > = nil\n  private var mSortObserver : EBModelNotifierEvent\? = nil\n//  private let mModelEvent = EBModelEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n/*  override init () {\n    super.init ()\n    self.mModelEvent.mEventCallBack = { [weak self] in self\?.computeModelArray () }\n  } */\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Data provider\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mDataProvider : ReadOnlyArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("\? = nil // SHOULD BE WEAK\n  private var mTransientKind : PropertyKind = .empty\n  private var mModelArrayShouldBeComputed = true\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setDataProvider (_ inProvider : ReadOnlyArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (",\n                        sortCallback inSortCallBack : Optional < (_ left : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (", _ right : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") -> Bool >,\n                        addSortObserversCallback inAddSortObserversCallback : (EBModelNotifierEvent) -> Void,\n                        removeSortObserversCallback inRemoveSortObserversCallback : @escaping (EBModelNotifierEvent) -> Void) {\n    if self.mDataProvider !== inProvider {\n      self.mSortObserver\?.removeSortObservers ()\n      self.mSortObserver = nil\n      self.mDataProvider\?.detachClient (self)\n      self.mDataProvider = inProvider\n      self.mIsOrderedBefore = inSortCallBack\n      self.mDataProvider\?.attachClient (self)\n      if inSortCallBack != nil {\n        self.mSortObserver = EBModelNotifierEvent (\n          self,\n          addSortObserversCallback: inAddSortObserversCallback,\n          removeSortObserversCallback: inRemoveSortObserversCallback\n        )\n      }else{\n        self.mInternalArrayValue = EBReferenceArray ()\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n/*  func resetDataProvider () {\n    if self.mDataProvider != nil {\n      self.mSortObserver = nil\n      self.mDataProvider\?.detachClient (self)\n      self.mDataProvider = nil\n      self.mIsOrderedBefore = nil\n    }\n  } */\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n    if !self.mModelArrayShouldBeComputed {\n      self.mModelArrayShouldBeComputed = true\n      DispatchQueue.main.async {\n        self.computeModelArray ()\n      }\n    }\n//    self.mModelArrayShouldBeComputed = true\n//    self.mModelEvent.observedObjectDidChange ()\n    super.notifyModelDidChange ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final func computeModelArray () {\n    if self.mModelArrayShouldBeComputed {\n      self.mModelArrayShouldBeComputed = false\n      let newArray : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">\n      if let dataProvider = self.mDataProvider {\n        switch dataProvider.selection {\n        case .empty :\n          newArray = EBReferenceArray ()\n          self.mTransientKind = .empty\n        case .single (let v) :\n          if let sortFunction = self.mIsOrderedBefore {\n            newArray = EBReferenceArray (v.sorted { sortFunction ($0, $1) })\n          }else{\n            newArray = EBReferenceArray (v)\n          }\n          self.mTransientKind = .single\n        case .multiple :\n          newArray = EBReferenceArray ()\n          self.mTransientKind = .multiple\n        }\n      }else{\n        newArray = EBReferenceArray ()\n        self.mTransientKind = .empty\n      }\n      self.mInternalArrayValue = newArray\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var selection : EBSelection < [") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("] > {\n    self.computeModelArray ()\n    switch self.mTransientKind {\n    case .empty :\n      return .empty\n    case .single :\n      return .single (self.propval.values)\n    case .multiple :\n      return .multiple\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var propval : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> {\n    self.computeModelArray ()\n    return self.mInternalArrayValue\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//    TransientArrayOfSuperOf ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_1 = in_GENERATE_5F_CLASS_5F_TransientArrayOfSuperOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 372)).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("// TransientArrayOfSuperOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" is useless.\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("final class TransientArrayOfSuperOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" <SUPER : EBManagedObject> : ReadOnlyArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Data provider\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mDataProvider : EBReadOnlyAbstractArrayProperty <SUPER>\? = nil // SHOULD BE WEAK\n  private var mTransientKind : PropertyKind = .empty\n  private var mModelArrayShouldBeComputed = true\n//  private let mModelEvent = EBModelEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n/*  override init () {\n    super.init ()\n    self.mModelEvent.mEventCallBack = { [weak self] in self\?.computeModelArray () }\n  } */\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setDataProvider (_ inProvider : EBReadOnlyAbstractArrayProperty <SUPER>\?) {\n    if self.mDataProvider !== inProvider {\n      self.mDataProvider\?.detachClient (self)\n      self.mDataProvider = inProvider\n      self.mDataProvider\?.attachClient (self)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n    if !self.mModelArrayShouldBeComputed {\n      self.mModelArrayShouldBeComputed = true\n      DispatchQueue.main.async {\n        self.computeModelArray ()\n      }\n    }\n//    self.mModelArrayShouldBeComputed = true\n//    self.mModelEvent.observedObjectDidChange ()\n    super.notifyModelDidChange ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final func computeModelArray () {\n    if self.mModelArrayShouldBeComputed {\n      self.mModelArrayShouldBeComputed = false\n      var newModelArray : EBReferenceArray <SUPER>\n      if let dataProvider = self.mDataProvider {\n        switch dataProvider.selection {\n        case .empty :\n          newModelArray = EBReferenceArray ()\n          self.mTransientKind = .empty\n        case .single (let v) :\n          newModelArray = EBReferenceArray (v)\n          self.mTransientKind = .single\n         case .multiple :\n          newModelArray = EBReferenceArray ()\n          self.mTransientKind = .multiple\n        }\n      }else{\n        newModelArray = EBReferenceArray ()\n        self.mTransientKind = .empty\n      }\n      var newArray = EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> ()\n      for superObject in newModelArray.values {\n        if let object = superObject as\? ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" {\n          newArray.append (object)\n        }\n      }\n      self.mInternalArrayValue = newArray\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var selection : EBSelection < [") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("] > {\n    self.computeModelArray ()\n    switch self.mTransientKind {\n    case .empty :\n      return .empty\n    case .single :\n      return .single (self.mInternalArrayValue.values)\n    case .multiple :\n      return .multiple\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var propval : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> {\n    self.computeModelArray ()\n    return self.mInternalArrayValue\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("To many relationship read write: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 475)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_2 = in_GENERATE_5F_CLASS_5F_ProxyArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 478)).operator_and (in_GENERATE_5F_CLASS_5F_StoredArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 478)) COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 478)).operator_and (in_GENERATE_5F_CLASS_5F_PreferencesArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 478)) COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 478)).boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("// ReadWriteArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" is useless.\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("class ReadWriteArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" : ReadOnlyArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setProp (_ value :  EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">) { } // Abstract method\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//    Proxy: ProxyArrayOf_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_3 = in_GENERATE_5F_CLASS_5F_ProxyArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 495)).boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString ("// ProxyArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" is useless.\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("final class ProxyArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" : ReadWriteArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mModel : ReadWriteArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("\? = nil // SHOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setModel (_ inModel : ReadWriteArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("\?) {\n    if self.mModel !== inModel {\n      self.mModel\?.detachClient (self)\n      self.mModel = inModel\n      self.mModel\?.attachClient (self)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n    let newModelArray : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty :\n        newModelArray = EBReferenceArray ()\n      case .single (let v) :\n        newModelArray = EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> (v)\n      case .multiple :\n        newModelArray = EBReferenceArray ()\n      }\n    }else{\n      newModelArray = EBReferenceArray ()\n    }\n    self.mInternalArrayValue = newModelArray\n    super.notifyModelDidChange ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func setProp (_ inArrayValue : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">) {\n    self.mModel\?.setProp (inArrayValue)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var selection : EBSelection < [") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("] > {\n    if let model = self.mModel {\n      return model.selection\n    }else{\n      return .empty\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var propval : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        return EBReferenceArray ()\n      case .single (let v) :\n        return EBReferenceArray (v)\n      }\n    }else{\n      return EBReferenceArray ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("Stored Array: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 570)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_4 = in_GENERATE_5F_CLASS_5F_StoredArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 573)).boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    result.appendString ("// StoredArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" is useless.\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("class StoredArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" : ReadWriteArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (", EBSignatureObserverProtocol, EBDocumentStorablePropertyAndRelationshipProtocol, Sendable {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  init (usedForSignature inUsedForSignature : Bool, key inKey : String\?) {\n    self.mUsedForSignature = inUsedForSignature\n    self.mKey = inKey\n    super.init ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  \n  private final let mKey : String\?\n  final var key : String\? { return self.mKey }\n  \n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func initialize (fromDictionary inDictionary : [String : Any],\n                   managedObjectArray inManagedObjectArray : [EBManagedObject]) {\n    if let key = self.mKey, let objectSavingIndexArray = inDictionary [key] as\? [Int] {\n      var objectArray = EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> ()\n      for idx in objectSavingIndexArray {\n        objectArray.append (inManagedObjectArray [idx] as! ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (")\n      }\n      self.setProp (objectArray)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func initialize (fromRange inRange : NSRange, ofData inData : Data, _ inRawObjectArray : [RawObject]) {\n    var objectArray = EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> ()\n    let indexArray = inData.base62EncodedIntArray (fromRange: inRange)\n    for idx in indexArray {\n      objectArray.append (inRawObjectArray [idx].object as! ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (")\n    }\n    self.setProp (objectArray)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func store (inDictionary ioDictionary : inout [String : Any]) {\n    if let key = self.mKey, self.mInternalArrayValue.count > 0 {\n      var array = [Int] ()\n      for object in self.mInternalArrayValue.values {\n        array.append (object.savingIndex)\n      }\n      ioDictionary [key] = array\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func enterRelationshipObjects (intoArray ioArray : inout [EBManagedObject]) {\n    if self.mKey != nil, self.mInternalArrayValue.count > 0 {\n      for object in self.mInternalArrayValue.values {\n        ioArray.append (object)\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func appendValueTo (data ioData : inout Data) {\n    enterToManyRelationshipObjectIndexes (from: self.propval.values, into: &ioData)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Signature \?\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final private let mUsedForSignature : Bool\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Undo manager\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  weak final var undoManager : UndoManager\? = nil // SOULD BE WEAK\n\n") ;
    const GalgasBool test_5 = in_HANDLING_5F_OPPOSITE.boolEnum () ;
    switch (test_5) {
    case GalgasBool::boolTrue : {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Opposite relationship management\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mSetOppositeRelationship : Optional < (_ inManagedObject : ") ;
      result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
      result.appendString (") -> Void > = nil\n  private final var mResetOppositeRelationship : Optional < (_ inManagedObject : ") ;
      result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
      result.appendString (") -> Void > = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func setOppositeRelationShipFunctions (setter inSetter : @escaping (_ inManagedObject : ") ;
      result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
      result.appendString (") -> Void,\n                                               resetter inResetter : @escaping (_ inManagedObject : ") ;
      result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
      result.appendString (") -> Void) {\n    self.mSetOppositeRelationship = inSetter\n    self.mResetOppositeRelationship = inResetter\n  }\n\n") ;
      } break ;
    case GalgasBool::boolFalse : {
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Model will change\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final class MyPrivateUndoer : NSObject { // For Swift 6\n    let mOldValue : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">\n\n    init (_ inOldValue : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">) {\n      self.mOldValue = inOldValue\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n//  @objc private final func myPerformUndo (_ inObject : MyPrivateUndoer) {  // For Swift 6\n//    self.setProp (inObject.mOldValue)\n//  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChangeFrom (oldValue inOldValue : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">) {\n  //--- Register old value in undo manager\n  //   self.undoManager\?.registerUndo (  // For Swift 6\n  //    withTarget: self,\n  //    selector: #selector (Self.myPerformUndo (_:)),\n  //    object: MyPrivateUndoer (inOldValue)\n  //  )\n    self.undoManager\?.registerUndo (withTarget: self) { selfTarget in\n      MainActor.assumeIsolated { selfTarget.setProp (inOldValue) }\n    }\n  //---\n    super.notifyModelDidChangeFrom (oldValue: inOldValue)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Model did change\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n  //--- Notify observers\n    self.observedObjectDidChange ()\n  //---\n    super.notifyModelDidChange ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Update observers\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func updateObservers (removedSet inRemovedSet : EBReferenceSet <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">,\n                                 addedSet inAddedSet : EBReferenceSet <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">) {\n    for managedObject in inRemovedSet.values {\n      if self.mUsedForSignature {\n        managedObject.setSignatureObserver (observer: nil)\n      }\n") ;
    const GalgasBool test_6 = in_HANDLING_5F_OPPOSITE.boolEnum () ;
    switch (test_6) {
    case GalgasBool::boolTrue : {
      result.appendString ("      self.mResetOppositeRelationship\? (managedObject)\n") ;
      } break ;
    case GalgasBool::boolFalse : {
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    result.appendString ("   }\n  //---\n    for managedObject in inAddedSet.values {\n      if self.mUsedForSignature {\n        managedObject.setSignatureObserver (observer: self)\n      }\n") ;
    const GalgasBool test_7 = in_HANDLING_5F_OPPOSITE.boolEnum () ;
    switch (test_7) {
    case GalgasBool::boolTrue : {
      result.appendString ("      self.mSetOppositeRelationship\? (managedObject)\n") ;
      } break ;
    case GalgasBool::boolFalse : {
      } break ;
    case GalgasBool::boolNotValid :
      break ;
    }
    result.appendString ("    }\n  //---\n    super.updateObservers (removedSet: inRemovedSet, addedSet: inAddedSet)\n }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override final var selection : EBSelection < [") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("] > {\n    return .single (self.mInternalArrayValue.values)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func setProp (_ inValue : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (">) {\n    self.mInternalArrayValue = inValue\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final override var propval : EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> {\n    return self.mInternalArrayValue\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func remove (_ inObject : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") {\n    if let idx = self.mInternalArrayValue.firstIndex (of: inObject) {\n      self.mInternalArrayValue.remove (at: idx)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func add (_ inObject : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") {\n    if !self.internalSetValue.contains (inObject) {\n      self.mInternalArrayValue.append (inObject)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   signature\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak final var mSignatureObserver : (any EBSignatureObserverProtocol)\? = nil // SOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mSignatureCache : UInt32\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func setSignatureObserver (observer inObserver : (any EBSignatureObserverProtocol)\?) {\n    self.mSignatureObserver\?.clearSignatureCache ()\n    self.mSignatureObserver = inObserver\n    inObserver\?.clearSignatureCache ()\n    self.clearSignatureCache ()\n }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func signature () -> UInt32 {\n    let computedSignature : UInt32\n    if let s = self.mSignatureCache {\n      computedSignature = s\n    }else{\n      computedSignature = self.computeSignature ()\n      self.mSignatureCache = computedSignature\n    }\n    return computedSignature\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final private func computeSignature () -> UInt32 {\n    var crc : UInt32 = 0\n    for object in self.mInternalArrayValue.values {\n      crc.accumulate (u32: object.signature ())\n    }\n    return crc\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func clearSignatureCache () {\n    if self.mSignatureCache != nil {\n      self.mSignatureCache = nil\n      self.mSignatureObserver\?.clearSignatureCache ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("Preferences array: ").add_operation (in_ENTITY_5F_NAME, inCompiler COMMA_SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 834)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const GalgasBool test_8 = in_GENERATE_5F_CLASS_5F_PreferencesArrayOf_5F_.operator_not (SOURCE_FILE ("entity-tomany.swift.galgasTemplate", 837)).boolEnum () ;
  switch (test_8) {
  case GalgasBool::boolTrue : {
    result.appendString ("// PreferencesArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" is useless.\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("final class PreferencesArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" : StoredArrayOf_") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mPrefKey : String\n  private let mObserverForWritingPreferences = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  init (prefKey inPrefKey : String) {\n    self.mPrefKey = inPrefKey\n    super.init (usedForSignature: false, key: nil)\n    if let array = UserDefaults.standard.array (forKey: inPrefKey) as\? [[String : Any]] {\n      var objectArray = EBReferenceArray <") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("> ()\n      for dictionary in array {\n        let object = newInstanceOfEntityNamed (self.undoManager, \"") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("\") as! ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString ("\n        object.setUpProperties (withDictionary: dictionary, managedObjectArray: [])\n        objectArray.append (object)\n      }\n      self.setProp (objectArray)\n    }\n") ;
    GGS_uint index_34628_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      UpEnumerator_atomicPropertyGenerationList enumerator_34628 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
      while (enumerator_34628.hasCurrentObject ()) {
        result.appendString ("    toMany_") ;
        result.appendString (enumerator_34628.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_StartsBeingObserved (by: self.mObserverForWritingPreferences)\n") ;
        enumerator_34628.gotoNextObject () ;
        index_34628_.increment () ;
      }
    }
    result.appendString ("    self.mObserverForWritingPreferences.mEventCallBack = { [weak self] in self\?.writeInPreferences () }\n }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func writeInPreferences () {\n    var dictionaryArray = [[String  : Any]] ()\n    for object in self.mInternalArrayValue.values {\n      var d = [String  : Any] ()\n      object.savePropertiesAndRelationshipsIntoDictionary (&d)\n      d [ENTITY_KEY] = nil // Remove entity key, not used in preferences\n      dictionaryArray.append (d)\n    }\n    UserDefaults.standard.set (dictionaryArray, forKey: self.mPrefKey)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate entityToOneImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_entityToOneImplementationInSwift (Compiler * inCompiler,
                                                                                          const GGS_string & in_ENTITY_5F_NAME,
                                                                                          const GGS_string & /* in_SUPER_5F_CLASS_5F_NAME */,
                                                                                          const GGS_bool & in_HANDLING_5F_OPPOSITE,
                                                                                          const GGS_propertyGenerationList & /* in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION */,
                                                                                          const GGS_atomicProxyGenerationList & /* in_PROXY_5F_LIST_5F_FOR_5F_GENERATION */,
                                                                                          const GGS_toManyProxyGenerationList & /* in_TO_5F_MANY_5F_PROXY_5F_LIST_5F_FOR_5F_GENERATION */,
                                                                                          const GGS_atomicPropertyGenerationList & in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                                          const GGS_transientPropertyGenerationList & in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                          const GGS_computedPropertyGenerationList & in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION,
                                                                                          const GGS_toOnePropertyGenerationList & /* in_TO_5F_ONE_5F_RELATIONSHIP_5F_LIST */,
                                                                                          const GGS_toManyPropertyGenerationList & in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST,
                                                                                          const GGS_stringset & /* in_SIGNATURE_5F_SET */,
                                                                                          const GGS_bool & /* in_IS_5F_GRAPHIC_5F_ENTITY */,
                                                                                          const GGS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                          const GGS_stringset & /* in_OVERRIDEN_5F_TRANSIENTS */,
                                                                                          const GGS_externSwiftDelegateList & /* in_EXTERN_5F_DELEGATE_5F_LIST_5F_FOR_5F_IMPLEMENTATION */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//    ReadOnlyObject_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nclass ReadOnlyObject_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" : EBReadOnlyAbstractObjectProperty <") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChangeFrom (oldValue inOldValue : ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\?) {\n    super.notifyModelDidChangeFrom (oldValue: inOldValue)\n  //--- Remove observers from removed objects\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)).add_operation (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)).add_operation (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 18)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("    if let oldValue = inOldValue {\n") ;
    GGS_uint index_1161_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      UpEnumerator_atomicPropertyGenerationList enumerator_1161 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
      while (enumerator_1161.hasCurrentObject ()) {
        result.appendString ("      oldValue.") ;
        result.appendString (enumerator_1161.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.stopsBeingObserved (by: self.") ;
        result.appendString (enumerator_1161.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property) // Stored property\n") ;
        enumerator_1161.gotoNextObject () ;
        index_1161_.increment () ;
      }
    }
    GGS_uint index_1363_ (0) ;
    if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      UpEnumerator_transientPropertyGenerationList enumerator_1363 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
      while (enumerator_1363.hasCurrentObject ()) {
        result.appendString ("      oldValue.") ;
        result.appendString (enumerator_1363.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.stopsBeingObserved (by: self.") ;
        result.appendString (enumerator_1363.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property) // Transient property\n") ;
        enumerator_1363.gotoNextObject () ;
        index_1363_.increment () ;
      }
    }
    GGS_uint index_1576_ (0) ;
    if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      UpEnumerator_computedPropertyGenerationList enumerator_1576 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
      while (enumerator_1576.hasCurrentObject ()) {
        result.appendString ("      oldValue.") ;
        result.appendString (enumerator_1576.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.stopsBeingObserved (by: self.") ;
        result.appendString (enumerator_1576.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property) // Computed property\n") ;
        enumerator_1576.gotoNextObject () ;
        index_1576_.increment () ;
      }
    }
    GGS_uint index_1772_ (0) ;
    if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
      UpEnumerator_toManyPropertyGenerationList enumerator_1772 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST) ;
      while (enumerator_1772.hasCurrentObject ()) {
        result.appendString ("      if let relay = self.mObserversOf_") ;
        result.appendString (enumerator_1772.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString (" { // to Many\n        oldValue.") ;
        result.appendString (enumerator_1772.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.stopsBeingObserved (by: relay)\n      }\n") ;
        enumerator_1772.gotoNextObject () ;
        index_1772_.increment () ;
      }
    }
    result.appendString ("    }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  //--- Add observers to added objects\n") ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)).add_operation (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)).add_operation (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.getter_count (SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 37)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("    if let newValue = self.mWeakInternalValue {\n") ;
    GGS_uint index_2297_ (0) ;
    if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
      UpEnumerator_atomicPropertyGenerationList enumerator_2297 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
      while (enumerator_2297.hasCurrentObject ()) {
        result.appendString ("      newValue.") ;
        result.appendString (enumerator_2297.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.startsBeingObserved (by: self.") ;
        result.appendString (enumerator_2297.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property) // Stored property\n") ;
        enumerator_2297.gotoNextObject () ;
        index_2297_.increment () ;
      }
    }
    GGS_uint index_2500_ (0) ;
    if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      UpEnumerator_transientPropertyGenerationList enumerator_2500 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
      while (enumerator_2500.hasCurrentObject ()) {
        result.appendString ("      newValue.") ;
        result.appendString (enumerator_2500.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.startsBeingObserved (by: self.") ;
        result.appendString (enumerator_2500.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property) // Transient property\n") ;
        enumerator_2500.gotoNextObject () ;
        index_2500_.increment () ;
      }
    }
    GGS_uint index_2714_ (0) ;
    if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
      UpEnumerator_computedPropertyGenerationList enumerator_2714 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
      while (enumerator_2714.hasCurrentObject ()) {
        result.appendString ("      newValue.") ;
        result.appendString (enumerator_2714.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.startsBeingObserved (by: self.") ;
        result.appendString (enumerator_2714.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property) // Computed property\n") ;
        enumerator_2714.gotoNextObject () ;
        index_2714_.increment () ;
      }
    }
    GGS_uint index_2911_ (0) ;
    if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
      UpEnumerator_toManyPropertyGenerationList enumerator_2911 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST) ;
      while (enumerator_2911.hasCurrentObject ()) {
        result.appendString ("      if let relay = self.mObserversOf_") ;
        result.appendString (enumerator_2911.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString (" { // to Many\n        newValue.") ;
        result.appendString (enumerator_2911.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.startsBeingObserved (by: relay)\n      }\n") ;
        enumerator_2911.gotoNextObject () ;
        index_2911_.increment () ;
      }
    }
    result.appendString ("    }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  }\n\n") ;
  GGS_uint index_3192_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_atomicPropertyGenerationList enumerator_3192 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_3192.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_3192.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' stored property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final let ") ;
      result.appendString (enumerator_3192.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property = EBTransientProperty <") ;
      result.appendString (extensionGetter_swiftTypeName (enumerator_3192.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 64)).stringValue ()) ;
      result.appendString ("\?> ()\n\n") ;
      enumerator_3192.gotoNextObject () ;
      index_3192_.increment () ;
    }
  }
  GGS_uint index_3636_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_transientPropertyGenerationList enumerator_3636 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_3636.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_3636.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' transient property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final let ") ;
      result.appendString (enumerator_3636.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property = EBTransientProperty <") ;
      result.appendString (extensionGetter_swiftTypeName (enumerator_3636.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 73)).stringValue ()) ;
      result.appendString ("\?> ()\n\n") ;
      enumerator_3636.gotoNextObject () ;
      index_3636_.increment () ;
    }
  }
  GGS_uint index_4090_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_computedPropertyGenerationList enumerator_4090 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_4090.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observers of '") ;
      result.appendString (enumerator_4090.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("' computed property\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final let ") ;
      result.appendString (enumerator_4090.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property = EBTransientProperty <") ;
      result.appendString (extensionGetter_swiftTypeName (enumerator_4090.current_mProperty (HERE).readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("entity-toone.swift.galgasTemplate", 82)).stringValue ()) ;
      result.appendString ("\?> ()\n\n") ;
      enumerator_4090.gotoNextObject () ;
      index_4090_.increment () ;
    }
  }
  GGS_uint index_4527_ (0) ;
  if (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST.isValid ()) {
    UpEnumerator_toManyPropertyGenerationList enumerator_4527 (in_TO_5F_MANY_5F_RELATIONSHIP_5F_LIST) ;
    while (enumerator_4527.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Observable toMany property: ") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mObserversOf_") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" : EBObservedObserver\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by inObserver : any EBObserverProtocol) {\n    let relay : EBObservedObserver\n    if let r = self.mObserversOf_") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" {\n      relay = r\n    }else{\n      relay = EBObservedObserver ()\n      self.mWeakInternalValue\?.") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.startsBeingObserved (by: relay)\n      self.mObserversOf_") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" = relay\n    }\n    relay.startsBeingObserved (by: inObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func toMany_") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by inObserver : any EBObserverProtocol) {\n    self.mObserversOf_") ;
      result.appendString (enumerator_4527.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("\?.stopsBeingObserved (by: inObserver)\n  }\n\n") ;
      enumerator_4527.gotoNextObject () ;
      index_4527_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   INIT\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override init () {\n    super.init ()\n") ;
  GGS_uint index_6222_ (0) ;
  if (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_atomicPropertyGenerationList enumerator_6222 (in_SIMPLE_5F_STORED_5F_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_6222.hasCurrentObject ()) {
      result.appendString ("  //--- Configure ") ;
      result.appendString (enumerator_6222.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" simple stored property\n    self.") ;
      result.appendString (enumerator_6222.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.mReadModelFunction = { [weak self] in\n      return self\?.mWeakInternalValue\?.") ;
      result.appendString (enumerator_6222.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.optionalSelection \?\? .single (nil)\n    }\n") ;
      enumerator_6222.gotoNextObject () ;
      index_6222_.increment () ;
    }
  }
  GGS_uint index_6565_ (0) ;
  if (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_transientPropertyGenerationList enumerator_6565 (in_TRANSIENT_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_6565.hasCurrentObject ()) {
      result.appendString ("  //--- Configure ") ;
      result.appendString (enumerator_6565.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" transient property\n    self.") ;
      result.appendString (enumerator_6565.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.mReadModelFunction = { [weak self] in\n      return self\?.mWeakInternalValue\?.") ;
      result.appendString (enumerator_6565.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.optionalSelection \?\? .single (nil)\n    }\n") ;
      enumerator_6565.gotoNextObject () ;
      index_6565_.increment () ;
    }
  }
  GGS_uint index_6912_ (0) ;
  if (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION.isValid ()) {
    UpEnumerator_computedPropertyGenerationList enumerator_6912 (in_COMPUTED_5F_PROPERTY_5F_LIST_5F_FOR_5F_IMPLEMENTATION) ;
    while (enumerator_6912.hasCurrentObject ()) {
      result.appendString ("  //--- Configure ") ;
      result.appendString (enumerator_6912.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString (" computed property\n    self.") ;
      result.appendString (enumerator_6912.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.mReadModelFunction = { [weak self] in\n      return self\?.mWeakInternalValue\?.") ;
      result.appendString (enumerator_6912.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
      result.appendString ("_property.optionalSelection \?\? .single (nil)\n    }\n") ;
      enumerator_6912.gotoNextObject () ;
      index_6912_.increment () ;
    }
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n//    StoredObject_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nfinal class StoredObject_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" : ReadOnlyObject_") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (", EBSignatureObserverProtocol, EBDocumentStorablePropertyAndRelationshipProtocol {\n\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  init (usedForSignature inUsedForSignature : Bool, strongRef inStrongReference : Bool, key inKey : String\?) {\n    self.mUsedForSignature = inUsedForSignature\n    self.mIsStrongReference = inStrongReference\n    self.mKey = inKey\n    super.init ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mKey : String\?\n  var key : String\? { return self.mKey }\n  \n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func initialize (fromDictionary inDictionary : [String : Any],\n                   managedObjectArray inManagedObjectArray : [EBManagedObject]) {\n    if let key = self.mKey, let objectSavingIndex = inDictionary [key] as\? Int {\n      let object = inManagedObjectArray [objectSavingIndex] as! ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n      self.setProp (object)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func initialize (fromRange inRange : NSRange, ofData inData : Data, _ inRawObjectArray : [RawObject]) {\n    if let idx = inData.base62EncodedInt (range: inRange) {\n      let object = inRawObjectArray [idx].object as! ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\n      self.setProp (object)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func store (inDictionary ioDictionary : inout [String : Any]) {\n    if let key = self.mKey, let idx = self.mWeakInternalValue\?.savingIndex {\n      ioDictionary [key] = idx\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func enterRelationshipObjects (intoArray ioArray : inout [EBManagedObject]) {\n    if self.mKey != nil, let object = self.mWeakInternalValue {\n      ioArray.append (object)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func appendValueTo (data ioData : inout Data) {\n    if let object = self.propval {\n      ioData.append (base62Encoded: object.savingIndex)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Signature \?\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mUsedForSignature : Bool\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Undo manager\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  weak var undoManager : UndoManager\? = nil // SOULD BE WEAK\n\n") ;
  const GalgasBool test_2 = in_HANDLING_5F_OPPOSITE.boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Opposite relationship management\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mSetOppositeRelationship : Optional < (_ inManagedObject : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") -> Void > = nil\n  private var mResetOppositeRelationship : Optional < (_ inManagedObject : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") -> Void > = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setOppositeRelationShipFunctions (setter inSetter : @escaping (_ inManagedObject : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") -> Void,\n                                         resetter inResetter : @escaping (_ inManagedObject : ") ;
    result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
    result.appendString (") -> Void) {\n    self.mSetOppositeRelationship = inSetter\n    self.mResetOppositeRelationship = inResetter\n  }\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Model will change\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final class MyPrivateUndoer : NSObject { // For Swift 6\n    let mOldValue : ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\?\n\n    init (_ inOldValue : ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\?) {\n      self.mOldValue = inOldValue\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  // @objc private final func myPerformUndo (_ inObject : MyPrivateUndoer) {  // For Swift 6\n  //   self.setProp (inObject.mOldValue)\n  // }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChangeFrom (oldValue inOldValue : ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\?) {\n  //--- Register old value in undo manager\n     // self.undoManager\?.registerUndo (  // For Swift 6\n     //  withTarget: self,\n     // selector: #selector (Self.myPerformUndo (_:)),\n     // object: MyPrivateUndoer (inOldValue)\n    // )\n    self.undoManager\?.registerUndo (withTarget: self) { selfTarget in\n      MainActor.assumeIsolated { selfTarget.setProp (inOldValue) }\n    }\n  //---\n    if let object = inOldValue {\n      if self.mUsedForSignature {\n        object.setSignatureObserver (observer: nil)\n      }\n") ;
  const GalgasBool test_3 = in_HANDLING_5F_OPPOSITE.boolEnum () ;
  switch (test_3) {
  case GalgasBool::boolTrue : {
    result.appendString ("      self.mResetOppositeRelationship\? (object)\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("    }\n  //---\n    if let object = self.mWeakInternalValue {\n      if self.mUsedForSignature {\n        object.setSignatureObserver (observer: self)\n      }\n") ;
  const GalgasBool test_4 = in_HANDLING_5F_OPPOSITE.boolEnum () ;
  switch (test_4) {
  case GalgasBool::boolTrue : {
    result.appendString ("      self.mSetOppositeRelationship\? (object)\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("    }\n  //---\n    super.notifyModelDidChangeFrom (oldValue: inOldValue)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Model did change\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n  //--- Notify observers\n    self.observedObjectDidChange ()\n    self.clearSignatureCache ()\n  //---\n    super.notifyModelDidChange ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var selection : EBSelection < ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\? > {\n    if let object = self.mWeakInternalValue {\n      return .single (object)\n    }else{\n      return .empty\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var propval : ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\? { return self.mWeakInternalValue }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   setProp\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mIsStrongReference : Bool\n  private var mStrongInternalValue : EBManagedObject\? = nil // Only used for retaining\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setProp (_ inValue : ") ;
  result.appendString (in_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\?) {\n    self.mWeakInternalValue = inValue\n    if self.mIsStrongReference {\n      self.mStrongInternalValue = inValue\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   signature\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mSignatureObserver : (any EBSignatureObserverProtocol)\? = nil // SOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mSignatureCache : UInt32\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setSignatureObserver (observer inObserver : (any EBSignatureObserverProtocol)\?) {\n    self.mSignatureObserver\?.clearSignatureCache ()\n    self.mSignatureObserver = inObserver\n    inObserver\?.clearSignatureCache ()\n    self.clearSignatureCache ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func signature () -> UInt32 {\n    let computedSignature : UInt32\n    if let s = self.mSignatureCache {\n      computedSignature = s\n    }else{\n      computedSignature = self.computeSignature ()\n      self.mSignatureCache = computedSignature\n    }\n    return computedSignature\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final private func computeSignature () -> UInt32 {\n    var crc : UInt32 = 0\n    if let object = self.mWeakInternalValue {\n      crc.accumulate (u32: object.signature ())\n    }\n    return crc\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func clearSignatureCache () {\n    if self.mSignatureCache != nil {\n      self.mSignatureCache = nil\n      self.mSignatureObserver\?.clearSignatureCache ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'entityGenerationTemplate managedObjectFactory'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_entityGenerationTemplate_managedObjectFactory (Compiler * /* inCompiler */,
                                                                              const GGS_entityListForGeneratingEBManagedObjectContext & in_ENTITY_5F_LIST
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n\nfileprivate let kEntityDictionary : [String : EBManagedObject.Type] = [\n") ;
  GGS_uint index_510_ (0) ;
  if (in_ENTITY_5F_LIST.isValid ()) {
    UpEnumerator_entityListForGeneratingEBManagedObjectContext enumerator_510 (in_ENTITY_5F_LIST) ;
    while (enumerator_510.hasCurrentObject ()) {
      result.appendString ("  \"") ;
      result.appendString (enumerator_510.current_mEntityName (HERE).stringValue ()) ;
      result.appendString ("\" : ") ;
      result.appendString (enumerator_510.current_mEntityName (HERE).stringValue ()) ;
      result.appendString (".self") ;
      GGS_uint index_597_ (0) ;
      if (enumerator_510.current_mObsoleteEntityNames (HERE).isValid ()) {
        UpEnumerator_lstringlist enumerator_597 (enumerator_510.current_mObsoleteEntityNames (HERE)) ;
        while (enumerator_597.hasCurrentObject ()) {
          result.appendString (",\n  \"") ;
          result.appendString (enumerator_597.current_mValue (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("\" : ") ;
          result.appendString (enumerator_510.current_mEntityName (HERE).stringValue ()) ;
          result.appendString (".self") ;
          enumerator_597.gotoNextObject () ;
          index_597_.increment () ;
        }
      }
      enumerator_510.gotoNextObject () ;
      if (enumerator_510.hasCurrentObject ()) {
        result.appendString (",\n") ;
      }
      index_510_.increment () ;
    }
  }
  result.appendString ("\n]\n\n//--------------------------------------------------------------------------------------------------\n//  newInstanceOfEntityNamed\n//--------------------------------------------------------------------------------------------------\n\n@MainActor func newInstanceOfEntityNamed (_ inUndoManager : UndoManager\?,\n                                          _ inEntityTypeName : String) -> EBManagedObject {\n  let T = kEntityDictionary [inEntityTypeName]!\n  return T.init (inUndoManager)\n}\n\n//--------------------------------------------------------------------------------------------------\n//   makeManagedObjectFromDictionary\n//--------------------------------------------------------------------------------------------------\n\n@MainActor func makeManagedObjectFromDictionary (_ inUndoManager : UndoManager\?,\n                                                 _ inDictionary : [String : Any]) -> EBManagedObject {\n  let entityName = inDictionary [ENTITY_KEY] as! String\n  let object = newInstanceOfEntityNamed (inUndoManager, entityName)\n  object.setUpProperties (withDictionary: inDictionary, managedObjectArray: [])\n  return object\n}\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

