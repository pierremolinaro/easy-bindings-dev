#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-8.h"

//--------------------------------------------------------------------------------------------------
//Optional @autoLayoutViewBindingSpecificationMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_::GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_::GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ (const GGS_autoLayoutViewBindingSpecificationMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_::init_nil (void) {
  GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_::isValid (void) const {
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

bool GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_autoLayoutViewBindingSpecificationMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_::description (String & ioString,
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
//     @autoLayoutViewBindingSpecificationMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ ("autoLayoutViewBindingSpecificationMap.element?",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ result ;
  const GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ * p = (const GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewBindingSpecificationMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controllerBindingOptionList_2E_element ("controllerBindingOptionList.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controllerBindingOptionList_2E_element::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList_2E_element ("outletClassBindingSpecificationModelList.element",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletClassBindingSpecificationModelList_2E_element::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationList_2E_element ("outletClassBindingSpecificationList.element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletClassBindingSpecificationList_2E_element::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bindingSpecificationMap_2E_element ("bindingSpecificationMap.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bindingSpecificationMap_2E_element::staticTypeDescriptor (void) const {
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
//Optional @bindingSpecificationMap_2E_element_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bindingSpecificationMap_2E_element_3F_ ("bindingSpecificationMap.element?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bindingSpecificationMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList_2E_element ("controllerBindingOptionDecoratedList.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controllerBindingOptionDecoratedList_2E_element::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2E_element ("outletBindingSpecificationMap.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletBindingSpecificationMap_2E_element::staticTypeDescriptor (void) const {
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
//Optional @outletBindingSpecificationMap_2E_element_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap_2E_element_3F_ ("outletBindingSpecificationMap.element?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletBindingSpecificationMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerBindingListAST_2E_element ("arrayControllerBindingListAST.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayControllerBindingListAST_2E_element::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerBoundModelAST_2E_rootToManyRelationship ("arrayControllerBoundModelAST.rootToManyRelationship",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship::staticTypeDescriptor (void) const {
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
//Optional @arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ ("arrayControllerBoundModelAST.rootToManyRelationship?",
                                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_::staticTypeDescriptor (void) const {
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

GGS_astViewDeclarationList_2E_element::GGS_astViewDeclarationList_2E_element (void) :
mProperty_mViewName (),
mProperty_mView () {
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList_2E_element::GGS_astViewDeclarationList_2E_element (const GGS_astViewDeclarationList_2E_element & inSource) :
mProperty_mViewName (inSource.mProperty_mViewName),
mProperty_mView (inSource.mProperty_mView) {
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList_2E_element & GGS_astViewDeclarationList_2E_element::operator = (const GGS_astViewDeclarationList_2E_element & inSource) {
  mProperty_mViewName = inSource.mProperty_mViewName ;
  mProperty_mView = inSource.mProperty_mView ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_astViewDeclarationList_2E_element GGS_astViewDeclarationList_2E_element::init_21__21_ (const GGS_lstring & in_mViewName,
                                                                                           const GGS_astAbstractViewDeclaration & in_mView,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astViewDeclarationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mViewName = in_mViewName ;
  result.mProperty_mView = in_mView ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList_2E_element::GGS_astViewDeclarationList_2E_element (const GGS_lstring & inOperand0,
                                                                              const GGS_astAbstractViewDeclaration & inOperand1) :
mProperty_mViewName (inOperand0),
mProperty_mView (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_astViewDeclarationList_2E_element::isValid (void) const {
  return mProperty_mViewName.isValid () && mProperty_mView.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList_2E_element::drop (void) {
  mProperty_mViewName.drop () ;
  mProperty_mView.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astViewDeclarationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mViewName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mView.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @astViewDeclarationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astViewDeclarationList_2E_element ("astViewDeclarationList.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astViewDeclarationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astViewDeclarationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astViewDeclarationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astViewDeclarationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList_2E_element GGS_astViewDeclarationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_astViewDeclarationList_2E_element result ;
  const GGS_astViewDeclarationList_2E_element * p = (const GGS_astViewDeclarationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astViewDeclarationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astViewDeclarationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList_2E_element::GGS_astNewStackViewDeclarationList_2E_element (void) :
mProperty_mInstanciedStackViewName (),
mProperty_mTypeStackViewName () {
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList_2E_element::GGS_astNewStackViewDeclarationList_2E_element (const GGS_astNewStackViewDeclarationList_2E_element & inSource) :
mProperty_mInstanciedStackViewName (inSource.mProperty_mInstanciedStackViewName),
mProperty_mTypeStackViewName (inSource.mProperty_mTypeStackViewName) {
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList_2E_element & GGS_astNewStackViewDeclarationList_2E_element::operator = (const GGS_astNewStackViewDeclarationList_2E_element & inSource) {
  mProperty_mInstanciedStackViewName = inSource.mProperty_mInstanciedStackViewName ;
  mProperty_mTypeStackViewName = inSource.mProperty_mTypeStackViewName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_astNewStackViewDeclarationList_2E_element GGS_astNewStackViewDeclarationList_2E_element::init_21__21_ (const GGS_lstring & in_mInstanciedStackViewName,
                                                                                                           const GGS_lstring & in_mTypeStackViewName,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astNewStackViewDeclarationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstanciedStackViewName = in_mInstanciedStackViewName ;
  result.mProperty_mTypeStackViewName = in_mTypeStackViewName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astNewStackViewDeclarationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList_2E_element::GGS_astNewStackViewDeclarationList_2E_element (const GGS_lstring & inOperand0,
                                                                                              const GGS_lstring & inOperand1) :
mProperty_mInstanciedStackViewName (inOperand0),
mProperty_mTypeStackViewName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_astNewStackViewDeclarationList_2E_element::isValid (void) const {
  return mProperty_mInstanciedStackViewName.isValid () && mProperty_mTypeStackViewName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astNewStackViewDeclarationList_2E_element::drop (void) {
  mProperty_mInstanciedStackViewName.drop () ;
  mProperty_mTypeStackViewName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astNewStackViewDeclarationList_2E_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astNewStackViewDeclarationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstanciedStackViewName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTypeStackViewName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @astNewStackViewDeclarationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astNewStackViewDeclarationList_2E_element ("astNewStackViewDeclarationList.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astNewStackViewDeclarationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astNewStackViewDeclarationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astNewStackViewDeclarationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astNewStackViewDeclarationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList_2E_element GGS_astNewStackViewDeclarationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_astNewStackViewDeclarationList_2E_element result ;
  const GGS_astNewStackViewDeclarationList_2E_element * p = (const GGS_astNewStackViewDeclarationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astNewStackViewDeclarationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astNewStackViewDeclarationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList_2E_element::GGS_astAutoLayoutViewFunctionCallList_2E_element (void) :
mProperty_mFunctionName (),
mProperty_mParameterList () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList_2E_element::GGS_astAutoLayoutViewFunctionCallList_2E_element (const GGS_astAutoLayoutViewFunctionCallList_2E_element & inSource) :
mProperty_mFunctionName (inSource.mProperty_mFunctionName),
mProperty_mParameterList (inSource.mProperty_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList_2E_element & GGS_astAutoLayoutViewFunctionCallList_2E_element::operator = (const GGS_astAutoLayoutViewFunctionCallList_2E_element & inSource) {
  mProperty_mFunctionName = inSource.mProperty_mFunctionName ;
  mProperty_mParameterList = inSource.mProperty_mParameterList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList_2E_element GGS_astAutoLayoutViewFunctionCallList_2E_element::init_21__21_ (const GGS_lstring & in_mFunctionName,
                                                                                                                 const GGS_astAutoLayoutViewInstructionParameterList & in_mParameterList,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewFunctionCallList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFunctionName = in_mFunctionName ;
  result.mProperty_mParameterList = in_mParameterList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionCallList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList_2E_element::GGS_astAutoLayoutViewFunctionCallList_2E_element (const GGS_lstring & inOperand0,
                                                                                                    const GGS_astAutoLayoutViewInstructionParameterList & inOperand1) :
mProperty_mFunctionName (inOperand0),
mProperty_mParameterList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutViewFunctionCallList_2E_element::isValid (void) const {
  return mProperty_mFunctionName.isValid () && mProperty_mParameterList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionCallList_2E_element::drop (void) {
  mProperty_mFunctionName.drop () ;
  mProperty_mParameterList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionCallList_2E_element::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astAutoLayoutViewFunctionCallList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFunctionName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mParameterList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @astAutoLayoutViewFunctionCallList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionCallList_2E_element ("astAutoLayoutViewFunctionCallList.element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewFunctionCallList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionCallList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutViewFunctionCallList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutViewFunctionCallList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList_2E_element GGS_astAutoLayoutViewFunctionCallList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewFunctionCallList_2E_element result ;
  const GGS_astAutoLayoutViewFunctionCallList_2E_element * p = (const GGS_astAutoLayoutViewFunctionCallList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutViewFunctionCallList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewFunctionCallList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc::GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc (void) :
mProperty_enumTypeName (),
mProperty_enumFuncName () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc::GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc (const GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc & inSource) :
mProperty_enumTypeName (inSource.mProperty_enumTypeName),
mProperty_enumFuncName (inSource.mProperty_enumFuncName) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc & GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc::operator = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc & inSource) {
  mProperty_enumTypeName = inSource.mProperty_enumTypeName ;
  mProperty_enumFuncName = inSource.mProperty_enumFuncName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc::init_21__21_ (const GGS_lstring & in_enumTypeName,
                                                                                                                                     const GGS_lstring & in_enumFuncName,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_enumTypeName = in_enumTypeName ;
  result.mProperty_enumFuncName = in_enumFuncName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc::GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc (const GGS_lstring & inOperand0,
                                                                                                                        const GGS_lstring & inOperand1) :
mProperty_enumTypeName (inOperand0),
mProperty_enumFuncName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc::isValid (void) const {
  return mProperty_enumTypeName.isValid () && mProperty_enumFuncName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc::drop (void) {
  mProperty_enumTypeName.drop () ;
  mProperty_enumFuncName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astAutoLayoutViewInstructionParameterValue.enumFunc:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_enumTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_enumFuncName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @astAutoLayoutViewInstructionParameterValue.enumFunc generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc ("astAutoLayoutViewInstructionParameterValue.enumFunc",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc result ;
  const GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc * p = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewInstructionParameterValue.enumFunc", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_
//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_::GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_::GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ (const GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_::init_nil (void) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_::isValid (void) const {
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

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_::description (String & ioString,
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
//     @astAutoLayoutViewInstructionParameterValue.enumFunc? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ ("astAutoLayoutViewInstructionParameterValue.enumFunc?",
                                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ result ;
  const GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ * p = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewInstructionParameterValue.enumFunc?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_entity::GGS_astAutoLayoutViewInstructionParameterValue_2E_entity (void) :
mProperty_entityName () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_entity::GGS_astAutoLayoutViewInstructionParameterValue_2E_entity (const GGS_astAutoLayoutViewInstructionParameterValue_2E_entity & inSource) :
mProperty_entityName (inSource.mProperty_entityName) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_entity & GGS_astAutoLayoutViewInstructionParameterValue_2E_entity::operator = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_entity & inSource) {
  mProperty_entityName = inSource.mProperty_entityName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_entity GGS_astAutoLayoutViewInstructionParameterValue_2E_entity::init_21_ (const GGS_lstring & in_entityName,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_entity result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_entityName = in_entityName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_entity::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_entity::GGS_astAutoLayoutViewInstructionParameterValue_2E_entity (const GGS_lstring & inOperand0) :
mProperty_entityName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_entity::isValid (void) const {
  return mProperty_entityName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_entity::drop (void) {
  mProperty_entityName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_entity::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astAutoLayoutViewInstructionParameterValue.entity:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_entityName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @astAutoLayoutViewInstructionParameterValue.entity generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_entity ("astAutoLayoutViewInstructionParameterValue.entity",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewInstructionParameterValue_2E_entity::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_entity ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutViewInstructionParameterValue_2E_entity::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutViewInstructionParameterValue_2E_entity (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_entity GGS_astAutoLayoutViewInstructionParameterValue_2E_entity::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_entity result ;
  const GGS_astAutoLayoutViewInstructionParameterValue_2E_entity * p = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_entity *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutViewInstructionParameterValue_2E_entity *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewInstructionParameterValue.entity", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @astAutoLayoutViewInstructionParameterValue_2E_entity_3F_
//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_::GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_::GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ (const GGS_astAutoLayoutViewInstructionParameterValue_2E_entity & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_::init_nil (void) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_::isValid (void) const {
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

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_astAutoLayoutViewInstructionParameterValue_2E_entity () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_::description (String & ioString,
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
//     @astAutoLayoutViewInstructionParameterValue.entity? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ ("astAutoLayoutViewInstructionParameterValue.entity?",
                                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ result ;
  const GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ * p = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewInstructionParameterValue.entity?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList_2E_element::GGS_astAutoLayoutViewInstructionParameterList_2E_element (void) :
mProperty_mParameterName (),
mProperty_mParameterType (),
mProperty_mParameter () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList_2E_element::GGS_astAutoLayoutViewInstructionParameterList_2E_element (const GGS_astAutoLayoutViewInstructionParameterList_2E_element & inSource) :
mProperty_mParameterName (inSource.mProperty_mParameterName),
mProperty_mParameterType (inSource.mProperty_mParameterType),
mProperty_mParameter (inSource.mProperty_mParameter) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList_2E_element & GGS_astAutoLayoutViewInstructionParameterList_2E_element::operator = (const GGS_astAutoLayoutViewInstructionParameterList_2E_element & inSource) {
  mProperty_mParameterName = inSource.mProperty_mParameterName ;
  mProperty_mParameterType = inSource.mProperty_mParameterType ;
  mProperty_mParameter = inSource.mProperty_mParameter ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList_2E_element GGS_astAutoLayoutViewInstructionParameterList_2E_element::init_21__21__21_ (const GGS_lstring & in_mParameterName,
                                                                                                                                     const GGS_autoLayoutClassParameterType & in_mParameterType,
                                                                                                                                     const GGS_astAutoLayoutViewInstructionParameterValue & in_mParameter,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mParameterName = in_mParameterName ;
  result.mProperty_mParameterType = in_mParameterType ;
  result.mProperty_mParameter = in_mParameter ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList_2E_element::GGS_astAutoLayoutViewInstructionParameterList_2E_element (const GGS_lstring & inOperand0,
                                                                                                                    const GGS_autoLayoutClassParameterType & inOperand1,
                                                                                                                    const GGS_astAutoLayoutViewInstructionParameterValue & inOperand2) :
mProperty_mParameterName (inOperand0),
mProperty_mParameterType (inOperand1),
mProperty_mParameter (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutViewInstructionParameterList_2E_element::isValid (void) const {
  return mProperty_mParameterName.isValid () && mProperty_mParameterType.isValid () && mProperty_mParameter.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList_2E_element::drop (void) {
  mProperty_mParameterName.drop () ;
  mProperty_mParameterType.drop () ;
  mProperty_mParameter.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList_2E_element::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astAutoLayoutViewInstructionParameterList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mParameterName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mParameterType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mParameter.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @astAutoLayoutViewInstructionParameterList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterList_2E_element ("astAutoLayoutViewInstructionParameterList.element",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewInstructionParameterList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutViewInstructionParameterList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutViewInstructionParameterList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList_2E_element GGS_astAutoLayoutViewInstructionParameterList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterList_2E_element result ;
  const GGS_astAutoLayoutViewInstructionParameterList_2E_element * p = (const GGS_astAutoLayoutViewInstructionParameterList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutViewInstructionParameterList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewInstructionParameterList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap_2E_element::GGS_autoLayoutViewDeclarationMap_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap_2E_element::GGS_autoLayoutViewDeclarationMap_2E_element (const GGS_autoLayoutViewDeclarationMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap_2E_element & GGS_autoLayoutViewDeclarationMap_2E_element::operator = (const GGS_autoLayoutViewDeclarationMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap_2E_element GGS_autoLayoutViewDeclarationMap_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewDeclarationMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewDeclarationMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap_2E_element::GGS_autoLayoutViewDeclarationMap_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutViewDeclarationMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewDeclarationMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewDeclarationMap_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutViewDeclarationMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewDeclarationMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewDeclarationMap_2E_element ("autoLayoutViewDeclarationMap.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewDeclarationMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewDeclarationMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewDeclarationMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewDeclarationMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap_2E_element GGS_autoLayoutViewDeclarationMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewDeclarationMap_2E_element result ;
  const GGS_autoLayoutViewDeclarationMap_2E_element * p = (const GGS_autoLayoutViewDeclarationMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewDeclarationMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewDeclarationMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @autoLayoutViewDeclarationMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap_2E_element_3F_::GGS_autoLayoutViewDeclarationMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap_2E_element_3F_::GGS_autoLayoutViewDeclarationMap_2E_element_3F_ (const GGS_autoLayoutViewDeclarationMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap_2E_element_3F_ GGS_autoLayoutViewDeclarationMap_2E_element_3F_::init_nil (void) {
  GGS_autoLayoutViewDeclarationMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutViewDeclarationMap_2E_element_3F_::isValid (void) const {
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

bool GGS_autoLayoutViewDeclarationMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewDeclarationMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_autoLayoutViewDeclarationMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewDeclarationMap_2E_element_3F_::description (String & ioString,
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
//     @autoLayoutViewDeclarationMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewDeclarationMap_2E_element_3F_ ("autoLayoutViewDeclarationMap.element?",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewDeclarationMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewDeclarationMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewDeclarationMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewDeclarationMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap_2E_element_3F_ GGS_autoLayoutViewDeclarationMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewDeclarationMap_2E_element_3F_ result ;
  const GGS_autoLayoutViewDeclarationMap_2E_element_3F_ * p = (const GGS_autoLayoutViewDeclarationMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewDeclarationMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewDeclarationMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap_2E_element::GGS_autoLayoutConfiguratorMap_2E_element (void) :
mProperty_lkey (),
mProperty_mAutoLayoutOutletTypeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap_2E_element::GGS_autoLayoutConfiguratorMap_2E_element (const GGS_autoLayoutConfiguratorMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mAutoLayoutOutletTypeName (inSource.mProperty_mAutoLayoutOutletTypeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap_2E_element & GGS_autoLayoutConfiguratorMap_2E_element::operator = (const GGS_autoLayoutConfiguratorMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mAutoLayoutOutletTypeName = inSource.mProperty_mAutoLayoutOutletTypeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap_2E_element GGS_autoLayoutConfiguratorMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                                                 const GGS_string & in_mAutoLayoutOutletTypeName,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutConfiguratorMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mAutoLayoutOutletTypeName = in_mAutoLayoutOutletTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutConfiguratorMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap_2E_element::GGS_autoLayoutConfiguratorMap_2E_element (const GGS_lstring & inOperand0,
                                                                                    const GGS_string & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mAutoLayoutOutletTypeName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutConfiguratorMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAutoLayoutOutletTypeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutConfiguratorMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mAutoLayoutOutletTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutConfiguratorMap_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutConfiguratorMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAutoLayoutOutletTypeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutConfiguratorMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutConfiguratorMap_2E_element ("autoLayoutConfiguratorMap.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutConfiguratorMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutConfiguratorMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutConfiguratorMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutConfiguratorMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap_2E_element GGS_autoLayoutConfiguratorMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_autoLayoutConfiguratorMap_2E_element result ;
  const GGS_autoLayoutConfiguratorMap_2E_element * p = (const GGS_autoLayoutConfiguratorMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutConfiguratorMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutConfiguratorMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @autoLayoutConfiguratorMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap_2E_element_3F_::GGS_autoLayoutConfiguratorMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap_2E_element_3F_::GGS_autoLayoutConfiguratorMap_2E_element_3F_ (const GGS_autoLayoutConfiguratorMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap_2E_element_3F_ GGS_autoLayoutConfiguratorMap_2E_element_3F_::init_nil (void) {
  GGS_autoLayoutConfiguratorMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutConfiguratorMap_2E_element_3F_::isValid (void) const {
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

bool GGS_autoLayoutConfiguratorMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutConfiguratorMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_autoLayoutConfiguratorMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutConfiguratorMap_2E_element_3F_::description (String & ioString,
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
//     @autoLayoutConfiguratorMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutConfiguratorMap_2E_element_3F_ ("autoLayoutConfiguratorMap.element?",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutConfiguratorMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutConfiguratorMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutConfiguratorMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutConfiguratorMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap_2E_element_3F_ GGS_autoLayoutConfiguratorMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutConfiguratorMap_2E_element_3F_ result ;
  const GGS_autoLayoutConfiguratorMap_2E_element_3F_ * p = (const GGS_autoLayoutConfiguratorMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutConfiguratorMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutConfiguratorMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap_2E_element::GGS_autoLayoutOutletMap_2E_element (void) :
mProperty_lkey (),
mProperty_mAutoLayoutOutletTypeName (),
mProperty_mOutletIsArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap_2E_element::GGS_autoLayoutOutletMap_2E_element (const GGS_autoLayoutOutletMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mAutoLayoutOutletTypeName (inSource.mProperty_mAutoLayoutOutletTypeName),
mProperty_mOutletIsArray (inSource.mProperty_mOutletIsArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap_2E_element & GGS_autoLayoutOutletMap_2E_element::operator = (const GGS_autoLayoutOutletMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mAutoLayoutOutletTypeName = inSource.mProperty_mAutoLayoutOutletTypeName ;
  mProperty_mOutletIsArray = inSource.mProperty_mOutletIsArray ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutOutletMap_2E_element GGS_autoLayoutOutletMap_2E_element::init_21__21__21_ (const GGS_lstring & in_lkey,
                                                                                         const GGS_string & in_mAutoLayoutOutletTypeName,
                                                                                         const GGS_bool & in_mOutletIsArray,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutOutletMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mAutoLayoutOutletTypeName = in_mAutoLayoutOutletTypeName ;
  result.mProperty_mOutletIsArray = in_mOutletIsArray ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap_2E_element::GGS_autoLayoutOutletMap_2E_element (const GGS_lstring & inOperand0,
                                                                        const GGS_string & inOperand1,
                                                                        const GGS_bool & inOperand2) :
mProperty_lkey (inOperand0),
mProperty_mAutoLayoutOutletTypeName (inOperand1),
mProperty_mOutletIsArray (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutOutletMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAutoLayoutOutletTypeName.isValid () && mProperty_mOutletIsArray.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mAutoLayoutOutletTypeName.drop () ;
  mProperty_mOutletIsArray.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletMap_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutOutletMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAutoLayoutOutletTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOutletIsArray.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutOutletMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutOutletMap_2E_element ("autoLayoutOutletMap.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutOutletMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutOutletMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutOutletMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutOutletMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap_2E_element GGS_autoLayoutOutletMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_autoLayoutOutletMap_2E_element result ;
  const GGS_autoLayoutOutletMap_2E_element * p = (const GGS_autoLayoutOutletMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutOutletMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutOutletMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @autoLayoutOutletMap_2E_element_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutOutletMap_2E_element_3F_ ("autoLayoutOutletMap.element?",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutOutletMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bindingOptionList_2E_element ("bindingOptionList.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bindingOptionList_2E_element::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tableValueBinding_2E_tableValueBinding ("tableValueBinding.tableValueBinding",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_tableValueBinding_2E_tableValueBinding::staticTypeDescriptor (void) const {
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
//Optional @tableValueBinding_2E_tableValueBinding_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tableValueBinding_2E_tableValueBinding_3F_ ("tableValueBinding.tableValueBinding?",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_tableValueBinding_2E_tableValueBinding_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphicController_2E_defined ("graphicController.defined",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_graphicController_2E_defined::staticTypeDescriptor (void) const {
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
//Optional @graphicController_2E_defined_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_graphicController_2E_defined_3F_ ("graphicController.defined?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_graphicController_2E_defined_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletDeclarationList_2E_element ("outletDeclarationList.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletDeclarationList_2E_element::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedOutletMap_2E_element ("decoratedOutletMap.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedOutletMap_2E_element::staticTypeDescriptor (void) const {
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
//Optional @decoratedOutletMap_2E_element_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedOutletMap_2E_element_3F_ ("decoratedOutletMap.element?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedOutletMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

GGS_transientPropertyGenerationList_2E_element::GGS_transientPropertyGenerationList_2E_element (void) :
mProperty_mProperty () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList_2E_element::GGS_transientPropertyGenerationList_2E_element (const GGS_transientPropertyGenerationList_2E_element & inSource) :
mProperty_mProperty (inSource.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList_2E_element & GGS_transientPropertyGenerationList_2E_element::operator = (const GGS_transientPropertyGenerationList_2E_element & inSource) {
  mProperty_mProperty = inSource.mProperty_mProperty ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_transientPropertyGenerationList_2E_element GGS_transientPropertyGenerationList_2E_element::init_21_ (const GGS_transientPropertyGeneration & in_mProperty,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_transientPropertyGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProperty = in_mProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList_2E_element::GGS_transientPropertyGenerationList_2E_element (const GGS_transientPropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_transientPropertyGenerationList_2E_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList_2E_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList_2E_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @transientPropertyGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @transientPropertyGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientPropertyGenerationList_2E_element ("transientPropertyGenerationList.element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_transientPropertyGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientPropertyGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientPropertyGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList_2E_element GGS_transientPropertyGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_transientPropertyGenerationList_2E_element result ;
  const GGS_transientPropertyGenerationList_2E_element * p = (const GGS_transientPropertyGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientPropertyGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList_2E_element::GGS_externSwiftFunctionList_2E_element (void) :
mProperty_mExternSwiftFunctionName (),
mProperty_mCallerName () {
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList_2E_element::GGS_externSwiftFunctionList_2E_element (const GGS_externSwiftFunctionList_2E_element & inSource) :
mProperty_mExternSwiftFunctionName (inSource.mProperty_mExternSwiftFunctionName),
mProperty_mCallerName (inSource.mProperty_mCallerName) {
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList_2E_element & GGS_externSwiftFunctionList_2E_element::operator = (const GGS_externSwiftFunctionList_2E_element & inSource) {
  mProperty_mExternSwiftFunctionName = inSource.mProperty_mExternSwiftFunctionName ;
  mProperty_mCallerName = inSource.mProperty_mCallerName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_externSwiftFunctionList_2E_element GGS_externSwiftFunctionList_2E_element::init_21__21_ (const GGS_lstring & in_mExternSwiftFunctionName,
                                                                                             const GGS_lstring & in_mCallerName,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externSwiftFunctionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mExternSwiftFunctionName = in_mExternSwiftFunctionName ;
  result.mProperty_mCallerName = in_mCallerName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList_2E_element::GGS_externSwiftFunctionList_2E_element (const GGS_lstring & inOperand0,
                                                                                const GGS_lstring & inOperand1) :
mProperty_mExternSwiftFunctionName (inOperand0),
mProperty_mCallerName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_externSwiftFunctionList_2E_element::isValid (void) const {
  return mProperty_mExternSwiftFunctionName.isValid () && mProperty_mCallerName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList_2E_element::drop (void) {
  mProperty_mExternSwiftFunctionName.drop () ;
  mProperty_mCallerName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @externSwiftFunctionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mExternSwiftFunctionName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mCallerName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @externSwiftFunctionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externSwiftFunctionList_2E_element ("externSwiftFunctionList.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externSwiftFunctionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externSwiftFunctionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externSwiftFunctionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externSwiftFunctionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList_2E_element GGS_externSwiftFunctionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_externSwiftFunctionList_2E_element result ;
  const GGS_externSwiftFunctionList_2E_element * p = (const GGS_externSwiftFunctionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externSwiftFunctionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externSwiftFunctionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element::GGS_externFunctionMap_2E_element (void) :
mProperty_lkey () {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element::GGS_externFunctionMap_2E_element (const GGS_externFunctionMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey) {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element & GGS_externFunctionMap_2E_element::operator = (const GGS_externFunctionMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_externFunctionMap_2E_element GGS_externFunctionMap_2E_element::init_21_ (const GGS_lstring & in_lkey,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externFunctionMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element::GGS_externFunctionMap_2E_element (const GGS_lstring & inOperand0) :
mProperty_lkey (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_externFunctionMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap_2E_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @externFunctionMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @externFunctionMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externFunctionMap_2E_element ("externFunctionMap.element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externFunctionMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externFunctionMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externFunctionMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element GGS_externFunctionMap_2E_element::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_externFunctionMap_2E_element result ;
  const GGS_externFunctionMap_2E_element * p = (const GGS_externFunctionMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externFunctionMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @externFunctionMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element_3F_::GGS_externFunctionMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element_3F_::GGS_externFunctionMap_2E_element_3F_ (const GGS_externFunctionMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element_3F_ GGS_externFunctionMap_2E_element_3F_::init_nil (void) {
  GGS_externFunctionMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_externFunctionMap_2E_element_3F_::isValid (void) const {
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

bool GGS_externFunctionMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_externFunctionMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap_2E_element_3F_::description (String & ioString,
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
//     @externFunctionMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externFunctionMap_2E_element_3F_ ("externFunctionMap.element?",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externFunctionMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externFunctionMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externFunctionMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element_3F_ GGS_externFunctionMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_externFunctionMap_2E_element_3F_ result ;
  const GGS_externFunctionMap_2E_element_3F_ * p = (const GGS_externFunctionMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externFunctionMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST_2E_element::GGS_enumerationFunctionListAST_2E_element (void) :
mProperty_mEnumName (),
mProperty_mFunctionName (),
mProperty_mAssociationList () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST_2E_element::GGS_enumerationFunctionListAST_2E_element (const GGS_enumerationFunctionListAST_2E_element & inSource) :
mProperty_mEnumName (inSource.mProperty_mEnumName),
mProperty_mFunctionName (inSource.mProperty_mFunctionName),
mProperty_mAssociationList (inSource.mProperty_mAssociationList) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST_2E_element & GGS_enumerationFunctionListAST_2E_element::operator = (const GGS_enumerationFunctionListAST_2E_element & inSource) {
  mProperty_mEnumName = inSource.mProperty_mEnumName ;
  mProperty_mFunctionName = inSource.mProperty_mFunctionName ;
  mProperty_mAssociationList = inSource.mProperty_mAssociationList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_enumerationFunctionListAST_2E_element GGS_enumerationFunctionListAST_2E_element::init_21__21__21_ (const GGS_lstring & in_mEnumName,
                                                                                                       const GGS_lstring & in_mFunctionName,
                                                                                                       const GGS__32_lstringlist & in_mAssociationList,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumerationFunctionListAST_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEnumName = in_mEnumName ;
  result.mProperty_mFunctionName = in_mFunctionName ;
  result.mProperty_mAssociationList = in_mAssociationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST_2E_element::GGS_enumerationFunctionListAST_2E_element (const GGS_lstring & inOperand0,
                                                                                      const GGS_lstring & inOperand1,
                                                                                      const GGS__32_lstringlist & inOperand2) :
mProperty_mEnumName (inOperand0),
mProperty_mFunctionName (inOperand1),
mProperty_mAssociationList (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumerationFunctionListAST_2E_element::isValid (void) const {
  return mProperty_mEnumName.isValid () && mProperty_mFunctionName.isValid () && mProperty_mAssociationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST_2E_element::drop (void) {
  mProperty_mEnumName.drop () ;
  mProperty_mFunctionName.drop () ;
  mProperty_mAssociationList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST_2E_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumerationFunctionListAST.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mEnumName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFunctionName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAssociationList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @enumerationFunctionListAST.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationFunctionListAST_2E_element ("enumerationFunctionListAST.element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumerationFunctionListAST_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationFunctionListAST_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumerationFunctionListAST_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumerationFunctionListAST_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST_2E_element GGS_enumerationFunctionListAST_2E_element::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_enumerationFunctionListAST_2E_element result ;
  const GGS_enumerationFunctionListAST_2E_element * p = (const GGS_enumerationFunctionListAST_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumerationFunctionListAST_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationFunctionListAST.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element::GGS_enumConstantMap_2E_element (void) :
mProperty_lkey (),
mProperty_mIndex () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element::GGS_enumConstantMap_2E_element (const GGS_enumConstantMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mIndex (inSource.mProperty_mIndex) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element & GGS_enumConstantMap_2E_element::operator = (const GGS_enumConstantMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mIndex = inSource.mProperty_mIndex ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_enumConstantMap_2E_element GGS_enumConstantMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                             const GGS_uint & in_mIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumConstantMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mIndex = in_mIndex ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element::GGS_enumConstantMap_2E_element (const GGS_lstring & inOperand0,
                                                                const GGS_uint & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mIndex (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumConstantMap_2E_element::objectCompare (const GGS_enumConstantMap_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumConstantMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mIndex.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mIndex.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumConstantMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIndex.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @enumConstantMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumConstantMap_2E_element ("enumConstantMap.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumConstantMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumConstantMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumConstantMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element GGS_enumConstantMap_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_enumConstantMap_2E_element result ;
  const GGS_enumConstantMap_2E_element * p = (const GGS_enumConstantMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumConstantMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @enumConstantMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element_3F_::GGS_enumConstantMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element_3F_::GGS_enumConstantMap_2E_element_3F_ (const GGS_enumConstantMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element_3F_ GGS_enumConstantMap_2E_element_3F_::init_nil (void) {
  GGS_enumConstantMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumConstantMap_2E_element_3F_::isValid (void) const {
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

bool GGS_enumConstantMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_enumConstantMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumConstantMap_2E_element_3F_::objectCompare (const GGS_enumConstantMap_2E_element_3F_ & inOperand) const {
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

void GGS_enumConstantMap_2E_element_3F_::description (String & ioString,
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
//     @enumConstantMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumConstantMap_2E_element_3F_ ("enumConstantMap.element?",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumConstantMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumConstantMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumConstantMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element_3F_ GGS_enumConstantMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_enumConstantMap_2E_element_3F_ result ;
  const GGS_enumConstantMap_2E_element_3F_ * p = (const GGS_enumConstantMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumConstantMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap_2E_element::GGS_enumFuncMap_2E_element (void) :
mProperty_lkey (),
mProperty_mAssociationSortedList () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap_2E_element::GGS_enumFuncMap_2E_element (const GGS_enumFuncMap_2E_element & inSource) :
mProperty_lkey (inSource.mProperty_lkey),
mProperty_mAssociationSortedList (inSource.mProperty_mAssociationSortedList) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap_2E_element & GGS_enumFuncMap_2E_element::operator = (const GGS_enumFuncMap_2E_element & inSource) {
  mProperty_lkey = inSource.mProperty_lkey ;
  mProperty_mAssociationSortedList = inSource.mProperty_mAssociationSortedList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_enumFuncMap_2E_element GGS_enumFuncMap_2E_element::init_21__21_ (const GGS_lstring & in_lkey,
                                                                     const GGS_enumFunAssociationSortedList & in_mAssociationSortedList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumFuncMap_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_lkey = in_lkey ;
  result.mProperty_mAssociationSortedList = in_mAssociationSortedList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFuncMap_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap_2E_element::GGS_enumFuncMap_2E_element (const GGS_lstring & inOperand0,
                                                        const GGS_enumFunAssociationSortedList & inOperand1) :
mProperty_lkey (inOperand0),
mProperty_mAssociationSortedList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumFuncMap_2E_element::objectCompare (const GGS_enumFuncMap_2E_element & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_lkey.objectCompare (inOperand.mProperty_lkey) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_mAssociationSortedList.objectCompare (inOperand.mProperty_mAssociationSortedList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumFuncMap_2E_element::isValid (void) const {
  return mProperty_lkey.isValid () && mProperty_mAssociationSortedList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFuncMap_2E_element::drop (void) {
  mProperty_lkey.drop () ;
  mProperty_mAssociationSortedList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFuncMap_2E_element::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumFuncMap.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_lkey.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAssociationSortedList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @enumFuncMap.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumFuncMap_2E_element ("enumFuncMap.element",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumFuncMap_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumFuncMap_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumFuncMap_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumFuncMap_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap_2E_element GGS_enumFuncMap_2E_element::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_enumFuncMap_2E_element result ;
  const GGS_enumFuncMap_2E_element * p = (const GGS_enumFuncMap_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumFuncMap_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumFuncMap.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @enumFuncMap_2E_element_3F_
//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap_2E_element_3F_::GGS_enumFuncMap_2E_element_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap_2E_element_3F_::GGS_enumFuncMap_2E_element_3F_ (const GGS_enumFuncMap_2E_element & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap_2E_element_3F_ GGS_enumFuncMap_2E_element_3F_::init_nil (void) {
  GGS_enumFuncMap_2E_element_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumFuncMap_2E_element_3F_::isValid (void) const {
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

bool GGS_enumFuncMap_2E_element_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFuncMap_2E_element_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_enumFuncMap_2E_element () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumFuncMap_2E_element_3F_::objectCompare (const GGS_enumFuncMap_2E_element_3F_ & inOperand) const {
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

void GGS_enumFuncMap_2E_element_3F_::description (String & ioString,
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
//     @enumFuncMap.element? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumFuncMap_2E_element_3F_ ("enumFuncMap.element?",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumFuncMap_2E_element_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumFuncMap_2E_element_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumFuncMap_2E_element_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumFuncMap_2E_element_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap_2E_element_3F_ GGS_enumFuncMap_2E_element_3F_::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_enumFuncMap_2E_element_3F_ result ;
  const GGS_enumFuncMap_2E_element_3F_ * p = (const GGS_enumFuncMap_2E_element_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumFuncMap_2E_element_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumFuncMap.element?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList_2E_element::GGS_toManyProxyGenerationList_2E_element (void) :
mProperty_mProperty () {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList_2E_element::GGS_toManyProxyGenerationList_2E_element (const GGS_toManyProxyGenerationList_2E_element & inSource) :
mProperty_mProperty (inSource.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList_2E_element & GGS_toManyProxyGenerationList_2E_element::operator = (const GGS_toManyProxyGenerationList_2E_element & inSource) {
  mProperty_mProperty = inSource.mProperty_mProperty ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_toManyProxyGenerationList_2E_element GGS_toManyProxyGenerationList_2E_element::init_21_ (const GGS_toManyProxyGeneration & in_mProperty,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyProxyGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProperty = in_mProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList_2E_element::GGS_toManyProxyGenerationList_2E_element (const GGS_toManyProxyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_toManyProxyGenerationList_2E_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList_2E_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @toManyProxyGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @toManyProxyGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyProxyGenerationList_2E_element ("toManyProxyGenerationList.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyProxyGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyProxyGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyProxyGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyProxyGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList_2E_element GGS_toManyProxyGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_toManyProxyGenerationList_2E_element result ;
  const GGS_toManyProxyGenerationList_2E_element * p = (const GGS_toManyProxyGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyProxyGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyProxyGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList_2E_element::GGS_atomicProxyGenerationList_2E_element (void) :
mProperty_mProperty () {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList_2E_element::GGS_atomicProxyGenerationList_2E_element (const GGS_atomicProxyGenerationList_2E_element & inSource) :
mProperty_mProperty (inSource.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList_2E_element & GGS_atomicProxyGenerationList_2E_element::operator = (const GGS_atomicProxyGenerationList_2E_element & inSource) {
  mProperty_mProperty = inSource.mProperty_mProperty ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_atomicProxyGenerationList_2E_element GGS_atomicProxyGenerationList_2E_element::init_21_ (const GGS_atomicProxyGeneration & in_mProperty,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_atomicProxyGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProperty = in_mProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList_2E_element::GGS_atomicProxyGenerationList_2E_element (const GGS_atomicProxyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_atomicProxyGenerationList_2E_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList_2E_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @atomicProxyGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @atomicProxyGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicProxyGenerationList_2E_element ("atomicProxyGenerationList.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_atomicProxyGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicProxyGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_atomicProxyGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_atomicProxyGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList_2E_element GGS_atomicProxyGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_atomicProxyGenerationList_2E_element result ;
  const GGS_atomicProxyGenerationList_2E_element * p = (const GGS_atomicProxyGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_atomicProxyGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicProxyGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedPropertyGenerationList_2E_element ("computedPropertyGenerationList.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computedPropertyGenerationList_2E_element::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind_2E_document ("classKind.document",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classKind_2E_document::staticTypeDescriptor (void) const {
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
//Optional @classKind_2E_document_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind_2E_document_3F_ ("classKind.document?",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classKind_2E_document_3F_::staticTypeDescriptor (void) const {
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

GGS_propertyGenerationList_2E_element::GGS_propertyGenerationList_2E_element (void) :
mProperty_mProperty () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList_2E_element::GGS_propertyGenerationList_2E_element (const GGS_propertyGenerationList_2E_element & inSource) :
mProperty_mProperty (inSource.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList_2E_element & GGS_propertyGenerationList_2E_element::operator = (const GGS_propertyGenerationList_2E_element & inSource) {
  mProperty_mProperty = inSource.mProperty_mProperty ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyGenerationList_2E_element GGS_propertyGenerationList_2E_element::init_21_ (const GGS_propertyGeneration & in_mProperty,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProperty = in_mProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList_2E_element::GGS_propertyGenerationList_2E_element (const GGS_propertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyGenerationList_2E_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList_2E_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGenerationList_2E_element ("propertyGenerationList.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList_2E_element GGS_propertyGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_propertyGenerationList_2E_element result ;
  const GGS_propertyGenerationList_2E_element * p = (const GGS_propertyGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classMap_2E_element ("classMap.element",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classMap_2E_element::staticTypeDescriptor (void) const {
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
//Optional @classMap_2E_element_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classMap_2E_element_3F_ ("classMap.element?",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_toMany ("propertyKind.toMany",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKind_2E_toMany::staticTypeDescriptor (void) const {
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
//Optional @propertyKind_2E_toMany_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_toMany_3F_ ("propertyKind.toMany?",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKind_2E_toMany_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_toOne ("propertyKind.toOne",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKind_2E_toOne::staticTypeDescriptor (void) const {
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
//Optional @propertyKind_2E_toOne_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_toOne_3F_ ("propertyKind.toOne?",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKind_2E_toOne_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_arrayController ("propertyKind.arrayController",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKind_2E_arrayController::staticTypeDescriptor (void) const {
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
//Optional @propertyKind_2E_arrayController_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_arrayController_3F_ ("propertyKind.arrayController?",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKind_2E_arrayController_3F_::staticTypeDescriptor (void) const {
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
//Optional @propertyMap_2E_element_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyMap_2E_element_3F_ ("propertyMap.element?",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_runActionDescriptor_2E_action ("runActionDescriptor.action",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_runActionDescriptor_2E_action::staticTypeDescriptor (void) const {
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
//Optional @runActionDescriptor_2E_action_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_runActionDescriptor_2E_action_3F_ ("runActionDescriptor.action?",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_runActionDescriptor_2E_action_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actionMap_2E_element ("actionMap.element",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actionMap_2E_element::staticTypeDescriptor (void) const {
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
//Optional @actionMap_2E_element_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actionMap_2E_element_3F_ ("actionMap.element?",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actionMap_2E_element_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship_2E_oppositeIsToOne ("toOneOppositeRelationship.oppositeIsToOne",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toOneOppositeRelationship_2E_oppositeIsToOne::staticTypeDescriptor (void) const {
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
//Optional @toOneOppositeRelationship_2E_oppositeIsToOne_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_ ("toOneOppositeRelationship.oppositeIsToOne?",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toOneOppositeRelationship_2E_oppositeIsToOne_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship_2E_oppositeIsToMany ("toOneOppositeRelationship.oppositeIsToMany",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toOneOppositeRelationship_2E_oppositeIsToMany::staticTypeDescriptor (void) const {
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
//Optional @toOneOppositeRelationship_2E_oppositeIsToMany_3F_
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_ ("toOneOppositeRelationship.oppositeIsToMany?",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toOneOppositeRelationship_2E_oppositeIsToMany_3F_::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOnePropertyGenerationList_2E_element ("toOnePropertyGenerationList.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toOnePropertyGenerationList_2E_element::staticTypeDescriptor (void) const {
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
// @autoLayoutTableViewControllerDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutTableViewControllerDeclarationAST::objectCompare (const GGS_autoLayoutTableViewControllerDeclarationAST & inOperand) const {
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

GGS_autoLayoutTableViewControllerDeclarationAST::GGS_autoLayoutTableViewControllerDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutTableViewControllerDeclarationAST GGS_autoLayoutTableViewControllerDeclarationAST::
init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                  const GGS_lstring & in_mControllerName,
                                  const GGS_bool & in_mIsRoot,
                                  const GGS_lstring & in_mRootEntityName,
                                  const GGS_lstring & in_mToManyPropertyName,
                                  const GGS_autoLayoutTableViewControllerBoundColumnListAST & in_mTableViewControllerBoundColumnListAST,
                                  const GGS_autoLayoutTableViewControllerAttributListAST & in_mTableViewControllerAttributListAST,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutTableViewControllerDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutTableViewControllerDeclarationAST (inCompiler COMMA_THERE)) ;
  object->autoLayoutTableViewControllerDeclarationAST_init_21__21__21__21__21__21__21_ (in_mClassName, in_mControllerName, in_mIsRoot, in_mRootEntityName, in_mToManyPropertyName, in_mTableViewControllerBoundColumnListAST, in_mTableViewControllerAttributListAST, inCompiler) ;
  const GGS_autoLayoutTableViewControllerDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerDeclarationAST::
autoLayoutTableViewControllerDeclarationAST_init_21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                                              const GGS_lstring & in_mControllerName,
                                                                              const GGS_bool & in_mIsRoot,
                                                                              const GGS_lstring & in_mRootEntityName,
                                                                              const GGS_lstring & in_mToManyPropertyName,
                                                                              const GGS_autoLayoutTableViewControllerBoundColumnListAST & in_mTableViewControllerBoundColumnListAST,
                                                                              const GGS_autoLayoutTableViewControllerAttributListAST & in_mTableViewControllerAttributListAST,
                                                                              Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mControllerName = in_mControllerName ;
  mProperty_mIsRoot = in_mIsRoot ;
  mProperty_mRootEntityName = in_mRootEntityName ;
  mProperty_mToManyPropertyName = in_mToManyPropertyName ;
  mProperty_mTableViewControllerBoundColumnListAST = in_mTableViewControllerBoundColumnListAST ;
  mProperty_mTableViewControllerAttributListAST = in_mTableViewControllerAttributListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerDeclarationAST::GGS_autoLayoutTableViewControllerDeclarationAST (const cPtr_autoLayoutTableViewControllerDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutTableViewControllerDeclarationAST::readProperty_mControllerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutTableViewControllerDeclarationAST::readProperty_mIsRoot (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mIsRoot ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutTableViewControllerDeclarationAST::readProperty_mRootEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mRootEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutTableViewControllerDeclarationAST::readProperty_mToManyPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mToManyPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerDeclarationAST::readProperty_mTableViewControllerBoundColumnListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutTableViewControllerBoundColumnListAST () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mTableViewControllerBoundColumnListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerDeclarationAST::readProperty_mTableViewControllerAttributListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutTableViewControllerAttributListAST () ;
  }else{
    cPtr_autoLayoutTableViewControllerDeclarationAST * p = (cPtr_autoLayoutTableViewControllerDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerDeclarationAST) ;
    return p->mProperty_mTableViewControllerAttributListAST ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutTableViewControllerDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutTableViewControllerDeclarationAST::cPtr_autoLayoutTableViewControllerDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mControllerName (),
mProperty_mIsRoot (),
mProperty_mRootEntityName (),
mProperty_mToManyPropertyName (),
mProperty_mTableViewControllerBoundColumnListAST (),
mProperty_mTableViewControllerAttributListAST () {
}

//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutTableViewControllerDeclarationAST::cPtr_autoLayoutTableViewControllerDeclarationAST (const GGS_lstring & in_mClassName,
                                                                                                    const GGS_lstring & in_mControllerName,
                                                                                                    const GGS_bool & in_mIsRoot,
                                                                                                    const GGS_lstring & in_mRootEntityName,
                                                                                                    const GGS_lstring & in_mToManyPropertyName,
                                                                                                    const GGS_autoLayoutTableViewControllerBoundColumnListAST & in_mTableViewControllerBoundColumnListAST,
                                                                                                    const GGS_autoLayoutTableViewControllerAttributListAST & in_mTableViewControllerAttributListAST,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mControllerName (),
mProperty_mIsRoot (),
mProperty_mRootEntityName (),
mProperty_mToManyPropertyName (),
mProperty_mTableViewControllerBoundColumnListAST (),
mProperty_mTableViewControllerAttributListAST () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mControllerName = in_mControllerName ;
  mProperty_mIsRoot = in_mIsRoot ;
  mProperty_mRootEntityName = in_mRootEntityName ;
  mProperty_mToManyPropertyName = in_mToManyPropertyName ;
  mProperty_mTableViewControllerBoundColumnListAST = in_mTableViewControllerBoundColumnListAST ;
  mProperty_mTableViewControllerAttributListAST = in_mTableViewControllerAttributListAST ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_autoLayoutTableViewControllerDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST ;
}

void cPtr_autoLayoutTableViewControllerDeclarationAST::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("[@autoLayoutTableViewControllerDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mControllerName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsRoot.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mToManyPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTableViewControllerBoundColumnListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mTableViewControllerAttributListAST.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_autoLayoutTableViewControllerDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutTableViewControllerDeclarationAST (mProperty_mClassName, mProperty_mControllerName, mProperty_mIsRoot, mProperty_mRootEntityName, mProperty_mToManyPropertyName, mProperty_mTableViewControllerBoundColumnListAST, mProperty_mTableViewControllerAttributListAST, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutTableViewControllerDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mControllerName.printNonNullClassInstanceProperties ("mControllerName") ;
    mProperty_mIsRoot.printNonNullClassInstanceProperties ("mIsRoot") ;
    mProperty_mRootEntityName.printNonNullClassInstanceProperties ("mRootEntityName") ;
    mProperty_mToManyPropertyName.printNonNullClassInstanceProperties ("mToManyPropertyName") ;
    mProperty_mTableViewControllerBoundColumnListAST.printNonNullClassInstanceProperties ("mTableViewControllerBoundColumnListAST") ;
    mProperty_mTableViewControllerAttributListAST.printNonNullClassInstanceProperties ("mTableViewControllerAttributListAST") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @autoLayoutTableViewControllerDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST ("autoLayoutTableViewControllerDeclarationAST",
                                                                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutTableViewControllerDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutTableViewControllerDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutTableViewControllerDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerDeclarationAST GGS_autoLayoutTableViewControllerDeclarationAST::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerDeclarationAST result ;
  const GGS_autoLayoutTableViewControllerDeclarationAST * p = (const GGS_autoLayoutTableViewControllerDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutTableViewControllerDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutTableViewControllerPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutTableViewControllerPropertyGeneration::objectCompare (const GGS_autoLayoutTableViewControllerPropertyGeneration & inOperand) const {
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

GGS_autoLayoutTableViewControllerPropertyGeneration::GGS_autoLayoutTableViewControllerPropertyGeneration (void) :
GGS_propertyGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutTableViewControllerPropertyGeneration GGS_autoLayoutTableViewControllerPropertyGeneration::
init_21__21__21_ (const GGS_string & in_mPropertyName,
                  const GGS_string & in_mModelString,
                  const GGS_string & in_mOwnerName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutTableViewControllerPropertyGeneration * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutTableViewControllerPropertyGeneration (inCompiler COMMA_THERE)) ;
  object->autoLayoutTableViewControllerPropertyGeneration_init_21__21__21_ (in_mPropertyName, in_mModelString, in_mOwnerName, inCompiler) ;
  const GGS_autoLayoutTableViewControllerPropertyGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerPropertyGeneration::
autoLayoutTableViewControllerPropertyGeneration_init_21__21__21_ (const GGS_string & in_mPropertyName,
                                                                  const GGS_string & in_mModelString,
                                                                  const GGS_string & in_mOwnerName,
                                                                  Compiler * /* inCompiler */) {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mModelString = in_mModelString ;
  mProperty_mOwnerName = in_mOwnerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerPropertyGeneration::GGS_autoLayoutTableViewControllerPropertyGeneration (const cPtr_autoLayoutTableViewControllerPropertyGeneration * inSourcePtr) :
GGS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutTableViewControllerPropertyGeneration::readProperty_mModelString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerPropertyGeneration * p = (cPtr_autoLayoutTableViewControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
    return p->mProperty_mModelString ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutTableViewControllerPropertyGeneration::readProperty_mOwnerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutTableViewControllerPropertyGeneration * p = (cPtr_autoLayoutTableViewControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutTableViewControllerPropertyGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutTableViewControllerPropertyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutTableViewControllerPropertyGeneration::cPtr_autoLayoutTableViewControllerPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (inCompiler COMMA_THERE),
mProperty_mModelString (),
mProperty_mOwnerName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutTableViewControllerPropertyGeneration::cPtr_autoLayoutTableViewControllerPropertyGeneration (const GGS_string & in_mPropertyName,
                                                                                                            const GGS_string & in_mModelString,
                                                                                                            const GGS_string & in_mOwnerName,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName, inCompiler COMMA_THERE),
mProperty_mModelString (),
mProperty_mOwnerName () {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mModelString = in_mModelString ;
  mProperty_mOwnerName = in_mOwnerName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_autoLayoutTableViewControllerPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration ;
}

void cPtr_autoLayoutTableViewControllerPropertyGeneration::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@autoLayoutTableViewControllerPropertyGeneration:") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mModelString.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_autoLayoutTableViewControllerPropertyGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutTableViewControllerPropertyGeneration (mProperty_mPropertyName, mProperty_mModelString, mProperty_mOwnerName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutTableViewControllerPropertyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mModelString.printNonNullClassInstanceProperties ("mModelString") ;
    mProperty_mOwnerName.printNonNullClassInstanceProperties ("mOwnerName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @autoLayoutTableViewControllerPropertyGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration ("autoLayoutTableViewControllerPropertyGeneration",
                                                                                                    & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutTableViewControllerPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerPropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutTableViewControllerPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutTableViewControllerPropertyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerPropertyGeneration GGS_autoLayoutTableViewControllerPropertyGeneration::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerPropertyGeneration result ;
  const GGS_autoLayoutTableViewControllerPropertyGeneration * p = (const GGS_autoLayoutTableViewControllerPropertyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutTableViewControllerPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
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
  extensionSetter_getReferenceKey (ioObject, outArgument_outFileRef, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 6)) ;
  }
  {
  ioObject.mProperty_mICNS_5F_fileList.setter_append (outArgument_outFileRef, constinArgument_inFileName, inCompiler COMMA_SOURCE_FILE ("XcodeProjectGeneration.galgas4", 7)) ;
  }
}


//--------------------------------------------------------------------------------------------------
// @boolAsDefaultValue reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolAsDefaultValue::objectCompare (const GGS_boolAsDefaultValue & inOperand) const {
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

GGS_boolAsDefaultValue::GGS_boolAsDefaultValue (void) :
GGS_abstractDefaultValue () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_boolAsDefaultValue GGS_boolAsDefaultValue::
init_21_ (const GGS_lbool & in_mValue,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_boolAsDefaultValue * object = nullptr ;
  macroMyNew (object, cPtr_boolAsDefaultValue (inCompiler COMMA_THERE)) ;
  object->boolAsDefaultValue_init_21_ (in_mValue, inCompiler) ;
  const GGS_boolAsDefaultValue result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_boolAsDefaultValue::
boolAsDefaultValue_init_21_ (const GGS_lbool & in_mValue,
                             Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolAsDefaultValue::GGS_boolAsDefaultValue (const cPtr_boolAsDefaultValue * inSourcePtr) :
GGS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolAsDefaultValue) ;
}
//--------------------------------------------------------------------------------------------------

GGS_lbool GGS_boolAsDefaultValue::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lbool () ;
  }else{
    cPtr_boolAsDefaultValue * p = (cPtr_boolAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolAsDefaultValue) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_boolAsDefaultValue::setProperty_mValue (const GGS_lbool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_boolAsDefaultValue * p = (cPtr_boolAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolAsDefaultValue) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @boolAsDefaultValue class
//--------------------------------------------------------------------------------------------------

cPtr_boolAsDefaultValue::cPtr_boolAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mValue () {
}

//--------------------------------------------------------------------------------------------------

cPtr_boolAsDefaultValue::cPtr_boolAsDefaultValue (const GGS_lbool & in_mValue,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mValue () {
  mProperty_mValue = in_mValue ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_boolAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAsDefaultValue ;
}

void cPtr_boolAsDefaultValue::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@boolAsDefaultValue:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_boolAsDefaultValue::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_boolAsDefaultValue (mProperty_mValue, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_boolAsDefaultValue::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDefaultValue::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @boolAsDefaultValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolAsDefaultValue ("boolAsDefaultValue",
                                                                       & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_boolAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAsDefaultValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolAsDefaultValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolAsDefaultValue GGS_boolAsDefaultValue::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_boolAsDefaultValue result ;
  const GGS_boolAsDefaultValue * p = (const GGS_boolAsDefaultValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

const GALGAS_TypeDescriptor * cPtr_doubleAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doubleAsDefaultValue ;
}

void cPtr_doubleAsDefaultValue::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@doubleAsDefaultValue:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_doubleAsDefaultValue::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_doubleAsDefaultValue ("doubleAsDefaultValue",
                                                                         & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_doubleAsDefaultValue::staticTypeDescriptor (void) const {
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
// @integerAsDefaultValue reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_integerAsDefaultValue::objectCompare (const GGS_integerAsDefaultValue & inOperand) const {
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

GGS_integerAsDefaultValue::GGS_integerAsDefaultValue (void) :
GGS_abstractDefaultValue () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_integerAsDefaultValue GGS_integerAsDefaultValue::
init_21__21_ (const GGS_luint & in_mValue,
              const GGS_bool & in_mNegative,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_integerAsDefaultValue * object = nullptr ;
  macroMyNew (object, cPtr_integerAsDefaultValue (inCompiler COMMA_THERE)) ;
  object->integerAsDefaultValue_init_21__21_ (in_mValue, in_mNegative, inCompiler) ;
  const GGS_integerAsDefaultValue result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_integerAsDefaultValue::
integerAsDefaultValue_init_21__21_ (const GGS_luint & in_mValue,
                                    const GGS_bool & in_mNegative,
                                    Compiler * /* inCompiler */) {
  mProperty_mValue = in_mValue ;
  mProperty_mNegative = in_mNegative ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerAsDefaultValue::GGS_integerAsDefaultValue (const cPtr_integerAsDefaultValue * inSourcePtr) :
GGS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_integerAsDefaultValue) ;
}
//--------------------------------------------------------------------------------------------------

GGS_luint GGS_integerAsDefaultValue::readProperty_mValue (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_luint () ;
  }else{
    cPtr_integerAsDefaultValue * p = (cPtr_integerAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
    return p->mProperty_mValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerAsDefaultValue::setProperty_mValue (const GGS_luint & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_integerAsDefaultValue * p = (cPtr_integerAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
    p->mProperty_mValue = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_integerAsDefaultValue::readProperty_mNegative (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_integerAsDefaultValue * p = (cPtr_integerAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
    return p->mProperty_mNegative ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_integerAsDefaultValue::setProperty_mNegative (const GGS_bool & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_integerAsDefaultValue * p = (cPtr_integerAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_integerAsDefaultValue) ;
    p->mProperty_mNegative = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @integerAsDefaultValue class
//--------------------------------------------------------------------------------------------------

cPtr_integerAsDefaultValue::cPtr_integerAsDefaultValue (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mValue (),
mProperty_mNegative () {
}

//--------------------------------------------------------------------------------------------------

cPtr_integerAsDefaultValue::cPtr_integerAsDefaultValue (const GGS_luint & in_mValue,
                                                        const GGS_bool & in_mNegative,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (inCompiler COMMA_THERE),
mProperty_mValue (),
mProperty_mNegative () {
  mProperty_mValue = in_mValue ;
  mProperty_mNegative = in_mNegative ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_integerAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerAsDefaultValue ;
}

void cPtr_integerAsDefaultValue::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@integerAsDefaultValue:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mNegative.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_integerAsDefaultValue::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_integerAsDefaultValue (mProperty_mValue, mProperty_mNegative, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_integerAsDefaultValue::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDefaultValue::printNonNullClassInstanceProperties () ;
    mProperty_mValue.printNonNullClassInstanceProperties ("mValue") ;
    mProperty_mNegative.printNonNullClassInstanceProperties ("mNegative") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @integerAsDefaultValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerAsDefaultValue ("integerAsDefaultValue",
                                                                          & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_integerAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerAsDefaultValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_integerAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_integerAsDefaultValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerAsDefaultValue GGS_integerAsDefaultValue::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_integerAsDefaultValue result ;
  const GGS_integerAsDefaultValue * p = (const GGS_integerAsDefaultValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_integerAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
    const GGS_propertyKind_2E_property var_prop_4618 = temp_1.readProperty_mKind ().getter_getProperty (SOURCE_FILE ("semantic-analysis.galgas4", 119)).unwrappedValue () ;
    if (!temp_1.readProperty_mKind ().getter_getProperty (SOURCE_FILE ("semantic-analysis.galgas4", 119)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = var_prop_4618.readProperty_accessibility ().getter_isTransient (SOURCE_FILE ("semantic-analysis.galgas4", 120)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GGS_bool var_ab_4756 ;
          var_prop_4618.readProperty_accessibility ().method_extractTransient (var_ab_4756, inCompiler COMMA_SOURCE_FILE ("semantic-analysis.galgas4", 121)) ;
          result_result = var_ab_4756 ;
        }
      }
    }
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutTableViewControllerDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_0 = this ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_1 = this ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_2 = this ;
  GGS_lstring var_node_1449 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 33)).add_operation (temp_1.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 33)), temp_2.readProperty_mControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1449, temp_3, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 34)) ;
  }
  {
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1449, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 35)) ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_6 = this ;
    test_5 = temp_6.readProperty_mIsRoot ().operator_not (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 36)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      {
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_7 = this ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_8 = this ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_9 = this ;
      ioArgument_ioGraph.setter_addEdge (var_node_1449, GGS_lstring::init_21__21_ (temp_7.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 37)).add_operation (temp_8.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 37)), temp_9.readProperty_mToManyPropertyName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 37)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_11 = this ;
      test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        {
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_12 = this ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_13 = this ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_14 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_1449, GGS_lstring::init_21__21_ (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 39)).add_operation (temp_13.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 39)), temp_14.readProperty_mToManyPropertyName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 39)) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutTableViewControllerDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_autoLayoutTableViewControllerDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_0 = this ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_1 = this ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 46)).add_operation (temp_1.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 46)), temp_2.readProperty_mControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutTableViewControllerDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_5245 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_actionMap var_controllerActions_5409 = GGS_actionMap::init (inCompiler COMMA_HERE) ;
  {
  var_controllerActions_5409.setter_insertKey (GGS_string ("add").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 147)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 147)) ;
  }
  {
  var_controllerActions_5409.setter_insertKey (GGS_string ("remove").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 148)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 148)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_mIsRoot ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_propertyMap var_rootProperties_5636 ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_3 = this ;
      GGS_classKind joker_5627 ; // Joker input parameter
      GGS_actionMap joker_5652_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_5652_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_3.readProperty_mRootEntityName (), joker_5627, var_rootProperties_5636, joker_5652_2, joker_5652_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 150)) ;
      GGS_propertyKind var_classKind_5720 ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_4 = this ;
      GGS_actionMap joker_5731_2 ; // Joker input parameter
      GGS_bool joker_5731_1 ; // Joker input parameter
      var_rootProperties_5636.method_searchKey (temp_4.readProperty_mToManyPropertyName (), var_classKind_5720, joker_5731_2, joker_5731_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 151)) ;
      switch (var_classKind_5720.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_5781__0 ;
          GGS_propertyAccessibility extractedValue_5781__1 ;
          var_classKind_5720.getAssociatedValuesFor_property (extractedValue_5781__0, extractedValue_5781__1) ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_5.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 154)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_5885_typeName_0 ;
          GGS_propertyAccessibility extractedValue_5895__1 ;
          GGS_bool extractedValue_5898_graphic_2 ;
          GGS_toManyRelationshipOptionAST extractedValue_5907__3 ;
          var_classKind_5720.getAssociatedValuesFor_toMany (extractedValue_5885_typeName_0, extractedValue_5895__1, extractedValue_5898_graphic_2, extractedValue_5907__3) ;
          GGS_propertyKind var_kind_5924 = GGS_propertyKind::class_func_arrayController (extractedValue_5885_typeName_0, extractedValue_5898_graphic_2  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 156)) ;
          {
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_7 = this ;
          var_entry_5245.mProperty_mPropertyMap.setter_insertKey (temp_7.readProperty_mControllerName (), var_kind_5924, var_controllerActions_5409, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 160)) ;
          }
          {
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_8 = this ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_9 = this ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_10 = this ;
          var_entry_5245.mProperty_mPropertyGenerationList.setter_append (GGS_autoLayoutTableViewControllerPropertyGeneration::init_21__21__21_ (temp_8.readProperty_mControllerName ().readProperty_string (), GGS_string ("rootObject.").add_operation (temp_9.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 165)), temp_10.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 162)) ;
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_6411__0 ;
          GGS_propertyAccessibility extractedValue_6411__1 ;
          GGS_bool extractedValue_6411__2 ;
          GGS_toOneOppositeRelationship extractedValue_6411__3 ;
          GGS_bool extractedValue_6411__4 ;
          var_classKind_5720.getAssociatedValuesFor_toOne (extractedValue_6411__0, extractedValue_6411__1, extractedValue_6411__2, extractedValue_6411__3, extractedValue_6411__4) ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray12  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 170)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_6525__0 ;
          GGS_bool extractedValue_6525__1 ;
          var_classKind_5720.getAssociatedValuesFor_arrayController (extractedValue_6525__0, extractedValue_6525__1) ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_13 = this ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray14  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 172)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_6642__0 ;
          var_classKind_5720.getAssociatedValuesFor_selectionController (extractedValue_6642__0) ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_15 = this ;
          GenericArray <FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (temp_15.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray16  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 174)) ;
        }
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GGS_propertyKind var_classKind_6813 ;
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_17 = this ;
    GGS_actionMap joker_6824_2 ; // Joker input parameter
    GGS_bool joker_6824_1 ; // Joker input parameter
    var_entry_5245.readProperty_mPropertyMap ().method_searchKey (temp_17.readProperty_mToManyPropertyName (), var_classKind_6813, joker_6824_2, joker_6824_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 177)) ;
    switch (var_classKind_6813.enumValue ()) {
    case GGS_propertyKind::Enumeration::invalid:
      break ;
    case GGS_propertyKind::Enumeration::enum_property:
      {
        GGS_typeKind extractedValue_6874__0 ;
        GGS_propertyAccessibility extractedValue_6874__1 ;
        var_classKind_6813.getAssociatedValuesFor_property (extractedValue_6874__0, extractedValue_6874__1) ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_18 = this ;
        GenericArray <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray19  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 180)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_toMany:
      {
        GGS_lstring extractedValue_6978_typeName_0 ;
        GGS_propertyAccessibility extractedValue_6988__1 ;
        GGS_bool extractedValue_6991_graphic_2 ;
        GGS_toManyRelationshipOptionAST extractedValue_7000__3 ;
        var_classKind_6813.getAssociatedValuesFor_toMany (extractedValue_6978_typeName_0, extractedValue_6988__1, extractedValue_6991_graphic_2, extractedValue_7000__3) ;
        GGS_propertyKind var_kind_7017 = GGS_propertyKind::class_func_arrayController (extractedValue_6978_typeName_0, extractedValue_6991_graphic_2  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 182)) ;
        {
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_20 = this ;
        var_entry_5245.mProperty_mPropertyMap.setter_insertKey (temp_20.readProperty_mControllerName (), var_kind_7017, var_controllerActions_5409, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 186)) ;
        }
        {
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_21 = this ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_22 = this ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_23 = this ;
        var_entry_5245.mProperty_mPropertyGenerationList.setter_append (GGS_autoLayoutTableViewControllerPropertyGeneration::init_21__21__21_ (temp_21.readProperty_mControllerName ().readProperty_string (), temp_22.readProperty_mToManyPropertyName ().readProperty_string (), temp_23.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 188)) ;
        }
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_toOne:
      {
        GGS_lstring extractedValue_7471__0 ;
        GGS_propertyAccessibility extractedValue_7471__1 ;
        GGS_bool extractedValue_7471__2 ;
        GGS_toOneOppositeRelationship extractedValue_7471__3 ;
        GGS_bool extractedValue_7471__4 ;
        var_classKind_6813.getAssociatedValuesFor_toOne (extractedValue_7471__0, extractedValue_7471__1, extractedValue_7471__2, extractedValue_7471__3, extractedValue_7471__4) ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_24 = this ;
        GenericArray <FixItDescription> fixItArray25 ;
        inCompiler->emitSemanticError (temp_24.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray25  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 195)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_arrayController:
      {
        GGS_lstring extractedValue_7585__0 ;
        GGS_bool extractedValue_7585__1 ;
        var_classKind_6813.getAssociatedValuesFor_arrayController (extractedValue_7585__0, extractedValue_7585__1) ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_26 = this ;
        GenericArray <FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (temp_26.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray27  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 197)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_selectionController:
      {
        GGS_string extractedValue_7702__0 ;
        var_classKind_6813.getAssociatedValuesFor_selectionController (extractedValue_7702__0) ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_28 = this ;
        GenericArray <FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (temp_28.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray29  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 199)) ;
      }
      break ;
    }
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_5245, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 202)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutTableViewControllerDeclarationAST thirdAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerDeclarationAST::method_thirdAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  GGS_generationStruct & ioArgument_ioGeneration,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap var_preferencesPropertyMap_8360 ;
  GGS_classKind joker_8347 ; // Joker input parameter
  GGS_actionMap joker_8388_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_8388_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 215)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 215)), inCompiler COMMA_HERE), joker_8347, var_preferencesPropertyMap_8360, joker_8388_2, joker_8388_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 214)) ;
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 221)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("allowsEmptySelection")  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 221)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("allowsMultipleSelection")  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 221)) ;
  GGS_stringset var_attributes_8498 = temp_0 ;
  GGS_typeKindList temp_1 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 222)) ;
  temp_1.plusPlusAssignOperation (GGS_typeKindList_2E_element::init_21_ (GGS_typeKind::class_func_boolType (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 222)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 222)) ;
  GGS_typeKindList var_allowedTypes_8580 = temp_1 ;
  GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 223)) ;
  GGS_stringset var_definedAttributes_8641 = temp_2 ;
  GGS__32_stringlist temp_3 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 224)) ;
  GGS__32_stringlist var_attributeListForGeneration_8683 = temp_3 ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_4 = this ;
  UpEnumerator_autoLayoutTableViewControllerAttributListAST enumerator_8728 (temp_4.readProperty_mTableViewControllerAttributListAST ()) ;
  while (enumerator_8728.hasCurrentObject ()) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_attributes_8498.getter_hasKey (enumerator_8728.current_mAttributeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 226)).operator_not (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 226)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_8728.current_mAttributeName (HERE).readProperty_location (), GGS_string ("unknown attribute"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 227)) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = var_definedAttributes_8641.getter_hasKey (enumerator_8728.current_mAttributeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 228)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_8728.current_mAttributeName (HERE).readProperty_location (), GGS_string ("attribute multiply defined"), fixItArray8  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 229)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        {
        var_definedAttributes_8641.setter_insert (enumerator_8728.current_mAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 231)) ;
        }
      }
    }
    GGS_string var_valueAsString_9117 ;
    callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_8728.current_mAttributeValue (HERE).ptr (), var_allowedTypes_8580, var_preferencesPropertyMap_8360, var_valueAsString_9117, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 233)) ;
    {
    var_attributeListForGeneration_8683.setter_append (enumerator_8728.current_mAttributeName (HERE).readProperty_string (), var_valueAsString_9117, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 234)) ;
    }
    enumerator_8728.gotoNextObject () ;
  }
  UpEnumerator_stringset enumerator_9218 (var_attributes_8498) ;
  while (enumerator_9218.hasCurrentObject ()) {
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      test_9 = var_definedAttributes_8641.getter_hasKey (enumerator_9218.current (HERE) COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 237)).operator_not (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 237)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_10 = this ;
        GenericArray <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (temp_10.readProperty_mControllerName ().readProperty_location (), GGS_string ("attribute '").add_operation (enumerator_9218.current (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 238)).add_operation (GGS_string ("' not defined"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 238)), fixItArray11  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 238)) ;
      }
    }
    enumerator_9218.gotoNextObject () ;
  }
  GGS_propertyMap var_boundModelPropertyMap_9391 ;
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_13 = this ;
    test_12 = temp_13.readProperty_mIsRoot ().boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_14 = this ;
      GGS_classKind joker_9515 ; // Joker input parameter
      GGS_actionMap joker_9557_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_9557_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_14.readProperty_mRootEntityName (), joker_9515, var_boundModelPropertyMap_9391, joker_9557_2, joker_9557_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 244)) ;
    }
  }
  if (GalgasBool::boolFalse == test_12) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_15 = this ;
    GGS_classKind joker_9649 ; // Joker input parameter
    GGS_actionMap joker_9691_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_9691_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_15.readProperty_mClassName (), joker_9649, var_boundModelPropertyMap_9391, joker_9691_2, joker_9691_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 251)) ;
  }
  GGS_propertyKind var_boundModelClassKind_9800 ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_16 = this ;
  GGS_actionMap joker_9826_2 ; // Joker input parameter
  GGS_bool joker_9826_1 ; // Joker input parameter
  var_boundModelPropertyMap_9391.method_searchKey (temp_16.readProperty_mToManyPropertyName (), var_boundModelClassKind_9800, joker_9826_2, joker_9826_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 258)) ;
  GGS_propertyMap var_propertyMap_9940 ;
  GGS_autoLayoutTableViewControllerModelKind var_arrayControllerModelKind_9998 ;
  GGS_bool var_graphic_10035 ;
  GGS_string var_elementTypeName_10057 ;
  switch (var_boundModelClassKind_9800.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_10120__0 ;
      GGS_propertyAccessibility extractedValue_10120__1 ;
      var_boundModelClassKind_9800.getAssociatedValuesFor_property (extractedValue_10120__0, extractedValue_10120__1) ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_17 = this ;
      GenericArray <FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (temp_17.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray18  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 270)) ;
      var_graphic_10035.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_9998.drop () ; // Release error dropped variable
      var_propertyMap_9940.drop () ; // Release error dropped variable
      var_elementTypeName_10057.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_10298_typeName_0 ;
      GGS_propertyAccessibility extractedValue_10308_accessibility_1 ;
      GGS_bool extractedValue_10323_isGraphic_2 ;
      GGS_toManyRelationshipOptionAST extractedValue_10334__3 ;
      var_boundModelClassKind_9800.getAssociatedValuesFor_toMany (extractedValue_10298_typeName_0, extractedValue_10308_accessibility_1, extractedValue_10323_isGraphic_2, extractedValue_10334__3) ;
      var_elementTypeName_10057 = extractedValue_10298_typeName_0.readProperty_string () ;
      var_graphic_10035 = extractedValue_10323_isGraphic_2 ;
      GGS_autoLayoutTableViewControllerModelKind temp_19 ;
      const GalgasBool test_20 = extractedValue_10308_accessibility_1.getter_isTransient (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 276)).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        temp_19 = GGS_autoLayoutTableViewControllerModelKind::class_func_transientArray (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 277)) ;
      }else if (GalgasBool::boolFalse == test_20) {
        temp_19 = GGS_autoLayoutTableViewControllerModelKind::class_func_entityArray (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 278)) ;
      }
      var_arrayControllerModelKind_9998 = temp_19 ;
      GGS_classKind joker_10566 ; // Joker input parameter
      GGS_actionMap joker_10584 ; // Joker input parameter
      GGS_propertyGenerationList joker_10588 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_10298_typeName_0, joker_10566, var_propertyMap_9940, joker_10584, joker_10588, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 280)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_10607__0 ;
      GGS_propertyAccessibility extractedValue_10607__1 ;
      GGS_bool extractedValue_10607__2 ;
      GGS_toOneOppositeRelationship extractedValue_10607__3 ;
      GGS_bool extractedValue_10607__4 ;
      var_boundModelClassKind_9800.getAssociatedValuesFor_toOne (extractedValue_10607__0, extractedValue_10607__1, extractedValue_10607__2, extractedValue_10607__3, extractedValue_10607__4) ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_21 = this ;
      GenericArray <FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray22  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 282)) ;
      var_graphic_10035.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_9998.drop () ; // Release error dropped variable
      var_propertyMap_9940.drop () ; // Release error dropped variable
      var_elementTypeName_10057.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_10795__0 ;
      GGS_bool extractedValue_10795__1 ;
      var_boundModelClassKind_9800.getAssociatedValuesFor_arrayController (extractedValue_10795__0, extractedValue_10795__1) ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_23 = this ;
      GenericArray <FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray24  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 286)) ;
      var_graphic_10035.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_9998.drop () ; // Release error dropped variable
      var_propertyMap_9940.drop () ; // Release error dropped variable
      var_elementTypeName_10057.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_10986__0 ;
      var_boundModelClassKind_9800.getAssociatedValuesFor_selectionController (extractedValue_10986__0) ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_25 = this ;
      GenericArray <FixItDescription> fixItArray26 ;
      inCompiler->emitSemanticError (temp_25.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray26  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 290)) ;
      var_graphic_10035.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_9998.drop () ; // Release error dropped variable
      var_propertyMap_9940.drop () ; // Release error dropped variable
      var_elementTypeName_10057.drop () ; // Release error dropped variable
    }
    break ;
  }
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration temp_27 = GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 294)) ;
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration var_arrayControllerBoundColumnListForGeneration_11220 = temp_27 ;
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration temp_28 = GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 295)) ;
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration var_arrayControllerSortedColumnListForGeneration_11335 = temp_28 ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_29 = this ;
  UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST enumerator_11437 (temp_29.readProperty_mTableViewControllerBoundColumnListAST ()) ;
  while (enumerator_11437.hasCurrentObject ()) {
    GGS_autoLayoutClassParameterList temp_30 = GGS_autoLayoutClassParameterList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 298)) ;
    GGS_autoLayoutClassParameterList var_formalArgumentList_11565 = temp_30 ;
    {
    var_formalArgumentList_11565.setter_append (GGS_string ("title").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 299)), GGS_autoLayoutClassParameterType::class_func_typeString (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 299)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 299)) ;
    }
    {
    var_formalArgumentList_11565.setter_append (GGS_string ("minWidth").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 300)), GGS_autoLayoutClassParameterType::class_func_typeInt (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 300)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 300)) ;
    }
    {
    var_formalArgumentList_11565.setter_append (GGS_string ("maxWidth").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 301)), GGS_autoLayoutClassParameterType::class_func_typeInt (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 301)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 301)) ;
    }
    {
    var_formalArgumentList_11565.setter_append (GGS_string ("headerAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 302)), GGS_autoLayoutClassParameterType::class_func_typeEnum (GGS_string ("TextAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 302))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 302)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 302)) ;
    }
    {
    var_formalArgumentList_11565.setter_append (GGS_string ("contentAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 303)), GGS_autoLayoutClassParameterType::class_func_typeEnum (GGS_string ("TextAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 303))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 303)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 303)) ;
    }
    GGS__32_stringlist temp_31 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 304)) ;
    GGS__32_stringlist var_actualParameterList_12015 = temp_31 ;
    GalgasBool test_32 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_32) {
      test_32 = GGS_bool (ComparisonKind::notEqual, var_formalArgumentList_11565.getter_count (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 305)).objectCompare (enumerator_11437.current_mColumnParameterListAST (HERE).getter_count (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 305)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_32) {
        GenericArray <FixItDescription> fixItArray33 ;
        inCompiler->emitSemanticError (enumerator_11437.current_mPropertyName (HERE).readProperty_location (), enumerator_11437.current_mColumnParameterListAST (HERE).getter_count (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 306)).getter_string (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 306)).add_operation (GGS_string (" parameter(s), "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 306)).add_operation (var_formalArgumentList_11565.getter_count (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 306)).getter_string (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 306)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 306)).add_operation (GGS_string (" required"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 306)), fixItArray33  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 306)) ;
      }
    }
    if (GalgasBool::boolFalse == test_32) {
      UpEnumerator_autoLayoutClassParameterList enumerator_12262 (var_formalArgumentList_11565) ;
      UpEnumerator_astAutoLayoutViewInstructionParameterList enumerator_12322 (enumerator_11437.current_mColumnParameterListAST (HERE)) ;
      while (enumerator_12262.hasCurrentObject () && enumerator_12322.hasCurrentObject ()) {
        GalgasBool test_34 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_34) {
          test_34 = GGS_bool (ComparisonKind::notEqual, enumerator_12262.current_mParameterName (HERE).readProperty_string ().objectCompare (enumerator_12322.current_mParameterName (HERE).readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_34) {
            GenericArray <FixItDescription> fixItArray35 ;
            inCompiler->emitSemanticError (enumerator_12322.current_mParameterName (HERE).readProperty_location (), GGS_string ("required argument name: ").add_operation (enumerator_12262.current_mParameterName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 310)), fixItArray35  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 310)) ;
          }
        }
        GalgasBool test_36 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_36) {
          const GGS_autoLayoutClassParameterType_2E_typeEnum var_formalTypeEnum_12518 = enumerator_12262.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 312)).unwrappedValue () ;
          if (!enumerator_12262.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 312)).isValuated ()) {
            test_36 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_36) {
            const GGS_autoLayoutClassParameterType_2E_typeEnum var_actualTypeEnum_12563 = enumerator_12322.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 312)).unwrappedValue () ;
            if (!enumerator_12322.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 312)).isValuated ()) {
              test_36 = GalgasBool::boolFalse ;
            }
            if (GalgasBool::boolTrue == test_36) {
              GGS_classKind var_typeKind_12683 ;
              GGS_propertyMap joker_12693_3 ; // Joker input parameter
              GGS_actionMap joker_12693_2 ; // Joker input parameter
              GGS_propertyGenerationList joker_12693_1 ; // Joker input parameter
              ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (var_formalTypeEnum_12518.readProperty_name (), var_typeKind_12683, joker_12693_3, joker_12693_2, joker_12693_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 313)) ;
              GalgasBool test_37 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_37) {
                const GGS_classKind_2E_atomic var_atomicTypeKind_12715 = var_typeKind_12683.getter_getAtomic (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 314)).unwrappedValue () ;
                if (!var_typeKind_12683.getter_getAtomic (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 314)).isValuated ()) {
                  test_37 = GalgasBool::boolFalse ;
                }
                if (GalgasBool::boolTrue == test_37) {
                  const GGS_typeKind_2E_enumType var_atomicEnumType_12756 = var_atomicTypeKind_12715.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 314)).unwrappedValue () ;
                  if (!var_atomicTypeKind_12715.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 314)).isValuated ()) {
                    test_37 = GalgasBool::boolFalse ;
                  }
                  if (GalgasBool::boolTrue == test_37) {
                    GGS_uint joker_12881 ; // Joker input parameter
                    var_atomicEnumType_12756.readProperty_constantMap ().method_searchKey (var_actualTypeEnum_12563.readProperty_name (), joker_12881, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 315)) ;
                  }
                }
              }
              if (GalgasBool::boolFalse == test_37) {
                GenericArray <FixItDescription> fixItArray38 ;
                inCompiler->emitSemanticError (var_formalTypeEnum_12518.readProperty_name ().readProperty_location (), GGS_string ("this type name is not an enum"), fixItArray38  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 317)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_36) {
          GalgasBool test_39 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_39) {
            test_39 = GGS_bool (ComparisonKind::notEqual, enumerator_12322.current_mParameterType (HERE).objectCompare (enumerator_12262.current_mParameterType (HERE))).boolEnum () ;
            if (GalgasBool::boolTrue == test_39) {
              GenericArray <FixItDescription> fixItArray40 ;
              inCompiler->emitSemanticError (enumerator_12322.current_mParameterName (HERE).readProperty_location (), GGS_string ("the formal parameter requires ").add_operation (extensionGetter_string (enumerator_12262.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 320)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 320)).add_operation (GGS_string (", actual parameter is "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 320)).add_operation (extensionGetter_string (enumerator_12322.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 320)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 320)), fixItArray40  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 320)) ;
            }
          }
        }
        GalgasBool test_41 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_41) {
          const GGS_astAutoLayoutViewInstructionParameterValue_2E_string var_actualString_13176 = enumerator_12322.current_mParameter (HERE).getter_getString (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 322)).unwrappedValue () ;
          if (!enumerator_12322.current_mParameter (HERE).getter_getString (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 322)).isValuated ()) {
            test_41 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_41) {
            {
            var_actualParameterList_12015.setter_append (enumerator_12262.current_mParameterName (HERE).readProperty_string (), var_actualString_13176.readProperty_value (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 323)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_41) {
          GenericArray <FixItDescription> fixItArray42 ;
          inCompiler->emitSemanticError (enumerator_12322.current_mParameterName (HERE).readProperty_location (), GGS_string ("parameter value is not string convertible"), fixItArray42  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 325)) ;
        }
        enumerator_12262.gotoNextObject () ;
        enumerator_12322.gotoNextObject () ;
      }
    }
    GalgasBool test_43 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_43) {
      test_43 = GGS_bool (ComparisonKind::notEqual, enumerator_11437.current_mSortPropertyName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_43) {
        GGS_propertyKind var_sortPropertyKind_13544 ;
        GGS_actionMap joker_13570_2 ; // Joker input parameter
        GGS_bool joker_13570_1 ; // Joker input parameter
        var_propertyMap_9940.method_searchKey (enumerator_11437.current_mSortPropertyName (HERE), var_sortPropertyKind_13544, joker_13570_2, joker_13570_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 331)) ;
        GalgasBool test_44 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_44) {
          test_44 = extensionGetter_isComparable (var_sortPropertyKind_13544, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 336)).operator_not (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 336)).boolEnum () ;
          if (GalgasBool::boolTrue == test_44) {
            GenericArray <FixItDescription> fixItArray45 ;
            inCompiler->emitSemanticError (enumerator_11437.current_mSortPropertyName (HERE).readProperty_location (), GGS_string ("this property is not comparable"), fixItArray45  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 337)) ;
          }
        }
        {
        var_arrayControllerSortedColumnListForGeneration_11335.setter_append (enumerator_11437.current_mPropertyName (HERE).readProperty_string (), var_sortPropertyKind_13544, enumerator_11437.current_mSortPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 339)) ;
        }
      }
    }
    GGS_propertyKind var_propertyKind_13968 ;
    GGS_actionMap joker_13988_2 ; // Joker input parameter
    GGS_bool joker_13988_1 ; // Joker input parameter
    var_propertyMap_9940.method_searchKey (enumerator_11437.current_mPropertyName (HERE), var_propertyKind_13968, joker_13988_2, joker_13988_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 346)) ;
    {
    var_arrayControllerBoundColumnListForGeneration_11220.setter_append (enumerator_11437.current_mEditable (HERE), enumerator_11437.current_mSortPropertyName (HERE).readProperty_string (), enumerator_11437.current_mPropertyName (HERE).readProperty_string (), extensionGetter_swiftTypeName (var_propertyKind_13968, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 355)), GGS_string::makeEmptyString (), var_actualParameterList_12015, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 351)) ;
    }
    enumerator_11437.gotoNextObject () ;
  }
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_46 = this ;
  GGS_string temp_47 ;
  const GalgasBool test_48 = temp_46.readProperty_mIsRoot ().boolEnum () ;
  if (GalgasBool::boolTrue == test_48) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_49 = this ;
    temp_47 = GGS_string ("self.rootObject.").add_operation (temp_49.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 366)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 366)) ;
  }else if (GalgasBool::boolFalse == test_48) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_50 = this ;
    temp_47 = GGS_string ("self.").add_operation (temp_50.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 367)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 367)) ;
  }
  GGS_string var_modelString_14567 = temp_47 ;
  {
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_51 = this ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_52 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_autoLayoutTableViewControllerGeneration::init_21__21__21__21__21__21__21__21__21__21_ (temp_51.readProperty_mClassName ().readProperty_string (), temp_52.readProperty_mControllerName (), var_modelString_14567, var_arrayControllerBoundColumnListForGeneration_11220, var_arrayControllerSortedColumnListForGeneration_11335, GGS_string ("ReadWriteArrayOf_").add_operation (var_elementTypeName_10057, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 376)), var_arrayControllerModelKind_9998, var_elementTypeName_10057, var_graphic_10035, var_attributeListForGeneration_8683, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 370)) ;
  }
  {
  ioArgument_ioGeneration.mProperty_mGenerateClass_5F_StoredArrayOf_5F_.setter_insert (var_elementTypeName_10057, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 383)) ;
  }
  {
  ioArgument_ioGeneration.mProperty_mGenerateClass_5F_TransientArrayOf_5F_.setter_insert (var_elementTypeName_10057, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 384)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutTableViewControllerPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutTableViewControllerPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool constinArgument_inPreferences,
                                                                                                 const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                                                 const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inPreferences.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 405)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 405)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 405)) ;
      const GGS_autoLayoutTableViewControllerPropertyGeneration temp_1 = this ;
      result_result.plusAssignOperation(GGS_string ("//   Table View controller: ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 406)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 406)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 406)) ;
      result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 407)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 407)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 407)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 407)) ;
      const GGS_autoLayoutTableViewControllerPropertyGeneration temp_2 = this ;
      const GGS_autoLayoutTableViewControllerPropertyGeneration temp_3 = this ;
      const GGS_autoLayoutTableViewControllerPropertyGeneration temp_4 = this ;
      result_result.plusAssignOperation(GGS_string ("@MainActor let preferences_").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 408)).add_operation (GGS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 408)).add_operation (temp_3.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 408)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 408)).add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 408)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 408)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 408)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 410)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 410)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 410)) ;
    const GGS_autoLayoutTableViewControllerPropertyGeneration temp_5 = this ;
    result_result.plusAssignOperation(GGS_string ("  //   Array controller: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 411)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 411)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 411)) ;
    result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 412)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 412)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 412)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 412)) ;
    const GGS_autoLayoutTableViewControllerPropertyGeneration temp_6 = this ;
    const GGS_autoLayoutTableViewControllerPropertyGeneration temp_7 = this ;
    const GGS_autoLayoutTableViewControllerPropertyGeneration temp_8 = this ;
    result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 413)).add_operation (GGS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 413)).add_operation (temp_7.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 413)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 413)).add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 413)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 413)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 413)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutTableViewControllerPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutTableViewControllerPropertyGeneration::getter_configurationCode (const GGS_bool constinArgument_inPreferences,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GGS_string temp_0 ;
  const GalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_string ("self.") ;
  }
  GGS_string var_prefix_16994 = temp_0 ;
  const GGS_autoLayoutTableViewControllerPropertyGeneration temp_2 = this ;
  result_result = GGS_string ("  //--- Array controller property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 421)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 421)) ;
  const GGS_autoLayoutTableViewControllerPropertyGeneration temp_3 = this ;
  const GGS_autoLayoutTableViewControllerPropertyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_16994, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 422)).add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 422)).add_operation (GGS_string (".bind_model ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 422)).add_operation (var_prefix_16994, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 422)).add_operation (temp_4.readProperty_mModelString (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 422)).add_operation (GGS_string ("_property, self.undoManager)\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 422)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 422)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutTableViewControllerPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutTableViewControllerPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'autoLayoutTableViewControllerGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutTableViewControllerGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutTableViewControllerGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_autoLayoutTableViewControllerGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_autoLayoutTableViewControllerGenerationTemplate_0,
  0,
  gWrapperAllDirectories_autoLayoutTableViewControllerGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutTableViewControllerGenerationTemplate autoLayoutTableViewControllerImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_autoLayoutTableViewControllerGenerationTemplate_autoLayoutTableViewControllerImplementation (Compiler * /* inCompiler */,
                                                                                                                            const GGS_string & in_OWNER_5F_NAME,
                                                                                                                            const GGS_string & in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME,
                                                                                                                            const GGS_string & /* in_MODEL_5F_STRING */,
                                                                                                                            const GGS_autoLayoutTableViewControllerModelKind & in_MODEL_5F_KIND,
                                                                                                                            const GGS_string & in_MODEL_5F_TYPE_5F_NAME,
                                                                                                                            const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & in_BOUND_5F_COLUMNS,
                                                                                                                            const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & in_SORTED_5F_COLUMNS,
                                                                                                                            const GGS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                                            const GGS_stringset & in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING,
                                                                                                                            const GGS__32_stringlist & in_ATTRIBUTE_5F_VALUES
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//    Auto Layout Table View Controller ") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString (" ") ;
  result.appendString (in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nfinal class Controller_") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString (" : NSObject, AutoLayoutTableViewDelegate {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Constant properties\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_952_ (0) ;
  if (in_ATTRIBUTE_5F_VALUES.isValid ()) {
    UpEnumerator__32_stringlist enumerator_952 (in_ATTRIBUTE_5F_VALUES) ;
    while (enumerator_952.hasCurrentObject ()) {
      result.appendString ("  private let ") ;
      result.appendString (enumerator_952.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (enumerator_952.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_952.gotoNextObject () ;
      index_952_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Undo manager\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mUndoManager : UndoManager\? = nil // SHOULD BE WEAK\n  var undoManager : UndoManager\? { return self.mUndoManager }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Sorted Array\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  let sortedArray_property = TransientArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mSortDescriptorArray = [(") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (", ") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (") -> ComparisonResult] ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Model\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mModel : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? = nil // SHOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var objects : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n    if let objects = self.mModel\?.propval {\n      return objects\n    }else{\n      return EBReferenceArray ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_model (_ inModel : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (", _ inUndoManager : UndoManager\?) {\n    self.mModel = inModel\n    self.mUndoManager = inUndoManager\n    self.sortedArray_property.setDataProvider (\n      inModel,\n") ;
  const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_SORTED_5F_COLUMNS.getter_count (SOURCE_FILE ("auto-layout-table-view-controller.swift.galgasTemplate", 62)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case GalgasBool::boolTrue : {
    result.appendString ("      sortCallback: { [weak self] (left, right) in self\?.isOrderedBefore (left, right) \?\? true },\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    result.appendString ("      sortCallback: nil,\n") ;
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("      addSortObserversCallback: { (observer) in\n") ;
  GGS_uint index_3030_ (0) ;
  if (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING.isValid ()) {
    UpEnumerator_stringset enumerator_3030 (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING) ;
    while (enumerator_3030.hasCurrentObject ()) {
      result.appendString ("        inModel.toMany_") ;
      result.appendString (enumerator_3030.current_key (HERE).stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by: observer)\n") ;
      enumerator_3030.gotoNextObject () ;
      index_3030_.increment () ;
    }
  }
  result.appendString ("      },\n      removeSortObserversCallback: {(observer) in\n") ;
  GGS_uint index_3214_ (0) ;
  if (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING.isValid ()) {
    UpEnumerator_stringset enumerator_3214 (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING) ;
    while (enumerator_3214.hasCurrentObject ()) {
      result.appendString ("        inModel.toMany_") ;
      result.appendString (enumerator_3214.current_key (HERE).stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by: observer)\n") ;
      enumerator_3214.gotoNextObject () ;
      index_3214_.increment () ;
    }
  }
  result.appendString ("      }\n    )\n  }\n\n") ;
  const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, in_SORTED_5F_COLUMNS.getter_count (SOURCE_FILE ("auto-layout-table-view-controller.swift.galgasTemplate", 81)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case GalgasBool::boolTrue : {
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func isOrderedBefore (_ left : ") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString (", _ right : ") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString (") -> Bool {\n    var order = ComparisonResult.orderedSame\n    for sortDescriptor in self.mSortDescriptorArray.reversed () {\n      order = sortDescriptor (left, right)\n      if order != .orderedSame {\n        break // Exit from for loop\n      }\n    }\n    return order == .orderedAscending\n  }\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  /* final func unbind_model () {\n    self.sortedArray_property.resetDataProvider ()\n    self.mModel = nil\n    self.mUndoManager = nil\n  } */\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Selected Array\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mInternalSelectedArrayProperty = StandAloneArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedArray_property : ReadOnlyArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" { return self.mInternalSelectedArrayProperty }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedArray : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> { return self.selectedArray_property.propval }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedSet : EBReferenceSet <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> { return EBReferenceSet (self.selectedArray_property.propval.values) }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedIndexesSet : Set <Int> {\n    let selectedObjectSet = self.selectedSet\n    var result = Set <Int> ()\n    var idx = 0\n    if let model = self.mModel {\n      for object in model.propval.values {\n        if selectedObjectSet.contains (object) {\n          result.insert (idx)\n        }\n        idx += 1\n      }\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setSelection (_ inObjects : [") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("]) {\n    self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (inObjects))\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    sorted array observer\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mSortedArrayValuesObserver = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @MainActor override init () {\n    super.init ()\n    self.sortedArray_property.startsBeingObserved (by: self.mSortedArrayValuesObserver)\n") ;
  GGS_uint index_6424_ (0) ;
  if (in_BOUND_5F_COLUMNS.isValid ()) {
    UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration enumerator_6424 (in_BOUND_5F_COLUMNS) ;
    while (enumerator_6424.hasCurrentObject ()) {
      result.appendString ("  //--- Observe '") ;
      result.appendString (enumerator_6424.current_mDisplayedPropertyName (HERE).stringValue ()) ;
      result.appendString ("' column\n    self.sortedArray_property.toMany_") ;
      result.appendString (enumerator_6424.current_mDisplayedPropertyName (HERE).stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by: self.mSortedArrayValuesObserver)\n") ;
      const GalgasBool test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_6424.current_mSortPropertyName (HERE).objectCompare (GGS_string::makeEmptyString ())).operator_and (GGS_bool (ComparisonKind::notEqual, enumerator_6424.current_mSortPropertyName (HERE).objectCompare (enumerator_6424.current_mDisplayedPropertyName (HERE))) COMMA_SOURCE_FILE ("auto-layout-table-view-controller.swift.galgasTemplate", 161)).boolEnum () ;
      switch (test_2) {
      case GalgasBool::boolTrue : {
        result.appendString ("     self.sortedArray_property.toMany_") ;
        result.appendString (enumerator_6424.current_mSortPropertyName (HERE).stringValue ()) ;
        result.appendString ("_StartsBeingObserved (by: self.mSortedArrayValuesObserver)\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_6424.gotoNextObject () ;
      index_6424_.increment () ;
    }
  }
  result.appendString ("  //---\n    self.mSortedArrayValuesObserver.mEventCallBack = { [weak self] in\n       for tableView in self\?.mTableViewArray \?\? [] {\n        tableView.sortAndReloadData ()\n      }\n    }\n    noteObjectAllocation (self)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  deinit {\n    noteObjectDeallocation (self)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    bind_tableView\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mTableViewArray = [AutoLayoutTableView] ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_tableView (_ inTableView : AutoLayoutTableView) {\n    inTableView.configure (\n      allowsEmptySelection: allowsEmptySelection,\n      allowsMultipleSelection: allowsMultipleSelection,\n      rowCountCallBack: { [weak self] in self\?.sortedArray_property.propval.count \?\? 0 },\n      delegate: self\n    )\n") ;
  GGS_uint index_8024_ (0) ;
  if (in_BOUND_5F_COLUMNS.isValid ()) {
    UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration enumerator_8024 (in_BOUND_5F_COLUMNS) ;
    while (enumerator_8024.hasCurrentObject ()) {
      result.appendString ("  //--- Configure '") ;
      result.appendString (enumerator_8024.current_mDisplayedPropertyName (HERE).stringValue ()) ;
      result.appendString ("' column\n    inTableView.addColumn_") ;
      result.appendString (enumerator_8024.current_mColumnObjectTypeName (HERE).stringValue ()) ;
      result.appendString (" (\n      valueGetterDelegate: { [weak self] in return self\?.sortedArray_property.propval [$0].") ;
      result.appendString (enumerator_8024.current_mDisplayedPropertyName (HERE).stringValue ()) ;
      result.appendString (" },\n      valueSetterDelegate: ") ;
      const GalgasBool test_3 = enumerator_8024.current_mEditable (HERE).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("{ [weak self] (inRowIndex, inNewValue) in self\?.sortedArray_property.propval [inRowIndex].") ;
        result.appendString (enumerator_8024.current_mDisplayedPropertyName (HERE).stringValue ()) ;
        result.appendString (" = inNewValue }") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("nil") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (",\n      sortDelegate: ") ;
      const GalgasBool test_4 = GGS_bool (ComparisonKind::notEqual, enumerator_8024.current_mSortPropertyName (HERE).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      switch (test_4) {
      case GalgasBool::boolTrue : {
        result.appendString ("{ [weak self] (ascending) in\n        self\?.mSortDescriptorArray.append ({ (_ left : ") ;
        result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
        result.appendString (", _ right : ") ;
        result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
        result.appendString (") in return compare_") ;
        result.appendString (enumerator_8024.current_mColumnObjectTypeName (HERE).stringValue ()) ;
        result.appendString ("_properties (left.") ;
        result.appendString (enumerator_8024.current_mSortPropertyName (HERE).stringValue ()) ;
        result.appendString ("_property, ascending, right.") ;
        result.appendString (enumerator_8024.current_mSortPropertyName (HERE).stringValue ()) ;
        result.appendString ("_property) })\n      }") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("nil") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString (",\n") ;
      GGS_uint index_8879_ (0) ;
      if (enumerator_8024.current_mActualParameterList (HERE).isValid ()) {
        UpEnumerator__32_stringlist enumerator_8879 (enumerator_8024.current_mActualParameterList (HERE)) ;
        while (enumerator_8879.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_8879.current_mValue_30_ (HERE).stringValue ()) ;
          result.appendString (": ") ;
          result.appendString (enumerator_8879.current_mValue_31_ (HERE).stringValue ()) ;
          enumerator_8879.gotoNextObject () ;
          if (enumerator_8879.hasCurrentObject ()) {
            result.appendString (",\n") ;
          }
          index_8879_.increment () ;
        }
      }
      result.appendString ("\n    )\n") ;
      enumerator_8024.gotoNextObject () ;
      index_8024_.increment () ;
    }
  }
  result.appendString ("  //---\n    self.mTableViewArray.append (inTableView)\n    inTableView.sortAndReloadData ()\n  }\n\n") ;
  switch (in_MODEL_5F_KIND.enumValue ()) {
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::invalid :
    break ;
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::enum_transientArray :
    {
    }
    break ;
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::enum_entityArray :
    {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Select a single object\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func select (object inObject: ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (") {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        ()\n      case .single (let objectArray) :\n        let array = EBReferenceArray (objectArray)\n        if array.contains (inObject) {\n          self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (inObject))\n        }\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    remove\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @objc func remove (_ _ : Any) {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        break\n      case .single (let model_prop) :\n      //------------- Find the object to be selected after selected object removing\n      //--- Dictionary of object sorted indexes\n        var sortedObjectDictionary = EBReferenceDictionary <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (", Int> ()\n        for (index, object) in model_prop.enumerated () {\n          sortedObjectDictionary [object] = index\n        }\n        var indexArrayOfSelectedObjects = [Int] ()\n        for object in self.selectedArray_property.propset.values {\n          let index = sortedObjectDictionary [object]\n          if let idx = index {\n            indexArrayOfSelectedObjects.append (idx)\n          }\n        }\n      //--- Sort\n        indexArrayOfSelectedObjects.sort { $0 < $1 }\n      //--- Find the first index of a non selected object\n        var newSelectionIndex = indexArrayOfSelectedObjects [0] + 1\n        for index in indexArrayOfSelectedObjects {\n          if newSelectionIndex < index {\n            break\n          }else{\n            newSelectionIndex = index + 1\n          }\n        }\n      //----------------------------------------- Remove selected object\n      //--- Dictionary of object absolute indexes\n        var objectDictionary = EBReferenceDictionary <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (", Int> ()\n        for (index, object) in model_prop.enumerated () {\n          objectDictionary [object] = index\n        }\n      //--- Build selected objects index array\n        var selectedObjectIndexArray = [Int] ()\n        for object in self.selectedArray_property.propset.values {\n          let index = objectDictionary [object]\n          if let idx = index {\n            selectedObjectIndexArray.append (idx)\n          }\n        }\n      //--- Sort in reverse order\n        selectedObjectIndexArray.sort { $1 < $0 }\n      //--- Remove objects, in reverse of order of their index\n        var newObjectArray = EBReferenceArray (model_prop)\n        for index in selectedObjectIndexArray {\n          newObjectArray.remove (at: index)\n        }\n      //----------------------------------------- Set new object array\n        model.setProp (newObjectArray)\n      }\n    }\n  }\n") ;
    }
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // IMPLEMENTATION OF AutoLayoutTableViewDelegate\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  \n  final func tableViewDelegate_selectionDidChange (selectedRows inSelectedRows : IndexSet) {\n    switch self.sortedArray_property.selection {\n    case .empty, .multiple :\n      ()\n    case .single (let v) :\n      var newSelectedObjects = EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> ()\n      for index in inSelectedRows {\n        newSelectedObjects.append (v [index])\n      }\n      self.mInternalSelectedArrayProperty.setProp (newSelectedObjects)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func tableViewDelegate_indexesOfSelectedObjects () -> IndexSet {\n    var indexSet = IndexSet ()\n    var idx = 0\n    let selectedObjectSet = EBReferenceSet (self.selectedArray_property.propval.values)\n    for object in self.sortedArray_property.propval.values {\n      if selectedObjectSet.contains (object) {\n        indexSet.insert (idx)\n      }\n      idx += 1\n    }\n    return indexSet\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  switch (in_MODEL_5F_KIND.enumValue ()) {
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::invalid :
    break ;
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::enum_transientArray :
    {
      result.appendString ("  final func tableViewDelegate_addEntry () { // Transient array cannot add entry\n  }\n") ;
    }
    break ;
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::enum_entityArray :
    {
      result.appendString ("  final func tableViewDelegate_addEntry () {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        ()\n      case .single (let v) :\n        let newObject = ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (" (self.undoManager)\n        var array = EBReferenceArray (v)\n        array.append (newObject)\n        model.setProp (array)\n      //--- New object is the selection\n        self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (newObject))\n      }\n    }\n  }\n") ;
    }
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  switch (in_MODEL_5F_KIND.enumValue ()) {
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::invalid :
    break ;
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::enum_transientArray :
    {
      result.appendString ("  final func tableViewDelegate_removeSelectedEntries () { // Transient array cannot remove entries\n  }\n") ;
    }
    break ;
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::enum_entityArray :
    {
      result.appendString ("  final func tableViewDelegate_removeSelectedEntries () {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        ()\n      case .single (let model_prop) :\n        switch self.sortedArray_property.selection {\n        case .empty, .multiple :\n          ()\n        case .single (let sortedArray_prop) :\n        //------------- Find the object to be selected after selected object removing\n        //--- Dictionary of object sorted indexes\n          var sortedObjectDictionary = EBReferenceDictionary <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (", Int> ()\n          for (index, object) in sortedArray_prop.enumerated () {\n            sortedObjectDictionary [object] = index\n          }\n          var indexArrayOfSelectedObjects = [Int] ()\n          for object in self.selectedSet.values {\n            let index = sortedObjectDictionary [object]\n            if let idx = index {\n              indexArrayOfSelectedObjects.append (idx)\n            }\n          }\n        //--- Sort\n          indexArrayOfSelectedObjects.sort { $0 < $1 }\n        //--- Find the first index of a non selected object\n          var newSelectionIndex = indexArrayOfSelectedObjects [0] + 1\n          for index in indexArrayOfSelectedObjects {\n            if newSelectionIndex < index {\n              ()\n            }else{\n              newSelectionIndex = index + 1\n            }\n          }\n          var newSelectedObject : ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString ("\? = nil\n          if (newSelectionIndex >= 0) && (newSelectionIndex < sortedArray_prop.count) {\n            newSelectedObject = sortedArray_prop [newSelectionIndex]\n          }\n        //----------------------------------------- Remove selected object\n        //--- Dictionary of object absolute indexes\n          var objectDictionary = EBReferenceDictionary <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (", Int> ()\n          for (index, object) in model_prop.enumerated () {\n            objectDictionary [object] = index\n          }\n        //--- Build selected objects index array\n          var selectedObjectIndexArray = [Int] ()\n          for object in self.selectedSet.values {\n            let index = objectDictionary [object]\n            if let idx = index {\n              selectedObjectIndexArray.append (idx)\n            }\n          }\n        //--- Sort in reverse order\n          selectedObjectIndexArray.sort { $1 < $0 }\n        //--- Remove objects, in reverse of order of their index\n          var newObjectArray = EBReferenceArray (model_prop)\n          for index in selectedObjectIndexArray {\n            newObjectArray.remove (at: index)\n          }\n        //----------------------------------------- Set new object array\n          model.setProp (newObjectArray)\n        //----------------------------------------- Set new selection\n          if let object = newSelectedObject {\n            self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (object))\n          }else{\n            self.mInternalSelectedArrayProperty.setProp (EBReferenceArray ())\n          }\n        }\n      }\n    }\n  }\n") ;
    }
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func tableViewDelegate_beginSorting () {\n    self.mSortDescriptorArray.removeAll ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func tableViewDelegate_endSorting () {\n    self.sortedArray_property.notifyModelDidChange ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutTableViewControllerGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                                                 const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                                 GGS_stringset & /* ioArgument_ioUsedProtocolSet */,
                                                                                 GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutTableViewControllerGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                                 const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                                 const GGS_stringset /* constinArgument_inUsedProtocolSet */,
                                                                                 GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 513)) ;
  GGS_stringset var_observedProperties_21020 = temp_0 ;
  const GGS_autoLayoutTableViewControllerGeneration temp_1 = this ;
  UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration enumerator_21055 (temp_1.readProperty_mTableViewControllerSortedColumnListForGeneration ()) ;
  while (enumerator_21055.hasCurrentObject ()) {
    {
    var_observedProperties_21020.setter_insert (enumerator_21055.current_mObservablePropertyForSorting (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 515)) ;
    }
    enumerator_21055.gotoNextObject () ;
  }
  const GGS_autoLayoutTableViewControllerGeneration temp_2 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_3 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_4 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_5 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_6 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_7 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_8 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_9 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_10 = this ;
  GGS_string var_s_21223 = GGS_string (filewrapperTemplate_autoLayoutTableViewControllerGenerationTemplate_autoLayoutTableViewControllerImplementation (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mControllerName ().readProperty_string (), temp_4.readProperty_mModelString (), temp_5.readProperty_mTableViewControllerModelKind (), temp_6.readProperty_mModelTypeName (), temp_7.readProperty_mTableViewControllerBoundColumnListForGeneration (), temp_8.readProperty_mTableViewControllerSortedColumnListForGeneration (), temp_9.readProperty_mElementTypeName (), var_observedProperties_21020, temp_10.readProperty_mAttributeListForGeneration () COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 517))) ;
  {
  const GGS_autoLayoutTableViewControllerGeneration temp_11 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_12 = this ;
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, GGS_string ("controller-table-view-").add_operation (temp_11.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 531)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 531)).add_operation (temp_12.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 531)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 531)), var_s_21223, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 529)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateTestFile????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateTestFile_3F__3F__3F__3F_ (const GGS_string constinArgument_inBundleIdentifier,
                                               const GGS_string constinArgument_inProjectName,
                                               const GGS_mainXibDescriptorList constinArgument_inMainXibDescriptorList,
                                               const GGS_string constinArgument_inOutputDirectory,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_bool test_1 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inMainXibDescriptorList.getter_count (SOURCE_FILE ("main-xib.galgas4", 134)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (GalgasBool::boolTrue == test_1.boolEnum ()) {
      test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inBundleIdentifier.objectCompare (GGS_string::makeEmptyString ())) ;
    }
    test_0 = test_1.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_stringlist temp_2 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 135)) ;
      GGS_stringlist var_outlet_5F_identifier_5F_list_5083 = temp_2 ;
      UpEnumerator_mainXibDescriptorList enumerator_5120 (constinArgument_inMainXibDescriptorList) ;
      while (enumerator_5120.hasCurrentObject ()) {
        UpEnumerator_mainXibLineDescriptorList enumerator_5168 (enumerator_5120.current_mLine (HERE)) ;
        while (enumerator_5168.hasCurrentObject ()) {
          switch (enumerator_5168.current_mElement (HERE).enumValue ()) {
          case GGS_mainXibElement::Enumeration::invalid:
            break ;
          case GGS_mainXibElement::Enumeration::enum_text:
            break ;
          case GGS_mainXibElement::Enumeration::enum_outlet:
            {
              GGS_lstring extractedValue_5259__0 ;
              GGS_lstring extractedValue_5262_outletName_1 ;
              enumerator_5168.current_mElement (HERE).getAssociatedValuesFor_outlet (extractedValue_5259__0, extractedValue_5262_outletName_1) ;
              {
              var_outlet_5F_identifier_5F_list_5083.setter_append (extractedValue_5262_outletName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 141)) ;
              }
            }
            break ;
          }
          enumerator_5168.gotoNextObject () ;
        }
        enumerator_5120.gotoNextObject () ;
      }
      GGS_string var_s_5376 = GGS_string (filewrapperTemplate_testFiles_test_5F_py (inCompiler, constinArgument_inBundleIdentifier, constinArgument_inProjectName, var_outlet_5F_identifier_5F_list_5083 COMMA_SOURCE_FILE ("main-xib.galgas4", 145))) ;
      GGS_string var_header_5502 = GGS_string ("#!/usr/bin/python3\n// coding=utf-8\n\n// https://pypi.python.org/pypi/atomac\n// https://github.com/pyatom/pyatom/blob/master/atomac/AXClasses.py\n\n") ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, GGS_string ("test.py"), GGS_string ("#"), var_header_5502, GGS_string::makeEmptyString (), var_s_5376, GGS_string ("//    ENTER USER CODE HERE\n"), GGS_string ("\nquitApplication ()\n\n//---------------------------------------------------------------------------*\n"), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 154)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'testFiles'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_testFiles_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_testFiles_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_testFiles (
  "",
  0,
  gWrapperAllFiles_testFiles_0,
  0,
  gWrapperAllDirectories_testFiles_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'testFiles test_py'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_testFiles_test_5F_py (Compiler * /* inCompiler */,
                                                     const GGS_string & in_BUNDLE_5F_IDENTIFIER,
                                                     const GGS_string & in_PROJECT_5F_NAME,
                                                     const GGS_stringlist & in_OUTLET_5F_IDENTIFIER_5F_LIST
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//-----------------------------------------------------------------------------*\n\nimport random, string\n\nimport subprocess, os, sys, atexit\nimport atomac, sys, time, inspect\n\n//-----------------------------------------------------------------------------*\n//   GET SOURCE LINE NUMBER                                                     *\n//-----------------------------------------------------------------------------*\n\ndef lineno():\n  return inspect.currentframe().f_back.f_lineno\n\n//-----------------------------------------------------------------------------*\n//   LAUNCH APPLICATION                                                         *\n//-----------------------------------------------------------------------------*\n\ndef launchApplication ():\n  scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n  atomac.launchAppByBundlePath (scriptDir + \"/build/Default/") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (".app\")\n  time.sleep (0.5)\n  application = atomac.getAppRefByBundleId ('") ;
  result.appendString (in_BUNDLE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (".") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("')\n  return application\n\n//-----------------------------------------------------------------------------*\n//   QUIT APPLICATION                                                           *\n//-----------------------------------------------------------------------------*\n\ndef quitApplication ():\n  atomac.terminateAppByBundleId ('") ;
  result.appendString (in_BUNDLE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (".") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("')\n  time.sleep (0.5)\n\n//-----------------------------------------------------------------------------*\n//   PREFERENCES WINDOW                                                         *\n//-----------------------------------------------------------------------------*\n\ndef setUpPreferencesWindow (application) :\n  time.sleep (0.5)\n  window = application.windows ('") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("')[0]\n") ;
  GGS_uint index_1788_ (0) ;
  if (in_OUTLET_5F_IDENTIFIER_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_1788 (in_OUTLET_5F_IDENTIFIER_5F_LIST) ;
    while (enumerator_1788.hasCurrentObject ()) {
      result.appendString ("  global ") ;
      result.appendString (enumerator_1788.current_mValue (HERE).stringValue ()) ;
      result.appendString ("\n  ") ;
      result.appendString (enumerator_1788.current_mValue (HERE).stringValue ()) ;
      result.appendString (" = window.findFirst (AXIdentifier='") ;
      result.appendString (enumerator_1788.current_mValue (HERE).stringValue ()) ;
      result.appendString ("')\n") ;
      enumerator_1788.gotoNextObject () ;
      index_1788_.increment () ;
    }
  }
  result.appendString ("\n//-----------------------------------------------------------------------------*\n//   CHECK TEXT FIELD VALUE                                                     *\n//-----------------------------------------------------------------------------*\n\ndef checkTextFieldValue (textField, expectedValue, line):\n  if textField.AXValue != expectedValue :\n    print '*** Check error at line ' + str (line) + ' ***'\n    sys.exit (1)\n\n//-----------------------------------------------------------------------------*\n//   SET TEXT FIELD                                                             *\n//-----------------------------------------------------------------------------*\n\ndef setTextFieldValue (textField, value):\n  textField.AXFocused = True\n  textField.AXValue = value\n  textField.Confirm ()\n  time.sleep (0.5)\n\n//-----------------------------------------------------------------------------*\n//   MAIN                                                                       *\n//-----------------------------------------------------------------------------*\n\napplication = launchApplication ()\nsetUpPreferencesWindow (application)\n\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'validationStubExtension'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_validationStubExtension (
  "controllers",
  0,
  gWrapperAllFiles_validationStubExtension_3,
  0,
  gWrapperAllDirectories_validationStubExtension_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_validationStubExtension (
  "standard-properties",
  0,
  gWrapperAllFiles_validationStubExtension_1,
  0,
  gWrapperAllDirectories_validationStubExtension_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_validationStubExtension (
  "xcode-project",
  0,
  gWrapperAllFiles_validationStubExtension_2,
  0,
  gWrapperAllDirectories_validationStubExtension_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_0 [4] = {
  & gWrapperDirectory_3_validationStubExtension,
  & gWrapperDirectory_1_validationStubExtension,
  & gWrapperDirectory_2_validationStubExtension,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_validationStubExtension (
  "",
  0,
  gWrapperAllFiles_validationStubExtension_0,
  3,
  gWrapperAllDirectories_validationStubExtension_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'validationStubExtension actionGeneration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_validationStubExtension_actionGeneration (Compiler * /* inCompiler */,
                                                                         const GGS_string & in_OBJECT_5F_TYPE_5F_NAME,
                                                                         const GGS_string & in_MODEL_5F_NAME,
                                                                         const GGS_string & in_MODEL_5F_TYPE_5F_NAME
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n\nextension ") ;
  result.appendString (in_OBJECT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  func validate_") ;
  result.appendString (in_MODEL_5F_NAME.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("currentValue : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (",\n                 ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("proposedValue : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (") -> EBValidationResult <") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateValidationRoutineStubs??&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateValidationRoutineStubs_3F__3F__26_ (const GGS_string constinArgument_inOutputDirectory,
                                                         const GGS_validationStubRoutineListForGeneration constinArgument_inValidationStubRoutineListForGeneration,
                                                         GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_validationStubRoutineListForGeneration enumerator_1212 (constinArgument_inValidationStubRoutineListForGeneration) ;
  while (enumerator_1212.hasCurrentObject ()) {
    GGS_string var_s_1283 = GGS_string (filewrapperTemplate_validationStubExtension_actionGeneration (inCompiler, enumerator_1212.current_mObjectTypeName (HERE), enumerator_1212.current_mModelName (HERE), enumerator_1212.current_mModelTypeName (HERE) COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas4", 33))) ;
    GGS_string var_fileName_1418 = GGS_string ("validation-").add_operation (enumerator_1212.current_mObjectTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas4", 38)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas4", 38)).add_operation (enumerator_1212.current_mModelName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas4", 38)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas4", 38)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_1418, inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas4", 39)) ;
    }
    GGS_string var_defaultUserZone_32__1542 = GGS_string ("    var result : EBValidationResult <").add_operation (enumerator_1212.current_mModelTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas4", 41)).add_operation (GGS_string (">\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas4", 41)).add_operation (GGS_string ("    let validates = false // Add your validation condition here\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas4", 41)).add_operation (GGS_string ("    if validates {\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas4", 42)).add_operation (GGS_string ("      result = .ok (proposedValue)\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas4", 43)).add_operation (GGS_string ("    }else{\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas4", 44)).add_operation (GGS_string ("      result = .rejectWithAlert (\"Rejected in \\(#file), line \\(#line)\")\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas4", 45)).add_operation (GGS_string ("    }\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas4", 46)).add_operation (GGS_string ("    return result\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas4", 47)) ;
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_1418, GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_s_1283, var_defaultUserZone_32__1542, GGS_string ("  }\n},\n\n//---------------------------------------------------------------------------------------------------------------------*\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.galgas4", 49)) ;
    }
    enumerator_1212.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@toManyRelationshipAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_toManyRelationshipAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_toManyRelationshipAST temp_0 = this ;
  const GGS_toManyRelationshipAST temp_1 = this ;
  const GGS_toManyRelationshipAST temp_2 = this ;
  GGS_lstring var_node_1014 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 26)).add_operation (temp_1.readProperty_mToManyRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 26)), temp_2.readProperty_mToManyRelationshipName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_toManyRelationshipAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1014, temp_3, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 27)) ;
  }
  {
  const GGS_toManyRelationshipAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1014, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 28)) ;
  }
  {
  const GGS_toManyRelationshipAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1014, temp_5.readProperty_mDestinationEntityName () COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 29)) ;
  }
  const GGS_toManyRelationshipAST temp_6 = this ;
  switch (temp_6.readProperty_mOption ().enumValue ()) {
  case GGS_toManyRelationshipOptionAST::Enumeration::invalid:
    break ;
  case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasDependance:
    {
      GGS_lstring extractedValue_1332_masterPropertyName_0 ;
      temp_6.readProperty_mOption ().getAssociatedValuesFor_hasDependance (extractedValue_1332_masterPropertyName_0) ;
      const GGS_toManyRelationshipAST temp_7 = this ;
      GGS_lstring var_dependanceNode_1362 = GGS_lstring::init_21__21_ (temp_7.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 32)).add_operation (extractedValue_1332_masterPropertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 32)), extractedValue_1332_masterPropertyName_0.readProperty_location (), inCompiler COMMA_HERE) ;
      {
      ioArgument_ioGraph.setter_addEdge (var_node_1014, var_dependanceNode_1362 COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 33)) ;
      }
    }
    break ;
  case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasOpposite:
    break ;
  case GGS_toManyRelationshipOptionAST::Enumeration::enum_none:
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyRelationshipAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_toManyRelationshipAST::getter_nodeKey (Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_toManyRelationshipAST temp_0 = this ;
  const GGS_toManyRelationshipAST temp_1 = this ;
  const GGS_toManyRelationshipAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 42)).add_operation (temp_1.readProperty_mToManyRelationshipName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 42)), temp_2.readProperty_mToManyRelationshipName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@toManyRelationshipAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_toManyRelationshipAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                            GGS_generationStruct & ioArgument_ioGeneration,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_toManyRelationshipAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_5322 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  {
  const GGS_toManyRelationshipAST temp_1 = this ;
  ioArgument_ioGeneration.mProperty_mToManyClassImplementations.setter_insert (temp_1.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 141)) ;
  }
  GGS_classKind var_classKind_5628 ;
  const GGS_toManyRelationshipAST temp_2 = this ;
  GGS_propertyMap joker_5639_3 ; // Joker input parameter
  GGS_actionMap joker_5639_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_5639_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mDestinationEntityName (), var_classKind_5628, joker_5639_3, joker_5639_2, joker_5639_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 142)) ;
  switch (var_classKind_5628.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_toManyRelationshipAST temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray4  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 145)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_5772__0 ;
      var_classKind_5628.getAssociatedValuesFor_atomic (extractedValue_5772__0) ;
      const GGS_toManyRelationshipAST temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray6  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 147)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_5869__0 ;
      var_classKind_5628.getAssociatedValuesFor_document (extractedValue_5869__0) ;
      const GGS_toManyRelationshipAST temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mDestinationEntityName ().readProperty_location (), GGS_string ("an entity is required here"), fixItArray8  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 149)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_5964__0 ;
      GGS_bool extractedValue_5967_graphic_1 ;
      GGS_bool extractedValue_5976__2 ;
      GGS_bool extractedValue_5979_handleOpposite_3 ;
      var_classKind_5628.getAssociatedValuesFor_entity (extractedValue_5964__0, extractedValue_5967_graphic_1, extractedValue_5976__2, extractedValue_5979_handleOpposite_3) ;
      const GGS_toManyRelationshipAST temp_9 = this ;
      const GGS_toManyRelationshipAST temp_10 = this ;
      GGS_propertyKind var_kind_6007 = GGS_propertyKind::class_func_toMany (temp_9.readProperty_mDestinationEntityName (), GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("to-many-relationship.galgas4", 153)), extractedValue_5967_graphic_1, temp_10.readProperty_mOption ()  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 151)) ;
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = extractedValue_5979_handleOpposite_3.operator_not (SOURCE_FILE ("to-many-relationship.galgas4", 158)).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          const GGS_toManyRelationshipAST temp_12 = this ;
          test_11 = temp_12.readProperty_mOption ().getter_isHasOpposite (SOURCE_FILE ("to-many-relationship.galgas4", 158)).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            const GGS_toManyRelationshipAST temp_13 = this ;
            const GGS_toManyRelationshipAST temp_14 = this ;
            GenericArray <FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (temp_13.readProperty_mToManyRelationshipName ().readProperty_location (), GGS_string ("the '").add_operation (temp_14.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 159)).add_operation (GGS_string ("' entity does not handle opposite relationship"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 159)), fixItArray15  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 159)) ;
          }
        }
      }
      {
      const GGS_toManyRelationshipAST temp_16 = this ;
      var_entry_5322.mProperty_mPropertyMap.setter_insertKey (temp_16.readProperty_mToManyRelationshipName (), var_kind_6007, GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 161)) ;
      }
      const GGS_toManyRelationshipAST temp_17 = this ;
      GGS_bool var_inPrefs_6596 = GGS_bool (ComparisonKind::equal, temp_17.readProperty_mClassName ().readProperty_string ().objectCompare (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 163)))) ;
      GGS_toManyRelationshipOptionGeneration var_optionForGeneration_6713 ;
      const GGS_toManyRelationshipAST temp_18 = this ;
      switch (temp_18.readProperty_mOption ().enumValue ()) {
      case GGS_toManyRelationshipOptionAST::Enumeration::invalid:
        break ;
      case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasDependance:
        {
          GGS_lstring extractedValue_6785_masterPropertyName_0 ;
          temp_18.readProperty_mOption ().getAssociatedValuesFor_hasDependance (extractedValue_6785_masterPropertyName_0) ;
          GGS_propertyKind var_masterPropertyKind_6870 ;
          GGS_actionMap joker_6890_2 ; // Joker input parameter
          GGS_bool joker_6890_1 ; // Joker input parameter
          var_entry_5322.readProperty_mPropertyMap ().method_searchKey (extractedValue_6785_masterPropertyName_0, var_masterPropertyKind_6870, joker_6890_2, joker_6890_1, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 168)) ;
          var_optionForGeneration_6713 = GGS_toManyRelationshipOptionGeneration::class_func_hasDependance (extractedValue_6785_masterPropertyName_0.readProperty_string (), extensionGetter_swiftTypeName (var_masterPropertyKind_6870, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 171))  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 169)) ;
        }
        break ;
      case GGS_toManyRelationshipOptionAST::Enumeration::enum_hasOpposite:
        {
          GGS_lstring extractedValue_7107_oppositeName_0 ;
          temp_18.readProperty_mOption ().getAssociatedValuesFor_hasOpposite (extractedValue_7107_oppositeName_0) ;
          var_optionForGeneration_6713 = GGS_toManyRelationshipOptionGeneration::class_func_hasOpposite (extractedValue_7107_oppositeName_0.readProperty_string ()  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 174)) ;
        }
        break ;
      case GGS_toManyRelationshipOptionAST::Enumeration::enum_none:
        {
          var_optionForGeneration_6713 = GGS_toManyRelationshipOptionGeneration::class_func_none (SOURCE_FILE ("to-many-relationship.galgas4", 176)) ;
        }
        break ;
      }
      {
      const GGS_toManyRelationshipAST temp_19 = this ;
      const GGS_toManyRelationshipAST temp_20 = this ;
      const GGS_toManyRelationshipAST temp_21 = this ;
      const GGS_toManyRelationshipAST temp_22 = this ;
      const GGS_toManyRelationshipAST temp_23 = this ;
      var_entry_5322.mProperty_mPropertyGenerationList.setter_append (GGS_toManyPropertyGeneration::init_21__21__21__21__21__21__21__21_ (temp_19.readProperty_mToManyRelationshipName ().readProperty_string (), temp_20.readProperty_mGenerateDirectAccess (), temp_21.readProperty_mGenerateDirectRead (), var_kind_6007, var_optionForGeneration_6713, var_inPrefs_6596, temp_22.readProperty_mCustomStore (), temp_23.readProperty_mUsedForSignature (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 179)) ;
      }
      {
      const GGS_toManyRelationshipAST temp_24 = this ;
      ioArgument_ioGeneration.mProperty_mGenerateClass_5F_StoredArrayOf_5F_.setter_insert (temp_24.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 190)) ;
      }
      GalgasBool test_25 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_25) {
        test_25 = var_inPrefs_6596.boolEnum () ;
        if (GalgasBool::boolTrue == test_25) {
          {
          const GGS_toManyRelationshipAST temp_26 = this ;
          ioArgument_ioGeneration.mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_.setter_insert (temp_26.readProperty_mDestinationEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 192)) ;
          }
        }
      }
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_5322, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 195)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                          const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                          const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_toManyPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas4", 230)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 231)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 231)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 231)) ;
      const GGS_toManyPropertyGeneration temp_2 = this ;
      result_result.plusAssignOperation(GGS_string ("  //   To many property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 232)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 232)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 232)) ;
      result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 233)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 233)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 233)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 233)) ;
      GGS_string var_masterPropertyTypeName_9606 ;
      const GGS_toManyPropertyGeneration temp_3 = this ;
      GGS_string joker_9567_1 ; // Joker input parameter
      temp_3.readProperty_mOption ().method_extractHasDependance (joker_9567_1, var_masterPropertyTypeName_9606, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 234)) ;
      const GGS_toManyPropertyGeneration temp_4 = this ;
      const GGS_toManyPropertyGeneration temp_5 = this ;
      result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 235)).add_operation (GGS_string ("_property = TransientArrayOfSuperOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 235)).add_operation (extensionGetter_swiftTypeName (temp_5.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 235)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 235)).add_operation (GGS_string (" <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 235)).add_operation (var_masterPropertyTypeName_9606, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 236)).add_operation (GGS_string ("> ()\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 236)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 235)) ;
      result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 237)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 237)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 237)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 237)) ;
      const GGS_toManyPropertyGeneration temp_6 = this ;
      const GGS_toManyPropertyGeneration temp_7 = this ;
      result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 238)).add_operation (GGS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 238)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 238)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 238)).add_operation (GGS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 238)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 238)) ;
      const GGS_toManyPropertyGeneration temp_8 = this ;
      result_result.plusAssignOperation(GGS_string ("    get { return self.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 239)).add_operation (GGS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 239)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 239)) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_toManyPropertyGeneration temp_10 = this ;
        test_9 = temp_10.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas4", 240)).operator_not (SOURCE_FILE ("to-many-relationship.galgas4", 240)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_toManyPropertyGeneration temp_11 = this ;
          result_result.plusAssignOperation(GGS_string ("    set { self.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 241)).add_operation (GGS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 241)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 241)) ;
        }
      }
      result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 243)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_toManyPropertyGeneration temp_13 = this ;
      test_12 = temp_13.readProperty_mInPreferences ().boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        result_result = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 245)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 245)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 245)) ;
        const GGS_toManyPropertyGeneration temp_14 = this ;
        result_result.plusAssignOperation(GGS_string ("//   To many property: ").add_operation (temp_14.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 246)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 246)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 246)) ;
        result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 247)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 247)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 247)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 247)) ;
        const GGS_toManyPropertyGeneration temp_15 = this ;
        const GGS_toManyPropertyGeneration temp_16 = this ;
        result_result.plusAssignOperation(GGS_string ("@MainActor let preferences_").add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 248)).add_operation (GGS_string ("_property = PreferencesArrayOf_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 248)).add_operation (extensionGetter_swiftTypeName (temp_16.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 248)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 248)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 248)) ;
        const GGS_toManyPropertyGeneration temp_17 = this ;
        result_result.plusAssignOperation(GGS_string (" (prefKey: Preferences_").add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 249)).add_operation (GGS_string (")\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 249)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 249)) ;
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 251)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 251)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 251)) ;
      const GGS_toManyPropertyGeneration temp_18 = this ;
      result_result.plusAssignOperation(GGS_string ("  //   To many property: ").add_operation (temp_18.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 252)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 252)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 252)) ;
      result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 253)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 253)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 253)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 253)) ;
      const GGS_toManyPropertyGeneration temp_19 = this ;
      result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_19.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 254)).add_operation (GGS_string ("_property = "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 254)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 254)) ;
      GalgasBool test_20 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_20) {
        const GGS_toManyPropertyGeneration temp_21 = this ;
        test_20 = temp_21.readProperty_mCustomStore ().boolEnum () ;
        if (GalgasBool::boolTrue == test_20) {
          const GGS_toManyPropertyGeneration temp_22 = this ;
          result_result.plusAssignOperation(GGS_string ("Custom_").add_operation (extensionGetter_swiftTypeName (temp_22.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 256)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 256)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 256)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 256)) ;
        }
      }
      const GGS_toManyPropertyGeneration temp_23 = this ;
      result_result.plusAssignOperation(GGS_string ("StoredArrayOf_").add_operation (extensionGetter_swiftTypeName (temp_23.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 258)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 258)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 258)) ;
      const GGS_toManyPropertyGeneration temp_24 = this ;
      result_result.plusAssignOperation(GGS_string (" (usedForSignature: ").add_operation (temp_24.readProperty_mUsedForSignature ().getter_cString (SOURCE_FILE ("to-many-relationship.galgas4", 259)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 259)).add_operation (GGS_string (", key: "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 259)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 259)) ;
      GalgasBool test_25 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_25) {
        const GGS_toManyPropertyGeneration temp_26 = this ;
        test_25 = temp_26.readProperty_mCustomStore ().boolEnum () ;
        if (GalgasBool::boolTrue == test_25) {
          const GGS_toManyPropertyGeneration temp_27 = this ;
          const GGS_toManyPropertyGeneration temp_28 = this ;
          result_result.plusAssignOperation(GGS_string ("KEY_FOR_").add_operation (extensionGetter_swiftTypeName (temp_27.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 261)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 261)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 261)).add_operation (temp_28.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 261)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 261)) ;
        }
      }
      if (GalgasBool::boolFalse == test_25) {
        const GGS_toManyPropertyGeneration temp_29 = this ;
        result_result.plusAssignOperation(GGS_string ("\"").add_operation (temp_29.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 263)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 263)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 263)) ;
      }
      result_result.plusAssignOperation(GGS_string (")\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 265)) ;
      GalgasBool test_30 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_30) {
        const GGS_toManyPropertyGeneration temp_31 = this ;
        GGS_bool test_32 = temp_31.readProperty_mGenerateDirectAccess () ;
        if (GalgasBool::boolTrue != test_32.boolEnum ()) {
          const GGS_toManyPropertyGeneration temp_33 = this ;
          test_32 = temp_33.readProperty_mGenerateDirectRead () ;
        }
        test_30 = test_32.boolEnum () ;
        if (GalgasBool::boolTrue == test_30) {
          result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 267)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 267)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 267)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 267)) ;
          const GGS_toManyPropertyGeneration temp_34 = this ;
          const GGS_toManyPropertyGeneration temp_35 = this ;
          result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_34.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 268)).add_operation (GGS_string (" : EBReferenceArray <"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 268)).add_operation (extensionGetter_swiftTypeName (temp_35.readProperty_mRelationshipType (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 268)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 268)).add_operation (GGS_string ("> {\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 268)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 268)) ;
          const GGS_toManyPropertyGeneration temp_36 = this ;
          result_result.plusAssignOperation(GGS_string ("    get { return self.").add_operation (temp_36.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 269)).add_operation (GGS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 269)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 269)) ;
          GalgasBool test_37 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_37) {
            const GGS_toManyPropertyGeneration temp_38 = this ;
            test_37 = temp_38.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.galgas4", 270)).operator_not (SOURCE_FILE ("to-many-relationship.galgas4", 270)).boolEnum () ;
            if (GalgasBool::boolTrue == test_37) {
              const GGS_toManyPropertyGeneration temp_39 = this ;
              test_37 = temp_39.readProperty_mGenerateDirectAccess ().boolEnum () ;
              if (GalgasBool::boolTrue == test_37) {
                const GGS_toManyPropertyGeneration temp_40 = this ;
                result_result.plusAssignOperation(GGS_string ("    set { self.").add_operation (temp_40.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 271)).add_operation (GGS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 271)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 271)) ;
              }
            }
          }
          result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 273)) ;
        }
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration prefKeyDefinitionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyPropertyGeneration::getter_prefKeyDefinitionCode (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_toManyPropertyGeneration temp_0 = this ;
  const GGS_toManyPropertyGeneration temp_1 = this ;
  result_result = GGS_string ("fileprivate let Preferences_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 287)).add_operation (GGS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 287)).add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 287)).add_operation (GGS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 287)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyPropertyGeneration::getter_configurationCode (const GGS_bool constinArgument_inPreferences,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GGS_string temp_0 ;
  const GalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_1) {
    temp_0 = GGS_string ("preferences_") ;
  }else if (GalgasBool::boolFalse == test_1) {
    temp_0 = GGS_string ("self.") ;
  }
  GGS_string var_prefix_12796 = temp_0 ;
  GGS_string temp_2 ;
  const GalgasBool test_3 = constinArgument_inPreferences.boolEnum () ;
  if (GalgasBool::boolTrue == test_3) {
    temp_2 = GGS_string ("self.undoManager") ;
  }else if (GalgasBool::boolFalse == test_3) {
    temp_2 = GGS_string ("inUndoManager") ;
  }
  GGS_string var_undoManager_12865 = temp_2 ;
  const GGS_toManyPropertyGeneration temp_4 = this ;
  switch (temp_4.readProperty_mOption ().enumValue ()) {
  case GGS_toManyRelationshipOptionGeneration::Enumeration::invalid:
    break ;
  case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_none:
    {
      const GGS_toManyPropertyGeneration temp_5 = this ;
      result_result = GGS_string ("  //--- To many property: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 297)).add_operation (GGS_string (" (no option)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 297)) ;
      const GGS_toManyPropertyGeneration temp_6 = this ;
      result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_12796, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 298)).add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 298)).add_operation (GGS_string ("_property.undoManager = "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 298)).add_operation (var_undoManager_12865, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 298)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 298)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 298)) ;
    }
    break ;
  case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_hasDependance:
    {
      GGS_string extractedValue_13188__0 ;
      GGS_string extractedValue_13188__1 ;
      temp_4.readProperty_mOption ().getAssociatedValuesFor_hasDependance (extractedValue_13188__0, extractedValue_13188__1) ;
      result_result = GGS_string::makeEmptyString () ;
    }
    break ;
  case GGS_toManyRelationshipOptionGeneration::Enumeration::enum_hasOpposite:
    {
      GGS_string extractedValue_13237_oppositeName_0 ;
      temp_4.readProperty_mOption ().getAssociatedValuesFor_hasOpposite (extractedValue_13237_oppositeName_0) ;
      const GGS_toManyPropertyGeneration temp_7 = this ;
      result_result = GGS_string ("  //--- To many property: ").add_operation (temp_7.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 302)).add_operation (GGS_string (" (has opposite relationship)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 302)) ;
      const GGS_toManyPropertyGeneration temp_8 = this ;
      result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_12796, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 303)).add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 303)).add_operation (GGS_string ("_property.undoManager = "), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 303)).add_operation (var_undoManager_12865, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 303)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 303)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 303)) ;
      const GGS_toManyPropertyGeneration temp_9 = this ;
      result_result.plusAssignOperation(GGS_string ("    ").add_operation (var_prefix_12796, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 304)).add_operation (temp_9.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 304)).add_operation (GGS_string ("_property.setOppositeRelationShipFunctions (\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 304)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 304)) ;
      result_result.plusAssignOperation(GGS_string ("      setter: { [weak self] inObject in if let me = self { inObject.").add_operation (extractedValue_13237_oppositeName_0, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 305)).add_operation (GGS_string ("_property.setProp (me) } },\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 305)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 305)) ;
      result_result.plusAssignOperation(GGS_string ("      resetter: { inObject in inObject.").add_operation (extractedValue_13237_oppositeName_0, inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 306)).add_operation (GGS_string ("_property.setProp (nil) }\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 306)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 306)) ;
      result_result.plusAssignOperation(GGS_string ("    )\n"), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 307)) ;
    }
    break ;
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = constinArgument_inPreferences.operator_not (SOURCE_FILE ("to-many-relationship.galgas4", 309)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_toManyPropertyGeneration temp_11 = this ;
      result_result.plusAssignOperation(GGS_string ("    self.accumulateProperty (self.").add_operation (temp_11.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 310)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 310)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 310)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutDocumentDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 33)) ;
  }
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addEdge (temp_2.readProperty_mClassName (), temp_3.readProperty_mRootEntityName () COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 34)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutDocumentDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_autoLayoutDocumentDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutDocumentDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                       GGS_generationStruct & ioArgument_ioGeneration,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_actionMap_4838 ;
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  routine_buildActionMap_3F__21_ (temp_0.readProperty_mActionDeclarationList (), var_actionMap_4838, inCompiler  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 134)) ;
  }
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_1 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  GGS_propertyGenerationList temp_3 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 140)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (temp_1.readProperty_mClassName (), GGS_classKind::class_func_document (temp_2.readProperty_mRootEntityName ()  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 137)), GGS_propertyMap::init (inCompiler COMMA_HERE), var_actionMap_4838, temp_3, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 135)) ;
  }
  UpEnumerator_actionMap enumerator_5010 (var_actionMap_4838) ;
  while (enumerator_5010.hasCurrentObject ()) {
    {
    const GGS_autoLayoutDocumentDeclarationAST temp_4 = this ;
    ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_actionFileGeneration::init_21__21_ (temp_4.readProperty_mClassName ().readProperty_string (), enumerator_5010.current_lkey (HERE).readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 143)) ;
    }
    enumerator_5010.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutDocumentDeclarationAST fourthAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentDeclarationAST::method_fourthAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GGS_generationStruct & ioArgument_ioGeneration,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap var_preferencesPropertyMap_5527 ;
  GGS_classKind joker_5514 ; // Joker input parameter
  GGS_actionMap joker_5555_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_5555_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 158)), GGS_location::class_func_nowhere (SOURCE_FILE ("document-auto-layout.galgas4", 158)), inCompiler COMMA_HERE), joker_5514, var_preferencesPropertyMap_5527, joker_5555_2, joker_5555_1, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 157)) ;
  GGS_propertyMap var_documentPropertyMap_5687 ;
  GGS_actionMap var_documentActionMap_5717 ;
  GGS_propertyGenerationList var_documentPropertyGenerationList_5745 ;
  const GGS_autoLayoutDocumentDeclarationAST temp_0 = this ;
  GGS_classKind joker_5674 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string (), GGS_location::class_func_nowhere (SOURCE_FILE ("document-auto-layout.galgas4", 165)), inCompiler COMMA_HERE), joker_5674, var_documentPropertyMap_5687, var_documentActionMap_5717, var_documentPropertyGenerationList_5745, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 164)) ;
  GGS_propertyMap var_rootPropertyMap_5898 ;
  GGS_actionMap var_rootActionMap_5931 ;
  GGS_propertyGenerationList var_rootPropertyGenerationList_5962 ;
  const GGS_autoLayoutDocumentDeclarationAST temp_1 = this ;
  GGS_classKind joker_5885 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mRootEntityName (), joker_5885, var_rootPropertyMap_5898, var_rootActionMap_5931, var_rootPropertyGenerationList_5962, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 172)) ;
  GGS_regularBindingsGenerationList var_regularBindingsGenerationList_6324 ;
  GGS_multipleBindingGenerationList var_multipleBindingGenerationList_6391 ;
  GGS_actionBindingListForGeneration var_actionBindingListForGeneration_6463 ;
  GGS_decoratedOutletMap var_outletMap_6524 ;
  GGS_tableViewBindingGenerationList var_tableViewBindingGenerationList_6576 ;
  GGS_ebViewGraphicControllerBindingGenerationList var_ebViewGraphicControllerBindingGenerationList_6663 ;
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_2 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_3 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_4 = this ;
  routine_analyzeOutlets_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__21__21__21__21__21__21_ (GGS_bool (false), var_rootPropertyMap_5898, var_preferencesPropertyMap_5527, temp_2.readProperty_mRootEntityName ().readProperty_string (), ioArgument_ioSemanticContext, temp_3.readProperty_mOutletDeclarationList (), var_documentPropertyMap_5687, var_documentActionMap_5717, temp_4.readProperty_mClassName ().readProperty_string (), ioArgument_ioGeneration, var_regularBindingsGenerationList_6324, var_multipleBindingGenerationList_6391, var_actionBindingListForGeneration_6463, var_outletMap_6524, var_tableViewBindingGenerationList_6576, var_ebViewGraphicControllerBindingGenerationList_6663, inCompiler  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 180)) ;
  }
  const GGS_autoLayoutDocumentDeclarationAST temp_5 = this ;
  UpEnumerator_arrayControllerBindingListAST enumerator_6768 (temp_5.readProperty_mArrayControllerBindingListAST ()) ;
  while (enumerator_6768.hasCurrentObject ()) {
    switch (enumerator_6768.current_mHiddenSelectionViewBindingDescriptor (HERE).enumValue ()) {
    case GGS_multipleBindingDescriptor::Enumeration::invalid:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_noBinding:
      break ;
    case GGS_multipleBindingDescriptor::Enumeration::enum_binding:
      {
        GGS_abstractBooleanMultipleBindingExpressionAST extractedValue_6948_expression_0 ;
        enumerator_6768.current_mHiddenSelectionViewBindingDescriptor (HERE).getAssociatedValuesFor_binding (extractedValue_6948_expression_0) ;
        GGS_abstractBooleanMultipleBindingExpressionForGeneration var_hiddenExpression_7220 ;
        GGS_typeKind var_type_7261 ;
        GGS_location var_errorLocation_7290 ;
        callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) extractedValue_6948_expression_0.ptr (), GGS_bool (false), var_rootPropertyMap_5898, ioArgument_ioSemanticContext, var_documentPropertyMap_5687, var_preferencesPropertyMap_5527, var_hiddenExpression_7220, var_type_7261, var_errorLocation_7290, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 204)) ;
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = var_type_7261.getter_isBoolType (SOURCE_FILE ("document-auto-layout.galgas4", 214)).operator_not (SOURCE_FILE ("document-auto-layout.galgas4", 214)).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GenericArray <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (var_errorLocation_7290, GGS_string ("expression is not boolean"), fixItArray7  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 215)) ;
          }
        }
        {
        var_multipleBindingGenerationList_6391.setter_append (enumerator_6768.current_mControllerName (HERE).readProperty_string (), GGS_string ("hidden"), var_hiddenExpression_7220, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 217)) ;
        }
      }
      break ;
    }
    enumerator_6768.gotoNextObject () ;
  }
  GGS_autoLayoutViewDeclarationMap var_viewDeclarationMap_7639 = GGS_autoLayoutViewDeclarationMap::init (inCompiler COMMA_HERE) ;
  GGS_viewGenerationList temp_8 = GGS_viewGenerationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 226)) ;
  GGS_viewGenerationList var_viewGenerationList_7689 = temp_8 ;
  GGS_implicitViewFunctionGenerationList temp_9 = GGS_implicitViewFunctionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 227)) ;
  GGS_implicitViewFunctionGenerationList var_implicitViewFunctionGenerationList_7755 = temp_9 ;
  GGS_autoLayoutConfiguratorMap var_configuratorMap_7828 = GGS_autoLayoutConfiguratorMap::init (inCompiler COMMA_HERE) ;
  GGS_autoLayoutOutletMap var_autoLayoutOutletMap_7876 = GGS_autoLayoutOutletMap::init (inCompiler COMMA_HERE) ;
  const GGS_autoLayoutDocumentDeclarationAST temp_10 = this ;
  UpEnumerator_astViewDeclarationList enumerator_7918 (temp_10.readProperty_mViewDeclarationList ()) ;
  while (enumerator_7918.hasCurrentObject ()) {
    {
    var_viewDeclarationMap_7639.setter_insertKey (enumerator_7918.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 231)) ;
    }
    GGS_abstractViewGeneration var_viewGeneration_8404 ;
    const GGS_autoLayoutDocumentDeclarationAST temp_11 = this ;
    callExtensionMethod_checkView ((cPtr_astAbstractViewDeclaration *) enumerator_7918.current_mView (HERE).ptr (), enumerator_7918.current_mViewName (HERE).readProperty_string (), var_viewDeclarationMap_7639, GGS_bool (false), var_rootPropertyMap_5898, var_preferencesPropertyMap_5527, ioArgument_ioSemanticContext, var_documentPropertyMap_5687, var_documentActionMap_5717, temp_11.readProperty_mClassName ().readProperty_string (), ioArgument_ioSemanticContext.readProperty_mClassMap (), var_implicitViewFunctionGenerationList_7755, var_configuratorMap_7828, var_autoLayoutOutletMap_7876, var_viewGeneration_8404, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 232)) ;
    {
    var_viewGenerationList_7689.setter_append (enumerator_7918.current_mViewName (HERE).readProperty_string (), var_viewGeneration_8404, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 248)) ;
    }
    enumerator_7918.gotoNextObject () ;
  }
  const GGS_autoLayoutDocumentDeclarationAST temp_12 = this ;
  var_viewDeclarationMap_7639.method_searchKey (temp_12.readProperty_mMainViewName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 250)) ;
  ioArgument_ioGeneration.mProperty_mGenerateEBManagedAutoLayoutDocumentSwift = GGS_bool (true) ;
  GGS_autoLayoutOutletLinkerGenerationList temp_13 = GGS_autoLayoutOutletLinkerGenerationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 254)) ;
  GGS_autoLayoutOutletLinkerGenerationList var_outletLinkerGenerationList_8696 = temp_13 ;
  GGS_stringset temp_14 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 255)) ;
  GGS_stringset var_linkerNameSet_8745 = temp_14 ;
  const GGS_autoLayoutDocumentDeclarationAST temp_15 = this ;
  UpEnumerator_astAutoLayoutOutletLinkerList enumerator_8783 (temp_15.readProperty_mOutletLinkerList ()) ;
  while (enumerator_8783.hasCurrentObject ()) {
    GalgasBool test_16 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_16) {
      test_16 = var_linkerNameSet_8745.getter_hasKey (enumerator_8783.current_mLinkerName (HERE).readProperty_string () COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 257)).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        GenericArray <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (enumerator_8783.current_mLinkerName (HERE).readProperty_location (), GGS_string ("duplicated linker name"), fixItArray17  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 258)) ;
      }
    }
    {
    var_linkerNameSet_8745.setter_insert (enumerator_8783.current_mLinkerName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 260)) ;
    }
    GGS__32_stringlist temp_18 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 261)) ;
    GGS__32_stringlist var_outletNameAndTypeNameList_9008 = temp_18 ;
    UpEnumerator_lstringlist enumerator_9048 (enumerator_8783.current_mOutletNameList (HERE)) ;
    while (enumerator_9048.hasCurrentObject ()) {
      GGS_string var_outletTypeName_9134 ;
      GGS_bool var_outletIsArray_9162 ;
      var_autoLayoutOutletMap_7876.method_searchKey (enumerator_9048.current_mValue (HERE), var_outletTypeName_9134, var_outletIsArray_9162, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 263)) ;
      {
      var_outletNameAndTypeNameList_9008.setter_append (enumerator_9048.current_mValue (HERE).readProperty_string (), var_outletTypeName_9134, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 264)) ;
      }
      enumerator_9048.gotoNextObject () ;
    }
    {
    var_outletLinkerGenerationList_8696.setter_append (enumerator_8783.current_mLinkerName (HERE).readProperty_string (), var_outletNameAndTypeNameList_9008, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 266)) ;
    }
    enumerator_8783.gotoNextObject () ;
  }
  {
  const GGS_autoLayoutDocumentDeclarationAST temp_19 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_20 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_21 = this ;
  const GGS_autoLayoutDocumentDeclarationAST temp_22 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_autoLayoutDocumentFileGeneration::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (temp_19.readProperty_mClassName ().readProperty_string (), temp_20.readProperty_mRootEntityName ().readProperty_string (), temp_21.readProperty_mMainViewName ().readProperty_string (), var_documentPropertyGenerationList_5745, var_outletMap_6524, var_autoLayoutOutletMap_7876, var_actionBindingListForGeneration_6463, var_regularBindingsGenerationList_6324, var_multipleBindingGenerationList_6391, var_tableViewBindingGenerationList_6576, var_ebViewGraphicControllerBindingGenerationList_6663, var_viewGenerationList_7689, var_implicitViewFunctionGenerationList_7755, var_configuratorMap_7828, temp_22.readProperty_mCustomSuperClassName (), var_outletLinkerGenerationList_8696, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 269)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutDocumentFileGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                                          const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                          GGS_stringset & /* ioArgument_ioUsedProtocolSet */,
                                                                          GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@autoLayoutDocumentFileGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDocumentFileGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                          const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                          const GGS_stringset /* constinArgument_inUsedProtocolSet */,
                                                                          GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_autoLayoutDocumentFileGeneration temp_0 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_1 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_2 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_3 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_4 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_5 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_6 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_7 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_8 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_9 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_10 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_11 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_12 = this ;
  const GGS_autoLayoutDocumentFileGeneration temp_13 = this ;
  GGS_string temp_14 ;
  const GalgasBool test_15 = GGS_bool (ComparisonKind::equal, temp_13.readProperty_mCustomSuperClassName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
  if (GalgasBool::boolTrue == test_15) {
    temp_14 = GGS_string ("EBAutoLayoutManagedDocument") ;
  }else if (GalgasBool::boolFalse == test_15) {
    const GGS_autoLayoutDocumentFileGeneration temp_16 = this ;
    temp_14 = temp_16.readProperty_mCustomSuperClassName () ;
  }
  const GGS_autoLayoutDocumentFileGeneration temp_17 = this ;
  GGS_string var_s_12121 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentImplementation (inCompiler, temp_0.readProperty_mDocumentName (), temp_1.readProperty_mRootEntityName (), temp_2.readProperty_mMainViewName (), temp_3.readProperty_mDocumentPropertyGenearionList (), temp_4.readProperty_mOutletMap (), temp_5.readProperty_mAutoLayoutOutletMap (), temp_6.readProperty_mTargetActionList (), temp_7.readProperty_mRegularBindingsGenerationList (), temp_8.readProperty_multipleBindingGenerationList (), temp_9.readProperty_mTableViewBindingGenerationList (), temp_10.readProperty_mEBViewBindingGenerationList (), temp_11.readProperty_mViewDeclarationList (), temp_12.readProperty_mImplicitViewFunctionGenerationList (), temp_14, temp_17.readProperty_mOutletLinkerGenerationList () COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 330))) ;
  const GGS_autoLayoutDocumentFileGeneration temp_18 = this ;
  GGS_string var_fileName_12792 = GGS_string ("document-").add_operation (temp_18.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 347)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 347)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_12792, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 348)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_12792, var_s_12121, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 349)) ;
  }
  const GGS_autoLayoutDocumentFileGeneration temp_19 = this ;
  UpEnumerator_autoLayoutConfiguratorMap enumerator_12979 (temp_19.readProperty_mConfiguratorMap ()) ;
  while (enumerator_12979.hasCurrentObject ()) {
    const GGS_autoLayoutDocumentFileGeneration temp_20 = this ;
    GGS_string var_s_13031 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, temp_20.readProperty_mDocumentName (), enumerator_12979.current_lkey (HERE).readProperty_string (), enumerator_12979.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 355))) ;
    GGS_string var_header_13213 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 360)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 360)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 360)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 362)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 362)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 362)).add_operation (GGS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 362)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 363)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 364)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 364)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 364)) ;
    const GGS_autoLayoutDocumentFileGeneration temp_21 = this ;
    GGS_string var_fileName_13555 = GGS_string ("configurator-").add_operation (temp_21.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 365)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 365)).add_operation (enumerator_12979.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 365)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 365)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_13555, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 366)) ;
    }
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_13555, GGS_string ("//"), var_header_13213, GGS_string ("\n\n"), var_s_13031, GGS_string ("INSERT CONFIGURATION CODE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 375)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 375)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 375)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 367)) ;
    }
    enumerator_12979.gotoNextObject () ;
  }
  const GGS_autoLayoutDocumentFileGeneration temp_22 = this ;
  UpEnumerator_autoLayoutOutletLinkerGenerationList enumerator_14134 (temp_22.readProperty_mOutletLinkerGenerationList ()) ;
  while (enumerator_14134.hasCurrentObject ()) {
    const GGS_autoLayoutDocumentFileGeneration temp_23 = this ;
    GGS_string var_s_14208 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_outletLinkerImplementation (inCompiler, temp_23.readProperty_mDocumentName (), enumerator_14134.current_mLinkerName (HERE), enumerator_14134.current_mOutletNameAndTypeNameList (HERE) COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 380))) ;
    GGS_string var_header_14380 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 385)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 385)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 385)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 387)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 387)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 387)).add_operation (GGS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 387)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 388)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 389)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 389)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 389)) ;
    const GGS_autoLayoutDocumentFileGeneration temp_24 = this ;
    GGS_string var_fileName_14722 = GGS_string ("linker-").add_operation (temp_24.readProperty_mDocumentName (), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 390)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 390)).add_operation (enumerator_14134.current_mLinkerName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 390)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 390)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_14722, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 391)) ;
    }
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_14722, GGS_string ("//"), var_header_14380, GGS_string ("\n\n"), var_s_14208, GGS_string ("INSERT CONFIGURATION CODE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 400)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 400)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 400)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 392)) ;
    }
    enumerator_14134.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'autoLayoutDocumentGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_autoLayoutDocumentGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_3,
  0,
  gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_autoLayoutDocumentGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_1,
  0,
  gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_autoLayoutDocumentGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_2,
  0,
  gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_0 [4] = {
  & gWrapperDirectory_3_autoLayoutDocumentGenerationTemplate,
  & gWrapperDirectory_1_autoLayoutDocumentGenerationTemplate,
  & gWrapperDirectory_2_autoLayoutDocumentGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_autoLayoutDocumentGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_autoLayoutDocumentGenerationTemplate_0,
  3,
  gWrapperAllDirectories_autoLayoutDocumentGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate documentImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentImplementation (Compiler * inCompiler,
                                                                                            const GGS_string & in_DOCUMENT_5F_CLASS_5F_NAME,
                                                                                            const GGS_string & in_ROOT_5F_ENTITY_5F_NAME,
                                                                                            const GGS_string & in_MAIN_5F_VIEW_5F_NAME,
                                                                                            const GGS_propertyGenerationList & in_DOCUMENT_5F_PROPERTY_5F_LIST,
                                                                                            const GGS_decoratedOutletMap & in_OUTLET_5F_GENERATION_5F_MAP,
                                                                                            const GGS_autoLayoutOutletMap & in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP,
                                                                                            const GGS_actionBindingListForGeneration & /* in_TARGET_5F_ACTION_5F_LIST */,
                                                                                            const GGS_regularBindingsGenerationList & /* in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST */,
                                                                                            const GGS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                                            const GGS_tableViewBindingGenerationList & /* in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST */,
                                                                                            const GGS_ebViewGraphicControllerBindingGenerationList & /* in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST */,
                                                                                            const GGS_viewGenerationList & in_VIEW_5F_GENERATION_5F_LIST,
                                                                                            const GGS_implicitViewFunctionGenerationList & in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST,
                                                                                            const GGS_string & in_DOCUMENT_5F_SUPER_5F_CLASS_5F_NAME,
                                                                                            const GGS_autoLayoutOutletLinkerGenerationList & in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n\n@objc(") ;
  result.appendString (in_DOCUMENT_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (") class ") ;
  result.appendString (in_DOCUMENT_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (in_DOCUMENT_5F_SUPER_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  \n") ;
  GGS_uint index_521_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_521 (in_DOCUMENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_521.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_521.current_mProperty (HERE).ptr (), GGS_bool (false), GGS_bool (true), GGS_stringset::class_func_emptySet (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 13)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 13)).stringValue ()) ;
      enumerator_521.gotoNextObject () ;
      index_521_.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Outlets\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_901_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP.isValid ()) {
    UpEnumerator_autoLayoutOutletMap enumerator_901 (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP) ;
    while (enumerator_901.hasCurrentObject ()) {
      const GalgasBool test_0 = enumerator_901.current_mOutletIsArray (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("  final var ") ;
        result.appendString (enumerator_901.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" = EBWeakReferenceArray <AutoLayout") ;
        result.appendString (enumerator_901.current_mAutoLayoutOutletTypeName (HERE).stringValue ()) ;
        result.appendString ("> ()\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("  weak final var ") ;
        result.appendString (enumerator_901.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" : AutoLayout") ;
        result.appendString (enumerator_901.current_mAutoLayoutOutletTypeName (HERE).stringValue ()) ;
        result.appendString ("\? = nil\n") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_901.gotoNextObject () ;
      index_901_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Outlets\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_1408_ (0) ;
  if (in_OUTLET_5F_GENERATION_5F_MAP.isValid ()) {
    UpEnumerator_decoratedOutletMap enumerator_1408 (in_OUTLET_5F_GENERATION_5F_MAP) ;
    while (enumerator_1408.hasCurrentObject ()) {
      result.appendString ("  @IBOutlet final var ") ;
      result.appendString (enumerator_1408.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (enumerator_1408.current_mOutletTypeName (HERE).stringValue ()) ;
      result.appendString ("\? = nil\n") ;
      enumerator_1408.gotoNextObject () ;
      index_1408_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Multiple bindings controllers\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_1818_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_multipleBindingGenerationList enumerator_1818 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST) ;
    while (enumerator_1818.hasCurrentObject ()) {
      result.appendString ("//  final var mController_") ;
      result.appendString (enumerator_1818.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_1818.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" : MultipleBindingController_") ;
      result.appendString (enumerator_1818.current_mBindingName (HERE).stringValue ()) ;
      result.appendString ("\? = nil\n") ;
      enumerator_1818.gotoNextObject () ;
      index_1818_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    displayName\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override var displayName : String\? {\n    get {\n      return super.displayName\n    }\n    set {\n      super.displayName = newValue\n      self.documentFileName_property.observedObjectDidChange ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    rootEntityClassName\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override final func rootEntityClassName () -> String {\n    return \"") ;
  result.appendString (in_ROOT_5F_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString ("\"\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    rootObject\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final var rootObject : ") ;
  result.appendString (in_ROOT_5F_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" { return self.mRootObject as! ") ;
  result.appendString (in_ROOT_5F_ENTITY_5F_NAME.stringValue ()) ;
  result.appendString (" }\n\n") ;
  GGS_uint index_3064_ (0) ;
  if (in_VIEW_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_viewGenerationList enumerator_3064 (in_VIEW_5F_GENERATION_5F_LIST) ;
    while (enumerator_3064.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    VIEW ") ;
      result.appendString (enumerator_3064.current_mViewName (HERE).stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
      result.appendString (callExtensionGetter_generateViewBuilder ((const cPtr_abstractViewGeneration *) enumerator_3064.current_mView (HERE).ptr (), GGS_bool (false), enumerator_3064.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 78)).stringValue ()) ;
      enumerator_3064.gotoNextObject () ;
      index_3064_.increment () ;
    }
  }
  GGS_uint index_3440_idx (0) ;
  if (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST.isValid ()) {
    UpEnumerator_implicitViewFunctionGenerationList enumerator_3440 (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST) ;
    while (enumerator_3440.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    IMPLICIT VIEW ") ;
      result.appendString (index_3440_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 82)).stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final func computeImplicitView_") ;
      result.appendString (index_3440_idx.getter_string (SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 84)).stringValue ()) ;
      result.appendString (" () -> NSView {\n") ;
      result.appendString (callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_3440.current_mInstruction (HERE).ptr (), GGS_bool (false), GGS_string ("view"), GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 85)).stringValue ()) ;
      result.appendString ("    return view\n  }\n\n") ;
      enumerator_3440.gotoNextObject () ;
      index_3440_idx.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Build User Interface\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func ebBuildUserInterface () {\n  //--------------------------- Read documentFileName model\n    self.documentFileName_property.mReadModelFunction = { [weak self] in\n      if let r = self\?.displayName {\n        return .single (r)\n      }else{\n        return .single (\"\")\n      }\n    }\n  //--- Build window content view\n    self.configureProperties ()\n    let mainView = self.") ;
  result.appendString (in_MAIN_5F_VIEW_5F_NAME.stringValue ()) ;
  result.appendString (" ()\n  //--- Call outlet linkers\n") ;
  GGS_uint index_4631_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST.isValid ()) {
    UpEnumerator_autoLayoutOutletLinkerGenerationList enumerator_4631 (in_AUTO_5F_LAYOUT_5F_LINKER_5F_LIST) ;
    while (enumerator_4631.hasCurrentObject ()) {
      result.appendString ("    self.linker_") ;
      result.appendString (enumerator_4631.current_mLinkerName (HERE).stringValue ()) ;
      result.appendString (" (") ;
      GGS_uint index_4740_ (0) ;
      if (enumerator_4631.current_mOutletNameAndTypeNameList (HERE).isValid ()) {
        UpEnumerator__32_stringlist enumerator_4740 (enumerator_4631.current_mOutletNameAndTypeNameList (HERE)) ;
        while (enumerator_4740.hasCurrentObject ()) {
          result.appendString ("self.") ;
          result.appendString (enumerator_4740.current_mValue_30_ (HERE).stringValue ()) ;
          enumerator_4740.gotoNextObject () ;
          if (enumerator_4740.hasCurrentObject ()) {
            result.appendString (", ") ;
          }
          index_4740_.increment () ;
        }
      }
      result.appendString (")\n") ;
      enumerator_4631.gotoNextObject () ;
      index_4631_.increment () ;
    }
  }
  result.appendString ("  //--- Assign main view to window\n    self.windowForSheet\?.setContentView (mainView)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    configureProperties\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final private func configureProperties () {\n") ;
  GGS_uint index_5224_ (0) ;
  if (in_DOCUMENT_5F_PROPERTY_5F_LIST.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_5224 (in_DOCUMENT_5F_PROPERTY_5F_LIST) ;
    while (enumerator_5224.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_5224.current_mProperty (HERE).ptr (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.swift.galgasTemplate", 125)).stringValue ()) ;
      result.appendString ("\n") ;
      enumerator_5224.gotoNextObject () ;
      index_5224_.increment () ;
    }
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate documentOutletConfiguratorImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (Compiler * /* inCompiler */,
                                                                                                              const GGS_string & in_DOCUMENT_5F_TYPE_5F_NAME,
                                                                                                              const GGS_string & in_OUTLET_5F_NAME,
                                                                                                              const GGS_string & in_OUTLET_5F_TYPE_5F_NAME
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nextension ") ;
  result.appendString (in_DOCUMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  final func configure_") ;
  result.appendString (in_OUTLET_5F_NAME.stringValue ()) ;
  result.appendString (" (_ inOutlet : AutoLayout") ;
  result.appendString (in_OUTLET_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (") {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutDocumentGenerationTemplate outletLinkerImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_autoLayoutDocumentGenerationTemplate_outletLinkerImplementation (Compiler * /* inCompiler */,
                                                                                                const GGS_string & in_DOCUMENT_5F_TYPE_5F_NAME,
                                                                                                const GGS_string & in_LINKER_5F_NAME,
                                                                                                const GGS__32_stringlist & in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nextension ") ;
  result.appendString (in_DOCUMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  final func linker_") ;
  result.appendString (in_LINKER_5F_NAME.stringValue ()) ;
  result.appendString (" (") ;
  GGS_uint index_235_ (0) ;
  if (in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_235 (in_OUTLET_5F_NAME_5F_AND_5F_TYPE_5F_NAME_5F_LIST) ;
    while (enumerator_235.hasCurrentObject ()) {
      result.appendString ("_ in_") ;
      result.appendString (enumerator_235.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" : AutoLayout") ;
      result.appendString (enumerator_235.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString ("\?") ;
      enumerator_235.gotoNextObject () ;
      if (enumerator_235.hasCurrentObject ()) {
        result.appendString (", ") ;
      }
      index_235_.increment () ;
    }
  }
  result.appendString (") {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@prefsDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_prefsDeclarationAST temp_0 = this ;
  const GGS_prefsDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 24)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@prefsDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_prefsDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_prefsDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Once function 'preferencesName'
//
//--------------------------------------------------------------------------------------------------

static GGS_string onceFunction_preferencesName (Compiler *
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  result_outResult = GGS_string ("Preferences") ;
//---
  return result_outResult ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_preferencesName = false ;
static GGS_string gOnceFunctionResult_preferencesName ;

//--------------------------------------------------------------------------------------------------

GGS_string function_preferencesName (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_preferencesName) {
    gOnceFunctionResult_preferencesName = onceFunction_preferencesName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_preferencesName = true ;
  }
  return gOnceFunctionResult_preferencesName ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_preferencesName (void) {
  gOnceFunctionResult_preferencesName.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_preferencesName (nullptr,
                                                           releaseOnceFunctionResult_preferencesName) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_preferencesName [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_preferencesName (Compiler * inCompiler,
                                                             const GALGAS_ObjectArray & /* inEffectiveParameterArray */,
                                                             const GGS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_preferencesName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_preferencesName ("preferencesName",
                                                                 functionWithGenericHeader_preferencesName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_preferencesName) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@prefsDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                          GGS_generationStruct & ioArgument_ioGeneration,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionMap var_actionMap_3974 ;
  {
  const GGS_prefsDeclarationAST temp_0 = this ;
  routine_buildActionMap_3F__21_ (temp_0.readProperty_mDeclaration ().readProperty_mActionDeclarationList (), var_actionMap_3974, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas4", 94)) ;
  }
  {
  GGS_propertyGenerationList temp_1 = GGS_propertyGenerationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 100)) ;
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_insertKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 96)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("preferences.galgas4", 96)), inCompiler COMMA_HERE), GGS_classKind::class_func_prefs (SOURCE_FILE ("preferences.galgas4", 97)), GGS_propertyMap::init (inCompiler COMMA_HERE), var_actionMap_3974, temp_1, inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 95)) ;
  }
  UpEnumerator_actionMap enumerator_4116 (var_actionMap_3974) ;
  while (enumerator_4116.hasCurrentObject ()) {
    {
    const GGS_prefsDeclarationAST temp_2 = this ;
    ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_actionFileGeneration::init_21__21_ (temp_2.readProperty_mClassName ().readProperty_string (), enumerator_4116.current_lkey (HERE).readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 103)) ;
    }
    enumerator_4116.gotoNextObject () ;
  }
  const GGS_prefsDeclarationAST temp_3 = this ;
  ioArgument_ioGeneration.mProperty_mMainXibDescriptorList = temp_3.readProperty_mDeclaration ().readProperty_mMainXibDescriptorList () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@prefsDeclarationAST fourthAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_prefsDeclarationAST::method_fourthAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                           GGS_generationStruct & ioArgument_ioGeneration,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 121)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("awakeFromNib")  COMMA_SOURCE_FILE ("preferences.galgas4", 121)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("init")  COMMA_SOURCE_FILE ("preferences.galgas4", 121)) ;
  GGS_stringset var_availableCallers_4779 = temp_0 ;
  GGS_externFunctionMap var_externFunctionMap_4848 = GGS_externFunctionMap::init (inCompiler COMMA_HERE) ;
  const GGS_prefsDeclarationAST temp_1 = this ;
  UpEnumerator_externSwiftFunctionList enumerator_4904 (temp_1.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList ()) ;
  while (enumerator_4904.hasCurrentObject ()) {
    {
    var_externFunctionMap_4848.setter_insertKey (enumerator_4904.current_mExternSwiftFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 124)) ;
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = var_availableCallers_4779.getter_hasKey (enumerator_4904.current_mCallerName (HERE).readProperty_string () COMMA_SOURCE_FILE ("preferences.galgas4", 125)).operator_not (SOURCE_FILE ("preferences.galgas4", 125)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GGS_string var_s_5098 = GGS_string ("invalid caller; available callers:") ;
        UpEnumerator_stringset enumerator_5150 (var_availableCallers_4779) ;
        while (enumerator_5150.hasCurrentObject ()) {
          var_s_5098.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_5150.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 128)), inCompiler  COMMA_SOURCE_FILE ("preferences.galgas4", 128)) ;
          enumerator_5150.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_4904.current_mCallerName (HERE).readProperty_location (), var_s_5098, fixItArray3  COMMA_SOURCE_FILE ("preferences.galgas4", 130)) ;
      }
    }
    enumerator_4904.gotoNextObject () ;
  }
  GGS_propertyMap var_preferencesPropertyMap_5389 ;
  GGS_actionMap var_actionMap_5422 ;
  GGS_propertyGenerationList var_propertyGenerationList_5442 ;
  GGS_classKind joker_5376 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 135)), GGS_location::class_func_nowhere (SOURCE_FILE ("preferences.galgas4", 135)), inCompiler COMMA_HERE), joker_5376, var_preferencesPropertyMap_5389, var_actionMap_5422, var_propertyGenerationList_5442, inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 134)) ;
  GGS_regularBindingsGenerationList var_regularBindingsGenerationList_5808 ;
  GGS_multipleBindingGenerationList var_multipleBindingGenerationList_5879 ;
  GGS_actionBindingListForGeneration var_actionBindingListForGeneration_5951 ;
  GGS_decoratedOutletMap var_outletMap_6012 ;
  GGS_tableViewBindingGenerationList var_tableViewBindingGenerationList_6064 ;
  GGS_ebViewGraphicControllerBindingGenerationList var_ebViewGraphicControllerBindingGenerationList_6151 ;
  {
  const GGS_prefsDeclarationAST temp_4 = this ;
  routine_analyzeOutlets_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__21__21__21__21__21__21_ (GGS_bool (true), GGS_propertyMap::init (inCompiler COMMA_HERE), var_preferencesPropertyMap_5389, GGS_string::makeEmptyString (), ioArgument_ioSemanticContext, temp_4.readProperty_mDeclaration ().readProperty_mOutletDeclarationList (), var_preferencesPropertyMap_5389, var_actionMap_5422, function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 151)), ioArgument_ioGeneration, var_regularBindingsGenerationList_5808, var_multipleBindingGenerationList_5879, var_actionBindingListForGeneration_5951, var_outletMap_6012, var_tableViewBindingGenerationList_6064, var_ebViewGraphicControllerBindingGenerationList_6151, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas4", 142)) ;
  }
  GGS_autoLayoutViewDeclarationMap var_viewDeclarationMap_6277 = GGS_autoLayoutViewDeclarationMap::init (inCompiler COMMA_HERE) ;
  GGS_viewGenerationList temp_5 = GGS_viewGenerationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 162)) ;
  GGS_viewGenerationList var_viewGenerationList_6327 = temp_5 ;
  GGS_implicitViewFunctionGenerationList temp_6 = GGS_implicitViewFunctionGenerationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 163)) ;
  GGS_implicitViewFunctionGenerationList var_implicitViewFunctionGenerationList_6393 = temp_6 ;
  GGS_autoLayoutConfiguratorMap var_configuratorMap_6466 = GGS_autoLayoutConfiguratorMap::init (inCompiler COMMA_HERE) ;
  GGS_autoLayoutOutletMap var_autoLayoutOutletMap_6514 = GGS_autoLayoutOutletMap::init (inCompiler COMMA_HERE) ;
  const GGS_prefsDeclarationAST temp_7 = this ;
  UpEnumerator_astViewDeclarationList enumerator_6556 (temp_7.readProperty_mDeclaration ().readProperty_mViewDeclarationList ()) ;
  while (enumerator_6556.hasCurrentObject ()) {
    {
    var_viewDeclarationMap_6277.setter_insertKey (enumerator_6556.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 167)) ;
    }
    GGS_abstractViewGeneration var_viewGeneration_7059 ;
    const GGS_prefsDeclarationAST temp_8 = this ;
    callExtensionMethod_checkView ((cPtr_astAbstractViewDeclaration *) enumerator_6556.current_mView (HERE).ptr (), enumerator_6556.current_mViewName (HERE).readProperty_string (), var_viewDeclarationMap_6277, GGS_bool (true), GGS_propertyMap::init (inCompiler COMMA_HERE), var_preferencesPropertyMap_5389, ioArgument_ioSemanticContext, GGS_propertyMap::init (inCompiler COMMA_HERE), var_actionMap_5422, temp_8.readProperty_mClassName ().readProperty_string (), ioArgument_ioSemanticContext.readProperty_mClassMap (), var_implicitViewFunctionGenerationList_6393, var_configuratorMap_6466, var_autoLayoutOutletMap_6514, var_viewGeneration_7059, inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 168)) ;
    {
    var_viewGenerationList_6327.setter_append (enumerator_6556.current_mViewName (HERE).readProperty_string (), var_viewGeneration_7059, inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 184)) ;
    }
    enumerator_6556.gotoNextObject () ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_viewDeclarationMap_6277.getter_hasKey (GGS_string ("mPrefsMainView") COMMA_SOURCE_FILE ("preferences.galgas4", 186)).operator_not (SOURCE_FILE ("preferences.galgas4", 186)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("preferences.galgas4", 187)), GGS_string ("Preferences should define 'mPrefsMainView' stack view"), fixItArray10  COMMA_SOURCE_FILE ("preferences.galgas4", 187)) ;
    }
  }
  {
  const GGS_prefsDeclarationAST temp_11 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_preferencesForGeneration::init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (var_propertyGenerationList_5442, ioArgument_ioGeneration.readProperty_mMainXibDescriptorList (), var_regularBindingsGenerationList_5808, var_multipleBindingGenerationList_5879, var_actionBindingListForGeneration_5951, var_outletMap_6012, temp_11.readProperty_mDeclaration ().readProperty_mExternSwiftFunctionList (), var_tableViewBindingGenerationList_6064, var_ebViewGraphicControllerBindingGenerationList_6151, var_viewGenerationList_6327, var_implicitViewFunctionGenerationList_6393, var_configuratorMap_6466, var_autoLayoutOutletMap_6514, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 190)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'prefsGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_prefsGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_prefsGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_prefsGenerationTemplate_3,
  0,
  gWrapperAllDirectories_prefsGenerationTemplate_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_prefsGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_prefsGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_prefsGenerationTemplate_1,
  0,
  gWrapperAllDirectories_prefsGenerationTemplate_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_prefsGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_prefsGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_prefsGenerationTemplate_2,
  0,
  gWrapperAllDirectories_prefsGenerationTemplate_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_prefsGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_prefsGenerationTemplate_0 [4] = {
  & gWrapperDirectory_3_prefsGenerationTemplate,
  & gWrapperDirectory_1_prefsGenerationTemplate,
  & gWrapperDirectory_2_prefsGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_prefsGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_prefsGenerationTemplate_0,
  3,
  gWrapperAllDirectories_prefsGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'prefsGenerationTemplate preferences'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_prefsGenerationTemplate_preferences (Compiler * inCompiler,
                                                                    const GGS_propertyGenerationList & in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION,
                                                                    const GGS_mainXibDescriptorList & in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST,
                                                                    const GGS_decoratedOutletMap & in_OUTLET_5F_MAP,
                                                                    const GGS_regularBindingsGenerationList & in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST,
                                                                    const GGS_actionBindingListForGeneration & in_TARGET_5F_ACTION_5F_LIST,
                                                                    const GGS_multipleBindingGenerationList & in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                    const GGS_externSwiftFunctionList & in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST,
                                                                    const GGS_tableViewBindingGenerationList & in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                    const GGS_ebViewGraphicControllerBindingGenerationList & in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST,
                                                                    const GGS_viewGenerationList & in_VIEW_5F_GENERATION_5F_LIST,
                                                                    const GGS_implicitViewFunctionGenerationList & in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST,
                                                                    const GGS_autoLayoutOutletMap & in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n\n@MainActor var g") ;
  result.appendString (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 9)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 9)).stringValue ()) ;
  result.appendString ("\? = nil\n\n//--------------------------------------------------------------------------------------------------\n\nclass ") ;
  result.appendString (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 13)).stringValue ()) ;
  result.appendString (" : ") ;
  result.appendString (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 13)).stringValue ()) ;
  result.appendString ("_SuperClass, NSWindowDelegate {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final var mWindow : CanariWindow\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Show Preferences window\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @IBAction func showPreferencesWindowAction (_ inSender : Any\?) {\n    let window : CanariWindow\n    if let w = self.mWindow {\n      window = w\n    }else{\n      window = CanariWindow (\n        contentRect: .zero,\n        styleMask: [.closable, .resizable, .titled],\n        backing: .buffered,\n        defer: false\n      )\n      self.mWindow = window\n      window.setFrameAutosaveName (\"PrefsWindowSettings\")\n      window.title = \"Preferences\"\n      window.isReleasedWhenClosed = false\n      window.setContentView (self.mPrefsMainView ())\n    //--- Contrôler le comportement en plein écran\n      window.collectionBehavior = [.fullScreenAuxiliary, .fullScreenNone]\n      let zoomButton = window.standardWindowButton (.zoomButton)\n      zoomButton\?.isEnabled = false\n    }\n    window.makeKeyAndOrderFront (nil)\n  }\n\n") ;
  GGS_uint index_1888_ (0) ;
  if (in_VIEW_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_viewGenerationList enumerator_1888 (in_VIEW_5F_GENERATION_5F_LIST) ;
    while (enumerator_1888.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    VIEW ") ;
      result.appendString (enumerator_1888.current_mViewName (HERE).stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
      result.appendString (callExtensionGetter_generateViewBuilder ((const cPtr_abstractViewGeneration *) enumerator_1888.current_mView (HERE).ptr (), GGS_bool (true), enumerator_1888.current_mViewName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 52)).stringValue ()) ;
      enumerator_1888.gotoNextObject () ;
      index_1888_.increment () ;
    }
  }
  GGS_uint index_2263_idx (0) ;
  if (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST.isValid ()) {
    UpEnumerator_implicitViewFunctionGenerationList enumerator_2263 (in_IMPLICIT_5F_VIEW_5F_GENERATION_5F_FUNCTION_5F_LIST) ;
    while (enumerator_2263.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    IMPLICIT VIEW ") ;
      result.appendString (index_2263_idx.getter_string (SOURCE_FILE ("preferences.swift.galgasTemplate", 56)).stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  fileprivate final func computeImplicitView_") ;
      result.appendString (index_2263_idx.getter_string (SOURCE_FILE ("preferences.swift.galgasTemplate", 58)).stringValue ()) ;
      result.appendString (" () -> NSView {\n") ;
      result.appendString (callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) enumerator_2263.current_mInstruction (HERE).ptr (), GGS_bool (true), GGS_string ("view"), GGS_string ("    "), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 59)).stringValue ()) ;
      result.appendString ("    return view\n  }\n\n") ;
      enumerator_2263.gotoNextObject () ;
      index_2263_idx.increment () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Outlets\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_3009_ (0) ;
  if (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP.isValid ()) {
    UpEnumerator_autoLayoutOutletMap enumerator_3009 (in_AUTO_5F_LAYOUT_5F_OUTLET_5F_MAP) ;
    while (enumerator_3009.hasCurrentObject ()) {
      const GalgasBool test_0 = enumerator_3009.current_mOutletIsArray (HERE).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("  final var ") ;
        result.appendString (enumerator_3009.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" = EBWeakReferenceArray <AutoLayout") ;
        result.appendString (enumerator_3009.current_mAutoLayoutOutletTypeName (HERE).stringValue ()) ;
        result.appendString ("> ()\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        result.appendString ("  weak final var ") ;
        result.appendString (enumerator_3009.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" : AutoLayout") ;
        result.appendString (enumerator_3009.current_mAutoLayoutOutletTypeName (HERE).stringValue ()) ;
        result.appendString ("\? = nil\n") ;
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_3009.gotoNextObject () ;
      index_3009_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Outlets\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_3505_ (0) ;
  if (in_OUTLET_5F_MAP.isValid ()) {
    UpEnumerator_decoratedOutletMap enumerator_3505 (in_OUTLET_5F_MAP) ;
    while (enumerator_3505.hasCurrentObject ()) {
      result.appendString ("  @IBOutlet var ") ;
      result.appendString (enumerator_3505.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (" : ") ;
      result.appendString (enumerator_3505.current_mOutletTypeName (HERE).stringValue ()) ;
      result.appendString ("\? = nil\n") ;
      enumerator_3505.gotoNextObject () ;
      index_3505_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Multiple bindings controllers\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_3909_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_multipleBindingGenerationList enumerator_3909 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST) ;
    while (enumerator_3909.hasCurrentObject ()) {
      result.appendString ("  private var mController_") ;
      result.appendString (enumerator_3909.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_3909.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" : MultipleBindingController_") ;
      result.appendString (enumerator_3909.current_mBindingName (HERE).stringValue ()) ;
      result.appendString ("\?\n") ;
      enumerator_3909.gotoNextObject () ;
      index_3909_.increment () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Undo Manager\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mUndoManager = UndoManager ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var undoManager : UndoManager { return self.mUndoManager }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // The preferences window should register this object as delegate\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @objc func windowWillReturnUndoManager (_ window: NSWindow) -> UndoManager\? {\n    return self.undoManager\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Init\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override init () {\n    super.init ()\n    g") ;
  result.appendString (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 117)).stringValue ()) ;
  result.appendString (" = self\n  //--- Read from preferences\n") ;
  GGS_uint index_5212_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_5212 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_5212.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_configurationCode ((const cPtr_propertyGeneration *) enumerator_5212.current_mProperty (HERE).ptr (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 121)).stringValue ()) ;
      enumerator_5212.gotoNextObject () ;
      index_5212_.increment () ;
    }
  }
  result.appendString ("    //--- Extern functions\n") ;
  GGS_uint index_5363_ (0) ;
  if (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST.isValid ()) {
    UpEnumerator_externSwiftFunctionList enumerator_5363 (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST) ;
    while (enumerator_5363.hasCurrentObject ()) {
      const GalgasBool test_1 = GGS_bool (ComparisonKind::equal, enumerator_5363.current_mCallerName (HERE).readProperty_string ().objectCompare (GGS_string ("init"))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("      self.") ;
        result.appendString (enumerator_5363.current_mExternSwiftFunctionName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" ()\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_5363.gotoNextObject () ;
      index_5363_.increment () ;
    }
  }
  result.appendString ("//    }\n  }\n\n") ;
  const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST.getter_count (SOURCE_FILE ("preferences.swift.galgasTemplate", 134)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_2) {
  case GalgasBool::boolTrue : {
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @IBOutlet private final var window : NSWindow\?\n  let OUTLET_WIDTH = 200.0\n  let OUTLET_HEIGHT = 22.0\n\n") ;
    } break ;
  case GalgasBool::boolFalse : {
    } break ;
  case GalgasBool::boolNotValid :
    break ;
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    awakeFromNib\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func awakeFromNib () {\n    DispatchQueue.main.async {\n") ;
  result.appendString (extensionGetter_generateCode (in_MAIN_5F_XIB_5F_DESCRIPTOR_5F_LIST, inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 150)).stringValue ()) ;
  GGS_uint index_6128_ (0) ;
  if (in_OUTLET_5F_MAP.isValid ()) {
    UpEnumerator_decoratedOutletMap enumerator_6128 (in_OUTLET_5F_MAP) ;
    while (enumerator_6128.hasCurrentObject ()) {
      result.appendString ("      checkOutletConnection (self.") ;
      result.appendString (enumerator_6128.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString (", \"") ;
      result.appendString (enumerator_6128.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\", ") ;
      result.appendString (enumerator_6128.current_mOutletTypeName (HERE).stringValue ()) ;
      result.appendString (".self, #file, #line)\n") ;
      enumerator_6128.gotoNextObject () ;
      index_6128_.increment () ;
    }
  }
  result.appendString ("    //--------------------------- Install bindings\n") ;
  GGS_uint index_6406_ (0) ;
  if (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_regularBindingsGenerationList enumerator_6406 (in_REGULAR_5F_BINDINGS_5F_GENERATION_5F_LIST) ;
    while (enumerator_6406.hasCurrentObject ()) {
      result.appendString ("      self.") ;
      result.appendString (enumerator_6406.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("\?.bind_") ;
      result.appendString (enumerator_6406.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" (") ;
      GGS_uint index_6520_ (0) ;
      if (enumerator_6406.current_mBoundObjectList (HERE).isValid ()) {
        UpEnumerator_boundObjectList enumerator_6520 (enumerator_6406.current_mBoundObjectList (HERE)) ;
        while (enumerator_6520.hasCurrentObject ()) {
          result.appendString (enumerator_6520.current_mBoundObjectString (HERE).stringValue ()) ;
          enumerator_6520.gotoNextObject () ;
          if (enumerator_6520.hasCurrentObject ()) {
            result.appendString (", ") ;
          }
          index_6520_.increment () ;
        }
      }
      result.appendString (enumerator_6406.current_mBindingOptionsString (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      enumerator_6406.gotoNextObject () ;
      index_6406_.increment () ;
    }
  }
  result.appendString ("    //--------------------------- Install multiple bindings\n") ;
  GGS_uint index_6753_ (0) ;
  if (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_multipleBindingGenerationList enumerator_6753 (in_MULTIPLE_5F_BINDING_5F_GENERATION_5F_LIST) ;
    while (enumerator_6753.hasCurrentObject ()) {
      result.appendString ("      do{\n        let controller = MultipleBindingController_") ;
      result.appendString (enumerator_6753.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" (\n          computeFunction: ") ;
      result.appendString (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) enumerator_6753.current_mBoundObjectExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 169)).stringValue ()) ;
      result.appendString (",\n          outlet: self.") ;
      result.appendString (enumerator_6753.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("\n        )\n        self.mController_") ;
      result.appendString (enumerator_6753.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("_") ;
      result.appendString (enumerator_6753.current_mBindingName (HERE).stringValue ()) ;
      result.appendString (" = controller\n      }\n") ;
      enumerator_6753.gotoNextObject () ;
      index_6753_.increment () ;
    }
  }
  result.appendString ("    //--------------------------- Array controller\n") ;
  GGS_uint index_7240_ (0) ;
  if (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_tableViewBindingGenerationList enumerator_7240 (in_TABLE_5F_VALUE_5F_BINDING_5F_GENERATION_5F_LIST) ;
    while (enumerator_7240.hasCurrentObject ()) {
      result.appendString ("      preferences_") ;
      result.appendString (enumerator_7240.current_mTableValueBindingControllerName (HERE).stringValue ()) ;
      result.appendString (".bind_tableView (self.") ;
      result.appendString (enumerator_7240.current_mTableValueBindingOutletName (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      enumerator_7240.gotoNextObject () ;
      index_7240_.increment () ;
    }
  }
  GGS_uint index_7470_ (0) ;
  if (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST.isValid ()) {
    UpEnumerator_ebViewGraphicControllerBindingGenerationList enumerator_7470 (in_EB_5F_VIEW_5F_GRAPHIC_5F_CONTROLLER_5F_BINDING_5F_GENERATION_5F_LIST) ;
    while (enumerator_7470.hasCurrentObject ()) {
      result.appendString ("      preferences_") ;
      result.appendString (enumerator_7470.current_mArrayControllerControllerName (HERE).stringValue ()) ;
      result.appendString (".bind_ebView (self.") ;
      result.appendString (enumerator_7470.current_mEBViewOutletName (HERE).stringValue ()) ;
      result.appendString (")\n") ;
      enumerator_7470.gotoNextObject () ;
      index_7470_.increment () ;
    }
  }
  result.appendString ("    //--------------------------- Set targets / actions\n") ;
  GGS_uint index_7713_ (0) ;
  if (in_TARGET_5F_ACTION_5F_LIST.isValid ()) {
    UpEnumerator_actionBindingListForGeneration enumerator_7713 (in_TARGET_5F_ACTION_5F_LIST) ;
    while (enumerator_7713.hasCurrentObject ()) {
      result.appendString ("      self.") ;
      result.appendString (enumerator_7713.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("\?.target = ") ;
      result.appendString (enumerator_7713.current_mTargetName (HERE).stringValue ()) ;
      result.appendString ("\n      self.") ;
      result.appendString (enumerator_7713.current_mOutletName (HERE).stringValue ()) ;
      result.appendString ("\?.action = #selector (") ;
      result.appendString (enumerator_7713.current_mTargetTypeName (HERE).stringValue ()) ;
      result.appendString (".") ;
      result.appendString (enumerator_7713.current_mActionName (HERE).stringValue ()) ;
      result.appendString (" (_:))\n") ;
      enumerator_7713.gotoNextObject () ;
      index_7713_.increment () ;
    }
  }
  result.appendString ("    //--------------------------- Extern functions\n") ;
  GGS_uint index_7995_ (0) ;
  if (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST.isValid ()) {
    UpEnumerator_externSwiftFunctionList enumerator_7995 (in_EXTERN_5F_SWIFT_5F_FUNCTION_5F_LIST) ;
    while (enumerator_7995.hasCurrentObject ()) {
      const GalgasBool test_3 = GGS_bool (ComparisonKind::equal, enumerator_7995.current_mCallerName (HERE).readProperty_string ().objectCompare (GGS_string ("awakeFromNib"))).boolEnum () ;
      switch (test_3) {
      case GalgasBool::boolTrue : {
        result.appendString ("      self.") ;
        result.appendString (enumerator_7995.current_mExternSwiftFunctionName (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" ()\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_7995.gotoNextObject () ;
      index_7995_.increment () ;
    }
  }
  result.appendString ("    }\n    super.awakeFromNib ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  GGS_uint index_8414_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_8414 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_8414.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_prefKeyDefinitionCode ((const cPtr_propertyGeneration *) enumerator_8414.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 206)).stringValue ()) ;
      enumerator_8414.gotoNextObject () ;
      index_8414_.increment () ;
    }
  }
  result.appendString ("\n") ;
  GGS_uint index_8510_ (0) ;
  if (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION.isValid ()) {
    UpEnumerator_propertyGenerationList enumerator_8510 (in_PROPERTY_5F_LIST_5F_FOR_5F_GENERATION) ;
    while (enumerator_8510.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_propertyDeclarationCode ((const cPtr_propertyGeneration *) enumerator_8510.current_mProperty (HERE).ptr (), GGS_bool (true), GGS_bool (true), GGS_stringset::class_func_emptySet (SOURCE_FILE ("preferences.swift.galgasTemplate", 211)), inCompiler COMMA_SOURCE_FILE ("preferences.swift.galgasTemplate", 211)).stringValue ()) ;
      enumerator_8510.gotoNextObject () ;
      index_8510_.increment () ;
    }
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@preferencesForGeneration generateCodePhase1'
//--------------------------------------------------------------------------------------------------

void cPtr_preferencesForGeneration::method_generateCodePhase_31_ (const GGS_string /* constinArgument_inOutputDirectory */,
                                                                  const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                  GGS_stringset & /* ioArgument_ioUsedProtocolSet */,
                                                                  GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@preferencesForGeneration generateCodePhase2'
//--------------------------------------------------------------------------------------------------

void cPtr_preferencesForGeneration::method_generateCodePhase_32_ (const GGS_string constinArgument_inOutputDirectory,
                                                                  const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                  const GGS_stringset /* constinArgument_inUsedProtocolSet */,
                                                                  GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_preferencesForGeneration temp_0 = this ;
  const GGS_preferencesForGeneration temp_1 = this ;
  const GGS_preferencesForGeneration temp_2 = this ;
  const GGS_preferencesForGeneration temp_3 = this ;
  const GGS_preferencesForGeneration temp_4 = this ;
  const GGS_preferencesForGeneration temp_5 = this ;
  const GGS_preferencesForGeneration temp_6 = this ;
  const GGS_preferencesForGeneration temp_7 = this ;
  const GGS_preferencesForGeneration temp_8 = this ;
  const GGS_preferencesForGeneration temp_9 = this ;
  const GGS_preferencesForGeneration temp_10 = this ;
  const GGS_preferencesForGeneration temp_11 = this ;
  GGS_string var_s_10725 = GGS_string (filewrapperTemplate_prefsGenerationTemplate_preferences (inCompiler, temp_0.readProperty_mPropertyListForGeneration (), temp_1.readProperty_mMainXibDescriptorList (), temp_2.readProperty_mOutletMap (), temp_3.readProperty_mRegularBindingsGenerationList (), temp_4.readProperty_mActionBindingListForGeneration (), temp_5.readProperty_mMultipleBindingGenerationList (), temp_6.readProperty_mExternSwiftFunctionList (), temp_7.readProperty_mTableViewBindingGenerationList (), temp_8.readProperty_mEBViewBindingGenerationList (), temp_9.readProperty_mViewGenerationList (), temp_10.readProperty_mImplicitViewFunctionGenerationList (), temp_11.readProperty_mAutoLayoutOutletMap () COMMA_SOURCE_FILE ("preferences.galgas4", 266))) ;
  GGS_string var_fileName_11226 = function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 280)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 280)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_11226, inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 281)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_11226, var_s_10725, inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 282)) ;
  }
  const GGS_preferencesForGeneration temp_12 = this ;
  UpEnumerator_autoLayoutConfiguratorMap enumerator_11418 (temp_12.readProperty_mConfiguratorMap ()) ;
  while (enumerator_11418.hasCurrentObject ()) {
    GGS_string var_s_11470 = GGS_string (filewrapperTemplate_autoLayoutDocumentGenerationTemplate_documentOutletConfiguratorImplementation (inCompiler, GGS_string ("Preferences"), enumerator_11418.current_lkey (HERE).readProperty_string (), enumerator_11418.current_mAutoLayoutOutletTypeName (HERE) COMMA_SOURCE_FILE ("preferences.galgas4", 289))) ;
    GGS_string var_header_11647 = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.galgas4", 294)), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 294)).add_operation (GGS_string ("\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 294)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.galgas4", 296)), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 296)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 296)).add_operation (GGS_string ("import AppKit\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 296)).add_operation (GGS_string ("//"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 297)).add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.galgas4", 298)), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 298)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 298)) ;
    GGS_string var_fileName_11989 = GGS_string ("configurator-Preferences-").add_operation (enumerator_11418.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 299)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 299)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_11989, inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 300)) ;
    }
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_11989, GGS_string ("//"), var_header_11647, GGS_string ("\n\n"), var_s_11470, GGS_string ("INSERT CONFIGURATION CODE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("preferences.galgas4", 309)), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 309)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 309)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 301)) ;
    }
    enumerator_11418.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'xcodeProjectGenerationFilewrapper'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_xcodeProjectGenerationFilewrapper_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_xcodeProjectGenerationFilewrapper (
  "",
  0,
  gWrapperAllFiles_xcodeProjectGenerationFilewrapper_0,
  0,
  gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'xcodeProjectGenerationFilewrapper xcodeproj'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (Compiler * /* inCompiler */,
                                                                            const GGS_string & in_PROJECT_5F_REF,
                                                                            const GGS_string & in_MAIN_5F_GROUP_5F_REF,
                                                                            const GGS_XCodeGroupList & in_GROUPS,
                                                                            const GGS_stringlist & in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS,
                                                                            const GGS_XCodeToolTargetList & in_TOOL_5F_TARGET_5F_LIST,
                                                                            const GGS_XCodeAppTargetList & in_APP_5F_TARGET_5F_LIST,
                                                                            const GGS__32_stringlist & in_CPP_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_M_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_MM_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_SWIFT_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_FRAMEWORK_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_HEADER_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_PLIST_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_TIFF_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_ICNS_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_XIB_5F_FILE_5F_LIST,
                                                                            const GGS_BuildFileList & in_BUILD_5F_FILE_5F_LIST,
                                                                            const GGS_string & in_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                            const GGS_stringlist & in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST,
                                                                            const GGS_string & in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("// !$*UTF8*$!\n{\n  archiveVersion = 1;\n  classes = {\n  };\n  objectVersion = 42;\n  objects = {\n\n  /*------------------------------------------------------------------ PBXBuildFile */\n") ;
  GGS_uint index_249_ (0) ;
  if (in_BUILD_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator_BuildFileList enumerator_249 (in_BUILD_5F_FILE_5F_LIST) ;
    while (enumerator_249.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_249.current_mBuildReference (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_249.current_mFileName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXBuildFile;\n    fileRef = ") ;
      result.appendString (enumerator_249.current_mFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    settings = {ATTRIBUTES = (); };\n  };\n\n") ;
      enumerator_249.gotoNextObject () ;
      index_249_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXFileReference */\n") ;
  GGS_uint index_554_ (0) ;
  if (in_CPP_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_554 (in_CPP_5F_FILE_5F_LIST) ;
    while (enumerator_554.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_554.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_554.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.cpp.cpp;\n    name = ") ;
      result.appendString (enumerator_554.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_554.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_554.gotoNextObject () ;
      index_554_.increment () ;
    }
  }
  GGS_uint index_901_ (0) ;
  if (in_M_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_901 (in_M_5F_FILE_5F_LIST) ;
    while (enumerator_901.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_901.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_901.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.obj;\n    name = ") ;
      result.appendString (enumerator_901.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_901.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 36)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_901.gotoNextObject () ;
      index_901_.increment () ;
    }
  }
  GGS_uint index_1247_ (0) ;
  if (in_MM_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_1247 (in_MM_5F_FILE_5F_LIST) ;
    while (enumerator_1247.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1247.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1247.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.cpp.objcpp;\n    name = ") ;
      result.appendString (enumerator_1247.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1247.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 46)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_1247.gotoNextObject () ;
      index_1247_.increment () ;
    }
  }
  GGS_uint index_1601_ (0) ;
  if (in_SWIFT_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_1601 (in_SWIFT_5F_FILE_5F_LIST) ;
    while (enumerator_1601.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1601.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1601.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.swift;\n    name = ") ;
      result.appendString (enumerator_1601.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1601.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 56)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_1601.gotoNextObject () ;
      index_1601_.increment () ;
    }
  }
  GGS_uint index_1951_ (0) ;
  if (in_HEADER_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_1951 (in_HEADER_5F_FILE_5F_LIST) ;
    while (enumerator_1951.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1951.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1951.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.h;\n    name = ") ;
      result.appendString (enumerator_1951.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1951.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 66)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_1951.gotoNextObject () ;
      index_1951_.increment () ;
    }
  }
  GGS_uint index_2302_ (0) ;
  if (in_FRAMEWORK_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_2302 (in_FRAMEWORK_5F_FILE_5F_LIST) ;
    while (enumerator_2302.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2302.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_2302.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    lastKnownFileType = wrapper.framework;\n    name = ") ;
      result.appendString (enumerator_2302.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_2302.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 75)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_2302.gotoNextObject () ;
      index_2302_.increment () ;
    }
  }
  GGS_uint index_2835_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_2835 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_2835.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2835.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = ") ;
      result.appendString (enumerator_2835.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 84)).stringValue ()) ;
      result.appendString (";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n") ;
      enumerator_2835.gotoNextObject () ;
      index_2835_.increment () ;
    }
  }
  GGS_uint index_3426_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_3426 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_3426.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_3426.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = ") ;
      result.appendString (enumerator_3426.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 93)).stringValue ()) ;
      result.appendString (";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n") ;
      enumerator_3426.gotoNextObject () ;
      index_3426_.increment () ;
    }
  }
  GGS_uint index_3735_ (0) ;
  if (in_PLIST_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_3735 (in_PLIST_5F_FILE_5F_LIST) ;
    while (enumerator_3735.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_3735.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = text.plist;\n    name = ") ;
      result.appendString (enumerator_3735.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_3735.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 103)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_3735.gotoNextObject () ;
      index_3735_.increment () ;
    }
  }
  GGS_uint index_4059_ (0) ;
  if (in_XIB_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_4059 (in_XIB_5F_FILE_5F_LIST) ;
    while (enumerator_4059.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4059.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = wrapper.xib;\n    name = ") ;
      result.appendString (enumerator_4059.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4059.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 113)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_4059.gotoNextObject () ;
      index_4059_.increment () ;
    }
  }
  GGS_uint index_4385_ (0) ;
  if (in_TIFF_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_4385 (in_TIFF_5F_FILE_5F_LIST) ;
    while (enumerator_4385.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4385.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.tiff;\n    name = ") ;
      result.appendString (enumerator_4385.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4385.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 122)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_4385.gotoNextObject () ;
      index_4385_.increment () ;
    }
  }
  GGS_uint index_4684_ (0) ;
  if (in_ICNS_5F_FILE_5F_LIST.isValid ()) {
    UpEnumerator__32_stringlist enumerator_4684 (in_ICNS_5F_FILE_5F_LIST) ;
    while (enumerator_4684.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4684.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.icns;\n    name = ") ;
      result.appendString (enumerator_4684.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4684.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 131)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      enumerator_4684.gotoNextObject () ;
      index_4684_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXFrameworksBuildPhase */\n\n") ;
  GGS_uint index_5295_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_5295 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_5295.hasCurrentObject ()) {
      const GalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_5295.current_mFrameworksFileRefList (HERE).getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 139)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case GalgasBool::boolTrue : {
        result.appendString ("  ") ;
        result.appendString (enumerator_5295.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
        result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
        GGS_uint index_5534_ (0) ;
        if (enumerator_5295.current_mFrameworksFileRefList (HERE).isValid ()) {
          UpEnumerator_stringlist enumerator_5534 (enumerator_5295.current_mFrameworksFileRefList (HERE)) ;
          while (enumerator_5534.hasCurrentObject ()) {
            result.appendString ("      ") ;
            result.appendString (enumerator_5534.current_mValue (HERE).stringValue ()) ;
            result.appendString (",\n") ;
            enumerator_5534.gotoNextObject () ;
            index_5534_.increment () ;
          }
        }
        result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      enumerator_5295.gotoNextObject () ;
      index_5295_.increment () ;
    }
  }
  GGS_uint index_5987_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_5987 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_5987.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_5987.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GGS_uint index_6171_ (0) ;
      if (enumerator_5987.current_mFrameworksFileRefList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_6171 (enumerator_5987.current_mFrameworksFileRefList (HERE)) ;
        while (enumerator_6171.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_6171.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_6171.gotoNextObject () ;
          index_6171_.increment () ;
        }
      }
      result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
      enumerator_5987.gotoNextObject () ;
      index_5987_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXGroup section */\n") ;
  GGS_uint index_6447_ (0) ;
  if (in_GROUPS.isValid ()) {
    UpEnumerator_XCodeGroupList enumerator_6447 (in_GROUPS) ;
    while (enumerator_6447.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_6447.current_mGroupReference (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_6447.current_mGroupName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXGroup;\n    children = (\n") ;
      GGS_uint index_6574_ (0) ;
      if (enumerator_6447.current_mChildrenRefs (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_6574 (enumerator_6447.current_mChildrenRefs (HERE)) ;
        while (enumerator_6574.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_6574.current_mValue (HERE).stringValue ()) ;
          result.appendString (", \n") ;
          enumerator_6574.gotoNextObject () ;
          index_6574_.increment () ;
        }
      }
      result.appendString ("    );\n    name = ") ;
      result.appendString (enumerator_6447.current_mGroupName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 174)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_6447.current_mGroupPath (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 175)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n") ;
      enumerator_6447.gotoNextObject () ;
      index_6447_.increment () ;
    }
  }
  result.appendString ("\n  ") ;
  result.appendString (in_MAIN_5F_GROUP_5F_REF.stringValue ()) ;
  result.appendString (" /* Main Group */ = {\n    isa = PBXGroup;\n    children = (\n") ;
  GGS_uint index_6886_ (0) ;
  if (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS.isValid ()) {
    UpEnumerator_stringlist enumerator_6886 (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS) ;
    while (enumerator_6886.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_6886.current_mValue (HERE).stringValue ()) ;
      result.appendString (",\n") ;
      enumerator_6886.gotoNextObject () ;
      index_6886_.increment () ;
    }
  }
  result.appendString ("    );\n    sourceTree = \"<group>\";\n  };\n\n  /*------------------------------------------------------------------ PBXNativeTarget */\n") ;
  GGS_uint index_7300_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_7300 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_7300.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_7300.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_7300.current_mTargetName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = ") ;
      result.appendString (enumerator_7300.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" ;\n    buildPhases = (\n      ") ;
      result.appendString (enumerator_7300.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" ,\n") ;
      const GalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_7300.current_mFrameworksFileRefList (HERE).getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 200)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case GalgasBool::boolTrue : {
        result.appendString ("      ") ;
        result.appendString (enumerator_7300.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
        result.appendString (" , /* Frameworks */\n") ;
        } break ;
      case GalgasBool::boolFalse : {
        } break ;
      case GalgasBool::boolNotValid :
        break ;
      }
      result.appendString ("    );\n    buildRules = (\n    );\n    dependencies = (\n    );\n    name = ") ;
      result.appendString (enumerator_7300.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 208)).stringValue ()) ;
      result.appendString (";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = ") ;
      result.appendString (enumerator_7300.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 210)).stringValue ()) ;
      result.appendString (";\n    productReference = ") ;
      result.appendString (enumerator_7300.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    productType = \"com.apple.product-type.tool\";\n  };\n \n") ;
      enumerator_7300.gotoNextObject () ;
      index_7300_.increment () ;
    }
  }
  GGS_uint index_8232_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_8232 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_8232.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_8232.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_8232.current_mTargetName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = ") ;
      result.appendString (enumerator_8232.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" ;\n    buildPhases = (\n      ") ;
      result.appendString (enumerator_8232.current_mResourceBuildRef (HERE).stringValue ()) ;
      result.appendString (" , /* Resources */\n      ") ;
      result.appendString (enumerator_8232.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" , /* Frameworks */\n      ") ;
      result.appendString (enumerator_8232.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" , /* Sources */\n    );\n    buildRules = (\n    );\n    dependencies = (\n") ;
      GGS_uint index_8621_ (0) ;
      if (enumerator_8232.current_mDependentTargets (HERE).isValid ()) {
        UpEnumerator__32_stringlist enumerator_8621 (enumerator_8232.current_mDependentTargets (HERE)) ;
        while (enumerator_8621.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_8621.current_mValue_30_ (HERE).stringValue ()) ;
          result.appendString (" ,\n") ;
          enumerator_8621.gotoNextObject () ;
          index_8621_.increment () ;
        }
      }
      result.appendString ("    );\n    name = ") ;
      result.appendString (enumerator_8232.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 234)).stringValue ()) ;
      result.appendString (";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = ") ;
      result.appendString (enumerator_8232.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 236)).stringValue ()) ;
      result.appendString (";\n    productReference = ") ;
      result.appendString (enumerator_8232.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    productType = \"com.apple.product-type.application\";\n  };\n\n") ;
      enumerator_8232.gotoNextObject () ;
      index_8232_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXProject */\n  ") ;
  result.appendString (in_PROJECT_5F_REF.stringValue ()) ;
  result.appendString (" /* Project object */ = {\n   isa = PBXProject;\n   attributes = {\n     LastSwiftUpdateCheck = 0700;\n     LastUpgradeCheck = 0700;\n   };\n   buildConfigurationList = ") ;
  result.appendString (in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Build configuration list for PBXProject */;\n   compatibilityVersion = \"Xcode 2.4\";\n   hasScannedForEncodings = 1;\n   mainGroup = ") ;
  result.appendString (in_MAIN_5F_GROUP_5F_REF.stringValue ()) ;
  result.appendString (";\n   projectDirPath = \"\";\n   projectRoot = \"\";\n   targets = (\n") ;
  GGS_uint index_9693_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_9693 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_9693.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_9693.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (", \n") ;
      enumerator_9693.gotoNextObject () ;
      index_9693_.increment () ;
    }
  }
  GGS_uint index_10047_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_10047 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_10047.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_10047.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (", \n") ;
      enumerator_10047.gotoNextObject () ;
      index_10047_.increment () ;
    }
  }
  result.appendString ("   );\n  };\n\n  /*------------------------------------------------------------------ PBXResourcesBuildPhase */\n\n") ;
  GGS_uint index_10514_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_10514 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_10514.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_10514.current_mResourceBuildRef (HERE).stringValue ()) ;
      result.appendString (" /* Resources */ = {\n    isa = PBXResourcesBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GGS_uint index_10697_ (0) ;
      if (enumerator_10514.current_mResourceFileBuildRefs (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_10697 (enumerator_10514.current_mResourceFileBuildRefs (HERE)) ;
        while (enumerator_10697.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_10697.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_10697.gotoNextObject () ;
          index_10697_.increment () ;
        }
      }
      result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
      enumerator_10514.gotoNextObject () ;
      index_10514_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXSourcesBuildPhase */\n") ;
  GGS_uint index_11147_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_11147 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_11147.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_11147.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GGS_uint index_11314_ (0) ;
      if (enumerator_11147.current_mBuildPhaseRefList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_11314 (enumerator_11147.current_mBuildPhaseRefList (HERE)) ;
        while (enumerator_11314.hasCurrentObject ()) {
          result.appendString ("        ") ;
          result.appendString (enumerator_11314.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_11314.gotoNextObject () ;
          index_11314_.increment () ;
        }
      }
      result.appendString ("      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n") ;
      enumerator_11147.gotoNextObject () ;
      index_11147_.increment () ;
    }
  }
  GGS_uint index_11735_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_11735 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_11735.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_11735.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GGS_uint index_11902_ (0) ;
      if (enumerator_11735.current_mBuildPhaseRefList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_11902 (enumerator_11735.current_mBuildPhaseRefList (HERE)) ;
        while (enumerator_11902.hasCurrentObject ()) {
          result.appendString ("        ") ;
          result.appendString (enumerator_11902.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          enumerator_11902.gotoNextObject () ;
          index_11902_.increment () ;
        }
      }
      result.appendString ("      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n") ;
      enumerator_11735.gotoNextObject () ;
      index_11735_.increment () ;
    }
  }
  result.appendString ("\n\n  /*------------------------------------------------------------------ PBXTargetDependency */\n \n") ;
  GGS_uint index_12424_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_12424 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_12424.hasCurrentObject ()) {
      GGS_uint index_12472_ (0) ;
      if (enumerator_12424.current_mDependentTargets (HERE).isValid ()) {
        UpEnumerator__32_stringlist enumerator_12472 (enumerator_12424.current_mDependentTargets (HERE)) ;
        while (enumerator_12472.hasCurrentObject ()) {
          result.appendString ("  ") ;
          result.appendString (enumerator_12472.current_mValue_30_ (HERE).stringValue ()) ;
          result.appendString (" = {\n    isa = PBXTargetDependency;\n    target = ") ;
          result.appendString (enumerator_12472.current_mValue_31_ (HERE).stringValue ()) ;
          result.appendString (";\n  };\n\n") ;
          enumerator_12472.gotoNextObject () ;
          index_12472_.increment () ;
        }
      }
      enumerator_12424.gotoNextObject () ;
      index_12424_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXVariantGroup */\n \n  /*------------------------------------------------------------------ XCBuildConfiguration */\n    ") ;
  result.appendString (in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
  GGS_uint index_12949_ (0) ;
  if (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST.isValid ()) {
    UpEnumerator_stringlist enumerator_12949 (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST) ;
    while (enumerator_12949.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_12949.current_mValue (HERE).stringValue ()) ;
      result.appendString (" ;\n") ;
      enumerator_12949.gotoNextObject () ;
      index_12949_.increment () ;
    }
  }
  result.appendString ("    };\n    name = Default;\n  };\n\n") ;
  GGS_uint index_13264_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_13264 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_13264.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_13264.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
      GGS_uint index_13432_ (0) ;
      if (enumerator_13264.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_13432 (enumerator_13264.current_mBuildConfigurationSettingList (HERE)) ;
        while (enumerator_13432.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_13432.current_mValue (HERE).stringValue ()) ;
          result.appendString (" ;\n") ;
          enumerator_13432.gotoNextObject () ;
          index_13432_.increment () ;
        }
      }
      result.appendString ("      PRODUCT_NAME = ") ;
      result.appendString (enumerator_13264.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 347)).stringValue ()) ;
      result.appendString (" ;\n    };\n    name = Default;\n  };\n\n") ;
      enumerator_13264.gotoNextObject () ;
      index_13264_.increment () ;
    }
  }
  GGS_uint index_13902_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_13902 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_13902.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_13902.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
      GGS_uint index_14070_ (0) ;
      if (enumerator_13902.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        UpEnumerator_stringlist enumerator_14070 (enumerator_13902.current_mBuildConfigurationSettingList (HERE)) ;
        while (enumerator_14070.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_14070.current_mValue (HERE).stringValue ()) ;
          result.appendString (" ;\n") ;
          enumerator_14070.gotoNextObject () ;
          index_14070_.increment () ;
        }
      }
      result.appendString ("      INFOPLIST_FILE = ") ;
      result.appendString (enumerator_13902.current_mInfoPListFile (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 359)).stringValue ()) ;
      result.appendString (";\n      PRODUCT_NAME = ") ;
      result.appendString (enumerator_13902.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 360)).stringValue ()) ;
      result.appendString (" ;\n    };\n    name = Default;\n  };\n\n") ;
      enumerator_13902.gotoNextObject () ;
      index_13902_.increment () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ XCConfigurationList section */\n\n    ") ;
  result.appendString (in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Build configuration list for PBXProject */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
  result.appendString (in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
  GGS_uint index_14952_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeToolTargetList enumerator_14952 (in_TOOL_5F_TARGET_5F_LIST) ;
    while (enumerator_14952.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_14952.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
      result.appendString (enumerator_14952.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
      enumerator_14952.gotoNextObject () ;
      index_14952_.increment () ;
    }
  }
  GGS_uint index_15549_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    UpEnumerator_XCodeAppTargetList enumerator_15549 (in_APP_5F_TARGET_5F_LIST) ;
    while (enumerator_15549.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_15549.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
      result.appendString (enumerator_15549.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
      enumerator_15549.gotoNextObject () ;
      index_15549_.increment () ;
    }
  }
  result.appendString ("/*------------------------------------------------------------------ End */\n  };\n\n  rootObject = ") ;
  result.appendString (in_PROJECT_5F_REF.stringValue ()) ;
  result.appendString (" /* Project object */;\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outletClassDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_outletClassDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_outletClassDeclarationAST temp_0 = this ;
  const GGS_outletClassDeclarationAST temp_1 = this ;
  ioArgument_ioGraph.setter_addNode (temp_0.readProperty_mClassName (), temp_1, inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas4", 18)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_outletClassDeclarationAST temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      {
      const GGS_outletClassDeclarationAST temp_4 = this ;
      const GGS_outletClassDeclarationAST temp_5 = this ;
      ioArgument_ioGraph.setter_addEdge (temp_4.readProperty_mClassName (), temp_5.readProperty_mSuperClassName () COMMA_SOURCE_FILE ("outlet-class.galgas4", 20)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@outletClassDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_outletClassDeclarationAST::getter_nodeKey (Compiler */* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_outletClassDeclarationAST temp_0 = this ;
  result_result = temp_0.readProperty_mClassName () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@outletClassDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_outletClassDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_outletClassDeclarationAST temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      const GGS_outletClassDeclarationAST temp_2 = this ;
      const GGS_outletClassDeclarationAST temp_3 = this ;
      const GGS_outletClassDeclarationAST temp_4 = this ;
      const GGS_outletClassDeclarationAST temp_5 = this ;
      const GGS_outletClassDeclarationAST temp_6 = this ;
      const GGS_outletClassDeclarationAST temp_7 = this ;
      const GGS_outletClassDeclarationAST temp_8 = this ;
      ioArgument_ioSemanticContext.mProperty_mOutletClassMap.setter_insertKey (temp_2.readProperty_mClassName (), GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("outlet-class.galgas4", 107)), temp_3.readProperty_mHasRunAction (), temp_4.readProperty_mHandlesTableValueBinding (), temp_5.readProperty_mHasEnabled (), temp_6.readProperty_mHasHidden (), temp_7.readProperty_mHandlesGraphicControllerBinding (), temp_8.readProperty_mUserDefined (), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas4", 105)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bool var_hasRunAction_3629 ;
    GGS_bool var_handlesTableValueBinding_3654 ;
    GGS_bool var_hasEnabled_3691 ;
    GGS_bool var_hasHidden_3714 ;
    GGS_bool var_handlesGraphicControllerBinding_3736 ;
    const GGS_outletClassDeclarationAST temp_9 = this ;
    GGS_lstring joker_3614 ; // Joker input parameter
    GGS_bool joker_3775 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mOutletClassMap ().method_searchKey (temp_9.readProperty_mSuperClassName (), joker_3614, var_hasRunAction_3629, var_handlesTableValueBinding_3654, var_hasEnabled_3691, var_hasHidden_3714, var_handlesGraphicControllerBinding_3736, joker_3775, inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas4", 116)) ;
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_outletClassDeclarationAST temp_11 = this ;
      test_10 = temp_11.readProperty_mHasRunAction ().operator_and (var_hasRunAction_3629 COMMA_SOURCE_FILE ("outlet-class.galgas4", 126)).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_outletClassDeclarationAST temp_12 = this ;
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mClassName ().readProperty_location (), GGS_string ("$run binding already defined in superclass"), fixItArray13  COMMA_SOURCE_FILE ("outlet-class.galgas4", 127)) ;
      }
    }
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      const GGS_outletClassDeclarationAST temp_15 = this ;
      test_14 = temp_15.readProperty_mHandlesTableValueBinding ().operator_and (var_handlesTableValueBinding_3654 COMMA_SOURCE_FILE ("outlet-class.galgas4", 129)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        const GGS_outletClassDeclarationAST temp_16 = this ;
        GenericArray <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_16.readProperty_mClassName ().readProperty_location (), GGS_string ("$tableview binding already defined in superclass"), fixItArray17  COMMA_SOURCE_FILE ("outlet-class.galgas4", 130)) ;
      }
    }
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      const GGS_outletClassDeclarationAST temp_19 = this ;
      test_18 = temp_19.readProperty_mHasEnabled ().operator_and (var_hasEnabled_3691 COMMA_SOURCE_FILE ("outlet-class.galgas4", 132)).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        const GGS_outletClassDeclarationAST temp_20 = this ;
        GenericArray <FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (temp_20.readProperty_mClassName ().readProperty_location (), GGS_string ("$enabled binding already defined in superclass"), fixItArray21  COMMA_SOURCE_FILE ("outlet-class.galgas4", 133)) ;
      }
    }
    GalgasBool test_22 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_22) {
      const GGS_outletClassDeclarationAST temp_23 = this ;
      test_22 = temp_23.readProperty_mHasHidden ().operator_and (var_hasHidden_3714 COMMA_SOURCE_FILE ("outlet-class.galgas4", 135)).boolEnum () ;
      if (GalgasBool::boolTrue == test_22) {
        const GGS_outletClassDeclarationAST temp_24 = this ;
        GenericArray <FixItDescription> fixItArray25 ;
        inCompiler->emitSemanticError (temp_24.readProperty_mClassName ().readProperty_location (), GGS_string ("$hidden binding already defined in superclass"), fixItArray25  COMMA_SOURCE_FILE ("outlet-class.galgas4", 136)) ;
      }
    }
    GalgasBool test_26 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_26) {
      const GGS_outletClassDeclarationAST temp_27 = this ;
      test_26 = temp_27.readProperty_mHandlesGraphicControllerBinding ().operator_and (var_handlesGraphicControllerBinding_3736 COMMA_SOURCE_FILE ("outlet-class.galgas4", 138)).boolEnum () ;
      if (GalgasBool::boolTrue == test_26) {
        const GGS_outletClassDeclarationAST temp_28 = this ;
        GenericArray <FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (temp_28.readProperty_mClassName ().readProperty_location (), GGS_string ("$graphicController binding already defined in superclass"), fixItArray29  COMMA_SOURCE_FILE ("outlet-class.galgas4", 139)) ;
      }
    }
    {
    const GGS_outletClassDeclarationAST temp_30 = this ;
    const GGS_outletClassDeclarationAST temp_31 = this ;
    const GGS_outletClassDeclarationAST temp_32 = this ;
    const GGS_outletClassDeclarationAST temp_33 = this ;
    const GGS_outletClassDeclarationAST temp_34 = this ;
    const GGS_outletClassDeclarationAST temp_35 = this ;
    const GGS_outletClassDeclarationAST temp_36 = this ;
    const GGS_outletClassDeclarationAST temp_37 = this ;
    ioArgument_ioSemanticContext.mProperty_mOutletClassMap.setter_insertKey (temp_30.readProperty_mClassName (), temp_31.readProperty_mSuperClassName (), temp_32.readProperty_mHasRunAction ().operator_or (var_hasRunAction_3629 COMMA_SOURCE_FILE ("outlet-class.galgas4", 144)), temp_33.readProperty_mHandlesTableValueBinding ().operator_or (var_handlesTableValueBinding_3654 COMMA_SOURCE_FILE ("outlet-class.galgas4", 145)), temp_34.readProperty_mHasEnabled ().operator_or (var_hasEnabled_3691 COMMA_SOURCE_FILE ("outlet-class.galgas4", 146)), temp_35.readProperty_mHasHidden ().operator_or (var_hasHidden_3714 COMMA_SOURCE_FILE ("outlet-class.galgas4", 147)), temp_36.readProperty_mHandlesGraphicControllerBinding ().operator_or (var_handlesGraphicControllerBinding_3736 COMMA_SOURCE_FILE ("outlet-class.galgas4", 148)), temp_37.readProperty_mUserDefined (), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas4", 141)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@atomicPropertyDeclarationAST enterInPrecedenceGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_atomicPropertyDeclarationAST temp_0 = this ;
  const GGS_atomicPropertyDeclarationAST temp_1 = this ;
  const GGS_atomicPropertyDeclarationAST temp_2 = this ;
  GGS_lstring var_node_1090 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 26)).add_operation (temp_1.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 26)), temp_2.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_atomicPropertyDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1090, temp_3, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 27)) ;
  }
  {
  const GGS_atomicPropertyDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1090, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 28)) ;
  }
  {
  const GGS_atomicPropertyDeclarationAST temp_5 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1090, temp_5.readProperty_mPropertyTypeName () COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 29)) ;
  }
  const GGS_atomicPropertyDeclarationAST temp_6 = this ;
  callExtensionMethod_enterDefaultValuePrecedence ((cPtr_abstractDefaultValue *) temp_6.readProperty_mDefaultValue ().ptr (), var_node_1090, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 30)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_atomicPropertyDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_atomicPropertyDeclarationAST temp_0 = this ;
  const GGS_atomicPropertyDeclarationAST temp_1 = this ;
  const GGS_atomicPropertyDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 36)).add_operation (temp_1.readProperty_mPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 36)), temp_2.readProperty_mPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@atomicPropertyDeclarationAST firstAnalysisPhase'
//--------------------------------------------------------------------------------------------------

void cPtr_atomicPropertyDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                   GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_atomicPropertyDeclarationAST temp_0 = this ;
  GGS_classMap_2E_element var_entry_6140 = ioArgument_ioSemanticContext.readProperty_mClassMap ().readSubscript__3F_searchKey (temp_0.readProperty_mClassName (), inCompiler COMMA_HERE) ;
  GGS_classKind var_classKind_6357 ;
  const GGS_atomicPropertyDeclarationAST temp_1 = this ;
  GGS_propertyMap joker_6368_3 ; // Joker input parameter
  GGS_actionMap joker_6368_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_6368_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mPropertyTypeName (), var_classKind_6357, joker_6368_3, joker_6368_2, joker_6368_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 161)) ;
  GGS_propertyMap var_preferencesPropertyMap_6477 ;
  GGS_classKind joker_6462 ; // Joker input parameter
  GGS_actionMap joker_6507_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_6507_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 163)), GGS_location::class_func_nowhere (SOURCE_FILE ("simple-stored-property.galgas4", 163)), inCompiler COMMA_HERE), joker_6462, var_preferencesPropertyMap_6477, joker_6507_2, joker_6507_1, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 162)) ;
  switch (var_classKind_6357.enumValue ()) {
  case GGS_classKind::Enumeration::invalid:
    break ;
  case GGS_classKind::Enumeration::enum_prefs:
    {
      const GGS_atomicPropertyDeclarationAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray3  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 170)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_atomic:
    {
      GGS_typeKind extractedValue_6646_kind_0 ;
      var_classKind_6357.getAssociatedValuesFor_atomic (extractedValue_6646_kind_0) ;
      {
      const GGS_atomicPropertyDeclarationAST temp_4 = this ;
      var_entry_6140.mProperty_mPropertyMap.setter_insertKey (temp_4.readProperty_mPropertyName (), GGS_propertyKind::class_func_property (extractedValue_6646_kind_0, GGS_propertyAccessibility::class_func_stored (SOURCE_FILE ("simple-stored-property.galgas4", 172))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 172)), GGS_actionMap::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 172)) ;
      }
      GGS_string var_swiftDefaultValueAsString_6902 ;
      const GGS_atomicPropertyDeclarationAST temp_5 = this ;
      GGS_typeKindList temp_6 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 174)) ;
      temp_6.plusPlusAssignOperation (GGS_typeKindList_2E_element::init_21_ (extractedValue_6646_kind_0, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 174)) ;
      callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) temp_5.readProperty_mDefaultValue ().ptr (), temp_6, var_preferencesPropertyMap_6477, var_swiftDefaultValueAsString_6902, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 174)) ;
      {
      const GGS_atomicPropertyDeclarationAST temp_7 = this ;
      const GGS_atomicPropertyDeclarationAST temp_8 = this ;
      const GGS_atomicPropertyDeclarationAST temp_9 = this ;
      const GGS_atomicPropertyDeclarationAST temp_10 = this ;
      const GGS_atomicPropertyDeclarationAST temp_11 = this ;
      const GGS_atomicPropertyDeclarationAST temp_12 = this ;
      var_entry_6140.mProperty_mPropertyGenerationList.setter_append (GGS_atomicPropertyGeneration::init_21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone_21__21__21__21_ (temp_7.readProperty_mPropertyName ().readProperty_string (), temp_8.readProperty_generateResetMethod (), temp_9.readProperty_generateDirectRead (), temp_10.readProperty_generateDirectAccess (), temp_11.readProperty_standalone (), extractedValue_6646_kind_0, GGS_bool (false), var_swiftDefaultValueAsString_6902, GGS_bool (ComparisonKind::equal, temp_12.readProperty_mClassName ().readProperty_string ().objectCompare (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 185)))), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 176)) ;
      }
    }
    break ;
  case GGS_classKind::Enumeration::enum_document:
    {
      GGS_lstring extractedValue_7421__0 ;
      var_classKind_6357.getAssociatedValuesFor_document (extractedValue_7421__0) ;
      const GGS_atomicPropertyDeclarationAST temp_13 = this ;
      GenericArray <FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray14  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 189)) ;
    }
    break ;
  case GGS_classKind::Enumeration::enum_entity:
    {
      GGS_string extractedValue_7518__0 ;
      GGS_bool extractedValue_7518__1 ;
      GGS_bool extractedValue_7518__2 ;
      GGS_bool extractedValue_7518__3 ;
      var_classKind_6357.getAssociatedValuesFor_entity (extractedValue_7518__0, extractedValue_7518__1, extractedValue_7518__2, extractedValue_7518__3) ;
      const GGS_atomicPropertyDeclarationAST temp_15 = this ;
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.readProperty_mPropertyTypeName ().readProperty_location (), GGS_string ("an atomic class is required here"), fixItArray16  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 191)) ;
    }
    break ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mClassMap.setter_replace (var_entry_6140, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 193)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration prefKeyDefinitionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_prefKeyDefinitionCode (Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_atomicPropertyGeneration temp_0 = this ;
  const GGS_atomicPropertyGeneration temp_1 = this ;
  result_result = GGS_string ("@MainActor let Preferences_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 221)).add_operation (GGS_string (" = \"Preferences:"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 221)).add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 221)).add_operation (GGS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 221)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_declarationInSelectionControllerCode (Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 227)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 227)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 227)) ;
  const GGS_atomicPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  //   Selection observable property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 228)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 228)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 228)) ;
  result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 229)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 229)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 229)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 229)) ;
  const GGS_atomicPropertyGeneration temp_1 = this ;
  const GGS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 230)).add_operation (GGS_string ("_property = EBComputedProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 230)).add_operation (extensionGetter_swiftTypeName (temp_2.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 230)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 230)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 230)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 230)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_bindPropertyInSelectionController (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 236)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 236)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 236)) ;
  const GGS_atomicPropertyGeneration temp_0 = this ;
  result_result.plusAssignOperation(GGS_string ("  private final func bind_property_").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 237)).add_operation (GGS_string (" () {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 237)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 237)) ;
  const GGS_atomicPropertyGeneration temp_1 = this ;
  const GGS_atomicPropertyGeneration temp_2 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.selectedArray_property.toMany_").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 238)).add_operation (GGS_string ("_StartsBeingObserved (by: self."), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 238)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 238)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 238)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 238)) ;
  const GGS_atomicPropertyGeneration temp_3 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 239)).add_operation (GGS_string ("_property.mReadModelFunction = { [weak self] in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 239)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 239)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 240)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 241)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 242)) ;
  result_result.plusAssignOperation(GGS_string ("          return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 243)) ;
  result_result.plusAssignOperation(GGS_string ("        case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 244)) ;
  result_result.plusAssignOperation(GGS_string ("          return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 245)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 246)) ;
  const GGS_atomicPropertyGeneration temp_4 = this ;
  result_result.plusAssignOperation(GGS_string ("          var s = Set <").add_operation (extensionGetter_swiftTypeName (temp_4.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 247)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 247)).add_operation (GGS_string ("> ()\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 247)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 247)) ;
  result_result.plusAssignOperation(GGS_string ("          var isMultipleSelection = false\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 248)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 249)) ;
  const GGS_atomicPropertyGeneration temp_5 = this ;
  result_result.plusAssignOperation(GGS_string ("            switch object.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 250)).add_operation (GGS_string ("_property.selection {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 250)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 250)) ;
  result_result.plusAssignOperation(GGS_string ("            case .empty :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 251)) ;
  result_result.plusAssignOperation(GGS_string ("              return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 252)) ;
  result_result.plusAssignOperation(GGS_string ("            case .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 253)) ;
  result_result.plusAssignOperation(GGS_string ("              isMultipleSelection = true\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 254)) ;
  result_result.plusAssignOperation(GGS_string ("            case .single (let vProp) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 255)) ;
  result_result.plusAssignOperation(GGS_string ("              s.insert (vProp)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 256)) ;
  result_result.plusAssignOperation(GGS_string ("            }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 257)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 258)) ;
  result_result.plusAssignOperation(GGS_string ("          if isMultipleSelection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 259)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 260)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 0 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 261)) ;
  result_result.plusAssignOperation(GGS_string ("            return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 262)) ;
  result_result.plusAssignOperation(GGS_string ("          }else if s.count == 1 {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 263)) ;
  result_result.plusAssignOperation(GGS_string ("            return .single (s.first!)\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 264)) ;
  result_result.plusAssignOperation(GGS_string ("          }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 265)) ;
  result_result.plusAssignOperation(GGS_string ("            return .multiple\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 266)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 267)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 268)) ;
  result_result.plusAssignOperation(GGS_string ("      }else{\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 269)) ;
  result_result.plusAssignOperation(GGS_string ("        return .empty\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 270)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 271)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 272)) ;
  const GGS_atomicPropertyGeneration temp_6 = this ;
  const GGS_atomicPropertyGeneration temp_7 = this ;
  result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 273)).add_operation (GGS_string ("_property.mWriteModelFunction = { [weak self] (inValue : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 273)).add_operation (extensionGetter_swiftTypeName (temp_7.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 273)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 273)).add_operation (GGS_string (") in\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 273)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 273)) ;
  result_result.plusAssignOperation(GGS_string ("      if let model = self\?.selectedArray_property {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 274)) ;
  result_result.plusAssignOperation(GGS_string ("        switch model.selection {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 275)) ;
  result_result.plusAssignOperation(GGS_string ("        case .empty, .multiple :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 276)) ;
  result_result.plusAssignOperation(GGS_string ("          break\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 277)) ;
  result_result.plusAssignOperation(GGS_string ("        case .single (let v) :\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 278)) ;
  result_result.plusAssignOperation(GGS_string ("          for object in v {\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 279)) ;
  const GGS_atomicPropertyGeneration temp_8 = this ;
  result_result.plusAssignOperation(GGS_string ("            object.").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 280)).add_operation (GGS_string ("_property.setProp (inValue)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 280)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 280)) ;
  result_result.plusAssignOperation(GGS_string ("          }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 281)) ;
  result_result.plusAssignOperation(GGS_string ("        }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 282)) ;
  result_result.plusAssignOperation(GGS_string ("      }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 283)) ;
  result_result.plusAssignOperation(GGS_string ("    }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 284)) ;
  result_result.plusAssignOperation(GGS_string ("  }\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 285)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                          const GGS_bool constinArgument_inGenerationDirectAccess,
                                                                          const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_atomicPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mInPreferences ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 296)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 296)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 296)) ;
      const GGS_atomicPropertyGeneration temp_2 = this ;
      result_result.plusAssignOperation(GGS_string ("//   Atomic property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 297)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 297)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 297)) ;
      result_result.plusAssignOperation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 298)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 298)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 298)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 298)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_atomicPropertyGeneration temp_4 = this ;
        test_3 = temp_4.readProperty_standalone ().boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_atomicPropertyGeneration temp_5 = this ;
          result_result.plusAssignOperation(GGS_string ("@MainActor let preferences_").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 300)).add_operation (GGS_string ("_property = EBStandAloneProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 300)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 300)) ;
          const GGS_atomicPropertyGeneration temp_6 = this ;
          const GGS_atomicPropertyGeneration temp_7 = this ;
          result_result.plusAssignOperation(extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 301)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 301)).add_operation (temp_7.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 301)).add_operation (GGS_string (")\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 301)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 301)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        const GGS_atomicPropertyGeneration temp_8 = this ;
        result_result.plusAssignOperation(GGS_string ("@MainActor let preferences_").add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 303)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 303)) ;
        const GGS_atomicPropertyGeneration temp_9 = this ;
        result_result.plusAssignOperation(GGS_string ("_property = EBPreferenceProperty_").add_operation (extensionGetter_swiftTypeName (temp_9.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 304)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 304)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 304)) ;
        const GGS_atomicPropertyGeneration temp_10 = this ;
        result_result.plusAssignOperation(GGS_string (" (defaultValue: ").add_operation (temp_10.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 305)).add_operation (GGS_string (", prefKey: Preferences_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 305)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 305)) ;
        const GGS_atomicPropertyGeneration temp_11 = this ;
        result_result.plusAssignOperation(temp_11.readProperty_mPropertyName ().add_operation (GGS_string (")\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 306)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 306)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 309)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 309)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 309)) ;
    const GGS_atomicPropertyGeneration temp_12 = this ;
    result_result.plusAssignOperation(GGS_string ("  //   Atomic property: ").add_operation (temp_12.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 310)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 310)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 310)) ;
    result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 311)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 311)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 311)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 311)) ;
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_atomicPropertyGeneration temp_14 = this ;
      test_13 = temp_14.readProperty_standalone ().boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        const GGS_atomicPropertyGeneration temp_15 = this ;
        const GGS_atomicPropertyGeneration temp_16 = this ;
        result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_15.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 313)).add_operation (GGS_string ("_property : EBStandAloneProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 313)).add_operation (extensionGetter_swiftTypeName (temp_16.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 313)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 313)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 313)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 313)) ;
      }
    }
    if (GalgasBool::boolFalse == test_13) {
      const GGS_atomicPropertyGeneration temp_17 = this ;
      const GGS_atomicPropertyGeneration temp_18 = this ;
      result_result.plusAssignOperation(GGS_string ("  final let ").add_operation (temp_17.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 315)).add_operation (GGS_string ("_property : EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 315)).add_operation (extensionGetter_swiftTypeName (temp_18.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 315)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 315)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 315)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 315)) ;
    }
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      const GGS_atomicPropertyGeneration temp_20 = this ;
      test_19 = temp_20.readProperty_generateResetMethod ().boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 318)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 318)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 318)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 318)) ;
        const GGS_atomicPropertyGeneration temp_21 = this ;
        result_result.plusAssignOperation(GGS_string ("  final func reset_").add_operation (temp_21.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 319)).add_operation (GGS_string ("_toDefaultValue () {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 319)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 319)) ;
        const GGS_atomicPropertyGeneration temp_22 = this ;
        const GGS_atomicPropertyGeneration temp_23 = this ;
        result_result.plusAssignOperation(GGS_string ("    self.").add_operation (temp_22.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 320)).add_operation (GGS_string ("_property.setProp ("), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 320)).add_operation (temp_23.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 320)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 320)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 320)) ;
        result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 321)) ;
      }
    }
    GGS_bool test_24 = constinArgument_inGenerationDirectAccess ;
    if (GalgasBool::boolTrue != test_24.boolEnum ()) {
      const GGS_atomicPropertyGeneration temp_25 = this ;
      test_24 = temp_25.readProperty_generateDirectRead () ;
    }
    GGS_bool test_26 = test_24 ;
    if (GalgasBool::boolTrue != test_26.boolEnum ()) {
      const GGS_atomicPropertyGeneration temp_27 = this ;
      test_26 = temp_27.readProperty_generateDirectAccess () ;
    }
    GGS_bool var_generateAccess_14060 = test_26 ;
    GalgasBool test_28 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_28) {
      test_28 = var_generateAccess_14060.boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        result_result.plusAssignOperation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (utf32 (45)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 325)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 325)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 325)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 325)) ;
        const GGS_atomicPropertyGeneration temp_29 = this ;
        const GGS_atomicPropertyGeneration temp_30 = this ;
        result_result.plusAssignOperation(GGS_string ("  final var ").add_operation (temp_29.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 326)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 326)).add_operation (extensionGetter_swiftTypeName (temp_30.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 326)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 326)).add_operation (GGS_string (" {\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 326)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 326)) ;
        const GGS_atomicPropertyGeneration temp_31 = this ;
        result_result.plusAssignOperation(GGS_string ("    get { return self.").add_operation (temp_31.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 327)).add_operation (GGS_string ("_property.propval }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 327)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 327)) ;
        GalgasBool test_32 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_32) {
          const GGS_atomicPropertyGeneration temp_33 = this ;
          test_32 = temp_33.readProperty_generateDirectAccess ().boolEnum () ;
          if (GalgasBool::boolTrue == test_32) {
            const GGS_atomicPropertyGeneration temp_34 = this ;
            result_result.plusAssignOperation(GGS_string ("    set { self.").add_operation (temp_34.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 329)).add_operation (GGS_string ("_property.setProp (newValue) }\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 329)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 329)) ;
          }
        }
        result_result.plusAssignOperation(GGS_string ("  }\n\n"), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 331)) ;
      }
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_initCode (Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_atomicPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_standalone ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_atomicPropertyGeneration temp_2 = this ;
      const GGS_atomicPropertyGeneration temp_3 = this ;
      result_result = GGS_string ("    self.").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 340)).add_operation (GGS_string ("_property = EBStandAloneProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 340)).add_operation (extensionGetter_swiftTypeName (temp_3.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 340)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 340)) ;
      const GGS_atomicPropertyGeneration temp_4 = this ;
      result_result.plusAssignOperation(GGS_string (" (").add_operation (temp_4.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 341)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 341)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 341)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_atomicPropertyGeneration temp_5 = this ;
    const GGS_atomicPropertyGeneration temp_6 = this ;
    result_result = GGS_string ("    self.").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 343)).add_operation (GGS_string ("_property = EBStoredProperty_"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 343)).add_operation (extensionGetter_swiftTypeName (temp_6.readProperty_mType (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 343)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 343)) ;
    const GGS_atomicPropertyGeneration temp_7 = this ;
    result_result.plusAssignOperation(GGS_string (" (defaultValue: ").add_operation (temp_7.readProperty_mDefaultValueInSwift (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 344)).add_operation (GGS_string (", undoManager: inUndoManager, key: \""), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 344)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 344)) ;
    const GGS_atomicPropertyGeneration temp_8 = this ;
    result_result.plusAssignOperation(temp_8.readProperty_mPropertyName ().add_operation (GGS_string ("\")\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 345)), inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 345)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@atomicPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_atomicPropertyGeneration::getter_configurationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_atomicPropertyGeneration temp_1 = this ;
    GGS_bool test_2 = temp_1.readProperty_standalone () ;
    if (GalgasBool::boolTrue != test_2.boolEnum ()) {
      const GGS_atomicPropertyGeneration temp_3 = this ;
      test_2 = temp_3.readProperty_mInPreferences () ;
    }
    test_0 = test_2.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_result = GGS_string::makeEmptyString () ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_atomicPropertyGeneration temp_4 = this ;
    result_result = GGS_string ("    self.accumulateProperty (self.").add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 355)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 355)) ;
  }
//---
  return result_result ;
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
    callExtensionMethod_enterInPrecedenceGraph ((cPtr_abstractDeclarationAST *) enumerator_2455.current_mPropertyDeclaration (HERE).ptr (), var_declarationPrecedenceGraph_2415, inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 69)) ;
    enumerator_2455.gotoNextObject () ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_easyBindings_5F_options_outputDeclarationDependencyGraph.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_s_2694 = var_declarationPrecedenceGraph_2415.getter_graphviz (SOURCE_FILE ("declaration-graph.galgas4", 73)) ;
      GGS_string var_path_2742 = constinArgument_inSourceFile.add_operation (GGS_string (".declarationDependancy.dot"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 74)) ;
      GGS_bool joker_2839 ; // Joker input parameter
      var_s_2694.method_writeToFileWhenDifferentContents (var_path_2742, joker_2839, inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 75)) ;
    }
  }
  GGS_declarationListAST temp_1 = GGS_declarationListAST::init (inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 78)) ;
  outArgument_outSortedDeclarationListAST = temp_1 ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_declarationPrecedenceGraph_2415.getter_undefinedNodeCount (SOURCE_FILE ("declaration-graph.galgas4", 79)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      UpEnumerator_lstringlist enumerator_3009 (var_declarationPrecedenceGraph_2415.getter_undefinedNodeReferenceList (SOURCE_FILE ("declaration-graph.galgas4", 80))) ;
      while (enumerator_3009.hasCurrentObject ()) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_3009.current_mValue (HERE).readProperty_location (), GGS_string ("the property ").add_operation (enumerator_3009.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 81)).add_operation (GGS_string (" is not defined"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 81)), fixItArray3  COMMA_SOURCE_FILE ("declaration-graph.galgas4", 81)) ;
        enumerator_3009.gotoNextObject () ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GGS_declarationListAST var_unsortedSemanticDeclarationListAST_3273 ;
    GGS_lstringlist joker_3258 ; // Joker input parameter
    GGS_lstringlist joker_3315 ; // Joker input parameter
    var_declarationPrecedenceGraph_2415.method_topologicalSort (outArgument_outSortedDeclarationListAST, joker_3258, var_unsortedSemanticDeclarationListAST_3273, joker_3315, inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 84)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, var_unsortedSemanticDeclarationListAST_3273.getter_count (SOURCE_FILE ("declaration-graph.galgas4", 90)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_string var_s_3391 = GGS_string ("semantic analysis not performed, ").add_operation (var_unsortedSemanticDeclarationListAST_3273.getter_count (SOURCE_FILE ("declaration-graph.galgas4", 92)).getter_string (SOURCE_FILE ("declaration-graph.galgas4", 91)), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 91)).add_operation (GGS_string (" declarations are involved in circular definition:"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 92)) ;
        UpEnumerator_declarationListAST enumerator_3564 (var_unsortedSemanticDeclarationListAST_3273) ;
        while (enumerator_3564.hasCurrentObject ()) {
          var_s_3391.plusAssignOperation(GGS_string ("\n-  ").add_operation (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3564.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 95)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 95)), inCompiler  COMMA_SOURCE_FILE ("declaration-graph.galgas4", 95)) ;
          enumerator_3564.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("declaration-graph.galgas4", 97)), var_s_3391, fixItArray5  COMMA_SOURCE_FILE ("declaration-graph.galgas4", 97)) ;
        UpEnumerator_declarationListAST enumerator_3710 (var_unsortedSemanticDeclarationListAST_3273) ;
        while (enumerator_3710.hasCurrentObject ()) {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3710.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 99)).readProperty_location (), GGS_string ("the ").add_operation (callExtensionGetter_nodeKey ((const cPtr_abstractDeclarationAST *) enumerator_3710.current_mPropertyDeclaration (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 99)).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 99)).add_operation (GGS_string (" property is declared here"), inCompiler COMMA_SOURCE_FILE ("declaration-graph.galgas4", 99)), fixItArray6  COMMA_SOURCE_FILE ("declaration-graph.galgas4", 99)) ;
          enumerator_3710.gotoNextObject () ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@boolAsDefaultValue analyzeDefaultValueType'
//--------------------------------------------------------------------------------------------------

void cPtr_boolAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                              const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                              GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_3875 = GGS_bool (false) ;
  UpEnumerator_typeKindList enumerator_3896 (constinArgument_inAttributeActualTypeList) ;
  bool bool_0 = var_found_3875.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 113)).isValidAndTrue () ;
  if (enumerator_3896.hasCurrentObject () && bool_0) {
    while (enumerator_3896.hasCurrentObject () && bool_0) {
      switch (enumerator_3896.current_mType (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_boolType:
        {
          const GGS_boolAsDefaultValue temp_1 = this ;
          GGS_string temp_2 ;
          const GalgasBool test_3 = temp_1.readProperty_mValue ().readProperty_bool ().boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            temp_2 = GGS_string ("true") ;
          }else if (GalgasBool::boolFalse == test_3) {
            temp_2 = GGS_string ("false") ;
          }
          outArgument_outSwiftDefaultValueAsString = temp_2 ;
          var_found_3875 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_integerType:
      case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
      case GGS_typeKind::Enumeration::enum_dataType:
      case GGS_typeKind::Enumeration::enum_dateType:
      case GGS_typeKind::Enumeration::enum_doubleType:
      case GGS_typeKind::Enumeration::enum_stringType:
      case GGS_typeKind::Enumeration::enum_fontType:
      case GGS_typeKind::Enumeration::enum_colorType:
      case GGS_typeKind::Enumeration::enum_bezierPathType:
      case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
        break ;
      case GGS_typeKind::Enumeration::enum_entityType:
        break ;
      case GGS_typeKind::Enumeration::enum_classType:
        break ;
      case GGS_typeKind::Enumeration::enum_enumType:
        break ;
      case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
        break ;
      }
      enumerator_3896.gotoNextObject () ;
      if (enumerator_3896.hasCurrentObject ()) {
        bool_0 = var_found_3875.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 113)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = var_found_3875.operator_not (SOURCE_FILE ("explicit-default-value.galgas4", 126)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_boolAsDefaultValue temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mValue ().readProperty_location (), GGS_string ("only a boolean attribute can be initialized by YES or NO"), fixItArray6  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 127)) ;
    }
  }
}

